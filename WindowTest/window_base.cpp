#include "pch.h"

#include "window_base.h"

namespace windowing
{
	HWND window_base::get_handle() const
	{
		//make sure that the handle has been initialised
		_ASSERTE(m_handle != nullptr);
		return m_handle;
	}
	HINSTANCE window_base::get_instance() const
	{
		return m_instance;
	}
	uint32_t window_base::get_dpi() const
	{
		return m_dpi;
	}
	float window_base::get_scale() const
	{
		return m_scale;
	}

	register_callback &window_base::get_register_interface()
	{
		return static_cast<register_callback &>(m_callbacks);
	}

	window_base::window_base(HINSTANCE instance) : m_instance(instance)
	{
	}

	void window_base::notify_window_close()
	{
		m_callbacks.notify_close(get_handle());
	}
	void window_base::set_handle(HWND handle)
	{
		//this is a set once property
		//make sure that the handle is null
		_ASSERTE(m_handle == nullptr);
		
		m_handle = handle;
	}
	void window_base::set_dpi(uint32_t dpi)
	{
		m_dpi = dpi;
		m_scale = dpi / 96.f;
	}

	uint32_t window_base::close_callback_container::register_close_callback(std::function<close_callback_type> &f)
	{
		//yes, we mean v++, not ++v since we want to increment but keep the old value
		uint32_t cookie = m_cookie++;

		m_callbacks.insert(std::make_pair(cookie, f));
		return cookie;
	}

	void window_base::close_callback_container::unregister_close_callback(uint32_t cookie)
	{
		m_callbacks.erase(cookie);
	}

	void window_base::close_callback_container::notify_close(HWND handle)
	{
		for (auto &callback : m_callbacks)
		{
			callback.second(handle, callback.first);
		}
	}
}