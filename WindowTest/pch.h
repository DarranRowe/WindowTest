#pragma once

#define WIN32_LEAN_AND_MEAN
#define OEMRESOURCE
#include <Windows.h>

#undef GetCurrentTime

#include <d3d11_4.h>
#include <dxgi1_6.h>
#include <d2d1_3.h>
#include <dcomp.h>
#include <Presentation.h>

#include <array>
#include <cinttypes>
#include <atomic>
#include <map>
#include <functional>

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.System.h>
#include <winrt/Windows.Storage.Pickers.h>

#include <windows.storage.pickers.h>

#include <wil/cppwinrt.h>
#include <wil/cppwinrt_helpers.h>
#include <wil/result_macros.h>
#include <wil/resource.h>
#include <wrl.h>