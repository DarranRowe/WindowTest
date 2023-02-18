#pragma once

#ifndef _WINDOWS_
#define WIN32_LEAN_AND_MEAN
#define OEMRESOURCE
#include <Windows.h>
#endif

namespace windowing
{
	using close_callback_type = void(HWND, uint32_t);
	using close_callback_ptr = void (*)(HWND, uint32_t);

	struct register_callback
	{
		virtual uint32_t register_close_callback(std::function<close_callback_type> &) = 0;
		virtual void unregister_close_callback(uint32_t) = 0;
	};

	class window_base
	{
	public:
		HWND get_handle() const;
		HINSTANCE get_instance() const;
		uint32_t get_dpi() const;
		float get_scale() const;

		register_callback &get_register_interface();

	protected:
		explicit window_base(HINSTANCE);

		void notify_window_close();
		void set_handle(HWND);
		void set_dpi(uint32_t);
	private:
		//completely disable copy/move and default constructor
		//this class cannot be compied, and while it is technically movable
		//that is problematic
		//the window will be wrapped by a class that does this
		window_base() = delete;
		window_base(const window_base &) = delete;
		window_base(window_base &&) = delete;

		window_base &operator=(const window_base &) = delete;
		window_base &operator=(window_base &&) = delete;

		class close_callback_container : public register_callback
		{
		public:
			virtual uint32_t register_close_callback(std::function<close_callback_type> &) override;
			virtual void unregister_close_callback(uint32_t) override;

			void notify_close(HWND);

		private:
			std::atomic_uint32_t m_cookie{};
			std::map<uint32_t, std::function<close_callback_type>> m_callbacks;
		};

		close_callback_container m_callbacks;
		HWND m_handle = nullptr;
		HINSTANCE m_instance = nullptr;
		uint32_t m_dpi{};
		float m_scale{};
	};
}