#pragma once

#include "window.h"

namespace windowing
{
	enum class theme_type
	{
		default_theme,
		light_theme,
		dark_theme
	};

	class main_window : public window_t<main_window>
	{
	public:
		using quit_process_policy = window_quit_process_t;

		using my_base = window_t<main_window>;
		static main_window *create(HINSTANCE);

		void show_window(int);
		void update_window();

	protected:
		bool on_nccreate(const CREATESTRUCTW &);
		bool on_create(const CREATESTRUCTW &);
		void on_size(uint32_t, uint16_t, uint16_t);
		void on_activate(uint16_t, uint16_t, HWND);
		void on_paint();

		LRESULT message_handler(UINT, WPARAM, LPARAM);

	private:
		friend class my_base;

		explicit main_window(HINSTANCE inst);

		main_window() = delete;
		main_window(const main_window &) = delete;
		main_window(main_window &&) = delete;
		main_window &operator=(const main_window &) = delete;
		main_window &operator=(main_window &&) = delete;

		inline static const wchar_t class_name[] = L"MainWindowClass";

		bool is_class_registered() const;
		bool register_class();

		bool create_window();

		bool m_pointer_in_window = false;
		winrt::Windows::System::DispatcherQueue m_dispatcher_queue = nullptr;
	};
}