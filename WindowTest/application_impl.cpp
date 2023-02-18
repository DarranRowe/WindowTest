#include "pch.h"
#include "application_impl.h"
#include <DispatcherQueue.h>

namespace application::details
{
	inline static application *s_current_instance = nullptr;

	application_impl::application_impl(application *app)
	{
		_ASSERTE(IsGUIThread(FALSE));
		m_ui_thread_id = GetCurrentThreadId();
		THROW_IF_FAILED(CoIncrementMTAUsage(&m_mta_cookie));

		THROW_IF_FAILED(CreateDispatcherQueueController(DispatcherQueueOptions{ sizeof(DispatcherQueueOptions), DQTYPE_THREAD_CURRENT, DQTAT_COM_NONE }, reinterpret_cast<ABI::Windows::System::IDispatcherQueueController **>(winrt::put_abi(m_dispatcher_queue_controller))));

		s_current_instance = app;
	}

	application_impl::~application_impl()
	{
		s_current_instance = nullptr;
		CoDecrementMTAUsage(m_mta_cookie);
		rundown_dq();
	}

	uint32_t application_impl::get_main_thread_id() const
	{
		return m_ui_thread_id;
	}

	int application_impl::run_message_pump() const
	{
		MSG msg{};
		while (GetMessageW(&msg, nullptr, 0, 0) != 0)
		{
			DispatchMessageW(&msg);
		}

		return static_cast<int>(msg.wParam);
	}

	void application_impl::clear_message_queue() const
	{
		//All we care about here is dispatching all remaining messages in the message queue.
		//We just PeekMessage/DispatchMessage until the queue empties.
		MSG msg{};
		while (PeekMessageW(&msg, nullptr, 0, 0, PM_REMOVE) != 0)
		{
			DispatchMessageW(&msg);
		}
	}

	winrt::Windows::System::DispatcherQueue application_impl::get_main_dispatcherqueue() const
	{
		return m_dispatcher_queue_controller.DispatcherQueue();
	}

	application *application_impl::get_current_instance()
	{
		_ASSERTE(s_current_instance != nullptr);
		return s_current_instance;
	}

	void application_impl::rundown_dq()
	{
		auto iaa = m_dispatcher_queue_controller.ShutdownQueueAsync();

		clear_message_queue();

		m_dispatcher_queue_controller = nullptr;
	}
}