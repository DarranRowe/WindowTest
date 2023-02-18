#include "pch.h"
#include "main_window.h"

#include "application_helper.h"
#include "application.h"

#include <ShlObj.h>
#include <Shlwapi.h>

namespace windowing
{
	main_window::main_window(HINSTANCE inst) : my_base(inst)
	{
		m_dispatcher_queue = application::application::get_current_instance().get_main_dispatcherqueue();
	}

	void main_window::show_window(int cmd_show)
	{
		ShowWindow(get_handle(), cmd_show);
	}

	void main_window::update_window()
	{
		UpdateWindow(get_handle());
	}

	main_window *main_window::create(HINSTANCE inst)
	{
		main_window *ptr = nullptr;
		try
		{
			ptr = new main_window(inst);
			if (!ptr->register_class())
			{
				delete ptr;
				return nullptr;
			}

			if (!ptr->create_window())
			{
				return nullptr;
			}
		}
		catch (...)
		{
			delete ptr;
			throw;
		}
		//the window itself controls the lifetime of this
		//object, so once the window has been created, it the object will be deleted
		//in WM_NCDESTROY
		return ptr;
	}

	bool main_window::is_class_registered() const
	{
		WNDCLASSEXW wcx{ sizeof(WNDCLASSEXW) };
		if (GetClassInfoExW(get_instance(), main_window::class_name, &wcx))
		{
			return true;
		}

		auto lasterror = GetLastError();
		_ASSERTE(lasterror == ERROR_CLASS_DOES_NOT_EXIST);
		return false;
	}

	bool main_window::register_class()
	{
		if (is_class_registered())
		{
			return true;
		}

		WNDCLASSEXW wcx{ sizeof(WNDCLASSEXW) };

		wcx.hInstance = get_instance();
		wcx.hbrBackground = reinterpret_cast<HBRUSH>(COLOR_WINDOW + 1);
		wcx.hCursor = reinterpret_cast<HCURSOR>(LoadImageW(nullptr, MAKEINTRESOURCEW(OCR_NORMAL), IMAGE_CURSOR, 0, 0, LR_DEFAULTSIZE));
		wcx.hIcon = reinterpret_cast<HICON>(LoadImageW(nullptr, MAKEINTRESOURCEW(OIC_SAMPLE), IMAGE_ICON, 0, 0, LR_DEFAULTSIZE));
		wcx.hIconSm = reinterpret_cast<HICON>(LoadImageW(nullptr, MAKEINTRESOURCEW(OIC_SAMPLE), IMAGE_ICON, GetSystemMetrics(SM_CXSMICON), GetSystemMetrics(SM_CYSMICON), LR_DEFAULTCOLOR));
		wcx.lpszClassName = class_name;
		wcx.lpfnWndProc = my_base::window_proc;
		wcx.style = CS_HREDRAW | CS_VREDRAW;

		return RegisterClassExW(&wcx) != 0;
	}

	bool main_window::create_window()
	{
		if (!hook_create())
		{
			return false;
		}
		HWND wnd = CreateWindowExW(0, main_window::class_name, L"Test Window", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 1920, 1080, nullptr, nullptr, get_instance(), this);

		if (!wnd)
		{
			return false;
		}

		return true;
	}

	bool main_window::on_nccreate(const CREATESTRUCTW &)
	{
		return true;
	}

	bool main_window::on_create(const CREATESTRUCTW &)
	{
		return true;
	}

	void main_window::on_size(uint32_t, uint16_t, uint16_t)
	{
	}

	void main_window::on_paint()
	{
		PAINTSTRUCT ps{};
		auto dc = BeginPaint(get_handle(), &ps);
		dc;

		EndPaint(get_handle(), &ps);
	}

	//THIS IS WHERE THE PROBLEMATIC CODE IS
	void main_window::on_lbuttonup(uint16_t, uint16_t, uint16_t)
	{
		auto fop = winrt::Windows::Storage::Pickers::FileOpenPicker();

		fop.FileTypeFilter().Append(L".txt");
		fop.SuggestedStartLocation(winrt::Windows::Storage::Pickers::PickerLocationId::DocumentsLibrary);

		auto iww = fop.as<IInitializeWithWindow>();
		//THIS LINE FAILS WITH AN ACCESS DENIED ERROR
		HRESULT hr = iww->Initialize(get_handle());

		if (FAILED(hr))
		{
			THROW_IF_FAILED(hr);
		}
		else
		{
			wil::unique_event wait_event;
			wait_event.reset(CreateEventW(nullptr, TRUE, FALSE, nullptr));

			auto open_result = fop.PickSingleFileAsync();
			open_result.Completed([we = wait_event.get()](const winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::StorageFile> &, const winrt::Windows::Foundation::AsyncStatus &)
				{
					SetEvent(we);
				});

			wait_event.wait();
		}
	}

	void main_window::on_activate(uint16_t, uint16_t, HWND)
	{
	}

	LRESULT main_window::message_handler(UINT msg, WPARAM wparam, LPARAM lparam)
	{
		switch (msg)
		{
		case WM_NCCREATE:
		{
			DefWindowProcW(get_handle(), msg, wparam, lparam);
			if (!on_nccreate(*reinterpret_cast<CREATESTRUCTW *>(lparam)))
			{
				return FALSE;
			}
			return TRUE;
		}
		case WM_CREATE:
		{
			if (!on_create(*reinterpret_cast<CREATESTRUCT *>(lparam)))
			{
				return -1;
			}

			return 0;
		}
		case WM_SIZE:
		{
			on_size(static_cast<uint32_t>(wparam), LOWORD(lparam), HIWORD(lparam));
			return 0;
		}
		case WM_ACTIVATE:
		{
			on_activate(LOWORD(wparam), HIWORD(wparam), reinterpret_cast<HWND>(lparam));
			return 0;
		}
		case WM_PAINT:
		{
			on_paint();
			return 0;
		}
		case WM_LBUTTONUP:
		{
			on_lbuttonup(static_cast<uint16_t>(wparam), static_cast<uint16_t>(LOWORD(lparam)), static_cast<uint16_t>(HIWORD(lparam)));
			return 0;
		}
		default:
			return my_base::message_handler(msg, wparam, lparam);
		}
	}
}