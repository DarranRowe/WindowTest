#pragma once

#include "window_base.h"

namespace windowing
{
	struct window_quit_process_t{};
	struct window_default_t{};

	template<typename WindowType>
	concept window_quit_policy = requires
	{
		typename WindowType::quit_process_policy;
	};

	template<window_quit_policy DerivedType>
	struct window_post_quit_policy
	{
		static void post_quit_message(int exit_code)
		{
			if constexpr (std::is_same_v<DerivedType::quit_process_policy, window_quit_process_t>)
			{
				PostQuitMessage(exit_code);
			}
		}
	};

	template<typename DerivedType>
	class window_t : public window_base
	{
	public:
		using my_t = DerivedType;
		using my_tptr = my_t *;
		using my_type = window_t;
	protected:
		explicit window_t(HINSTANCE inst) : window_base(inst) {}

		static LRESULT CALLBACK cbt_hook_proc(int code, WPARAM wparam, LPARAM lparam)
		{
			if (code < 0 || code != HCBT_CREATEWND)
			{
				return CallNextHookEx(my_type::s_create_hook, code, wparam, lparam);
			}
			else
			{
				{
					HWND wnd = reinterpret_cast<HWND>(wparam);
					CBT_CREATEWNDW &params = *reinterpret_cast<CBT_CREATEWNDW *>(lparam);

					my_tptr that = reinterpret_cast<my_tptr>(params.lpcs->lpCreateParams);
					that->set_handle(wnd);

					SetWindowLongPtrW(wnd, GWLP_USERDATA, reinterpret_cast<LONG_PTR>(params.lpcs->lpCreateParams));
				}

				auto result = CallNextHookEx(my_type::s_create_hook, code, wparam, lparam);
				UnhookWindowsHookEx(my_type::s_create_hook);
				my_type::s_create_hook = nullptr;
				return result;
			}
		}

		bool hook_create()
		{
			my_type::s_create_hook = SetWindowsHookExW(WH_CBT, my_type::cbt_hook_proc, nullptr, GetCurrentThreadId());
			return my_type::s_create_hook != nullptr ? true : false;
		}

		LRESULT message_handler(UINT msg, WPARAM wparam, LPARAM lparam)
		{
			return DefWindowProcW(get_handle(), msg, wparam, lparam);
		}

		static LRESULT CALLBACK window_proc(HWND wnd, UINT msg, WPARAM wparam, LPARAM lparam)
		{
			if (msg != WM_NCCREATE)
			{
				auto that = my_type::inst_from_handle(wnd);
				if (that != nullptr)
				{
					if (msg != WM_NCDESTROY)
					{
						return that->message_handler(msg, wparam, lparam);
					}
					else
					{
						auto result = that->message_handler(msg, wparam, lparam);

						my_type::handle_ncdestroy(wnd);
						//MUST NOT ACCESS ANY CLASS MEMBERS AFTER THIS POINT
						return result;
					}
				}
				else
				{
					return DefWindowProcW(wnd, msg, wparam, lparam);
				}
			}
			else
			{
				if (!my_type::handle_nccreate(wnd, *reinterpret_cast<CREATESTRUCTW *>(lparam)))
				{
					return FALSE;
				}
				auto that = my_type::inst_from_handle(wnd);

				return that->message_handler(msg, wparam, lparam);
			}
		}

		static my_tptr inst_from_handle(HWND wnd)
		{
			my_tptr ptr = reinterpret_cast<my_tptr>(GetWindowLongPtrW(wnd, GWLP_USERDATA));
			return ptr;
		}

		static bool handle_nccreate(HWND wnd, CREATESTRUCTW &)
		{
			auto that = inst_from_handle(wnd);
			auto dpi = GetDpiForWindow(wnd);
			that->set_dpi(dpi);

			return true;
		}

		static void handle_ncdestroy(HWND wnd)
		{
			//Remove the class pointer from the window and then we delete the class
			auto that = my_type::inst_from_handle(wnd);
			that->notify_window_close();

			SetWindowLongPtrW(wnd, GWLP_USERDATA, 0);
			delete that;

			window_post_quit_policy<DerivedType>::post_quit_message(0);
		}
	private:
		window_t() = delete;
		window_t(const window_t &) = delete;
		window_t(window_t &&) = delete;
		window_t &operator=(const window_t &) = delete;
		window_t &operator=(window_t &&) = delete;

		static inline HHOOK s_create_hook = nullptr;
	};
}