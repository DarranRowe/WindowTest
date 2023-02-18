#include "pch.h"
#include "application.h"
#include "application_helper.h"
#include "application_impl.h"

namespace application
{
	using Microsoft::WRL::ComPtr;

	application::application() : m_impl(std::make_unique<details::application_impl>(this))
	{
	}
	application::~application()
	{
	}

	uint32_t application::get_main_thread_id() const
	{
		return m_impl->get_main_thread_id();
	}

	int application::run_message_pump() const
	{
		return m_impl->run_message_pump();
	}

	void application::clear_message_queue() const
	{
		return m_impl->clear_message_queue();
	}

	winrt::Windows::System::DispatcherQueue application::get_main_dispatcherqueue() const
	{
		return m_impl->get_main_dispatcherqueue();
	}

	application &application::get_current_instance()
	{
		return *details::application_impl::get_current_instance();
	}
}