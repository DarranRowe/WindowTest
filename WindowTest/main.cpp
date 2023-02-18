#include "pch.h"
#include "main_window.h"
#include "application.h"

#pragma comment(linker, "\"/manifestdependency:type='Win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")

struct winrt_apartment
{
	winrt_apartment()
	{
		winrt::init_apartment(winrt::apartment_type::single_threaded);
	}
	~winrt_apartment()
	{
		winrt::uninit_apartment();
	}
};

static winrt_apartment s_apartment_init;

int APIENTRY wWinMain(_In_ HINSTANCE inst, _In_opt_ HINSTANCE, _In_ LPWSTR, _In_ int cmdshow)
{
	application::application app;
	CO_MTA_USAGE_COOKIE uc{};
	CoIncrementMTAUsage(&uc);

	auto window = windowing::main_window::create(inst);

	window->show_window(cmdshow);
	window->update_window();

	auto result = app.run_message_pump();

	CoDecrementMTAUsage(uc);
	return static_cast<int>(result);
}