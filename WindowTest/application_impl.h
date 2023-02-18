#pragma once

#ifndef _COMBASEAPI_H_
#include <combaseapi.h>
#endif

namespace application
{
	class application;
}

namespace application::details
{
	class application_impl
	{
	public:
		application_impl(application *);
		~application_impl();

		uint32_t get_main_thread_id() const;
		int run_message_pump() const;
		void clear_message_queue() const;
		winrt::Windows::System::DispatcherQueue get_main_dispatcherqueue() const;
		void rundown_dq();

		static application *get_current_instance();
	private:
		CO_MTA_USAGE_COOKIE m_mta_cookie = nullptr;
		uint32_t m_ui_thread_id{};
		winrt::Windows::System::DispatcherQueueController m_dispatcher_queue_controller = nullptr;
	};
}