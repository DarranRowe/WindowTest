#pragma once

#ifndef _WINDOWS_
#define WIN32_LEAN_AND_MEAN
#define OEMRESOURCE
#include <Windows.h>
#endif
#ifndef WINRT_Windows_System_H
#include <winrt/Windows.System.h>
#endif
namespace application
{
	namespace details
	{
		class application_impl;
	}

	class application
	{
	public:
		application();
		~application();

		static application &get_current_instance();

		int run_message_pump() const;
		void clear_message_queue() const;
		uint32_t get_main_thread_id() const;
		winrt::Windows::System::DispatcherQueue get_main_dispatcherqueue() const;
	private:
		std::unique_ptr<details::application_impl> m_impl;
	};
}