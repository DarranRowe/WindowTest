
#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /*COM_NO_WINDOWS_H*/
#ifndef __microsoft2Egraphics2Ecanvas_h__
#define __microsoft2Egraphics2Ecanvas_h__
#ifndef __microsoft2Egraphics2Ecanvas_p_h__
#define __microsoft2Egraphics2Ecanvas_p_h__


#pragma once

//
// Deprecated attribute support
//

#pragma push_macro("DEPRECATED")
#undef DEPRECATED

#if !defined(DISABLE_WINRT_DEPRECATION)
#if defined(__cplusplus)
#if __cplusplus >= 201402
#define DEPRECATED(x) [[deprecated(x)]]
#define DEPRECATEDENUMERATOR(x) [[deprecated(x)]]
#elif defined(_MSC_VER)
#if _MSC_VER >= 1900
#define DEPRECATED(x) [[deprecated(x)]]
#define DEPRECATEDENUMERATOR(x) [[deprecated(x)]]
#else
#define DEPRECATED(x) __declspec(deprecated(x))
#define DEPRECATEDENUMERATOR(x)
#endif // _MSC_VER >= 1900
#else // Not Standard C++ or MSVC, ignore the construct.
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  // C++ deprecation
#else // C - disable deprecation
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif
#else // Deprecation is disabled
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  /* DEPRECATED */

// Disable Deprecation for this header, MIDL verifies that cross-type access is acceptable
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#else
#pragma warning(push)
#pragma warning(disable: 4996)
#endif

// Ensure that the setting of the /ns_prefix command line switch is consistent for all headers.
// If you get an error from the compiler indicating "warning C4005: 'CHECK_NS_PREFIX_STATE': macro redefinition", this
// indicates that you have included two different headers with different settings for the /ns_prefix MIDL command line switch
#if !defined(DISABLE_NS_PREFIX_CHECKS)
#define CHECK_NS_PREFIX_STATE "always"
#endif // !defined(DISABLE_NS_PREFIX_CHECKS)


#pragma push_macro("MIDL_CONST_ID")
#undef MIDL_CONST_ID
#define MIDL_CONST_ID const __declspec(selectany)


//  API Contract Inclusion Definitions
#if !defined(SPECIFIC_API_CONTRACT_DEFINITIONS)
#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0xa0000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)
#define WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Microsoft.Graphics.Canvas.Brushes.h"
#include "Microsoft.Graphics.Canvas.Effects.h"
#include "Microsoft.Graphics.Canvas.Geometry.h"
#include "Microsoft.Graphics.Canvas.Svg.h"
#include "Microsoft.Graphics.Canvas.Text.h"
#include "Windows.Foundation.Numerics.h"
#include "Windows.Graphics.DirectX.h"
#include "Windows.Graphics.DirectX.Direct3D11.h"
#include "Windows.Graphics.Effects.h"
#include "Windows.Graphics.Imaging.h"
#include "Windows.Storage.Streams.h"
#include "Windows.UI.h"
#include "Windows.UI.Core.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                interface ICanvasActiveLayer;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer ABI::Microsoft::Graphics::Canvas::ICanvasActiveLayer

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                interface ICanvasBitmap;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap ABI::Microsoft::Graphics::Canvas::ICanvasBitmap

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                interface ICanvasBitmapFactory;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory ABI::Microsoft::Graphics::Canvas::ICanvasBitmapFactory

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                interface ICanvasBitmapStatics;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics ABI::Microsoft::Graphics::Canvas::ICanvasBitmapStatics

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                interface ICanvasCommandList;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList ABI::Microsoft::Graphics::Canvas::ICanvasCommandList

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                interface ICanvasCommandListFactory;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory ABI::Microsoft::Graphics::Canvas::ICanvasCommandListFactory

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                interface ICanvasDevice;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice ABI::Microsoft::Graphics::Canvas::ICanvasDevice

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                interface ICanvasDeviceFactory;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory ABI::Microsoft::Graphics::Canvas::ICanvasDeviceFactory

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                interface ICanvasDeviceStatics;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics ABI::Microsoft::Graphics::Canvas::ICanvasDeviceStatics

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                interface ICanvasDrawingSession;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession ABI::Microsoft::Graphics::Canvas::ICanvasDrawingSession

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                interface ICanvasImage;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage ABI::Microsoft::Graphics::Canvas::ICanvasImage

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                interface ICanvasImageStatics;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics ABI::Microsoft::Graphics::Canvas::ICanvasImageStatics

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                interface ICanvasLock;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock ABI::Microsoft::Graphics::Canvas::ICanvasLock

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                interface ICanvasRenderTarget;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget ABI::Microsoft::Graphics::Canvas::ICanvasRenderTarget

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                interface ICanvasRenderTargetFactory;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory ABI::Microsoft::Graphics::Canvas::ICanvasRenderTargetFactory

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                interface ICanvasRenderTargetStatics;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics ABI::Microsoft::Graphics::Canvas::ICanvasRenderTargetStatics

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                interface ICanvasResourceCreator;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                interface ICanvasResourceCreatorWithDpi;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                interface ICanvasSpriteBatch;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch ABI::Microsoft::Graphics::Canvas::ICanvasSpriteBatch

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                interface ICanvasSpriteBatchStatics;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics ABI::Microsoft::Graphics::Canvas::ICanvasSpriteBatchStatics

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                interface ICanvasSwapChain;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain ABI::Microsoft::Graphics::Canvas::ICanvasSwapChain

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                interface ICanvasSwapChainFactory;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory ABI::Microsoft::Graphics::Canvas::ICanvasSwapChainFactory

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                interface ICanvasSwapChainStatics;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics ABI::Microsoft::Graphics::Canvas::ICanvasSwapChainStatics

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                interface ICanvasVirtualBitmap;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap ABI::Microsoft::Graphics::Canvas::ICanvasVirtualBitmap

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                interface ICanvasVirtualBitmapStatics;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics ABI::Microsoft::Graphics::Canvas::ICanvasVirtualBitmapStatics

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                class CanvasBitmap;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */


#ifndef DEF___FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_USE
#define DEF___FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0391e8ef-719a-5c80-b87a-7d902b154e3e"))
IAsyncOperation<ABI::Microsoft::Graphics::Canvas::CanvasBitmap*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::CanvasBitmap*, ABI::Microsoft::Graphics::Canvas::ICanvasBitmap*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.IAsyncOperation`1<Microsoft.Graphics.Canvas.CanvasBitmap>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Microsoft::Graphics::Canvas::CanvasBitmap*> __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_t;
#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap ABI::Windows::Foundation::__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_USE */



#ifndef DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("01f4b012-b7d5-5e02-8caa-2c460f35c947"))
IAsyncOperationCompletedHandler<ABI::Microsoft::Graphics::Canvas::CanvasBitmap*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::CanvasBitmap*, ABI::Microsoft::Graphics::Canvas::ICanvasBitmap*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Microsoft.Graphics.Canvas.CanvasBitmap>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Microsoft::Graphics::Canvas::CanvasBitmap*> __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_t;
#define __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_USE */


namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                class CanvasVirtualBitmap;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */


#ifndef DEF___FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_USE
#define DEF___FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d47cfc52-5abc-550b-ad7c-63b5aec8ca3a"))
IAsyncOperation<ABI::Microsoft::Graphics::Canvas::CanvasVirtualBitmap*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::CanvasVirtualBitmap*, ABI::Microsoft::Graphics::Canvas::ICanvasVirtualBitmap*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.IAsyncOperation`1<Microsoft.Graphics.Canvas.CanvasVirtualBitmap>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Microsoft::Graphics::Canvas::CanvasVirtualBitmap*> __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_t;
#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap ABI::Windows::Foundation::__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_USE */



#ifndef DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6fec4e18-7336-5236-8748-9a4b669b98f6"))
IAsyncOperationCompletedHandler<ABI::Microsoft::Graphics::Canvas::CanvasVirtualBitmap*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::CanvasVirtualBitmap*, ABI::Microsoft::Graphics::Canvas::ICanvasVirtualBitmap*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Microsoft.Graphics.Canvas.CanvasVirtualBitmap>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Microsoft::Graphics::Canvas::CanvasVirtualBitmap*> __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_t;
#define __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_USE */


namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                typedef enum CanvasBufferPrecision : int CanvasBufferPrecision;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */


#ifndef DEF___FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision_USE
#define DEF___FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8bff1f50-aef3-558e-a02b-589b6c0cfea8"))
IReference<enum ABI::Microsoft::Graphics::Canvas::CanvasBufferPrecision> : IReference_impl<enum ABI::Microsoft::Graphics::Canvas::CanvasBufferPrecision>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.IReference`1<Microsoft.Graphics.Canvas.CanvasBufferPrecision>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<enum ABI::Microsoft::Graphics::Canvas::CanvasBufferPrecision> __FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision_t;
#define __FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision ABI::Windows::Foundation::__FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision_USE */


namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                class CanvasDevice;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */


#ifndef DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CCanvasDevice_IInspectable_USE
#define DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CCanvasDevice_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ef539eb5-aa23-573f-ba41-ccd7f3150c5b"))
ITypedEventHandler<ABI::Microsoft::Graphics::Canvas::CanvasDevice*, IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::CanvasDevice*, ABI::Microsoft::Graphics::Canvas::ICanvasDevice*>, IInspectable*>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Graphics.Canvas.CanvasDevice, Object>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Graphics::Canvas::CanvasDevice*, IInspectable*> __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CCanvasDevice_IInspectable_t;
#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CCanvasDevice_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CCanvasDevice_IInspectable_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CCanvasDevice_IInspectable_USE */


#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    interface ICanvasBrush;
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_FWD_DEFINED__

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Effects {
                    typedef enum EffectChannelSelect : int EffectChannelSelect;
                } /* Effects */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    class CanvasCachedGeometry;
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    interface ICanvasCachedGeometry;
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometry

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry_FWD_DEFINED__

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    class CanvasGeometry;
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    interface ICanvasGeometry;
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_FWD_DEFINED__

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    class CanvasGradientMesh;
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    interface ICanvasGradientMesh;
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMesh

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh_FWD_DEFINED__

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    class CanvasStrokeStyle;
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    interface ICanvasStrokeStyle;
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_FWD_DEFINED__

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    class CanvasSvgDocument;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    interface ICanvasSvgDocument;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_FWD_DEFINED__

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    class CanvasFontFace;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    interface ICanvasFontFace;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace ABI::Microsoft::Graphics::Canvas::Text::ICanvasFontFace

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_FWD_DEFINED__

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    typedef struct CanvasGlyph CanvasGlyph;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    typedef enum CanvasTextAntialiasing : int CanvasTextAntialiasing;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    class CanvasTextFormat;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    interface ICanvasTextFormat;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextFormat

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_FWD_DEFINED__

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    class CanvasTextLayout;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    interface ICanvasTextLayout;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextLayout

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_FWD_DEFINED__

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    typedef enum CanvasTextMeasuringMode : int CanvasTextMeasuringMode;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    class CanvasTextRenderingParameters;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    interface ICanvasTextRenderingParameters;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParameters

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IAsyncAction;
        } /* Foundation */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIAsyncAction ABI::Windows::Foundation::IAsyncAction

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IClosable;
        } /* Foundation */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIClosable ABI::Windows::Foundation::IClosable

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIPropertyValue_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIPropertyValue_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IPropertyValue;
        } /* Foundation */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIPropertyValue ABI::Windows::Foundation::IPropertyValue

#endif // ____x_ABI_CWindows_CFoundation_CIPropertyValue_FWD_DEFINED__

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                typedef struct Matrix3x2 Matrix3x2;
            } /* Numerics */
        } /* Foundation */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                typedef struct Matrix4x4 Matrix4x4;
            } /* Numerics */
        } /* Foundation */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                typedef struct Vector2 Vector2;
            } /* Numerics */
        } /* Foundation */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                typedef struct Vector4 Vector4;
            } /* Numerics */
        } /* Foundation */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            typedef struct Rect Rect;
        } /* Foundation */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            typedef struct Size Size;
        } /* Foundation */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            class Uri;
        } /* Foundation */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IUriRuntimeClass;
        } /* Foundation */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIUriRuntimeClass ABI::Windows::Foundation::IUriRuntimeClass

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace DirectX {
                namespace Direct3D11 {
                    interface IDirect3DDevice;
                } /* Direct3D11 */
            } /* DirectX */
        } /* Graphics */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice

#endif // ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace DirectX {
                namespace Direct3D11 {
                    interface IDirect3DSurface;
                } /* Direct3D11 */
            } /* DirectX */
        } /* Graphics */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface

#endif // ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace DirectX {
                typedef enum DirectXPixelFormat : int DirectXPixelFormat;
            } /* DirectX */
        } /* Graphics */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Effects {
                interface IGraphicsEffectSource;
            } /* Effects */
        } /* Graphics */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource ABI::Windows::Graphics::Effects::IGraphicsEffectSource

#endif // ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_FWD_DEFINED__

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                typedef struct BitmapSize BitmapSize;
            } /* Imaging */
        } /* Graphics */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                class SoftwareBitmap;
            } /* Imaging */
        } /* Graphics */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                interface ISoftwareBitmap;
            } /* Imaging */
        } /* Graphics */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap ABI::Windows::Graphics::Imaging::ISoftwareBitmap

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IBuffer;
            } /* Streams */
        } /* Storage */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer ABI::Windows::Storage::Streams::IBuffer

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IRandomAccessStream;
            } /* Streams */
        } /* Storage */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream ABI::Windows::Storage::Streams::IRandomAccessStream

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__

namespace ABI {
    namespace Windows {
        namespace UI {
            typedef struct Color Color;
        } /* UI */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class CoreWindow;
            } /* Core */
        } /* UI */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreWindow;
            } /* Core */
        } /* UI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreWindow ABI::Windows::UI::Core::ICoreWindow

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                typedef enum CanvasAlphaMode : int CanvasAlphaMode;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                typedef enum CanvasAntialiasing : int CanvasAntialiasing;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                typedef enum CanvasBitmapFileFormat : int CanvasBitmapFileFormat;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                typedef enum CanvasBlend : int CanvasBlend;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                typedef enum CanvasComposite : int CanvasComposite;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                typedef enum CanvasDebugLevel : int CanvasDebugLevel;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                typedef enum CanvasDpiRounding : int CanvasDpiRounding;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                typedef enum CanvasImageInterpolation : int CanvasImageInterpolation;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                typedef enum CanvasLayerOptions : unsigned int CanvasLayerOptions;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                typedef enum CanvasSpriteFlip : unsigned int CanvasSpriteFlip;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                typedef enum CanvasSpriteOptions : unsigned int CanvasSpriteOptions;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                typedef enum CanvasSpriteSortMode : int CanvasSpriteSortMode;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                typedef enum CanvasSwapChainRotation : int CanvasSwapChainRotation;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                typedef enum CanvasUnits : int CanvasUnits;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                typedef enum CanvasVirtualBitmapOptions : int CanvasVirtualBitmapOptions;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                class CanvasActiveLayer;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                class CanvasCommandList;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                class CanvasDrawingSession;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                class CanvasLock;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                class CanvasRenderTarget;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                class CanvasSpriteBatch;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                class CanvasSwapChain;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasAlphaMode
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                enum CanvasAlphaMode : int
                {
                    CanvasAlphaMode_Premultiplied = 0,
                    CanvasAlphaMode_Straight = 1,
                    CanvasAlphaMode_Ignore = 2,
                };
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasAntialiasing
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                enum CanvasAntialiasing : int
                {
                    CanvasAntialiasing_Antialiased = 0,
                    CanvasAntialiasing_Aliased = 1,
                };
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasBitmapFileFormat
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                enum CanvasBitmapFileFormat : int
                {
                    CanvasBitmapFileFormat_Auto = 0,
                    CanvasBitmapFileFormat_Bmp = 1,
                    CanvasBitmapFileFormat_Png = 2,
                    CanvasBitmapFileFormat_Jpeg = 3,
                    CanvasBitmapFileFormat_Tiff = 4,
                    CanvasBitmapFileFormat_Gif = 5,
                    CanvasBitmapFileFormat_JpegXR = 6,
                };
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasBlend
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                enum CanvasBlend : int
                {
                    CanvasBlend_SourceOver = 0,
                    CanvasBlend_Copy = 1,
                    CanvasBlend_Min = 2,
                    CanvasBlend_Add = 3,
                };
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasBufferPrecision
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                enum CanvasBufferPrecision : int
                {
                    CanvasBufferPrecision_Precision8UIntNormalized = 0,
                    CanvasBufferPrecision_Precision8UIntNormalizedSrgb = 1,
                    CanvasBufferPrecision_Precision16UIntNormalized = 2,
                    CanvasBufferPrecision_Precision16Float = 3,
                    CanvasBufferPrecision_Precision32Float = 4,
                };
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasColorSpace
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                enum CanvasColorSpace : int
                {
                    CanvasColorSpace_Custom = 0,
                    CanvasColorSpace_Srgb = 1,
                    CanvasColorSpace_ScRgb = 2,
                };
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasComposite
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                enum CanvasComposite : int
                {
                    CanvasComposite_SourceOver = 0,
                    CanvasComposite_DestinationOver = 1,
                    CanvasComposite_SourceIn = 2,
                    CanvasComposite_DestinationIn = 3,
                    CanvasComposite_SourceOut = 4,
                    CanvasComposite_DestinationOut = 5,
                    CanvasComposite_SourceAtop = 6,
                    CanvasComposite_DestinationAtop = 7,
                    CanvasComposite_Xor = 8,
                    CanvasComposite_Add = 9,
                    CanvasComposite_Copy = 10,
                    CanvasComposite_BoundedCopy = 11,
                    CanvasComposite_MaskInvert = 12,
                };
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasDebugLevel
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                enum CanvasDebugLevel : int
                {
                    CanvasDebugLevel_None = 0,
                    CanvasDebugLevel_Error = 1,
                    CanvasDebugLevel_Warning = 2,
                    CanvasDebugLevel_Information = 3,
                };
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasDpiRounding
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                enum CanvasDpiRounding : int
                {
                    CanvasDpiRounding_Floor = 0,
                    CanvasDpiRounding_Round = 1,
                    CanvasDpiRounding_Ceiling = 2,
                };
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasEdgeBehavior
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                enum CanvasEdgeBehavior : int
                {
                    CanvasEdgeBehavior_Clamp = 0,
                    CanvasEdgeBehavior_Wrap = 1,
                    CanvasEdgeBehavior_Mirror = 2,
                };
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasImageInterpolation
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                enum CanvasImageInterpolation : int
                {
                    CanvasImageInterpolation_NearestNeighbor = 0,
                    CanvasImageInterpolation_Linear = 1,
                    CanvasImageInterpolation_Cubic = 2,
                    CanvasImageInterpolation_MultiSampleLinear = 3,
                    CanvasImageInterpolation_Anisotropic = 4,
                    CanvasImageInterpolation_HighQualityCubic = 5,
                };
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasLayerOptions
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                enum CanvasLayerOptions : unsigned int
                {
                    CanvasLayerOptions_None = 0,
                    CanvasLayerOptions_InitializeFromBackground = 0x1,
                    CanvasLayerOptions_IgnoreAlpha = 0x2,
                };

                DEFINE_ENUM_FLAG_OPERATORS(CanvasLayerOptions)
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasSpriteFlip
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                enum CanvasSpriteFlip : unsigned int
                {
                    CanvasSpriteFlip_None = 0,
                    CanvasSpriteFlip_Horizontal = 0x1,
                    CanvasSpriteFlip_Vertical = 0x2,
                    CanvasSpriteFlip_Both = 0x3,
                };

                DEFINE_ENUM_FLAG_OPERATORS(CanvasSpriteFlip)
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasSpriteOptions
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                enum CanvasSpriteOptions : unsigned int
                {
                    CanvasSpriteOptions_None = 0,
                    CanvasSpriteOptions_ClampToSourceRect = 0x1,
                };

                DEFINE_ENUM_FLAG_OPERATORS(CanvasSpriteOptions)
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasSpriteSortMode
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                enum CanvasSpriteSortMode : int
                {
                    CanvasSpriteSortMode_None = 0,
                    CanvasSpriteSortMode_Bitmap = 1,
                };
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasSwapChainRotation
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                enum CanvasSwapChainRotation : int
                {
                    CanvasSwapChainRotation_None = 0,
                    CanvasSwapChainRotation_Rotate90 = 1,
                    CanvasSwapChainRotation_Rotate180 = 2,
                    CanvasSwapChainRotation_Rotate270 = 3,
                };
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasUnits
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                enum CanvasUnits : int
                {
                    CanvasUnits_Dips = 0,
                    CanvasUnits_Pixels = 1,
                };
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasVirtualBitmapOptions
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                enum CanvasVirtualBitmapOptions : int
                {
                    CanvasVirtualBitmapOptions_None = 0,
                    CanvasVirtualBitmapOptions_ReleaseSource = 1,
                    CanvasVirtualBitmapOptions_CacheOnDemand = 2,
                };
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasActiveLayer
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasActiveLayer
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasActiveLayer[] = L"Microsoft.Graphics.Canvas.ICanvasActiveLayer";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                MIDL_INTERFACE("49ecfc58-5e1c-4ee3-8088-542f94e93c60")
                ICanvasActiveLayer : public IInspectable
                {
                public:
                };

                extern MIDL_CONST_ID IID& IID_ICanvasActiveLayer = _uuidof(ICanvasActiveLayer);
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasBitmap
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasBitmap
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Microsoft.Graphics.Canvas.ICanvasImage
 *     Windows.Graphics.Effects.IGraphicsEffectSource
 *     Windows.Foundation.IClosable
 *     Windows.Graphics.DirectX.Direct3D11.IDirect3DSurface
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasBitmap[] = L"Microsoft.Graphics.Canvas.ICanvasBitmap";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                MIDL_INTERFACE("c57532ed-709e-4ac2-86be-a1ec3a7fa8fe")
                ICanvasBitmap : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_SizeInPixels(
                        ABI::Windows::Graphics::Imaging::BitmapSize* size
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Size(
                        ABI::Windows::Foundation::Size* size
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Bounds(
                        ABI::Windows::Foundation::Rect* bounds
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Format(
                        ABI::Windows::Graphics::DirectX::DirectXPixelFormat* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_AlphaMode(
                        ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SaveToFileAsync(
                        HSTRING fileName,
                        ABI::Windows::Foundation::IAsyncAction** asyncAction
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SaveToFileWithBitmapFileFormatAsync(
                        HSTRING fileName,
                        ABI::Microsoft::Graphics::Canvas::CanvasBitmapFileFormat fileFormat,
                        ABI::Windows::Foundation::IAsyncAction** asyncAction
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SaveToFileWithBitmapFileFormatAndQualityAsync(
                        HSTRING fileName,
                        ABI::Microsoft::Graphics::Canvas::CanvasBitmapFileFormat fileFormat,
                        FLOAT quality,
                        ABI::Windows::Foundation::IAsyncAction** asyncAction
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SaveToStreamAsync(
                        ABI::Windows::Storage::Streams::IRandomAccessStream* stream,
                        ABI::Microsoft::Graphics::Canvas::CanvasBitmapFileFormat fileFormat,
                        ABI::Windows::Foundation::IAsyncAction** asyncAction
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SaveToStreamWithQualityAsync(
                        ABI::Windows::Storage::Streams::IRandomAccessStream* stream,
                        ABI::Microsoft::Graphics::Canvas::CanvasBitmapFileFormat fileFormat,
                        FLOAT quality,
                        ABI::Windows::Foundation::IAsyncAction** asyncAction
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetPixelBytes(
                        UINT32* valueElementsLength,
                        BYTE** valueElements
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetPixelBytesWithSubrectangle(
                        INT32 left,
                        INT32 top,
                        INT32 width,
                        INT32 height,
                        UINT32* valueElementsLength,
                        BYTE** valueElements
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetPixelBytesWithBuffer(
                        ABI::Windows::Storage::Streams::IBuffer* buffer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetPixelBytesWithBufferAndSubrectangle(
                        ABI::Windows::Storage::Streams::IBuffer* buffer,
                        INT32 left,
                        INT32 top,
                        INT32 width,
                        INT32 height
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetPixelColors(
                        UINT32* valueElementsLength,
                        ABI::Windows::UI::Color** valueElements
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetPixelColorsWithSubrectangle(
                        INT32 left,
                        INT32 top,
                        INT32 width,
                        INT32 height,
                        UINT32* valueElementsLength,
                        ABI::Windows::UI::Color** valueElements
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetPixelBytes(
                        UINT32 valueElementsLength,
                        BYTE* valueElements
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetPixelBytesWithSubrectangle(
                        UINT32 valueElementsLength,
                        BYTE* valueElements,
                        INT32 left,
                        INT32 top,
                        INT32 width,
                        INT32 height
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetPixelBytesWithBuffer(
                        ABI::Windows::Storage::Streams::IBuffer* buffer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetPixelBytesWithBufferAndSubrectangle(
                        ABI::Windows::Storage::Streams::IBuffer* buffer,
                        INT32 left,
                        INT32 top,
                        INT32 width,
                        INT32 height
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetPixelColors(
                        UINT32 valueElementsLength,
                        ABI::Windows::UI::Color* valueElements
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetPixelColorsWithSubrectangle(
                        UINT32 valueElementsLength,
                        ABI::Windows::UI::Color* valueElements,
                        INT32 left,
                        INT32 top,
                        INT32 width,
                        INT32 height
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CopyPixelsFromBitmap(
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap* otherBitmap
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CopyPixelsFromBitmapWithDestPoint(
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap* otherBitmap,
                        INT32 destX,
                        INT32 destY
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CopyPixelsFromBitmapWithDestPointAndSourceRect(
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap* otherBitmap,
                        INT32 destX,
                        INT32 destY,
                        INT32 sourceRectLeft,
                        INT32 sourceRectTop,
                        INT32 sourceRectWidth,
                        INT32 sourceRectHeight
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_ICanvasBitmap = _uuidof(ICanvasBitmap);
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasBitmapFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasBitmap
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasBitmapFactory[] = L"Microsoft.Graphics.Canvas.ICanvasBitmapFactory";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                MIDL_INTERFACE("f2d0eb0e-16f3-4bcf-b1d1-04834ab97de4")
                ICanvasBitmapFactory : public IInspectable
                {
                public:
                };

                extern MIDL_CONST_ID IID& IID_ICanvasBitmapFactory = _uuidof(ICanvasBitmapFactory);
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasBitmapStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasBitmap
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasBitmapStatics[] = L"Microsoft.Graphics.Canvas.ICanvasBitmapStatics";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                MIDL_INTERFACE("c8948dea-a41d-4cc2-af9a-fdde01b606dc")
                ICanvasBitmapStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE CreateFromDirect3D11Surface(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface* surface,
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap** bitmap
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromDirect3D11SurfaceWithDpi(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface* surface,
                        FLOAT dpi,
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap** bitmap
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromDirect3D11SurfaceWithDpiAndAlpha(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface* surface,
                        FLOAT dpi,
                        ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode alpha,
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap** bitmap
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromBytes(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        UINT32 bytesLength,
                        BYTE* bytes,
                        INT32 widthInPixels,
                        INT32 heightInPixels,
                        ABI::Windows::Graphics::DirectX::DirectXPixelFormat format,
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap** bitmap
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromBytesWithDpi(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        UINT32 bytesLength,
                        BYTE* bytes,
                        INT32 widthInPixels,
                        INT32 heightInPixels,
                        ABI::Windows::Graphics::DirectX::DirectXPixelFormat format,
                        FLOAT dpi,
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap** bitmap
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromBytesWithDpiAndAlpha(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        UINT32 bytesLength,
                        BYTE* bytes,
                        INT32 widthInPixels,
                        INT32 heightInPixels,
                        ABI::Windows::Graphics::DirectX::DirectXPixelFormat format,
                        FLOAT dpi,
                        ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode alpha,
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap** bitmap
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromBytesWithBuffer(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Storage::Streams::IBuffer* buffer,
                        INT32 widthInPixels,
                        INT32 heightInPixels,
                        ABI::Windows::Graphics::DirectX::DirectXPixelFormat format,
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap** bitmap
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromBytesWithBufferAndDpi(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Storage::Streams::IBuffer* buffer,
                        INT32 widthInPixels,
                        INT32 heightInPixels,
                        ABI::Windows::Graphics::DirectX::DirectXPixelFormat format,
                        FLOAT dpi,
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap** bitmap
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromBytesWithBufferAndDpiAndAlpha(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Storage::Streams::IBuffer* buffer,
                        INT32 widthInPixels,
                        INT32 heightInPixels,
                        ABI::Windows::Graphics::DirectX::DirectXPixelFormat format,
                        FLOAT dpi,
                        ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode alpha,
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap** bitmap
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromColors(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        UINT32 colorsLength,
                        ABI::Windows::UI::Color* colors,
                        INT32 widthInPixels,
                        INT32 heightInPixels,
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap** bitmap
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromColorsWithDpi(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        UINT32 colorsLength,
                        ABI::Windows::UI::Color* colors,
                        INT32 widthInPixels,
                        INT32 heightInPixels,
                        FLOAT dpi,
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap** bitmap
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromColorsWithDpiAndAlpha(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        UINT32 colorsLength,
                        ABI::Windows::UI::Color* colors,
                        INT32 widthInPixels,
                        INT32 heightInPixels,
                        FLOAT dpi,
                        ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode alpha,
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap** bitmap
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromSoftwareBitmap(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Graphics::Imaging::ISoftwareBitmap* sourceBitmap,
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap** bitmap
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LoadAsyncFromHstring(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        HSTRING fileName,
                        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap** canvasBitmap
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LoadAsyncFromHstringWithDpi(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        HSTRING fileName,
                        FLOAT dpi,
                        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap** canvasBitmap
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LoadAsyncFromHstringWithDpiAndAlpha(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        HSTRING fileName,
                        FLOAT dpi,
                        ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode alpha,
                        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap** canvasBitmap
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LoadAsyncFromUri(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Foundation::IUriRuntimeClass* uri,
                        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap** canvasBitmap
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LoadAsyncFromUriWithDpi(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Foundation::IUriRuntimeClass* uri,
                        FLOAT dpi,
                        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap** canvasBitmap
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LoadAsyncFromUriWithDpiAndAlpha(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Foundation::IUriRuntimeClass* uri,
                        FLOAT dpi,
                        ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode alpha,
                        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap** canvasBitmap
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LoadAsyncFromStream(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Storage::Streams::IRandomAccessStream* stream,
                        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap** canvasBitmap
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LoadAsyncFromStreamWithDpi(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Storage::Streams::IRandomAccessStream* stream,
                        FLOAT dpi,
                        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap** canvasBitmap
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LoadAsyncFromStreamWithDpiAndAlpha(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Storage::Streams::IRandomAccessStream* stream,
                        FLOAT dpi,
                        ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode alpha,
                        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap** canvasBitmap
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_ICanvasBitmapStatics = _uuidof(ICanvasBitmapStatics);
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasCommandList
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasCommandList
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Microsoft.Graphics.Canvas.ICanvasImage
 *     Windows.Graphics.Effects.IGraphicsEffectSource
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasCommandList[] = L"Microsoft.Graphics.Canvas.ICanvasCommandList";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                MIDL_INTERFACE("b71e73cf-2fe7-4d3a-bbb8-19f016f5be1b")
                ICanvasCommandList : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE CreateDrawingSession(
                        ABI::Microsoft::Graphics::Canvas::ICanvasDrawingSession** drawingSession
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Device(
                        ABI::Microsoft::Graphics::Canvas::ICanvasDevice** value
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_ICanvasCommandList = _uuidof(ICanvasCommandList);
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasCommandListFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasCommandList
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasCommandListFactory[] = L"Microsoft.Graphics.Canvas.ICanvasCommandListFactory";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                MIDL_INTERFACE("b3d44e68-d931-4b5b-b957-0888980a7d50")
                ICanvasCommandListFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Microsoft::Graphics::Canvas::ICanvasCommandList** commandList
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_ICanvasCommandListFactory = _uuidof(ICanvasCommandListFactory);
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasDevice
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasDevice
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *     Windows.Graphics.DirectX.Direct3D11.IDirect3DDevice
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasDevice[] = L"Microsoft.Graphics.Canvas.ICanvasDevice";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                MIDL_INTERFACE("a27f0b5d-ec2c-4d4f-948f-0aa1e95e33e6")
                ICanvasDevice : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_ForceSoftwareRenderer(
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_MaximumBitmapSizeInPixels(
                        INT32* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsPixelFormatSupported(
                        ABI::Windows::Graphics::DirectX::DirectXPixelFormat pixelFormat,
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsBufferPrecisionSupported(
                        ABI::Microsoft::Graphics::Canvas::CanvasBufferPrecision bufferPrecision,
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_MaximumCacheSize(
                        UINT64* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_MaximumCacheSize(
                        UINT64 value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_LowPriority(
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_LowPriority(
                        boolean value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_DeviceLost(
                        __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CCanvasDevice_IInspectable* value,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_DeviceLost(
                        EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsDeviceLost(
                        INT32 hresult,
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RaiseDeviceLost(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Lock(
                        ABI::Microsoft::Graphics::Canvas::ICanvasLock** lock
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_ICanvasDevice = _uuidof(ICanvasDevice);
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasDeviceFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasDevice
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasDeviceFactory[] = L"Microsoft.Graphics.Canvas.ICanvasDeviceFactory";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                MIDL_INTERFACE("e2c2bf21-5418-43b9-a2da-539e287c790f")
                ICanvasDeviceFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE CreateWithForceSoftwareRendererOption(
                        boolean forceSoftwareRenderer,
                        ABI::Microsoft::Graphics::Canvas::ICanvasDevice** canvasDevice
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_ICanvasDeviceFactory = _uuidof(ICanvasDeviceFactory);
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasDeviceStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasDevice
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasDeviceStatics[] = L"Microsoft.Graphics.Canvas.ICanvasDeviceStatics";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                MIDL_INTERFACE("9b6e2b27-cd07-421a-8f69-0ae8a787fe8c")
                ICanvasDeviceStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE CreateFromDirect3D11Device(
                        ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice* direct3DDevice,
                        ABI::Microsoft::Graphics::Canvas::ICanvasDevice** canvasDevice
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetSharedDevice(
                        ABI::Microsoft::Graphics::Canvas::ICanvasDevice** canvasDevice
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetSharedDeviceWithForceSoftwareRenderer(
                        boolean forceSoftwareRenderer,
                        ABI::Microsoft::Graphics::Canvas::ICanvasDevice** canvasDevice
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_DebugLevel(
                        ABI::Microsoft::Graphics::Canvas::CanvasDebugLevel value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_DebugLevel(
                        ABI::Microsoft::Graphics::Canvas::CanvasDebugLevel* value
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_ICanvasDeviceStatics = _uuidof(ICanvasDeviceStatics);
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasDrawingSession
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasDrawingSession
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasDrawingSession[] = L"Microsoft.Graphics.Canvas.ICanvasDrawingSession";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                MIDL_INTERFACE("f60afd09-e623-4be0-b750-578aa920b1db")
                ICanvasDrawingSession : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Clear(
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ClearHdr(
                        ABI::Windows::Foundation::Numerics::Vector4 color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Flush(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawImageAtOrigin(
                        ABI::Microsoft::Graphics::Canvas::ICanvasImage* image
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawImageAtOffset(
                        ABI::Microsoft::Graphics::Canvas::ICanvasImage* image,
                        ABI::Windows::Foundation::Numerics::Vector2 offset
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawImageAtCoords(
                        ABI::Microsoft::Graphics::Canvas::ICanvasImage* image,
                        FLOAT x,
                        FLOAT y
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawImageToRect(
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap* bitmap,
                        ABI::Windows::Foundation::Rect destinationRectangle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawImageAtOffsetWithSourceRect(
                        ABI::Microsoft::Graphics::Canvas::ICanvasImage* image,
                        ABI::Windows::Foundation::Numerics::Vector2 offset,
                        ABI::Windows::Foundation::Rect sourceRectangle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawImageAtCoordsWithSourceRect(
                        ABI::Microsoft::Graphics::Canvas::ICanvasImage* image,
                        FLOAT x,
                        FLOAT y,
                        ABI::Windows::Foundation::Rect sourceRectangle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawImageToRectWithSourceRect(
                        ABI::Microsoft::Graphics::Canvas::ICanvasImage* image,
                        ABI::Windows::Foundation::Rect destinationRectangle,
                        ABI::Windows::Foundation::Rect sourceRectangle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawImageAtOffsetWithSourceRectAndOpacity(
                        ABI::Microsoft::Graphics::Canvas::ICanvasImage* image,
                        ABI::Windows::Foundation::Numerics::Vector2 offset,
                        ABI::Windows::Foundation::Rect sourceRectangle,
                        FLOAT opacity
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawImageAtCoordsWithSourceRectAndOpacity(
                        ABI::Microsoft::Graphics::Canvas::ICanvasImage* image,
                        FLOAT x,
                        FLOAT y,
                        ABI::Windows::Foundation::Rect sourceRectangle,
                        FLOAT opacity
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawImageToRectWithSourceRectAndOpacity(
                        ABI::Microsoft::Graphics::Canvas::ICanvasImage* image,
                        ABI::Windows::Foundation::Rect destinationRectangle,
                        ABI::Windows::Foundation::Rect sourceRectangle,
                        FLOAT opacity
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawImageAtOffsetWithSourceRectAndOpacityAndInterpolation(
                        ABI::Microsoft::Graphics::Canvas::ICanvasImage* image,
                        ABI::Windows::Foundation::Numerics::Vector2 offset,
                        ABI::Windows::Foundation::Rect sourceRectangle,
                        FLOAT opacity,
                        ABI::Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawImageAtCoordsWithSourceRectAndOpacityAndInterpolation(
                        ABI::Microsoft::Graphics::Canvas::ICanvasImage* image,
                        FLOAT x,
                        FLOAT y,
                        ABI::Windows::Foundation::Rect sourceRectangle,
                        FLOAT opacity,
                        ABI::Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawImageToRectWithSourceRectAndOpacityAndInterpolation(
                        ABI::Microsoft::Graphics::Canvas::ICanvasImage* image,
                        ABI::Windows::Foundation::Rect destinationRectangle,
                        ABI::Windows::Foundation::Rect sourceRectangle,
                        FLOAT opacity,
                        ABI::Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawImageAtOffsetWithSourceRectAndOpacityAndInterpolationAndComposite(
                        ABI::Microsoft::Graphics::Canvas::ICanvasImage* image,
                        ABI::Windows::Foundation::Numerics::Vector2 offset,
                        ABI::Windows::Foundation::Rect sourceRectangle,
                        FLOAT opacity,
                        ABI::Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation,
                        ABI::Microsoft::Graphics::Canvas::CanvasComposite composite
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawImageAtCoordsWithSourceRectAndOpacityAndInterpolationAndComposite(
                        ABI::Microsoft::Graphics::Canvas::ICanvasImage* image,
                        FLOAT x,
                        FLOAT y,
                        ABI::Windows::Foundation::Rect sourceRectangle,
                        FLOAT opacity,
                        ABI::Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation,
                        ABI::Microsoft::Graphics::Canvas::CanvasComposite composite
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawImageToRectWithSourceRectAndOpacityAndInterpolationAndComposite(
                        ABI::Microsoft::Graphics::Canvas::ICanvasImage* image,
                        ABI::Windows::Foundation::Rect destinationRectangle,
                        ABI::Windows::Foundation::Rect sourceRectangle,
                        FLOAT opacity,
                        ABI::Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation,
                        ABI::Microsoft::Graphics::Canvas::CanvasComposite composite
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawImageAtOffsetWithSourceRectAndOpacityAndInterpolationAndPerspective(
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap* bitmap,
                        ABI::Windows::Foundation::Numerics::Vector2 offset,
                        ABI::Windows::Foundation::Rect sourceRectangle,
                        FLOAT opacity,
                        ABI::Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation,
                        ABI::Windows::Foundation::Numerics::Matrix4x4 perspective
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawImageAtCoordsWithSourceRectAndOpacityAndInterpolationAndPerspective(
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap* bitmap,
                        FLOAT x,
                        FLOAT y,
                        ABI::Windows::Foundation::Rect sourceRectangle,
                        FLOAT opacity,
                        ABI::Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation,
                        ABI::Windows::Foundation::Numerics::Matrix4x4 perspective
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawImageToRectWithSourceRectAndOpacityAndInterpolationAndPerspective(
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap* bitmap,
                        ABI::Windows::Foundation::Rect destinationRectangle,
                        ABI::Windows::Foundation::Rect sourceRectangle,
                        FLOAT opacity,
                        ABI::Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation,
                        ABI::Windows::Foundation::Numerics::Matrix4x4 perspective
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawLineWithBrush(
                        ABI::Windows::Foundation::Numerics::Vector2 point0,
                        ABI::Windows::Foundation::Numerics::Vector2 point1,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawLineAtCoordsWithBrush(
                        FLOAT x0,
                        FLOAT y0,
                        FLOAT x1,
                        FLOAT y1,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawLineWithColor(
                        ABI::Windows::Foundation::Numerics::Vector2 point0,
                        ABI::Windows::Foundation::Numerics::Vector2 point1,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawLineAtCoordsWithColor(
                        FLOAT x0,
                        FLOAT y0,
                        FLOAT x1,
                        FLOAT y1,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawLineWithBrushAndStrokeWidth(
                        ABI::Windows::Foundation::Numerics::Vector2 point0,
                        ABI::Windows::Foundation::Numerics::Vector2 point1,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        FLOAT strokeWidth
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawLineAtCoordsWithBrushAndStrokeWidth(
                        FLOAT x0,
                        FLOAT y0,
                        FLOAT x1,
                        FLOAT y1,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        FLOAT strokeWidth
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawLineWithColorAndStrokeWidth(
                        ABI::Windows::Foundation::Numerics::Vector2 point0,
                        ABI::Windows::Foundation::Numerics::Vector2 point1,
                        ABI::Windows::UI::Color color,
                        FLOAT strokeWidth
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawLineAtCoordsWithColorAndStrokeWidth(
                        FLOAT x0,
                        FLOAT y0,
                        FLOAT x1,
                        FLOAT y1,
                        ABI::Windows::UI::Color color,
                        FLOAT strokeWidth
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawLineWithBrushAndStrokeWidthAndStrokeStyle(
                        ABI::Windows::Foundation::Numerics::Vector2 point0,
                        ABI::Windows::Foundation::Numerics::Vector2 point1,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        FLOAT strokeWidth,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawLineAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(
                        FLOAT x0,
                        FLOAT y0,
                        FLOAT x1,
                        FLOAT y1,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        FLOAT strokeWidth,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawLineWithColorAndStrokeWidthAndStrokeStyle(
                        ABI::Windows::Foundation::Numerics::Vector2 point0,
                        ABI::Windows::Foundation::Numerics::Vector2 point1,
                        ABI::Windows::UI::Color color,
                        FLOAT strokeWidth,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawLineAtCoordsWithColorAndStrokeWidthAndStrokeStyle(
                        FLOAT x0,
                        FLOAT y0,
                        FLOAT x1,
                        FLOAT y1,
                        ABI::Windows::UI::Color color,
                        FLOAT strokeWidth,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawRectangleWithBrush(
                        ABI::Windows::Foundation::Rect rect,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawRectangleAtCoordsWithBrush(
                        FLOAT x,
                        FLOAT y,
                        FLOAT w,
                        FLOAT h,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawRectangleWithColor(
                        ABI::Windows::Foundation::Rect rect,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawRectangleAtCoordsWithColor(
                        FLOAT x,
                        FLOAT y,
                        FLOAT w,
                        FLOAT h,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawRectangleWithBrushAndStrokeWidth(
                        ABI::Windows::Foundation::Rect rect,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        FLOAT strokeWidth
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawRectangleAtCoordsWithBrushAndStrokeWidth(
                        FLOAT x,
                        FLOAT y,
                        FLOAT w,
                        FLOAT h,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        FLOAT strokeWidth
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawRectangleWithColorAndStrokeWidth(
                        ABI::Windows::Foundation::Rect rect,
                        ABI::Windows::UI::Color color,
                        FLOAT strokeWidth
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawRectangleAtCoordsWithColorAndStrokeWidth(
                        FLOAT x,
                        FLOAT y,
                        FLOAT w,
                        FLOAT h,
                        ABI::Windows::UI::Color color,
                        FLOAT strokeWidth
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawRectangleWithBrushAndStrokeWidthAndStrokeStyle(
                        ABI::Windows::Foundation::Rect rect,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        FLOAT strokeWidth,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawRectangleAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(
                        FLOAT x,
                        FLOAT y,
                        FLOAT w,
                        FLOAT h,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        FLOAT strokeWidth,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawRectangleWithColorAndStrokeWidthAndStrokeStyle(
                        ABI::Windows::Foundation::Rect rect,
                        ABI::Windows::UI::Color color,
                        FLOAT strokeWidth,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawRectangleAtCoordsWithColorAndStrokeWidthAndStrokeStyle(
                        FLOAT x,
                        FLOAT y,
                        FLOAT w,
                        FLOAT h,
                        ABI::Windows::UI::Color color,
                        FLOAT strokeWidth,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillRectangleWithBrush(
                        ABI::Windows::Foundation::Rect rect,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillRectangleAtCoordsWithBrush(
                        FLOAT x,
                        FLOAT y,
                        FLOAT w,
                        FLOAT h,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillRectangleWithColor(
                        ABI::Windows::Foundation::Rect rect,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillRectangleAtCoordsWithColor(
                        FLOAT x,
                        FLOAT y,
                        FLOAT w,
                        FLOAT h,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillRectangleWithBrushAndOpacityBrush(
                        ABI::Windows::Foundation::Rect rect,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* opacityBrush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillRectangleAtCoordsWithBrushAndOpacityBrush(
                        FLOAT x,
                        FLOAT y,
                        FLOAT w,
                        FLOAT h,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* opacityBrush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawRoundedRectangleWithBrush(
                        ABI::Windows::Foundation::Rect rect,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawRoundedRectangleAtCoordsWithBrush(
                        FLOAT x,
                        FLOAT y,
                        FLOAT w,
                        FLOAT h,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawRoundedRectangleWithColor(
                        ABI::Windows::Foundation::Rect rect,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawRoundedRectangleAtCoordsWithColor(
                        FLOAT x,
                        FLOAT y,
                        FLOAT w,
                        FLOAT h,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawRoundedRectangleWithBrushAndStrokeWidth(
                        ABI::Windows::Foundation::Rect rect,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        FLOAT strokeWidth
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawRoundedRectangleAtCoordsWithBrushAndStrokeWidth(
                        FLOAT x,
                        FLOAT y,
                        FLOAT w,
                        FLOAT h,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        FLOAT strokeWidth
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawRoundedRectangleWithColorAndStrokeWidth(
                        ABI::Windows::Foundation::Rect rect,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Windows::UI::Color color,
                        FLOAT strokeWidth
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawRoundedRectangleAtCoordsWithColorAndStrokeWidth(
                        FLOAT x,
                        FLOAT y,
                        FLOAT w,
                        FLOAT h,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Windows::UI::Color color,
                        FLOAT strokeWidth
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawRoundedRectangleWithBrushAndStrokeWidthAndStrokeStyle(
                        ABI::Windows::Foundation::Rect rect,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        FLOAT strokeWidth,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawRoundedRectangleAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(
                        FLOAT x,
                        FLOAT y,
                        FLOAT w,
                        FLOAT h,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        FLOAT strokeWidth,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawRoundedRectangleWithColorAndStrokeWidthAndStrokeStyle(
                        ABI::Windows::Foundation::Rect rect,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Windows::UI::Color color,
                        FLOAT strokeWidth,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawRoundedRectangleAtCoordsWithColorAndStrokeWidthAndStrokeStyle(
                        FLOAT x,
                        FLOAT y,
                        FLOAT w,
                        FLOAT h,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Windows::UI::Color color,
                        FLOAT strokeWidth,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillRoundedRectangleWithBrush(
                        ABI::Windows::Foundation::Rect rect,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillRoundedRectangleAtCoordsWithBrush(
                        FLOAT x,
                        FLOAT y,
                        FLOAT w,
                        FLOAT h,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillRoundedRectangleWithColor(
                        ABI::Windows::Foundation::Rect rect,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillRoundedRectangleAtCoordsWithColor(
                        FLOAT x,
                        FLOAT y,
                        FLOAT w,
                        FLOAT h,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawEllipseWithBrush(
                        ABI::Windows::Foundation::Numerics::Vector2 centerPoint,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawEllipseAtCoordsWithBrush(
                        FLOAT x,
                        FLOAT y,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawEllipseWithColor(
                        ABI::Windows::Foundation::Numerics::Vector2 centerPoint,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawEllipseAtCoordsWithColor(
                        FLOAT x,
                        FLOAT y,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawEllipseWithBrushAndStrokeWidth(
                        ABI::Windows::Foundation::Numerics::Vector2 centerPoint,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        FLOAT strokeWidth
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawEllipseAtCoordsWithBrushAndStrokeWidth(
                        FLOAT x,
                        FLOAT y,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        FLOAT strokeWidth
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawEllipseWithColorAndStrokeWidth(
                        ABI::Windows::Foundation::Numerics::Vector2 centerPoint,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Windows::UI::Color color,
                        FLOAT strokeWidth
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawEllipseAtCoordsWithColorAndStrokeWidth(
                        FLOAT x,
                        FLOAT y,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Windows::UI::Color color,
                        FLOAT strokeWidth
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawEllipseWithBrushAndStrokeWidthAndStrokeStyle(
                        ABI::Windows::Foundation::Numerics::Vector2 centerPoint,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        FLOAT strokeWidth,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawEllipseAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(
                        FLOAT x,
                        FLOAT y,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        FLOAT strokeWidth,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawEllipseWithColorAndStrokeWidthAndStrokeStyle(
                        ABI::Windows::Foundation::Numerics::Vector2 centerPoint,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Windows::UI::Color color,
                        FLOAT strokeWidth,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawEllipseAtCoordsWithColorAndStrokeWidthAndStrokeStyle(
                        FLOAT x,
                        FLOAT y,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Windows::UI::Color color,
                        FLOAT strokeWidth,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillEllipseWithBrush(
                        ABI::Windows::Foundation::Numerics::Vector2 centerPoint,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillEllipseAtCoordsWithBrush(
                        FLOAT x,
                        FLOAT y,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillEllipseWithColor(
                        ABI::Windows::Foundation::Numerics::Vector2 centerPoint,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillEllipseAtCoordsWithColor(
                        FLOAT x,
                        FLOAT y,
                        FLOAT radiusX,
                        FLOAT radiusY,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawCircleWithBrush(
                        ABI::Windows::Foundation::Numerics::Vector2 centerPoint,
                        FLOAT radius,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawCircleAtCoordsWithBrush(
                        FLOAT x,
                        FLOAT y,
                        FLOAT radius,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawCircleWithColor(
                        ABI::Windows::Foundation::Numerics::Vector2 centerPoint,
                        FLOAT radius,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawCircleAtCoordsWithColor(
                        FLOAT x,
                        FLOAT y,
                        FLOAT radius,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawCircleWithBrushAndStrokeWidth(
                        ABI::Windows::Foundation::Numerics::Vector2 centerPoint,
                        FLOAT radius,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        FLOAT strokeWidth
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawCircleAtCoordsWithBrushAndStrokeWidth(
                        FLOAT x,
                        FLOAT y,
                        FLOAT radius,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        FLOAT strokeWidth
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawCircleWithColorAndStrokeWidth(
                        ABI::Windows::Foundation::Numerics::Vector2 centerPoint,
                        FLOAT radius,
                        ABI::Windows::UI::Color color,
                        FLOAT strokeWidth
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawCircleAtCoordsWithColorAndStrokeWidth(
                        FLOAT x,
                        FLOAT y,
                        FLOAT radius,
                        ABI::Windows::UI::Color color,
                        FLOAT strokeWidth
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawCircleWithBrushAndStrokeWidthAndStrokeStyle(
                        ABI::Windows::Foundation::Numerics::Vector2 centerPoint,
                        FLOAT radius,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        FLOAT strokeWidth,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawCircleAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(
                        FLOAT x,
                        FLOAT y,
                        FLOAT radius,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        FLOAT strokeWidth,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawCircleWithColorAndStrokeWidthAndStrokeStyle(
                        ABI::Windows::Foundation::Numerics::Vector2 centerPoint,
                        FLOAT radius,
                        ABI::Windows::UI::Color color,
                        FLOAT strokeWidth,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawCircleAtCoordsWithColorAndStrokeWidthAndStrokeStyle(
                        FLOAT x,
                        FLOAT y,
                        FLOAT radius,
                        ABI::Windows::UI::Color color,
                        FLOAT strokeWidth,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillCircleWithBrush(
                        ABI::Windows::Foundation::Numerics::Vector2 centerPoint,
                        FLOAT radius,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillCircleAtCoordsWithBrush(
                        FLOAT x,
                        FLOAT y,
                        FLOAT radius,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillCircleWithColor(
                        ABI::Windows::Foundation::Numerics::Vector2 centerPoint,
                        FLOAT radius,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillCircleAtCoordsWithColor(
                        FLOAT x,
                        FLOAT y,
                        FLOAT radius,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawTextAtPointWithColor(
                        HSTRING text,
                        ABI::Windows::Foundation::Numerics::Vector2 point,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawTextAtPointCoordsWithColor(
                        HSTRING text,
                        FLOAT x,
                        FLOAT y,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawTextAtPointWithBrushAndFormat(
                        HSTRING text,
                        ABI::Windows::Foundation::Numerics::Vector2 point,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextFormat* format
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawTextAtRectWithBrushAndFormat(
                        HSTRING text,
                        ABI::Windows::Foundation::Rect rectangle,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextFormat* format
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawTextAtPointCoordsWithBrushAndFormat(
                        HSTRING text,
                        FLOAT x,
                        FLOAT y,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextFormat* format
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawTextAtRectCoordsWithBrushAndFormat(
                        HSTRING text,
                        FLOAT x,
                        FLOAT y,
                        FLOAT w,
                        FLOAT h,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextFormat* format
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawTextAtPointWithColorAndFormat(
                        HSTRING text,
                        ABI::Windows::Foundation::Numerics::Vector2 point,
                        ABI::Windows::UI::Color color,
                        ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextFormat* format
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawTextAtRectWithColorAndFormat(
                        HSTRING text,
                        ABI::Windows::Foundation::Rect rectangle,
                        ABI::Windows::UI::Color color,
                        ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextFormat* format
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawTextAtPointCoordsWithColorAndFormat(
                        HSTRING text,
                        FLOAT x,
                        FLOAT y,
                        ABI::Windows::UI::Color color,
                        ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextFormat* format
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawTextAtRectCoordsWithColorAndFormat(
                        HSTRING text,
                        FLOAT x,
                        FLOAT y,
                        FLOAT w,
                        FLOAT h,
                        ABI::Windows::UI::Color color,
                        ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextFormat* format
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawGeometryWithBrush(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        ABI::Windows::Foundation::Numerics::Vector2 offset,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawGeometryWithColor(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        ABI::Windows::Foundation::Numerics::Vector2 offset,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawGeometryAtCoordsWithBrush(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        FLOAT x,
                        FLOAT y,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawGeometryAtCoordsWithColor(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        FLOAT x,
                        FLOAT y,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawGeometryAtOriginWithBrush(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawGeometryAtOriginWithColor(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawGeometryWithBrushAndStrokeWidth(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        ABI::Windows::Foundation::Numerics::Vector2 offset,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        FLOAT strokeWidth
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawGeometryWithColorAndStrokeWidth(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        ABI::Windows::Foundation::Numerics::Vector2 offset,
                        ABI::Windows::UI::Color color,
                        FLOAT strokeWidth
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawGeometryAtCoordsWithBrushAndStrokeWidth(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        FLOAT x,
                        FLOAT y,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        FLOAT strokeWidth
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawGeometryAtCoordsWithColorAndStrokeWidth(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        FLOAT x,
                        FLOAT y,
                        ABI::Windows::UI::Color color,
                        FLOAT strokeWidth
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawGeometryAtOriginWithBrushAndStrokeWidth(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        FLOAT strokeWidth
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawGeometryAtOriginWithColorAndStrokeWidth(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        ABI::Windows::UI::Color color,
                        FLOAT strokeWidth
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawGeometryWithBrushAndStrokeWidthAndStrokeStyle(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        ABI::Windows::Foundation::Numerics::Vector2 offset,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        FLOAT strokeWidth,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawGeometryWithColorAndStrokeWidthAndStrokeStyle(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        ABI::Windows::Foundation::Numerics::Vector2 offset,
                        ABI::Windows::UI::Color color,
                        FLOAT strokeWidth,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawGeometryAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        FLOAT x,
                        FLOAT y,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        FLOAT strokeWidth,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawGeometryAtCoordsWithColorAndStrokeWidthAndStrokeStyle(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        FLOAT x,
                        FLOAT y,
                        ABI::Windows::UI::Color color,
                        FLOAT strokeWidth,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawGeometryAtOriginWithBrushAndStrokeWidthAndStrokeStyle(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        FLOAT strokeWidth,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawGeometryAtOriginWithColorAndStrokeWidthAndStrokeStyle(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        ABI::Windows::UI::Color color,
                        FLOAT strokeWidth,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillGeometryWithBrush(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        ABI::Windows::Foundation::Numerics::Vector2 offset,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillGeometryWithBrushAndOpacityBrush(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        ABI::Windows::Foundation::Numerics::Vector2 offset,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* opacityBrush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillGeometryWithColor(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        ABI::Windows::Foundation::Numerics::Vector2 offset,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillGeometryAtCoordsWithBrush(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        FLOAT x,
                        FLOAT y,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillGeometryAtCoordsWithBrushAndOpacityBrush(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        FLOAT x,
                        FLOAT y,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* opacityBrush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillGeometryAtCoordsWithColor(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        FLOAT x,
                        FLOAT y,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillGeometryAtOriginWithBrush(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillGeometryAtOriginWithBrushAndOpacityBrush(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* opacityBrush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FillGeometryAtOriginWithColor(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawCachedGeometryWithBrush(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometry* geometry,
                        ABI::Windows::Foundation::Numerics::Vector2 offset,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawCachedGeometryWithColor(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometry* geometry,
                        ABI::Windows::Foundation::Numerics::Vector2 offset,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawCachedGeometryAtCoordsWithBrush(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometry* geometry,
                        FLOAT x,
                        FLOAT y,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawCachedGeometryAtCoordsWithColor(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometry* geometry,
                        FLOAT x,
                        FLOAT y,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawCachedGeometryAtOriginWithBrush(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometry* geometry,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawCachedGeometryAtOriginWithColor(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometry* geometry,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawTextLayoutWithBrush(
                        ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextLayout* textLayout,
                        ABI::Windows::Foundation::Numerics::Vector2 point,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawTextLayoutAtCoordsWithBrush(
                        ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextLayout* textLayout,
                        FLOAT x,
                        FLOAT y,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawTextLayoutWithColor(
                        ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextLayout* textLayout,
                        ABI::Windows::Foundation::Numerics::Vector2 point,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawTextLayoutAtCoordsWithColor(
                        ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextLayout* textLayout,
                        FLOAT x,
                        FLOAT y,
                        ABI::Windows::UI::Color color
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawGradientMeshAtOrigin(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMesh* gradientMesh
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawGradientMesh(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMesh* gradientMesh,
                        ABI::Windows::Foundation::Numerics::Vector2 point
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawGradientMeshAtCoords(
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMesh* gradientMesh,
                        FLOAT x,
                        FLOAT y
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawSvgAtOrigin(
                        ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument* svgDocument,
                        ABI::Windows::Foundation::Size viewportSize
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawSvgAtPoint(
                        ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument* svgDocument,
                        ABI::Windows::Foundation::Size viewportSize,
                        ABI::Windows::Foundation::Numerics::Vector2 point
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawSvgAtCoords(
                        ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument* svgDocument,
                        ABI::Windows::Foundation::Size viewportSize,
                        FLOAT x,
                        FLOAT y
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Antialiasing(
                        ABI::Microsoft::Graphics::Canvas::CanvasAntialiasing* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_Antialiasing(
                        ABI::Microsoft::Graphics::Canvas::CanvasAntialiasing value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Blend(
                        ABI::Microsoft::Graphics::Canvas::CanvasBlend* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_Blend(
                        ABI::Microsoft::Graphics::Canvas::CanvasBlend value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_TextAntialiasing(
                        ABI::Microsoft::Graphics::Canvas::Text::CanvasTextAntialiasing* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_TextAntialiasing(
                        ABI::Microsoft::Graphics::Canvas::Text::CanvasTextAntialiasing value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_TextRenderingParameters(
                        ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParameters** value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_TextRenderingParameters(
                        ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParameters* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Transform(
                        ABI::Windows::Foundation::Numerics::Matrix3x2* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_Transform(
                        ABI::Windows::Foundation::Numerics::Matrix3x2 value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Units(
                        ABI::Microsoft::Graphics::Canvas::CanvasUnits* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_Units(
                        ABI::Microsoft::Graphics::Canvas::CanvasUnits value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_EffectBufferPrecision(
                        __FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision** value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_EffectBufferPrecision(
                        __FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_EffectTileSize(
                        ABI::Windows::Graphics::Imaging::BitmapSize* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_EffectTileSize(
                        ABI::Windows::Graphics::Imaging::BitmapSize value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateLayerWithOpacity(
                        FLOAT opacity,
                        ABI::Microsoft::Graphics::Canvas::ICanvasActiveLayer** layer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateLayerWithOpacityBrush(
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* opacityBrush,
                        ABI::Microsoft::Graphics::Canvas::ICanvasActiveLayer** layer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateLayerWithOpacityAndClipRectangle(
                        FLOAT opacity,
                        ABI::Windows::Foundation::Rect clipRectangle,
                        ABI::Microsoft::Graphics::Canvas::ICanvasActiveLayer** layer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateLayerWithOpacityBrushAndClipRectangle(
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* opacityBrush,
                        ABI::Windows::Foundation::Rect clipRectangle,
                        ABI::Microsoft::Graphics::Canvas::ICanvasActiveLayer** layer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateLayerWithOpacityAndClipGeometry(
                        FLOAT opacity,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* clipGeometry,
                        ABI::Microsoft::Graphics::Canvas::ICanvasActiveLayer** layer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateLayerWithOpacityBrushAndClipGeometry(
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* opacityBrush,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* clipGeometry,
                        ABI::Microsoft::Graphics::Canvas::ICanvasActiveLayer** layer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateLayerWithOpacityAndClipGeometryAndTransform(
                        FLOAT opacity,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* clipGeometry,
                        ABI::Windows::Foundation::Numerics::Matrix3x2 geometryTransform,
                        ABI::Microsoft::Graphics::Canvas::ICanvasActiveLayer** layer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateLayerWithOpacityBrushAndClipGeometryAndTransform(
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* opacityBrush,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* clipGeometry,
                        ABI::Windows::Foundation::Numerics::Matrix3x2 geometryTransform,
                        ABI::Microsoft::Graphics::Canvas::ICanvasActiveLayer** layer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateLayerWithAllOptions(
                        FLOAT opacity,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* opacityBrush,
                        ABI::Windows::Foundation::Rect clipRectangle,
                        ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* clipGeometry,
                        ABI::Windows::Foundation::Numerics::Matrix3x2 geometryTransform,
                        ABI::Microsoft::Graphics::Canvas::CanvasLayerOptions options,
                        ABI::Microsoft::Graphics::Canvas::ICanvasActiveLayer** layer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawGlyphRun(
                        ABI::Windows::Foundation::Numerics::Vector2 point,
                        ABI::Microsoft::Graphics::Canvas::Text::ICanvasFontFace* fontFace,
                        FLOAT fontSize,
                        UINT32 glyphsLength,
                        ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyph* glyphs,
                        boolean isSideways,
                        UINT32 bidiLevel,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawGlyphRunWithMeasuringMode(
                        ABI::Windows::Foundation::Numerics::Vector2 point,
                        ABI::Microsoft::Graphics::Canvas::Text::ICanvasFontFace* fontFace,
                        FLOAT fontSize,
                        UINT32 glyphsLength,
                        ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyph* glyphs,
                        boolean isSideways,
                        UINT32 bidiLevel,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        ABI::Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode measuringMode
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawGlyphRunWithMeasuringModeAndDescription(
                        ABI::Windows::Foundation::Numerics::Vector2 point,
                        ABI::Microsoft::Graphics::Canvas::Text::ICanvasFontFace* fontFace,
                        FLOAT fontSize,
                        UINT32 glyphsLength,
                        ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyph* glyphs,
                        boolean isSideways,
                        UINT32 bidiLevel,
                        ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush,
                        ABI::Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode measuringMode,
                        HSTRING localeName,
                        HSTRING textString,
                        UINT32 clusterMapIndicesLength,
                        INT32* clusterMapIndices,
                        UINT32 textPosition
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateSpriteBatch(
                        ABI::Microsoft::Graphics::Canvas::ICanvasSpriteBatch** spriteBatch
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateSpriteBatchWithSortMode(
                        ABI::Microsoft::Graphics::Canvas::CanvasSpriteSortMode sortMode,
                        ABI::Microsoft::Graphics::Canvas::ICanvasSpriteBatch** spriteBatch
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateSpriteBatchWithSortModeAndInterpolation(
                        ABI::Microsoft::Graphics::Canvas::CanvasSpriteSortMode sortMode,
                        ABI::Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation,
                        ABI::Microsoft::Graphics::Canvas::ICanvasSpriteBatch** spriteBatch
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateSpriteBatchWithSortModeAndInterpolationAndOptions(
                        ABI::Microsoft::Graphics::Canvas::CanvasSpriteSortMode sortMode,
                        ABI::Microsoft::Graphics::Canvas::CanvasImageInterpolation interpolation,
                        ABI::Microsoft::Graphics::Canvas::CanvasSpriteOptions options,
                        ABI::Microsoft::Graphics::Canvas::ICanvasSpriteBatch** spriteBatch
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_ICanvasDrawingSession = _uuidof(ICanvasDrawingSession);
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasImage
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Effects.IGraphicsEffectSource
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasImage[] = L"Microsoft.Graphics.Canvas.ICanvasImage";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                MIDL_INTERFACE("794966d3-6a64-47e9-8da8-b46aaa24d53b")
                ICanvasImage : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE GetBounds(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Foundation::Rect* bounds
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetBoundsWithTransform(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Foundation::Numerics::Matrix3x2 transform,
                        ABI::Windows::Foundation::Rect* bounds
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_ICanvasImage = _uuidof(ICanvasImage);
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasImageStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasImage
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasImageStatics[] = L"Microsoft.Graphics.Canvas.ICanvasImageStatics";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                MIDL_INTERFACE("c54eea15-5a14-489a-8fa0-6e84541f922d")
                ICanvasImageStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE SaveAsync(
                        ABI::Microsoft::Graphics::Canvas::ICanvasImage* image,
                        ABI::Windows::Foundation::Rect sourceRectangle,
                        FLOAT dpi,
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Storage::Streams::IRandomAccessStream* stream,
                        ABI::Microsoft::Graphics::Canvas::CanvasBitmapFileFormat fileFormat,
                        ABI::Windows::Foundation::IAsyncAction** action
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SaveWithQualityAsync(
                        ABI::Microsoft::Graphics::Canvas::ICanvasImage* image,
                        ABI::Windows::Foundation::Rect sourceRectangle,
                        FLOAT dpi,
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Storage::Streams::IRandomAccessStream* stream,
                        ABI::Microsoft::Graphics::Canvas::CanvasBitmapFileFormat fileFormat,
                        FLOAT quality,
                        ABI::Windows::Foundation::IAsyncAction** action
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SaveWithQualityAndBufferPrecisionAsync(
                        ABI::Microsoft::Graphics::Canvas::ICanvasImage* image,
                        ABI::Windows::Foundation::Rect sourceRectangle,
                        FLOAT dpi,
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Storage::Streams::IRandomAccessStream* stream,
                        ABI::Microsoft::Graphics::Canvas::CanvasBitmapFileFormat fileFormat,
                        FLOAT quality,
                        ABI::Microsoft::Graphics::Canvas::CanvasBufferPrecision bufferPrecision,
                        ABI::Windows::Foundation::IAsyncAction** action
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ComputeHistogram(
                        ABI::Microsoft::Graphics::Canvas::ICanvasImage* image,
                        ABI::Windows::Foundation::Rect sourceRectangle,
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Microsoft::Graphics::Canvas::Effects::EffectChannelSelect channelSelect,
                        INT32 numberOfBins,
                        UINT32* valueElementsLength,
                        FLOAT** valueElements
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsHistogramSupported(
                        ABI::Microsoft::Graphics::Canvas::ICanvasDevice* device,
                        boolean* result
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_ICanvasImageStatics = _uuidof(ICanvasImageStatics);
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasLock
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasLock
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasLock[] = L"Microsoft.Graphics.Canvas.ICanvasLock";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                MIDL_INTERFACE("7a0e8498-fba9-4fb0-aa8c-6a48b5ee3e4f")
                ICanvasLock : public IInspectable
                {
                public:
                };

                extern MIDL_CONST_ID IID& IID_ICanvasLock = _uuidof(ICanvasLock);
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasRenderTarget
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasRenderTarget
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasRenderTarget[] = L"Microsoft.Graphics.Canvas.ICanvasRenderTarget";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                MIDL_INTERFACE("2d4c7349-9a32-41b9-b3cc-caf1b7e1099b")
                ICanvasRenderTarget : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE CreateDrawingSession(
                        ABI::Microsoft::Graphics::Canvas::ICanvasDrawingSession** drawingSession
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_ICanvasRenderTarget = _uuidof(ICanvasRenderTarget);
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasRenderTargetFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasRenderTarget
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasRenderTargetFactory[] = L"Microsoft.Graphics.Canvas.ICanvasRenderTargetFactory";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                MIDL_INTERFACE("620dfdbb-9d08-406c-bfe6-d9b81e6df8e7")
                ICanvasRenderTargetFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE CreateWithSize(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi* resourceCreator,
                        ABI::Windows::Foundation::Size size,
                        ABI::Microsoft::Graphics::Canvas::ICanvasRenderTarget** renderTarget
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithWidthAndHeight(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi* resourceCreator,
                        FLOAT width,
                        FLOAT height,
                        ABI::Microsoft::Graphics::Canvas::ICanvasRenderTarget** renderTarget
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithWidthAndHeightAndDpi(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        FLOAT width,
                        FLOAT height,
                        FLOAT dpi,
                        ABI::Microsoft::Graphics::Canvas::ICanvasRenderTarget** renderTarget
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithWidthAndHeightAndDpiAndFormatAndAlpha(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        FLOAT width,
                        FLOAT height,
                        FLOAT dpi,
                        ABI::Windows::Graphics::DirectX::DirectXPixelFormat format,
                        ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode alpha,
                        ABI::Microsoft::Graphics::Canvas::ICanvasRenderTarget** renderTarget
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_ICanvasRenderTargetFactory = _uuidof(ICanvasRenderTargetFactory);
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasRenderTargetStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasRenderTarget
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasRenderTargetStatics[] = L"Microsoft.Graphics.Canvas.ICanvasRenderTargetStatics";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                MIDL_INTERFACE("c7d1fe37-dd57-45d7-bcc1-15625a21e8d5")
                ICanvasRenderTargetStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE CreateFromDirect3D11Surface(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface* surface,
                        ABI::Microsoft::Graphics::Canvas::ICanvasRenderTarget** bitmap
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromDirect3D11SurfaceWithDpi(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface* surface,
                        FLOAT dpi,
                        ABI::Microsoft::Graphics::Canvas::ICanvasRenderTarget** bitmap
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromDirect3D11SurfaceWithDpiAndAlpha(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface* surface,
                        FLOAT dpi,
                        ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode alpha,
                        ABI::Microsoft::Graphics::Canvas::ICanvasRenderTarget** bitmap
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_ICanvasRenderTargetStatics = _uuidof(ICanvasRenderTargetStatics);
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasResourceCreator[] = L"Microsoft.Graphics.Canvas.ICanvasResourceCreator";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                MIDL_INTERFACE("8f6d8aa8-492f-4bc6-b3d0-e7f5eae84b11")
                ICanvasResourceCreator : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_Device(
                        ABI::Microsoft::Graphics::Canvas::ICanvasDevice** value
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_ICanvasResourceCreator = _uuidof(ICanvasResourceCreator);
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasResourceCreatorWithDpi[] = L"Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                MIDL_INTERFACE("1a75b512-e9fa-49e6-a876-38cae194013e")
                ICanvasResourceCreatorWithDpi : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_Dpi(
                        FLOAT* dpi
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ConvertPixelsToDips(
                        INT32 pixels,
                        FLOAT* dips
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ConvertDipsToPixels(
                        FLOAT dips,
                        ABI::Microsoft::Graphics::Canvas::CanvasDpiRounding dpiRounding,
                        INT32* pixels
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_ICanvasResourceCreatorWithDpi = _uuidof(ICanvasResourceCreatorWithDpi);
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasSpriteBatch
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasSpriteBatch
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasSpriteBatch[] = L"Microsoft.Graphics.Canvas.ICanvasSpriteBatch";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                MIDL_INTERFACE("a065dce4-a7f2-4df4-8405-ea9e3a215bf8")
                ICanvasSpriteBatch : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE DrawToRect(
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap* bitmap,
                        ABI::Windows::Foundation::Rect destRect
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawAtOffset(
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap* bitmap,
                        ABI::Windows::Foundation::Numerics::Vector2 offset
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawWithTransform(
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap* bitmap,
                        ABI::Windows::Foundation::Numerics::Matrix3x2 transform
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawToRectWithTint(
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap* bitmap,
                        ABI::Windows::Foundation::Rect destRect,
                        ABI::Windows::Foundation::Numerics::Vector4 tint
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawAtOffsetWithTint(
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap* bitmap,
                        ABI::Windows::Foundation::Numerics::Vector2 offset,
                        ABI::Windows::Foundation::Numerics::Vector4 tint
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawWithTransformAndTint(
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap* bitmap,
                        ABI::Windows::Foundation::Numerics::Matrix3x2 transform,
                        ABI::Windows::Foundation::Numerics::Vector4 tint
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawToRectWithTintAndFlip(
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap* bitmap,
                        ABI::Windows::Foundation::Rect destRect,
                        ABI::Windows::Foundation::Numerics::Vector4 tint,
                        ABI::Microsoft::Graphics::Canvas::CanvasSpriteFlip flip
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawWithTransformAndTintAndFlip(
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap* bitmap,
                        ABI::Windows::Foundation::Numerics::Matrix3x2 transform,
                        ABI::Windows::Foundation::Numerics::Vector4 tint,
                        ABI::Microsoft::Graphics::Canvas::CanvasSpriteFlip flip
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawAtOffsetWithTintAndTransform(
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap* bitmap,
                        ABI::Windows::Foundation::Numerics::Vector2 offset,
                        ABI::Windows::Foundation::Numerics::Vector4 tint,
                        ABI::Windows::Foundation::Numerics::Vector2 origin,
                        FLOAT rotation,
                        ABI::Windows::Foundation::Numerics::Vector2 scale,
                        ABI::Microsoft::Graphics::Canvas::CanvasSpriteFlip flip
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawFromSpriteSheetToRect(
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap* bitmap,
                        ABI::Windows::Foundation::Rect destRect,
                        ABI::Windows::Foundation::Rect sourceRect
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawFromSpriteSheetAtOffset(
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap* bitmap,
                        ABI::Windows::Foundation::Numerics::Vector2 offset,
                        ABI::Windows::Foundation::Rect sourceRect
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawFromSpriteSheetWithTransform(
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap* bitmap,
                        ABI::Windows::Foundation::Numerics::Matrix3x2 transform,
                        ABI::Windows::Foundation::Rect sourceRect
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawFromSpriteSheetToRectWithTint(
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap* bitmap,
                        ABI::Windows::Foundation::Rect destRect,
                        ABI::Windows::Foundation::Rect sourceRect,
                        ABI::Windows::Foundation::Numerics::Vector4 tint
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawFromSpriteSheetAtOffsetWithTint(
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap* bitmap,
                        ABI::Windows::Foundation::Numerics::Vector2 offset,
                        ABI::Windows::Foundation::Rect sourceRect,
                        ABI::Windows::Foundation::Numerics::Vector4 tint
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawFromSpriteSheetWithTransformAndTint(
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap* bitmap,
                        ABI::Windows::Foundation::Numerics::Matrix3x2 transform,
                        ABI::Windows::Foundation::Rect sourceRect,
                        ABI::Windows::Foundation::Numerics::Vector4 tint
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawFromSpriteSheetToRectWithTintAndFlip(
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap* bitmap,
                        ABI::Windows::Foundation::Rect destRect,
                        ABI::Windows::Foundation::Rect sourceRect,
                        ABI::Windows::Foundation::Numerics::Vector4 tint,
                        ABI::Microsoft::Graphics::Canvas::CanvasSpriteFlip flip
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawFromSpriteSheetWithTransformAndTintAndFlip(
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap* bitmap,
                        ABI::Windows::Foundation::Numerics::Matrix3x2 transform,
                        ABI::Windows::Foundation::Rect sourceRect,
                        ABI::Windows::Foundation::Numerics::Vector4 tint,
                        ABI::Microsoft::Graphics::Canvas::CanvasSpriteFlip flip
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DrawFromSpriteSheetAtOffsetWithTintAndTransform(
                        ABI::Microsoft::Graphics::Canvas::ICanvasBitmap* bitmap,
                        ABI::Windows::Foundation::Numerics::Vector2 offset,
                        ABI::Windows::Foundation::Rect sourceRect,
                        ABI::Windows::Foundation::Numerics::Vector4 tint,
                        ABI::Windows::Foundation::Numerics::Vector2 origin,
                        FLOAT rotation,
                        ABI::Windows::Foundation::Numerics::Vector2 scale,
                        ABI::Microsoft::Graphics::Canvas::CanvasSpriteFlip flip
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_ICanvasSpriteBatch = _uuidof(ICanvasSpriteBatch);
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasSpriteBatchStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasSpriteBatch
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasSpriteBatchStatics[] = L"Microsoft.Graphics.Canvas.ICanvasSpriteBatchStatics";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                MIDL_INTERFACE("851eb08d-9d01-4b57-9e94-24113151b74b")
                ICanvasSpriteBatchStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE IsSupported(
                        ABI::Microsoft::Graphics::Canvas::ICanvasDevice* device,
                        boolean* value
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_ICanvasSpriteBatchStatics = _uuidof(ICanvasSpriteBatchStatics);
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasSwapChain
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasSwapChain
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasSwapChain[] = L"Microsoft.Graphics.Canvas.ICanvasSwapChain";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                MIDL_INTERFACE("882e3c3a-5725-409c-9e76-f80b3bacf1b4")
                ICanvasSwapChain : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Present(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE PresentWithSyncInterval(
                        INT32 syncInterval
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ResizeBuffersWithSize(
                        ABI::Windows::Foundation::Size newSize
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ResizeBuffersWithWidthAndHeight(
                        FLOAT newWidth,
                        FLOAT newHeight
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ResizeBuffersWithWidthAndHeightAndDpi(
                        FLOAT newWidth,
                        FLOAT newHeight,
                        FLOAT newDpi
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ResizeBuffersWithAllOptions(
                        FLOAT newWidth,
                        FLOAT newHeight,
                        FLOAT newDpi,
                        ABI::Windows::Graphics::DirectX::DirectXPixelFormat newFormat,
                        INT32 bufferCount
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Size(
                        ABI::Windows::Foundation::Size* size
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_SizeInPixels(
                        ABI::Windows::Graphics::Imaging::BitmapSize* size
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Format(
                        ABI::Windows::Graphics::DirectX::DirectXPixelFormat* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_BufferCount(
                        INT32* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_AlphaMode(
                        ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Rotation(
                        ABI::Microsoft::Graphics::Canvas::CanvasSwapChainRotation* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_Rotation(
                        ABI::Microsoft::Graphics::Canvas::CanvasSwapChainRotation value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_SourceSize(
                        ABI::Windows::Foundation::Size* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_SourceSize(
                        ABI::Windows::Foundation::Size value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_TransformMatrix(
                        ABI::Windows::Foundation::Numerics::Matrix3x2* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_TransformMatrix(
                        ABI::Windows::Foundation::Numerics::Matrix3x2 value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateDrawingSession(
                        ABI::Windows::UI::Color clearColor,
                        ABI::Microsoft::Graphics::Canvas::ICanvasDrawingSession** drawingSession
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE WaitForVerticalBlank(void) = 0;
                };

                extern MIDL_CONST_ID IID& IID_ICanvasSwapChain = _uuidof(ICanvasSwapChain);
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasSwapChainFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasSwapChain
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasSwapChainFactory[] = L"Microsoft.Graphics.Canvas.ICanvasSwapChainFactory";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                MIDL_INTERFACE("133c25cb-ed3c-492b-bffe-7509b521842b")
                ICanvasSwapChainFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE CreateWithSize(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi* resourceCreator,
                        ABI::Windows::Foundation::Size size,
                        ABI::Microsoft::Graphics::Canvas::ICanvasSwapChain** swapChain
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithWidthAndHeight(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi* resourceCreator,
                        FLOAT width,
                        FLOAT height,
                        ABI::Microsoft::Graphics::Canvas::ICanvasSwapChain** swapChain
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithWidthAndHeightAndDpi(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        FLOAT width,
                        FLOAT height,
                        FLOAT dpi,
                        ABI::Microsoft::Graphics::Canvas::ICanvasSwapChain** swapChain
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithAllOptions(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        FLOAT width,
                        FLOAT height,
                        FLOAT dpi,
                        ABI::Windows::Graphics::DirectX::DirectXPixelFormat format,
                        INT32 bufferCount,
                        ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode,
                        ABI::Microsoft::Graphics::Canvas::ICanvasSwapChain** swapChain
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_ICanvasSwapChainFactory = _uuidof(ICanvasSwapChainFactory);
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasSwapChainStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasSwapChain
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasSwapChainStatics[] = L"Microsoft.Graphics.Canvas.ICanvasSwapChainStatics";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                MIDL_INTERFACE("05376d8f-3e8d-4a82-9838-691680d32a52")
                ICanvasSwapChainStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE CreateForCoreWindowWithDpi(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::UI::Core::ICoreWindow* coreWindow,
                        FLOAT dpi,
                        ABI::Microsoft::Graphics::Canvas::ICanvasSwapChain** swapChain
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateForCoreWindowWithAllOptions(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::UI::Core::ICoreWindow* coreWindow,
                        FLOAT width,
                        FLOAT height,
                        FLOAT dpi,
                        ABI::Windows::Graphics::DirectX::DirectXPixelFormat format,
                        INT32 bufferCount,
                        ABI::Microsoft::Graphics::Canvas::ICanvasSwapChain** swapChain
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_ICanvasSwapChainStatics = _uuidof(ICanvasSwapChainStatics);
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasVirtualBitmap
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasVirtualBitmap
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *     Microsoft.Graphics.Canvas.ICanvasImage
 *     Windows.Graphics.Effects.IGraphicsEffectSource
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasVirtualBitmap[] = L"Microsoft.Graphics.Canvas.ICanvasVirtualBitmap";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                MIDL_INTERFACE("707d8bb0-05f9-484c-9ee2-179e0681c8a7")
                ICanvasVirtualBitmap : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_Device(
                        ABI::Microsoft::Graphics::Canvas::ICanvasDevice** value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_IsCachedOnDemand(
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_SizeInPixels(
                        ABI::Windows::Graphics::Imaging::BitmapSize* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Size(
                        ABI::Windows::Foundation::Size* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Bounds(
                        ABI::Windows::Foundation::Rect* value
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_ICanvasVirtualBitmap = _uuidof(ICanvasVirtualBitmap);
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasVirtualBitmapStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasVirtualBitmap
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasVirtualBitmapStatics[] = L"Microsoft.Graphics.Canvas.ICanvasVirtualBitmapStatics";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                MIDL_INTERFACE("b2f1f8e9-0770-4dd4-956d-78d911390957")
                ICanvasVirtualBitmapStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE LoadAsyncFromFileName(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        HSTRING fileName,
                        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap** value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LoadAsyncFromFileNameWithOptions(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        HSTRING fileName,
                        ABI::Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions options,
                        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap** value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LoadAsyncFromFileNameWithOptionsAndAlpha(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        HSTRING fileName,
                        ABI::Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions options,
                        ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode alpha,
                        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap** value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LoadAsyncFromUri(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Foundation::IUriRuntimeClass* uri,
                        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap** value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LoadAsyncFromUriWithOptions(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Foundation::IUriRuntimeClass* uri,
                        ABI::Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions options,
                        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap** value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LoadAsyncFromUriWithOptionsAndAlpha(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Foundation::IUriRuntimeClass* uri,
                        ABI::Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions options,
                        ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode alpha,
                        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap** value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LoadAsyncFromStream(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Storage::Streams::IRandomAccessStream* stream,
                        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap** value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LoadAsyncFromStreamWithOptions(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Storage::Streams::IRandomAccessStream* stream,
                        ABI::Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions options,
                        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap** value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LoadAsyncFromStreamWithOptionsAndAlpha(
                        ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                        ABI::Windows::Storage::Streams::IRandomAccessStream* stream,
                        ABI::Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions options,
                        ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode alpha,
                        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap** value
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_ICanvasVirtualBitmapStatics = _uuidof(ICanvasVirtualBitmapStatics);
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_INTERFACE_DEFINED__) */

/*
 *
 * Class Microsoft.Graphics.Canvas.CanvasActiveLayer
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.ICanvasActiveLayer ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasActiveLayer_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasActiveLayer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_CanvasActiveLayer[] = L"Microsoft.Graphics.Canvas.CanvasActiveLayer";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.CanvasBitmap
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.ICanvasBitmap ** Default Interface **
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *    Windows.Graphics.DirectX.Direct3D11.IDirect3DSurface
 *    Windows.Foundation.IClosable
 *    Microsoft.Graphics.Canvas.ICanvasImage
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasBitmap_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasBitmap_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_CanvasBitmap[] = L"Microsoft.Graphics.Canvas.CanvasBitmap";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.CanvasCommandList
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.ICanvasCommandList ** Default Interface **
 *    Microsoft.Graphics.Canvas.ICanvasImage
 *    Windows.Foundation.IClosable
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasCommandList_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasCommandList_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_CanvasCommandList[] = L"Microsoft.Graphics.Canvas.CanvasCommandList";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.CanvasDevice
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.ICanvasDevice ** Default Interface **
 *    Windows.Graphics.DirectX.Direct3D11.IDirect3DDevice
 *    Windows.Foundation.IClosable
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasDevice_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_CanvasDevice[] = L"Microsoft.Graphics.Canvas.CanvasDevice";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.CanvasDrawingSession
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.ICanvasDrawingSession ** Default Interface **
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasDrawingSession_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasDrawingSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_CanvasDrawingSession[] = L"Microsoft.Graphics.Canvas.CanvasDrawingSession";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.CanvasImage
 *
 * RuntimeClass contains static methods.
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasImage_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasImage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_CanvasImage[] = L"Microsoft.Graphics.Canvas.CanvasImage";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.CanvasLock
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.ICanvasLock ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasLock_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasLock_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_CanvasLock[] = L"Microsoft.Graphics.Canvas.CanvasLock";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.CanvasRenderTarget
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.ICanvasRenderTarget ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasRenderTarget_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasRenderTarget_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_CanvasRenderTarget[] = L"Microsoft.Graphics.Canvas.CanvasRenderTarget";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.CanvasSpriteBatch
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.ICanvasSpriteBatch ** Default Interface **
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasSpriteBatch_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasSpriteBatch_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_CanvasSpriteBatch[] = L"Microsoft.Graphics.Canvas.CanvasSpriteBatch";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.CanvasSwapChain
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.ICanvasSwapChain ** Default Interface **
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasSwapChain_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasSwapChain_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_CanvasSwapChain[] = L"Microsoft.Graphics.Canvas.CanvasSwapChain";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.CanvasVirtualBitmap
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.ICanvasVirtualBitmap ** Default Interface **
 *    Microsoft.Graphics.Canvas.ICanvasImage
 *    Windows.Foundation.IClosable
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasVirtualBitmap_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasVirtualBitmap_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_CanvasVirtualBitmap[] = L"Microsoft.Graphics.Canvas.CanvasVirtualBitmap";
#endif

#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

typedef interface __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap;

#if !defined(____FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap;

typedef struct __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmapVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* put_Completed)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap* This,
        __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap* handler);
    HRESULT (STDMETHODCALLTYPE* get_Completed)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap* This,
        __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap** result);
    HRESULT (STDMETHODCALLTYPE* GetResults)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap** result);

    END_INTERFACE
} __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmapVtbl;

interface __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap
{
    CONST_VTBL struct __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmapVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_put_Completed(This, handler) \
    ((This)->lpVtbl->put_Completed(This, handler))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_get_Completed(This, result) \
    ((This)->lpVtbl->get_Completed(This, result))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_GetResults(This, result) \
    ((This)->lpVtbl->GetResults(This, result))

#endif /* COBJMACROS */

#endif // ____FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_INTERFACE_DEFINED__

#if !defined(____FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap;

typedef struct __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmapVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap* This,
        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap* asyncInfo,
        AsyncStatus asyncStatus);

    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmapVtbl;

interface __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmapVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_Invoke(This, asyncInfo, asyncStatus) \
    ((This)->lpVtbl->Invoke(This, asyncInfo, asyncStatus))

#endif /* COBJMACROS */

#endif // ____FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap;

#if !defined(____FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap;

typedef struct __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmapVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* put_Completed)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap* This,
        __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap* handler);
    HRESULT (STDMETHODCALLTYPE* get_Completed)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap* This,
        __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap** result);
    HRESULT (STDMETHODCALLTYPE* GetResults)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap** result);

    END_INTERFACE
} __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmapVtbl;

interface __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap
{
    CONST_VTBL struct __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmapVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_put_Completed(This, handler) \
    ((This)->lpVtbl->put_Completed(This, handler))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_get_Completed(This, result) \
    ((This)->lpVtbl->get_Completed(This, result))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_GetResults(This, result) \
    ((This)->lpVtbl->GetResults(This, result))

#endif /* COBJMACROS */

#endif // ____FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_INTERFACE_DEFINED__

#if !defined(____FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap;

typedef struct __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmapVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap* This,
        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap* asyncInfo,
        AsyncStatus asyncStatus);

    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmapVtbl;

interface __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmapVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_Invoke(This, asyncInfo, asyncStatus) \
    ((This)->lpVtbl->Invoke(This, asyncInfo, asyncStatus))

#endif /* COBJMACROS */

#endif // ____FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap_INTERFACE_DEFINED__

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBufferPrecision __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBufferPrecision;

#if !defined(____FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision_INTERFACE_DEFINED__)
#define ____FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision_INTERFACE_DEFINED__

typedef interface __FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision __FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision;

typedef struct __FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecisionVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Value)(__FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBufferPrecision* result);

    END_INTERFACE
} __FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecisionVtbl;

interface __FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision
{
    CONST_VTBL struct __FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecisionVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision_get_Value(This, result) \
    ((This)->lpVtbl->get_Value(This, result))

#endif /* COBJMACROS */

#endif // ____FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision_INTERFACE_DEFINED__

#if !defined(____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CCanvasDevice_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CCanvasDevice_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CCanvasDevice_IInspectable __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CCanvasDevice_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CCanvasDevice_IInspectable;

typedef struct __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CCanvasDevice_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CCanvasDevice_IInspectable* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CCanvasDevice_IInspectable* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CCanvasDevice_IInspectable* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CCanvasDevice_IInspectable* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice* sender,
        IInspectable* args);

    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CCanvasDevice_IInspectableVtbl;

interface __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CCanvasDevice_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CCanvasDevice_IInspectableVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CCanvasDevice_IInspectable_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CCanvasDevice_IInspectable_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CCanvasDevice_IInspectable_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CCanvasDevice_IInspectable_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CCanvasDevice_IInspectable_INTERFACE_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_FWD_DEFINED__

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CEffects_CEffectChannelSelect __x_ABI_CMicrosoft_CGraphics_CCanvas_CEffects_CEffectChannelSelect;

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_FWD_DEFINED__

typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyph __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyph;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextAntialiasing __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextAntialiasing;

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_FWD_DEFINED__

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextMeasuringMode __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextMeasuringMode;

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIPropertyValue_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIPropertyValue_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIPropertyValue __x_ABI_CWindows_CFoundation_CIPropertyValue;

#endif // ____x_ABI_CWindows_CFoundation_CIPropertyValue_FWD_DEFINED__

typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2;

typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4;

typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 __x_ABI_CWindows_CFoundation_CNumerics_CVector2;

typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 __x_ABI_CWindows_CFoundation_CNumerics_CVector4;

typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;

typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice;

#endif // ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface;

#endif // ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__

typedef enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat;

#ifndef ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource;

#endif // ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_FWD_DEFINED__

typedef struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize;

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap;

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__

typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindow __x_ABI_CWindows_CUI_CCore_CICoreWindow;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAntialiasing __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAntialiasing;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBitmapFileFormat __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBitmapFileFormat;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBlend __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBlend;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasComposite __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasComposite;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasDebugLevel __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasDebugLevel;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasDpiRounding __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasDpiRounding;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasImageInterpolation __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasImageInterpolation;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasLayerOptions __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasLayerOptions;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasSpriteFlip __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasSpriteFlip;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasSpriteOptions __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasSpriteOptions;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasSpriteSortMode __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasSpriteSortMode;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasSwapChainRotation __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasSwapChainRotation;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasUnits __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasUnits;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasVirtualBitmapOptions __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasVirtualBitmapOptions;

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasAlphaMode
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode
{
    CanvasAlphaMode_Premultiplied = 0,
    CanvasAlphaMode_Straight = 1,
    CanvasAlphaMode_Ignore = 2,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasAntialiasing
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAntialiasing
{
    CanvasAntialiasing_Antialiased = 0,
    CanvasAntialiasing_Aliased = 1,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasBitmapFileFormat
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBitmapFileFormat
{
    CanvasBitmapFileFormat_Auto = 0,
    CanvasBitmapFileFormat_Bmp = 1,
    CanvasBitmapFileFormat_Png = 2,
    CanvasBitmapFileFormat_Jpeg = 3,
    CanvasBitmapFileFormat_Tiff = 4,
    CanvasBitmapFileFormat_Gif = 5,
    CanvasBitmapFileFormat_JpegXR = 6,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasBlend
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBlend
{
    CanvasBlend_SourceOver = 0,
    CanvasBlend_Copy = 1,
    CanvasBlend_Min = 2,
    CanvasBlend_Add = 3,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasBufferPrecision
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBufferPrecision
{
    CanvasBufferPrecision_Precision8UIntNormalized = 0,
    CanvasBufferPrecision_Precision8UIntNormalizedSrgb = 1,
    CanvasBufferPrecision_Precision16UIntNormalized = 2,
    CanvasBufferPrecision_Precision16Float = 3,
    CanvasBufferPrecision_Precision32Float = 4,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasColorSpace
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasColorSpace
{
    CanvasColorSpace_Custom = 0,
    CanvasColorSpace_Srgb = 1,
    CanvasColorSpace_ScRgb = 2,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasComposite
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasComposite
{
    CanvasComposite_SourceOver = 0,
    CanvasComposite_DestinationOver = 1,
    CanvasComposite_SourceIn = 2,
    CanvasComposite_DestinationIn = 3,
    CanvasComposite_SourceOut = 4,
    CanvasComposite_DestinationOut = 5,
    CanvasComposite_SourceAtop = 6,
    CanvasComposite_DestinationAtop = 7,
    CanvasComposite_Xor = 8,
    CanvasComposite_Add = 9,
    CanvasComposite_Copy = 10,
    CanvasComposite_BoundedCopy = 11,
    CanvasComposite_MaskInvert = 12,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasDebugLevel
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasDebugLevel
{
    CanvasDebugLevel_None = 0,
    CanvasDebugLevel_Error = 1,
    CanvasDebugLevel_Warning = 2,
    CanvasDebugLevel_Information = 3,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasDpiRounding
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasDpiRounding
{
    CanvasDpiRounding_Floor = 0,
    CanvasDpiRounding_Round = 1,
    CanvasDpiRounding_Ceiling = 2,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasEdgeBehavior
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasEdgeBehavior
{
    CanvasEdgeBehavior_Clamp = 0,
    CanvasEdgeBehavior_Wrap = 1,
    CanvasEdgeBehavior_Mirror = 2,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasImageInterpolation
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasImageInterpolation
{
    CanvasImageInterpolation_NearestNeighbor = 0,
    CanvasImageInterpolation_Linear = 1,
    CanvasImageInterpolation_Cubic = 2,
    CanvasImageInterpolation_MultiSampleLinear = 3,
    CanvasImageInterpolation_Anisotropic = 4,
    CanvasImageInterpolation_HighQualityCubic = 5,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasLayerOptions
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasLayerOptions
{
    CanvasLayerOptions_None = 0,
    CanvasLayerOptions_InitializeFromBackground = 0x1,
    CanvasLayerOptions_IgnoreAlpha = 0x2,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasSpriteFlip
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasSpriteFlip
{
    CanvasSpriteFlip_None = 0,
    CanvasSpriteFlip_Horizontal = 0x1,
    CanvasSpriteFlip_Vertical = 0x2,
    CanvasSpriteFlip_Both = 0x3,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasSpriteOptions
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasSpriteOptions
{
    CanvasSpriteOptions_None = 0,
    CanvasSpriteOptions_ClampToSourceRect = 0x1,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasSpriteSortMode
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasSpriteSortMode
{
    CanvasSpriteSortMode_None = 0,
    CanvasSpriteSortMode_Bitmap = 1,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasSwapChainRotation
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasSwapChainRotation
{
    CanvasSwapChainRotation_None = 0,
    CanvasSwapChainRotation_Rotate90 = 1,
    CanvasSwapChainRotation_Rotate180 = 2,
    CanvasSwapChainRotation_Rotate270 = 3,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasUnits
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasUnits
{
    CanvasUnits_Dips = 0,
    CanvasUnits_Pixels = 1,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.CanvasVirtualBitmapOptions
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasVirtualBitmapOptions
{
    CanvasVirtualBitmapOptions_None = 0,
    CanvasVirtualBitmapOptions_ReleaseSource = 1,
    CanvasVirtualBitmapOptions_CacheOnDemand = 2,
};

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasActiveLayer
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasActiveLayer
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasActiveLayer[] = L"Microsoft.Graphics.Canvas.ICanvasActiveLayer";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayerVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer* This,
        TrustLevel* trustLevel);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayerVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayerVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasBitmap
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasBitmap
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Microsoft.Graphics.Canvas.ICanvasImage
 *     Windows.Graphics.Effects.IGraphicsEffectSource
 *     Windows.Foundation.IClosable
 *     Windows.Graphics.DirectX.Direct3D11.IDirect3DSurface
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasBitmap[] = L"Microsoft.Graphics.Canvas.ICanvasBitmap";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_SizeInPixels)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize* size);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        struct __x_ABI_CWindows_CFoundation_CSize* size);
    HRESULT (STDMETHODCALLTYPE* get_Bounds)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        struct __x_ABI_CWindows_CFoundation_CRect* bounds);
    HRESULT (STDMETHODCALLTYPE* get_Format)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat* value);
    HRESULT (STDMETHODCALLTYPE* get_AlphaMode)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode* value);
    HRESULT (STDMETHODCALLTYPE* SaveToFileAsync)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        HSTRING fileName,
        __x_ABI_CWindows_CFoundation_CIAsyncAction** asyncAction);
    HRESULT (STDMETHODCALLTYPE* SaveToFileWithBitmapFileFormatAsync)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        HSTRING fileName,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBitmapFileFormat fileFormat,
        __x_ABI_CWindows_CFoundation_CIAsyncAction** asyncAction);
    HRESULT (STDMETHODCALLTYPE* SaveToFileWithBitmapFileFormatAndQualityAsync)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        HSTRING fileName,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBitmapFileFormat fileFormat,
        FLOAT quality,
        __x_ABI_CWindows_CFoundation_CIAsyncAction** asyncAction);
    HRESULT (STDMETHODCALLTYPE* SaveToStreamAsync)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream* stream,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBitmapFileFormat fileFormat,
        __x_ABI_CWindows_CFoundation_CIAsyncAction** asyncAction);
    HRESULT (STDMETHODCALLTYPE* SaveToStreamWithQualityAsync)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream* stream,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBitmapFileFormat fileFormat,
        FLOAT quality,
        __x_ABI_CWindows_CFoundation_CIAsyncAction** asyncAction);
    HRESULT (STDMETHODCALLTYPE* GetPixelBytes)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        UINT32* valueElementsLength,
        BYTE** valueElements);
    HRESULT (STDMETHODCALLTYPE* GetPixelBytesWithSubrectangle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        INT32 left,
        INT32 top,
        INT32 width,
        INT32 height,
        UINT32* valueElementsLength,
        BYTE** valueElements);
    HRESULT (STDMETHODCALLTYPE* GetPixelBytesWithBuffer)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer* buffer);
    HRESULT (STDMETHODCALLTYPE* GetPixelBytesWithBufferAndSubrectangle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer* buffer,
        INT32 left,
        INT32 top,
        INT32 width,
        INT32 height);
    HRESULT (STDMETHODCALLTYPE* GetPixelColors)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        UINT32* valueElementsLength,
        struct __x_ABI_CWindows_CUI_CColor** valueElements);
    HRESULT (STDMETHODCALLTYPE* GetPixelColorsWithSubrectangle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        INT32 left,
        INT32 top,
        INT32 width,
        INT32 height,
        UINT32* valueElementsLength,
        struct __x_ABI_CWindows_CUI_CColor** valueElements);
    HRESULT (STDMETHODCALLTYPE* SetPixelBytes)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        UINT32 valueElementsLength,
        BYTE* valueElements);
    HRESULT (STDMETHODCALLTYPE* SetPixelBytesWithSubrectangle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        UINT32 valueElementsLength,
        BYTE* valueElements,
        INT32 left,
        INT32 top,
        INT32 width,
        INT32 height);
    HRESULT (STDMETHODCALLTYPE* SetPixelBytesWithBuffer)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer* buffer);
    HRESULT (STDMETHODCALLTYPE* SetPixelBytesWithBufferAndSubrectangle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer* buffer,
        INT32 left,
        INT32 top,
        INT32 width,
        INT32 height);
    HRESULT (STDMETHODCALLTYPE* SetPixelColors)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        UINT32 valueElementsLength,
        struct __x_ABI_CWindows_CUI_CColor* valueElements);
    HRESULT (STDMETHODCALLTYPE* SetPixelColorsWithSubrectangle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        UINT32 valueElementsLength,
        struct __x_ABI_CWindows_CUI_CColor* valueElements,
        INT32 left,
        INT32 top,
        INT32 width,
        INT32 height);
    HRESULT (STDMETHODCALLTYPE* CopyPixelsFromBitmap)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* otherBitmap);
    HRESULT (STDMETHODCALLTYPE* CopyPixelsFromBitmapWithDestPoint)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* otherBitmap,
        INT32 destX,
        INT32 destY);
    HRESULT (STDMETHODCALLTYPE* CopyPixelsFromBitmapWithDestPointAndSourceRect)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* otherBitmap,
        INT32 destX,
        INT32 destY,
        INT32 sourceRectLeft,
        INT32 sourceRectTop,
        INT32 sourceRectWidth,
        INT32 sourceRectHeight);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_get_SizeInPixels(This, size) \
    ((This)->lpVtbl->get_SizeInPixels(This, size))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_get_Size(This, size) \
    ((This)->lpVtbl->get_Size(This, size))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_get_Bounds(This, bounds) \
    ((This)->lpVtbl->get_Bounds(This, bounds))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_get_Format(This, value) \
    ((This)->lpVtbl->get_Format(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_get_AlphaMode(This, value) \
    ((This)->lpVtbl->get_AlphaMode(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_SaveToFileAsync(This, fileName, asyncAction) \
    ((This)->lpVtbl->SaveToFileAsync(This, fileName, asyncAction))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_SaveToFileWithBitmapFileFormatAsync(This, fileName, fileFormat, asyncAction) \
    ((This)->lpVtbl->SaveToFileWithBitmapFileFormatAsync(This, fileName, fileFormat, asyncAction))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_SaveToFileWithBitmapFileFormatAndQualityAsync(This, fileName, fileFormat, quality, asyncAction) \
    ((This)->lpVtbl->SaveToFileWithBitmapFileFormatAndQualityAsync(This, fileName, fileFormat, quality, asyncAction))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_SaveToStreamAsync(This, stream, fileFormat, asyncAction) \
    ((This)->lpVtbl->SaveToStreamAsync(This, stream, fileFormat, asyncAction))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_SaveToStreamWithQualityAsync(This, stream, fileFormat, quality, asyncAction) \
    ((This)->lpVtbl->SaveToStreamWithQualityAsync(This, stream, fileFormat, quality, asyncAction))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_GetPixelBytes(This, valueElementsLength, valueElements) \
    ((This)->lpVtbl->GetPixelBytes(This, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_GetPixelBytesWithSubrectangle(This, left, top, width, height, valueElementsLength, valueElements) \
    ((This)->lpVtbl->GetPixelBytesWithSubrectangle(This, left, top, width, height, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_GetPixelBytesWithBuffer(This, buffer) \
    ((This)->lpVtbl->GetPixelBytesWithBuffer(This, buffer))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_GetPixelBytesWithBufferAndSubrectangle(This, buffer, left, top, width, height) \
    ((This)->lpVtbl->GetPixelBytesWithBufferAndSubrectangle(This, buffer, left, top, width, height))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_GetPixelColors(This, valueElementsLength, valueElements) \
    ((This)->lpVtbl->GetPixelColors(This, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_GetPixelColorsWithSubrectangle(This, left, top, width, height, valueElementsLength, valueElements) \
    ((This)->lpVtbl->GetPixelColorsWithSubrectangle(This, left, top, width, height, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_SetPixelBytes(This, valueElementsLength, valueElements) \
    ((This)->lpVtbl->SetPixelBytes(This, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_SetPixelBytesWithSubrectangle(This, valueElementsLength, valueElements, left, top, width, height) \
    ((This)->lpVtbl->SetPixelBytesWithSubrectangle(This, valueElementsLength, valueElements, left, top, width, height))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_SetPixelBytesWithBuffer(This, buffer) \
    ((This)->lpVtbl->SetPixelBytesWithBuffer(This, buffer))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_SetPixelBytesWithBufferAndSubrectangle(This, buffer, left, top, width, height) \
    ((This)->lpVtbl->SetPixelBytesWithBufferAndSubrectangle(This, buffer, left, top, width, height))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_SetPixelColors(This, valueElementsLength, valueElements) \
    ((This)->lpVtbl->SetPixelColors(This, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_SetPixelColorsWithSubrectangle(This, valueElementsLength, valueElements, left, top, width, height) \
    ((This)->lpVtbl->SetPixelColorsWithSubrectangle(This, valueElementsLength, valueElements, left, top, width, height))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_CopyPixelsFromBitmap(This, otherBitmap) \
    ((This)->lpVtbl->CopyPixelsFromBitmap(This, otherBitmap))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_CopyPixelsFromBitmapWithDestPoint(This, otherBitmap, destX, destY) \
    ((This)->lpVtbl->CopyPixelsFromBitmapWithDestPoint(This, otherBitmap, destX, destY))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_CopyPixelsFromBitmapWithDestPointAndSourceRect(This, otherBitmap, destX, destY, sourceRectLeft, sourceRectTop, sourceRectWidth, sourceRectHeight) \
    ((This)->lpVtbl->CopyPixelsFromBitmapWithDestPointAndSourceRect(This, otherBitmap, destX, destY, sourceRectLeft, sourceRectTop, sourceRectWidth, sourceRectHeight))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasBitmapFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasBitmap
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasBitmapFactory[] = L"Microsoft.Graphics.Canvas.ICanvasBitmapFactory";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory* This,
        TrustLevel* trustLevel);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactoryVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasBitmapStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasBitmap
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasBitmapStatics[] = L"Microsoft.Graphics.Canvas.ICanvasBitmapStatics";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateFromDirect3D11Surface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface* surface,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap** bitmap);
    HRESULT (STDMETHODCALLTYPE* CreateFromDirect3D11SurfaceWithDpi)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface* surface,
        FLOAT dpi,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap** bitmap);
    HRESULT (STDMETHODCALLTYPE* CreateFromDirect3D11SurfaceWithDpiAndAlpha)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface* surface,
        FLOAT dpi,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode alpha,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap** bitmap);
    HRESULT (STDMETHODCALLTYPE* CreateFromBytes)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        UINT32 bytesLength,
        BYTE* bytes,
        INT32 widthInPixels,
        INT32 heightInPixels,
        enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat format,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap** bitmap);
    HRESULT (STDMETHODCALLTYPE* CreateFromBytesWithDpi)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        UINT32 bytesLength,
        BYTE* bytes,
        INT32 widthInPixels,
        INT32 heightInPixels,
        enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat format,
        FLOAT dpi,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap** bitmap);
    HRESULT (STDMETHODCALLTYPE* CreateFromBytesWithDpiAndAlpha)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        UINT32 bytesLength,
        BYTE* bytes,
        INT32 widthInPixels,
        INT32 heightInPixels,
        enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat format,
        FLOAT dpi,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode alpha,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap** bitmap);
    HRESULT (STDMETHODCALLTYPE* CreateFromBytesWithBuffer)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer* buffer,
        INT32 widthInPixels,
        INT32 heightInPixels,
        enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat format,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap** bitmap);
    HRESULT (STDMETHODCALLTYPE* CreateFromBytesWithBufferAndDpi)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer* buffer,
        INT32 widthInPixels,
        INT32 heightInPixels,
        enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat format,
        FLOAT dpi,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap** bitmap);
    HRESULT (STDMETHODCALLTYPE* CreateFromBytesWithBufferAndDpiAndAlpha)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer* buffer,
        INT32 widthInPixels,
        INT32 heightInPixels,
        enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat format,
        FLOAT dpi,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode alpha,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap** bitmap);
    HRESULT (STDMETHODCALLTYPE* CreateFromColors)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        UINT32 colorsLength,
        struct __x_ABI_CWindows_CUI_CColor* colors,
        INT32 widthInPixels,
        INT32 heightInPixels,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap** bitmap);
    HRESULT (STDMETHODCALLTYPE* CreateFromColorsWithDpi)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        UINT32 colorsLength,
        struct __x_ABI_CWindows_CUI_CColor* colors,
        INT32 widthInPixels,
        INT32 heightInPixels,
        FLOAT dpi,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap** bitmap);
    HRESULT (STDMETHODCALLTYPE* CreateFromColorsWithDpiAndAlpha)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        UINT32 colorsLength,
        struct __x_ABI_CWindows_CUI_CColor* colors,
        INT32 widthInPixels,
        INT32 heightInPixels,
        FLOAT dpi,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode alpha,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap** bitmap);
    HRESULT (STDMETHODCALLTYPE* CreateFromSoftwareBitmap)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap* sourceBitmap,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap** bitmap);
    HRESULT (STDMETHODCALLTYPE* LoadAsyncFromHstring)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        HSTRING fileName,
        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap** canvasBitmap);
    HRESULT (STDMETHODCALLTYPE* LoadAsyncFromHstringWithDpi)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        HSTRING fileName,
        FLOAT dpi,
        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap** canvasBitmap);
    HRESULT (STDMETHODCALLTYPE* LoadAsyncFromHstringWithDpiAndAlpha)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        HSTRING fileName,
        FLOAT dpi,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode alpha,
        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap** canvasBitmap);
    HRESULT (STDMETHODCALLTYPE* LoadAsyncFromUri)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CFoundation_CIUriRuntimeClass* uri,
        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap** canvasBitmap);
    HRESULT (STDMETHODCALLTYPE* LoadAsyncFromUriWithDpi)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CFoundation_CIUriRuntimeClass* uri,
        FLOAT dpi,
        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap** canvasBitmap);
    HRESULT (STDMETHODCALLTYPE* LoadAsyncFromUriWithDpiAndAlpha)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CFoundation_CIUriRuntimeClass* uri,
        FLOAT dpi,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode alpha,
        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap** canvasBitmap);
    HRESULT (STDMETHODCALLTYPE* LoadAsyncFromStream)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream* stream,
        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap** canvasBitmap);
    HRESULT (STDMETHODCALLTYPE* LoadAsyncFromStreamWithDpi)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream* stream,
        FLOAT dpi,
        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap** canvasBitmap);
    HRESULT (STDMETHODCALLTYPE* LoadAsyncFromStreamWithDpiAndAlpha)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream* stream,
        FLOAT dpi,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode alpha,
        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasBitmap** canvasBitmap);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStaticsVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_CreateFromDirect3D11Surface(This, resourceCreator, surface, bitmap) \
    ((This)->lpVtbl->CreateFromDirect3D11Surface(This, resourceCreator, surface, bitmap))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_CreateFromDirect3D11SurfaceWithDpi(This, resourceCreator, surface, dpi, bitmap) \
    ((This)->lpVtbl->CreateFromDirect3D11SurfaceWithDpi(This, resourceCreator, surface, dpi, bitmap))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_CreateFromDirect3D11SurfaceWithDpiAndAlpha(This, resourceCreator, surface, dpi, alpha, bitmap) \
    ((This)->lpVtbl->CreateFromDirect3D11SurfaceWithDpiAndAlpha(This, resourceCreator, surface, dpi, alpha, bitmap))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_CreateFromBytes(This, resourceCreator, bytesLength, bytes, widthInPixels, heightInPixels, format, bitmap) \
    ((This)->lpVtbl->CreateFromBytes(This, resourceCreator, bytesLength, bytes, widthInPixels, heightInPixels, format, bitmap))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_CreateFromBytesWithDpi(This, resourceCreator, bytesLength, bytes, widthInPixels, heightInPixels, format, dpi, bitmap) \
    ((This)->lpVtbl->CreateFromBytesWithDpi(This, resourceCreator, bytesLength, bytes, widthInPixels, heightInPixels, format, dpi, bitmap))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_CreateFromBytesWithDpiAndAlpha(This, resourceCreator, bytesLength, bytes, widthInPixels, heightInPixels, format, dpi, alpha, bitmap) \
    ((This)->lpVtbl->CreateFromBytesWithDpiAndAlpha(This, resourceCreator, bytesLength, bytes, widthInPixels, heightInPixels, format, dpi, alpha, bitmap))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_CreateFromBytesWithBuffer(This, resourceCreator, buffer, widthInPixels, heightInPixels, format, bitmap) \
    ((This)->lpVtbl->CreateFromBytesWithBuffer(This, resourceCreator, buffer, widthInPixels, heightInPixels, format, bitmap))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_CreateFromBytesWithBufferAndDpi(This, resourceCreator, buffer, widthInPixels, heightInPixels, format, dpi, bitmap) \
    ((This)->lpVtbl->CreateFromBytesWithBufferAndDpi(This, resourceCreator, buffer, widthInPixels, heightInPixels, format, dpi, bitmap))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_CreateFromBytesWithBufferAndDpiAndAlpha(This, resourceCreator, buffer, widthInPixels, heightInPixels, format, dpi, alpha, bitmap) \
    ((This)->lpVtbl->CreateFromBytesWithBufferAndDpiAndAlpha(This, resourceCreator, buffer, widthInPixels, heightInPixels, format, dpi, alpha, bitmap))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_CreateFromColors(This, resourceCreator, colorsLength, colors, widthInPixels, heightInPixels, bitmap) \
    ((This)->lpVtbl->CreateFromColors(This, resourceCreator, colorsLength, colors, widthInPixels, heightInPixels, bitmap))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_CreateFromColorsWithDpi(This, resourceCreator, colorsLength, colors, widthInPixels, heightInPixels, dpi, bitmap) \
    ((This)->lpVtbl->CreateFromColorsWithDpi(This, resourceCreator, colorsLength, colors, widthInPixels, heightInPixels, dpi, bitmap))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_CreateFromColorsWithDpiAndAlpha(This, resourceCreator, colorsLength, colors, widthInPixels, heightInPixels, dpi, alpha, bitmap) \
    ((This)->lpVtbl->CreateFromColorsWithDpiAndAlpha(This, resourceCreator, colorsLength, colors, widthInPixels, heightInPixels, dpi, alpha, bitmap))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_CreateFromSoftwareBitmap(This, resourceCreator, sourceBitmap, bitmap) \
    ((This)->lpVtbl->CreateFromSoftwareBitmap(This, resourceCreator, sourceBitmap, bitmap))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_LoadAsyncFromHstring(This, resourceCreator, fileName, canvasBitmap) \
    ((This)->lpVtbl->LoadAsyncFromHstring(This, resourceCreator, fileName, canvasBitmap))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_LoadAsyncFromHstringWithDpi(This, resourceCreator, fileName, dpi, canvasBitmap) \
    ((This)->lpVtbl->LoadAsyncFromHstringWithDpi(This, resourceCreator, fileName, dpi, canvasBitmap))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_LoadAsyncFromHstringWithDpiAndAlpha(This, resourceCreator, fileName, dpi, alpha, canvasBitmap) \
    ((This)->lpVtbl->LoadAsyncFromHstringWithDpiAndAlpha(This, resourceCreator, fileName, dpi, alpha, canvasBitmap))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_LoadAsyncFromUri(This, resourceCreator, uri, canvasBitmap) \
    ((This)->lpVtbl->LoadAsyncFromUri(This, resourceCreator, uri, canvasBitmap))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_LoadAsyncFromUriWithDpi(This, resourceCreator, uri, dpi, canvasBitmap) \
    ((This)->lpVtbl->LoadAsyncFromUriWithDpi(This, resourceCreator, uri, dpi, canvasBitmap))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_LoadAsyncFromUriWithDpiAndAlpha(This, resourceCreator, uri, dpi, alpha, canvasBitmap) \
    ((This)->lpVtbl->LoadAsyncFromUriWithDpiAndAlpha(This, resourceCreator, uri, dpi, alpha, canvasBitmap))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_LoadAsyncFromStream(This, resourceCreator, stream, canvasBitmap) \
    ((This)->lpVtbl->LoadAsyncFromStream(This, resourceCreator, stream, canvasBitmap))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_LoadAsyncFromStreamWithDpi(This, resourceCreator, stream, dpi, canvasBitmap) \
    ((This)->lpVtbl->LoadAsyncFromStreamWithDpi(This, resourceCreator, stream, dpi, canvasBitmap))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_LoadAsyncFromStreamWithDpiAndAlpha(This, resourceCreator, stream, dpi, alpha, canvasBitmap) \
    ((This)->lpVtbl->LoadAsyncFromStreamWithDpiAndAlpha(This, resourceCreator, stream, dpi, alpha, canvasBitmap))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmapStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasCommandList
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasCommandList
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Microsoft.Graphics.Canvas.ICanvasImage
 *     Windows.Graphics.Effects.IGraphicsEffectSource
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasCommandList[] = L"Microsoft.Graphics.Canvas.ICanvasCommandList";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateDrawingSession)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession** drawingSession);
    HRESULT (STDMETHODCALLTYPE* get_Device)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice** value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList_CreateDrawingSession(This, drawingSession) \
    ((This)->lpVtbl->CreateDrawingSession(This, drawingSession))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList_get_Device(This, value) \
    ((This)->lpVtbl->get_Device(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasCommandListFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasCommandList
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasCommandListFactory[] = L"Microsoft.Graphics.Canvas.ICanvasCommandListFactory";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* Create)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandList** commandList);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactoryVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory_Create(This, resourceCreator, commandList) \
    ((This)->lpVtbl->Create(This, resourceCreator, commandList))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasCommandListFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasDevice
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasDevice
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *     Windows.Graphics.DirectX.Direct3D11.IDirect3DDevice
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasDevice[] = L"Microsoft.Graphics.Canvas.ICanvasDevice";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_ForceSoftwareRenderer)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_MaximumBitmapSizeInPixels)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice* This,
        INT32* value);
    HRESULT (STDMETHODCALLTYPE* IsPixelFormatSupported)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice* This,
        enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat pixelFormat,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* IsBufferPrecisionSupported)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBufferPrecision bufferPrecision,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_MaximumCacheSize)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice* This,
        UINT64* value);
    HRESULT (STDMETHODCALLTYPE* put_MaximumCacheSize)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice* This,
        UINT64 value);
    HRESULT (STDMETHODCALLTYPE* get_LowPriority)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* put_LowPriority)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice* This,
        boolean value);
    HRESULT (STDMETHODCALLTYPE* add_DeviceLost)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice* This,
        __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CCanvasDevice_IInspectable* value,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_DeviceLost)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* IsDeviceLost)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice* This,
        INT32 hresult,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* RaiseDeviceLost)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice* This);
    HRESULT (STDMETHODCALLTYPE* Lock)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock** lock);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_get_ForceSoftwareRenderer(This, value) \
    ((This)->lpVtbl->get_ForceSoftwareRenderer(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_get_MaximumBitmapSizeInPixels(This, value) \
    ((This)->lpVtbl->get_MaximumBitmapSizeInPixels(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_IsPixelFormatSupported(This, pixelFormat, value) \
    ((This)->lpVtbl->IsPixelFormatSupported(This, pixelFormat, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_IsBufferPrecisionSupported(This, bufferPrecision, value) \
    ((This)->lpVtbl->IsBufferPrecisionSupported(This, bufferPrecision, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_get_MaximumCacheSize(This, value) \
    ((This)->lpVtbl->get_MaximumCacheSize(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_put_MaximumCacheSize(This, value) \
    ((This)->lpVtbl->put_MaximumCacheSize(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_get_LowPriority(This, value) \
    ((This)->lpVtbl->get_LowPriority(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_put_LowPriority(This, value) \
    ((This)->lpVtbl->put_LowPriority(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_add_DeviceLost(This, value, token) \
    ((This)->lpVtbl->add_DeviceLost(This, value, token))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_remove_DeviceLost(This, token) \
    ((This)->lpVtbl->remove_DeviceLost(This, token))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_IsDeviceLost(This, hresult, value) \
    ((This)->lpVtbl->IsDeviceLost(This, hresult, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_RaiseDeviceLost(This) \
    ((This)->lpVtbl->RaiseDeviceLost(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_Lock(This, lock) \
    ((This)->lpVtbl->Lock(This, lock))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasDeviceFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasDevice
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasDeviceFactory[] = L"Microsoft.Graphics.Canvas.ICanvasDeviceFactory";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateWithForceSoftwareRendererOption)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory* This,
        boolean forceSoftwareRenderer,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice** canvasDevice);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactoryVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory_CreateWithForceSoftwareRendererOption(This, forceSoftwareRenderer, canvasDevice) \
    ((This)->lpVtbl->CreateWithForceSoftwareRendererOption(This, forceSoftwareRenderer, canvasDevice))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasDeviceStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasDevice
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasDeviceStatics[] = L"Microsoft.Graphics.Canvas.ICanvasDeviceStatics";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateFromDirect3D11Device)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics* This,
        __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice* direct3DDevice,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice** canvasDevice);
    HRESULT (STDMETHODCALLTYPE* GetSharedDevice)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice** canvasDevice);
    HRESULT (STDMETHODCALLTYPE* GetSharedDeviceWithForceSoftwareRenderer)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics* This,
        boolean forceSoftwareRenderer,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice** canvasDevice);
    HRESULT (STDMETHODCALLTYPE* put_DebugLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasDebugLevel value);
    HRESULT (STDMETHODCALLTYPE* get_DebugLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasDebugLevel* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStaticsVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics_CreateFromDirect3D11Device(This, direct3DDevice, canvasDevice) \
    ((This)->lpVtbl->CreateFromDirect3D11Device(This, direct3DDevice, canvasDevice))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics_GetSharedDevice(This, canvasDevice) \
    ((This)->lpVtbl->GetSharedDevice(This, canvasDevice))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics_GetSharedDeviceWithForceSoftwareRenderer(This, forceSoftwareRenderer, canvasDevice) \
    ((This)->lpVtbl->GetSharedDeviceWithForceSoftwareRenderer(This, forceSoftwareRenderer, canvasDevice))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics_put_DebugLevel(This, value) \
    ((This)->lpVtbl->put_DebugLevel(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics_get_DebugLevel(This, value) \
    ((This)->lpVtbl->get_DebugLevel(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDeviceStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasDrawingSession
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasDrawingSession
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasDrawingSession[] = L"Microsoft.Graphics.Canvas.ICanvasDrawingSession";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSessionVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* Clear)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* ClearHdr)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 color);
    HRESULT (STDMETHODCALLTYPE* Flush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This);
    HRESULT (STDMETHODCALLTYPE* DrawImageAtOrigin)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* image);
    HRESULT (STDMETHODCALLTYPE* DrawImageAtOffset)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* image,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 offset);
    HRESULT (STDMETHODCALLTYPE* DrawImageAtCoords)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* image,
        FLOAT x,
        FLOAT y);
    HRESULT (STDMETHODCALLTYPE* DrawImageToRect)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* bitmap,
        struct __x_ABI_CWindows_CFoundation_CRect destinationRectangle);
    HRESULT (STDMETHODCALLTYPE* DrawImageAtOffsetWithSourceRect)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* image,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 offset,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRectangle);
    HRESULT (STDMETHODCALLTYPE* DrawImageAtCoordsWithSourceRect)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* image,
        FLOAT x,
        FLOAT y,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRectangle);
    HRESULT (STDMETHODCALLTYPE* DrawImageToRectWithSourceRect)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* image,
        struct __x_ABI_CWindows_CFoundation_CRect destinationRectangle,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRectangle);
    HRESULT (STDMETHODCALLTYPE* DrawImageAtOffsetWithSourceRectAndOpacity)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* image,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 offset,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRectangle,
        FLOAT opacity);
    HRESULT (STDMETHODCALLTYPE* DrawImageAtCoordsWithSourceRectAndOpacity)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* image,
        FLOAT x,
        FLOAT y,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRectangle,
        FLOAT opacity);
    HRESULT (STDMETHODCALLTYPE* DrawImageToRectWithSourceRectAndOpacity)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* image,
        struct __x_ABI_CWindows_CFoundation_CRect destinationRectangle,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRectangle,
        FLOAT opacity);
    HRESULT (STDMETHODCALLTYPE* DrawImageAtOffsetWithSourceRectAndOpacityAndInterpolation)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* image,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 offset,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRectangle,
        FLOAT opacity,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasImageInterpolation interpolation);
    HRESULT (STDMETHODCALLTYPE* DrawImageAtCoordsWithSourceRectAndOpacityAndInterpolation)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* image,
        FLOAT x,
        FLOAT y,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRectangle,
        FLOAT opacity,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasImageInterpolation interpolation);
    HRESULT (STDMETHODCALLTYPE* DrawImageToRectWithSourceRectAndOpacityAndInterpolation)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* image,
        struct __x_ABI_CWindows_CFoundation_CRect destinationRectangle,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRectangle,
        FLOAT opacity,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasImageInterpolation interpolation);
    HRESULT (STDMETHODCALLTYPE* DrawImageAtOffsetWithSourceRectAndOpacityAndInterpolationAndComposite)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* image,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 offset,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRectangle,
        FLOAT opacity,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasImageInterpolation interpolation,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasComposite composite);
    HRESULT (STDMETHODCALLTYPE* DrawImageAtCoordsWithSourceRectAndOpacityAndInterpolationAndComposite)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* image,
        FLOAT x,
        FLOAT y,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRectangle,
        FLOAT opacity,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasImageInterpolation interpolation,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasComposite composite);
    HRESULT (STDMETHODCALLTYPE* DrawImageToRectWithSourceRectAndOpacityAndInterpolationAndComposite)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* image,
        struct __x_ABI_CWindows_CFoundation_CRect destinationRectangle,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRectangle,
        FLOAT opacity,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasImageInterpolation interpolation,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasComposite composite);
    HRESULT (STDMETHODCALLTYPE* DrawImageAtOffsetWithSourceRectAndOpacityAndInterpolationAndPerspective)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* bitmap,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 offset,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRectangle,
        FLOAT opacity,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasImageInterpolation interpolation,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 perspective);
    HRESULT (STDMETHODCALLTYPE* DrawImageAtCoordsWithSourceRectAndOpacityAndInterpolationAndPerspective)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* bitmap,
        FLOAT x,
        FLOAT y,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRectangle,
        FLOAT opacity,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasImageInterpolation interpolation,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 perspective);
    HRESULT (STDMETHODCALLTYPE* DrawImageToRectWithSourceRectAndOpacityAndInterpolationAndPerspective)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* bitmap,
        struct __x_ABI_CWindows_CFoundation_CRect destinationRectangle,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRectangle,
        FLOAT opacity,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasImageInterpolation interpolation,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 perspective);
    HRESULT (STDMETHODCALLTYPE* DrawLineWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point0,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point1,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* DrawLineAtCoordsWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x0,
        FLOAT y0,
        FLOAT x1,
        FLOAT y1,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* DrawLineWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point0,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point1,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* DrawLineAtCoordsWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x0,
        FLOAT y0,
        FLOAT x1,
        FLOAT y1,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* DrawLineWithBrushAndStrokeWidth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point0,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point1,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        FLOAT strokeWidth);
    HRESULT (STDMETHODCALLTYPE* DrawLineAtCoordsWithBrushAndStrokeWidth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x0,
        FLOAT y0,
        FLOAT x1,
        FLOAT y1,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        FLOAT strokeWidth);
    HRESULT (STDMETHODCALLTYPE* DrawLineWithColorAndStrokeWidth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point0,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point1,
        struct __x_ABI_CWindows_CUI_CColor color,
        FLOAT strokeWidth);
    HRESULT (STDMETHODCALLTYPE* DrawLineAtCoordsWithColorAndStrokeWidth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x0,
        FLOAT y0,
        FLOAT x1,
        FLOAT y1,
        struct __x_ABI_CWindows_CUI_CColor color,
        FLOAT strokeWidth);
    HRESULT (STDMETHODCALLTYPE* DrawLineWithBrushAndStrokeWidthAndStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point0,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point1,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle);
    HRESULT (STDMETHODCALLTYPE* DrawLineAtCoordsWithBrushAndStrokeWidthAndStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x0,
        FLOAT y0,
        FLOAT x1,
        FLOAT y1,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle);
    HRESULT (STDMETHODCALLTYPE* DrawLineWithColorAndStrokeWidthAndStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point0,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point1,
        struct __x_ABI_CWindows_CUI_CColor color,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle);
    HRESULT (STDMETHODCALLTYPE* DrawLineAtCoordsWithColorAndStrokeWidthAndStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x0,
        FLOAT y0,
        FLOAT x1,
        FLOAT y1,
        struct __x_ABI_CWindows_CUI_CColor color,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle);
    HRESULT (STDMETHODCALLTYPE* DrawRectangleWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CRect rect,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* DrawRectangleAtCoordsWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT w,
        FLOAT h,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* DrawRectangleWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CRect rect,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* DrawRectangleAtCoordsWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT w,
        FLOAT h,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* DrawRectangleWithBrushAndStrokeWidth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CRect rect,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        FLOAT strokeWidth);
    HRESULT (STDMETHODCALLTYPE* DrawRectangleAtCoordsWithBrushAndStrokeWidth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT w,
        FLOAT h,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        FLOAT strokeWidth);
    HRESULT (STDMETHODCALLTYPE* DrawRectangleWithColorAndStrokeWidth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CRect rect,
        struct __x_ABI_CWindows_CUI_CColor color,
        FLOAT strokeWidth);
    HRESULT (STDMETHODCALLTYPE* DrawRectangleAtCoordsWithColorAndStrokeWidth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT w,
        FLOAT h,
        struct __x_ABI_CWindows_CUI_CColor color,
        FLOAT strokeWidth);
    HRESULT (STDMETHODCALLTYPE* DrawRectangleWithBrushAndStrokeWidthAndStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CRect rect,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle);
    HRESULT (STDMETHODCALLTYPE* DrawRectangleAtCoordsWithBrushAndStrokeWidthAndStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT w,
        FLOAT h,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle);
    HRESULT (STDMETHODCALLTYPE* DrawRectangleWithColorAndStrokeWidthAndStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CRect rect,
        struct __x_ABI_CWindows_CUI_CColor color,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle);
    HRESULT (STDMETHODCALLTYPE* DrawRectangleAtCoordsWithColorAndStrokeWidthAndStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT w,
        FLOAT h,
        struct __x_ABI_CWindows_CUI_CColor color,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle);
    HRESULT (STDMETHODCALLTYPE* FillRectangleWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CRect rect,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* FillRectangleAtCoordsWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT w,
        FLOAT h,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* FillRectangleWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CRect rect,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* FillRectangleAtCoordsWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT w,
        FLOAT h,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* FillRectangleWithBrushAndOpacityBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CRect rect,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* opacityBrush);
    HRESULT (STDMETHODCALLTYPE* FillRectangleAtCoordsWithBrushAndOpacityBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT w,
        FLOAT h,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* opacityBrush);
    HRESULT (STDMETHODCALLTYPE* DrawRoundedRectangleWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CRect rect,
        FLOAT radiusX,
        FLOAT radiusY,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* DrawRoundedRectangleAtCoordsWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT w,
        FLOAT h,
        FLOAT radiusX,
        FLOAT radiusY,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* DrawRoundedRectangleWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CRect rect,
        FLOAT radiusX,
        FLOAT radiusY,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* DrawRoundedRectangleAtCoordsWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT w,
        FLOAT h,
        FLOAT radiusX,
        FLOAT radiusY,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* DrawRoundedRectangleWithBrushAndStrokeWidth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CRect rect,
        FLOAT radiusX,
        FLOAT radiusY,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        FLOAT strokeWidth);
    HRESULT (STDMETHODCALLTYPE* DrawRoundedRectangleAtCoordsWithBrushAndStrokeWidth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT w,
        FLOAT h,
        FLOAT radiusX,
        FLOAT radiusY,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        FLOAT strokeWidth);
    HRESULT (STDMETHODCALLTYPE* DrawRoundedRectangleWithColorAndStrokeWidth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CRect rect,
        FLOAT radiusX,
        FLOAT radiusY,
        struct __x_ABI_CWindows_CUI_CColor color,
        FLOAT strokeWidth);
    HRESULT (STDMETHODCALLTYPE* DrawRoundedRectangleAtCoordsWithColorAndStrokeWidth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT w,
        FLOAT h,
        FLOAT radiusX,
        FLOAT radiusY,
        struct __x_ABI_CWindows_CUI_CColor color,
        FLOAT strokeWidth);
    HRESULT (STDMETHODCALLTYPE* DrawRoundedRectangleWithBrushAndStrokeWidthAndStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CRect rect,
        FLOAT radiusX,
        FLOAT radiusY,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle);
    HRESULT (STDMETHODCALLTYPE* DrawRoundedRectangleAtCoordsWithBrushAndStrokeWidthAndStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT w,
        FLOAT h,
        FLOAT radiusX,
        FLOAT radiusY,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle);
    HRESULT (STDMETHODCALLTYPE* DrawRoundedRectangleWithColorAndStrokeWidthAndStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CRect rect,
        FLOAT radiusX,
        FLOAT radiusY,
        struct __x_ABI_CWindows_CUI_CColor color,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle);
    HRESULT (STDMETHODCALLTYPE* DrawRoundedRectangleAtCoordsWithColorAndStrokeWidthAndStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT w,
        FLOAT h,
        FLOAT radiusX,
        FLOAT radiusY,
        struct __x_ABI_CWindows_CUI_CColor color,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle);
    HRESULT (STDMETHODCALLTYPE* FillRoundedRectangleWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CRect rect,
        FLOAT radiusX,
        FLOAT radiusY,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* FillRoundedRectangleAtCoordsWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT w,
        FLOAT h,
        FLOAT radiusX,
        FLOAT radiusY,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* FillRoundedRectangleWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CRect rect,
        FLOAT radiusX,
        FLOAT radiusY,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* FillRoundedRectangleAtCoordsWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT w,
        FLOAT h,
        FLOAT radiusX,
        FLOAT radiusY,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* DrawEllipseWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 centerPoint,
        FLOAT radiusX,
        FLOAT radiusY,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* DrawEllipseAtCoordsWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT radiusX,
        FLOAT radiusY,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* DrawEllipseWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 centerPoint,
        FLOAT radiusX,
        FLOAT radiusY,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* DrawEllipseAtCoordsWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT radiusX,
        FLOAT radiusY,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* DrawEllipseWithBrushAndStrokeWidth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 centerPoint,
        FLOAT radiusX,
        FLOAT radiusY,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        FLOAT strokeWidth);
    HRESULT (STDMETHODCALLTYPE* DrawEllipseAtCoordsWithBrushAndStrokeWidth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT radiusX,
        FLOAT radiusY,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        FLOAT strokeWidth);
    HRESULT (STDMETHODCALLTYPE* DrawEllipseWithColorAndStrokeWidth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 centerPoint,
        FLOAT radiusX,
        FLOAT radiusY,
        struct __x_ABI_CWindows_CUI_CColor color,
        FLOAT strokeWidth);
    HRESULT (STDMETHODCALLTYPE* DrawEllipseAtCoordsWithColorAndStrokeWidth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT radiusX,
        FLOAT radiusY,
        struct __x_ABI_CWindows_CUI_CColor color,
        FLOAT strokeWidth);
    HRESULT (STDMETHODCALLTYPE* DrawEllipseWithBrushAndStrokeWidthAndStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 centerPoint,
        FLOAT radiusX,
        FLOAT radiusY,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle);
    HRESULT (STDMETHODCALLTYPE* DrawEllipseAtCoordsWithBrushAndStrokeWidthAndStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT radiusX,
        FLOAT radiusY,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle);
    HRESULT (STDMETHODCALLTYPE* DrawEllipseWithColorAndStrokeWidthAndStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 centerPoint,
        FLOAT radiusX,
        FLOAT radiusY,
        struct __x_ABI_CWindows_CUI_CColor color,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle);
    HRESULT (STDMETHODCALLTYPE* DrawEllipseAtCoordsWithColorAndStrokeWidthAndStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT radiusX,
        FLOAT radiusY,
        struct __x_ABI_CWindows_CUI_CColor color,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle);
    HRESULT (STDMETHODCALLTYPE* FillEllipseWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 centerPoint,
        FLOAT radiusX,
        FLOAT radiusY,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* FillEllipseAtCoordsWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT radiusX,
        FLOAT radiusY,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* FillEllipseWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 centerPoint,
        FLOAT radiusX,
        FLOAT radiusY,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* FillEllipseAtCoordsWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT radiusX,
        FLOAT radiusY,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* DrawCircleWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 centerPoint,
        FLOAT radius,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* DrawCircleAtCoordsWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT radius,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* DrawCircleWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 centerPoint,
        FLOAT radius,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* DrawCircleAtCoordsWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT radius,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* DrawCircleWithBrushAndStrokeWidth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 centerPoint,
        FLOAT radius,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        FLOAT strokeWidth);
    HRESULT (STDMETHODCALLTYPE* DrawCircleAtCoordsWithBrushAndStrokeWidth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT radius,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        FLOAT strokeWidth);
    HRESULT (STDMETHODCALLTYPE* DrawCircleWithColorAndStrokeWidth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 centerPoint,
        FLOAT radius,
        struct __x_ABI_CWindows_CUI_CColor color,
        FLOAT strokeWidth);
    HRESULT (STDMETHODCALLTYPE* DrawCircleAtCoordsWithColorAndStrokeWidth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT radius,
        struct __x_ABI_CWindows_CUI_CColor color,
        FLOAT strokeWidth);
    HRESULT (STDMETHODCALLTYPE* DrawCircleWithBrushAndStrokeWidthAndStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 centerPoint,
        FLOAT radius,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle);
    HRESULT (STDMETHODCALLTYPE* DrawCircleAtCoordsWithBrushAndStrokeWidthAndStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT radius,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle);
    HRESULT (STDMETHODCALLTYPE* DrawCircleWithColorAndStrokeWidthAndStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 centerPoint,
        FLOAT radius,
        struct __x_ABI_CWindows_CUI_CColor color,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle);
    HRESULT (STDMETHODCALLTYPE* DrawCircleAtCoordsWithColorAndStrokeWidthAndStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT radius,
        struct __x_ABI_CWindows_CUI_CColor color,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle);
    HRESULT (STDMETHODCALLTYPE* FillCircleWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 centerPoint,
        FLOAT radius,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* FillCircleAtCoordsWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT radius,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* FillCircleWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 centerPoint,
        FLOAT radius,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* FillCircleAtCoordsWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT x,
        FLOAT y,
        FLOAT radius,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* DrawTextAtPointWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        HSTRING text,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* DrawTextAtPointCoordsWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        HSTRING text,
        FLOAT x,
        FLOAT y,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* DrawTextAtPointWithBrushAndFormat)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        HSTRING text,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* format);
    HRESULT (STDMETHODCALLTYPE* DrawTextAtRectWithBrushAndFormat)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        HSTRING text,
        struct __x_ABI_CWindows_CFoundation_CRect rectangle,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* format);
    HRESULT (STDMETHODCALLTYPE* DrawTextAtPointCoordsWithBrushAndFormat)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        HSTRING text,
        FLOAT x,
        FLOAT y,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* format);
    HRESULT (STDMETHODCALLTYPE* DrawTextAtRectCoordsWithBrushAndFormat)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        HSTRING text,
        FLOAT x,
        FLOAT y,
        FLOAT w,
        FLOAT h,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* format);
    HRESULT (STDMETHODCALLTYPE* DrawTextAtPointWithColorAndFormat)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        HSTRING text,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point,
        struct __x_ABI_CWindows_CUI_CColor color,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* format);
    HRESULT (STDMETHODCALLTYPE* DrawTextAtRectWithColorAndFormat)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        HSTRING text,
        struct __x_ABI_CWindows_CFoundation_CRect rectangle,
        struct __x_ABI_CWindows_CUI_CColor color,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* format);
    HRESULT (STDMETHODCALLTYPE* DrawTextAtPointCoordsWithColorAndFormat)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        HSTRING text,
        FLOAT x,
        FLOAT y,
        struct __x_ABI_CWindows_CUI_CColor color,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* format);
    HRESULT (STDMETHODCALLTYPE* DrawTextAtRectCoordsWithColorAndFormat)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        HSTRING text,
        FLOAT x,
        FLOAT y,
        FLOAT w,
        FLOAT h,
        struct __x_ABI_CWindows_CUI_CColor color,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* format);
    HRESULT (STDMETHODCALLTYPE* DrawGeometryWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 offset,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* DrawGeometryWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 offset,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* DrawGeometryAtCoordsWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        FLOAT x,
        FLOAT y,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* DrawGeometryAtCoordsWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        FLOAT x,
        FLOAT y,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* DrawGeometryAtOriginWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* DrawGeometryAtOriginWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* DrawGeometryWithBrushAndStrokeWidth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 offset,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        FLOAT strokeWidth);
    HRESULT (STDMETHODCALLTYPE* DrawGeometryWithColorAndStrokeWidth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 offset,
        struct __x_ABI_CWindows_CUI_CColor color,
        FLOAT strokeWidth);
    HRESULT (STDMETHODCALLTYPE* DrawGeometryAtCoordsWithBrushAndStrokeWidth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        FLOAT x,
        FLOAT y,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        FLOAT strokeWidth);
    HRESULT (STDMETHODCALLTYPE* DrawGeometryAtCoordsWithColorAndStrokeWidth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        FLOAT x,
        FLOAT y,
        struct __x_ABI_CWindows_CUI_CColor color,
        FLOAT strokeWidth);
    HRESULT (STDMETHODCALLTYPE* DrawGeometryAtOriginWithBrushAndStrokeWidth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        FLOAT strokeWidth);
    HRESULT (STDMETHODCALLTYPE* DrawGeometryAtOriginWithColorAndStrokeWidth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        struct __x_ABI_CWindows_CUI_CColor color,
        FLOAT strokeWidth);
    HRESULT (STDMETHODCALLTYPE* DrawGeometryWithBrushAndStrokeWidthAndStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 offset,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle);
    HRESULT (STDMETHODCALLTYPE* DrawGeometryWithColorAndStrokeWidthAndStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 offset,
        struct __x_ABI_CWindows_CUI_CColor color,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle);
    HRESULT (STDMETHODCALLTYPE* DrawGeometryAtCoordsWithBrushAndStrokeWidthAndStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        FLOAT x,
        FLOAT y,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle);
    HRESULT (STDMETHODCALLTYPE* DrawGeometryAtCoordsWithColorAndStrokeWidthAndStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        FLOAT x,
        FLOAT y,
        struct __x_ABI_CWindows_CUI_CColor color,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle);
    HRESULT (STDMETHODCALLTYPE* DrawGeometryAtOriginWithBrushAndStrokeWidthAndStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle);
    HRESULT (STDMETHODCALLTYPE* DrawGeometryAtOriginWithColorAndStrokeWidthAndStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        struct __x_ABI_CWindows_CUI_CColor color,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle);
    HRESULT (STDMETHODCALLTYPE* FillGeometryWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 offset,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* FillGeometryWithBrushAndOpacityBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 offset,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* opacityBrush);
    HRESULT (STDMETHODCALLTYPE* FillGeometryWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 offset,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* FillGeometryAtCoordsWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        FLOAT x,
        FLOAT y,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* FillGeometryAtCoordsWithBrushAndOpacityBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        FLOAT x,
        FLOAT y,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* opacityBrush);
    HRESULT (STDMETHODCALLTYPE* FillGeometryAtCoordsWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        FLOAT x,
        FLOAT y,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* FillGeometryAtOriginWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* FillGeometryAtOriginWithBrushAndOpacityBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* opacityBrush);
    HRESULT (STDMETHODCALLTYPE* FillGeometryAtOriginWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* DrawCachedGeometryWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry* geometry,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 offset,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* DrawCachedGeometryWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry* geometry,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 offset,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* DrawCachedGeometryAtCoordsWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry* geometry,
        FLOAT x,
        FLOAT y,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* DrawCachedGeometryAtCoordsWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry* geometry,
        FLOAT x,
        FLOAT y,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* DrawCachedGeometryAtOriginWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry* geometry,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* DrawCachedGeometryAtOriginWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry* geometry,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* DrawTextLayoutWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* textLayout,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* DrawTextLayoutAtCoordsWithBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* textLayout,
        FLOAT x,
        FLOAT y,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* DrawTextLayoutWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* textLayout,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* DrawTextLayoutAtCoordsWithColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* textLayout,
        FLOAT x,
        FLOAT y,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* DrawGradientMeshAtOrigin)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh* gradientMesh);
    HRESULT (STDMETHODCALLTYPE* DrawGradientMesh)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh* gradientMesh,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point);
    HRESULT (STDMETHODCALLTYPE* DrawGradientMeshAtCoords)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh* gradientMesh,
        FLOAT x,
        FLOAT y);
    HRESULT (STDMETHODCALLTYPE* DrawSvgAtOrigin)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument* svgDocument,
        struct __x_ABI_CWindows_CFoundation_CSize viewportSize);
    HRESULT (STDMETHODCALLTYPE* DrawSvgAtPoint)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument* svgDocument,
        struct __x_ABI_CWindows_CFoundation_CSize viewportSize,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point);
    HRESULT (STDMETHODCALLTYPE* DrawSvgAtCoords)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument* svgDocument,
        struct __x_ABI_CWindows_CFoundation_CSize viewportSize,
        FLOAT x,
        FLOAT y);
    HRESULT (STDMETHODCALLTYPE* get_Antialiasing)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAntialiasing* value);
    HRESULT (STDMETHODCALLTYPE* put_Antialiasing)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAntialiasing value);
    HRESULT (STDMETHODCALLTYPE* get_Blend)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBlend* value);
    HRESULT (STDMETHODCALLTYPE* put_Blend)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBlend value);
    HRESULT (STDMETHODCALLTYPE* get_TextAntialiasing)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextAntialiasing* value);
    HRESULT (STDMETHODCALLTYPE* put_TextAntialiasing)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextAntialiasing value);
    HRESULT (STDMETHODCALLTYPE* get_TextRenderingParameters)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters** value);
    HRESULT (STDMETHODCALLTYPE* put_TextRenderingParameters)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters* value);
    HRESULT (STDMETHODCALLTYPE* get_Transform)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2* value);
    HRESULT (STDMETHODCALLTYPE* put_Transform)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 value);
    HRESULT (STDMETHODCALLTYPE* get_Units)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasUnits* value);
    HRESULT (STDMETHODCALLTYPE* put_Units)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasUnits value);
    HRESULT (STDMETHODCALLTYPE* get_EffectBufferPrecision)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision** value);
    HRESULT (STDMETHODCALLTYPE* put_EffectBufferPrecision)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __FIReference_1_Microsoft__CGraphics__CCanvas__CCanvasBufferPrecision* value);
    HRESULT (STDMETHODCALLTYPE* get_EffectTileSize)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize* value);
    HRESULT (STDMETHODCALLTYPE* put_EffectTileSize)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize value);
    HRESULT (STDMETHODCALLTYPE* CreateLayerWithOpacity)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT opacity,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer** layer);
    HRESULT (STDMETHODCALLTYPE* CreateLayerWithOpacityBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* opacityBrush,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer** layer);
    HRESULT (STDMETHODCALLTYPE* CreateLayerWithOpacityAndClipRectangle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT opacity,
        struct __x_ABI_CWindows_CFoundation_CRect clipRectangle,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer** layer);
    HRESULT (STDMETHODCALLTYPE* CreateLayerWithOpacityBrushAndClipRectangle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* opacityBrush,
        struct __x_ABI_CWindows_CFoundation_CRect clipRectangle,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer** layer);
    HRESULT (STDMETHODCALLTYPE* CreateLayerWithOpacityAndClipGeometry)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT opacity,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* clipGeometry,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer** layer);
    HRESULT (STDMETHODCALLTYPE* CreateLayerWithOpacityBrushAndClipGeometry)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* opacityBrush,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* clipGeometry,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer** layer);
    HRESULT (STDMETHODCALLTYPE* CreateLayerWithOpacityAndClipGeometryAndTransform)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT opacity,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* clipGeometry,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 geometryTransform,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer** layer);
    HRESULT (STDMETHODCALLTYPE* CreateLayerWithOpacityBrushAndClipGeometryAndTransform)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* opacityBrush,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* clipGeometry,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 geometryTransform,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer** layer);
    HRESULT (STDMETHODCALLTYPE* CreateLayerWithAllOptions)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        FLOAT opacity,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* opacityBrush,
        struct __x_ABI_CWindows_CFoundation_CRect clipRectangle,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* clipGeometry,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 geometryTransform,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasLayerOptions options,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasActiveLayer** layer);
    HRESULT (STDMETHODCALLTYPE* DrawGlyphRun)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* fontFace,
        FLOAT fontSize,
        UINT32 glyphsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyph* glyphs,
        boolean isSideways,
        UINT32 bidiLevel,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* DrawGlyphRunWithMeasuringMode)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* fontFace,
        FLOAT fontSize,
        UINT32 glyphsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyph* glyphs,
        boolean isSideways,
        UINT32 bidiLevel,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextMeasuringMode measuringMode);
    HRESULT (STDMETHODCALLTYPE* DrawGlyphRunWithMeasuringModeAndDescription)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* fontFace,
        FLOAT fontSize,
        UINT32 glyphsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyph* glyphs,
        boolean isSideways,
        UINT32 bidiLevel,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextMeasuringMode measuringMode,
        HSTRING localeName,
        HSTRING textString,
        UINT32 clusterMapIndicesLength,
        INT32* clusterMapIndices,
        UINT32 textPosition);
    HRESULT (STDMETHODCALLTYPE* CreateSpriteBatch)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch** spriteBatch);
    HRESULT (STDMETHODCALLTYPE* CreateSpriteBatchWithSortMode)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasSpriteSortMode sortMode,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch** spriteBatch);
    HRESULT (STDMETHODCALLTYPE* CreateSpriteBatchWithSortModeAndInterpolation)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasSpriteSortMode sortMode,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasImageInterpolation interpolation,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch** spriteBatch);
    HRESULT (STDMETHODCALLTYPE* CreateSpriteBatchWithSortModeAndInterpolationAndOptions)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasSpriteSortMode sortMode,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasImageInterpolation interpolation,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasSpriteOptions options,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch** spriteBatch);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSessionVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSessionVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_Clear(This, color) \
    ((This)->lpVtbl->Clear(This, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_ClearHdr(This, color) \
    ((This)->lpVtbl->ClearHdr(This, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_Flush(This) \
    ((This)->lpVtbl->Flush(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawImageAtOrigin(This, image) \
    ((This)->lpVtbl->DrawImageAtOrigin(This, image))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawImageAtOffset(This, image, offset) \
    ((This)->lpVtbl->DrawImageAtOffset(This, image, offset))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawImageAtCoords(This, image, x, y) \
    ((This)->lpVtbl->DrawImageAtCoords(This, image, x, y))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawImageToRect(This, bitmap, destinationRectangle) \
    ((This)->lpVtbl->DrawImageToRect(This, bitmap, destinationRectangle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawImageAtOffsetWithSourceRect(This, image, offset, sourceRectangle) \
    ((This)->lpVtbl->DrawImageAtOffsetWithSourceRect(This, image, offset, sourceRectangle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawImageAtCoordsWithSourceRect(This, image, x, y, sourceRectangle) \
    ((This)->lpVtbl->DrawImageAtCoordsWithSourceRect(This, image, x, y, sourceRectangle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawImageToRectWithSourceRect(This, image, destinationRectangle, sourceRectangle) \
    ((This)->lpVtbl->DrawImageToRectWithSourceRect(This, image, destinationRectangle, sourceRectangle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawImageAtOffsetWithSourceRectAndOpacity(This, image, offset, sourceRectangle, opacity) \
    ((This)->lpVtbl->DrawImageAtOffsetWithSourceRectAndOpacity(This, image, offset, sourceRectangle, opacity))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawImageAtCoordsWithSourceRectAndOpacity(This, image, x, y, sourceRectangle, opacity) \
    ((This)->lpVtbl->DrawImageAtCoordsWithSourceRectAndOpacity(This, image, x, y, sourceRectangle, opacity))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawImageToRectWithSourceRectAndOpacity(This, image, destinationRectangle, sourceRectangle, opacity) \
    ((This)->lpVtbl->DrawImageToRectWithSourceRectAndOpacity(This, image, destinationRectangle, sourceRectangle, opacity))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawImageAtOffsetWithSourceRectAndOpacityAndInterpolation(This, image, offset, sourceRectangle, opacity, interpolation) \
    ((This)->lpVtbl->DrawImageAtOffsetWithSourceRectAndOpacityAndInterpolation(This, image, offset, sourceRectangle, opacity, interpolation))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawImageAtCoordsWithSourceRectAndOpacityAndInterpolation(This, image, x, y, sourceRectangle, opacity, interpolation) \
    ((This)->lpVtbl->DrawImageAtCoordsWithSourceRectAndOpacityAndInterpolation(This, image, x, y, sourceRectangle, opacity, interpolation))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawImageToRectWithSourceRectAndOpacityAndInterpolation(This, image, destinationRectangle, sourceRectangle, opacity, interpolation) \
    ((This)->lpVtbl->DrawImageToRectWithSourceRectAndOpacityAndInterpolation(This, image, destinationRectangle, sourceRectangle, opacity, interpolation))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawImageAtOffsetWithSourceRectAndOpacityAndInterpolationAndComposite(This, image, offset, sourceRectangle, opacity, interpolation, composite) \
    ((This)->lpVtbl->DrawImageAtOffsetWithSourceRectAndOpacityAndInterpolationAndComposite(This, image, offset, sourceRectangle, opacity, interpolation, composite))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawImageAtCoordsWithSourceRectAndOpacityAndInterpolationAndComposite(This, image, x, y, sourceRectangle, opacity, interpolation, composite) \
    ((This)->lpVtbl->DrawImageAtCoordsWithSourceRectAndOpacityAndInterpolationAndComposite(This, image, x, y, sourceRectangle, opacity, interpolation, composite))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawImageToRectWithSourceRectAndOpacityAndInterpolationAndComposite(This, image, destinationRectangle, sourceRectangle, opacity, interpolation, composite) \
    ((This)->lpVtbl->DrawImageToRectWithSourceRectAndOpacityAndInterpolationAndComposite(This, image, destinationRectangle, sourceRectangle, opacity, interpolation, composite))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawImageAtOffsetWithSourceRectAndOpacityAndInterpolationAndPerspective(This, bitmap, offset, sourceRectangle, opacity, interpolation, perspective) \
    ((This)->lpVtbl->DrawImageAtOffsetWithSourceRectAndOpacityAndInterpolationAndPerspective(This, bitmap, offset, sourceRectangle, opacity, interpolation, perspective))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawImageAtCoordsWithSourceRectAndOpacityAndInterpolationAndPerspective(This, bitmap, x, y, sourceRectangle, opacity, interpolation, perspective) \
    ((This)->lpVtbl->DrawImageAtCoordsWithSourceRectAndOpacityAndInterpolationAndPerspective(This, bitmap, x, y, sourceRectangle, opacity, interpolation, perspective))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawImageToRectWithSourceRectAndOpacityAndInterpolationAndPerspective(This, bitmap, destinationRectangle, sourceRectangle, opacity, interpolation, perspective) \
    ((This)->lpVtbl->DrawImageToRectWithSourceRectAndOpacityAndInterpolationAndPerspective(This, bitmap, destinationRectangle, sourceRectangle, opacity, interpolation, perspective))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawLineWithBrush(This, point0, point1, brush) \
    ((This)->lpVtbl->DrawLineWithBrush(This, point0, point1, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawLineAtCoordsWithBrush(This, x0, y0, x1, y1, brush) \
    ((This)->lpVtbl->DrawLineAtCoordsWithBrush(This, x0, y0, x1, y1, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawLineWithColor(This, point0, point1, color) \
    ((This)->lpVtbl->DrawLineWithColor(This, point0, point1, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawLineAtCoordsWithColor(This, x0, y0, x1, y1, color) \
    ((This)->lpVtbl->DrawLineAtCoordsWithColor(This, x0, y0, x1, y1, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawLineWithBrushAndStrokeWidth(This, point0, point1, brush, strokeWidth) \
    ((This)->lpVtbl->DrawLineWithBrushAndStrokeWidth(This, point0, point1, brush, strokeWidth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawLineAtCoordsWithBrushAndStrokeWidth(This, x0, y0, x1, y1, brush, strokeWidth) \
    ((This)->lpVtbl->DrawLineAtCoordsWithBrushAndStrokeWidth(This, x0, y0, x1, y1, brush, strokeWidth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawLineWithColorAndStrokeWidth(This, point0, point1, color, strokeWidth) \
    ((This)->lpVtbl->DrawLineWithColorAndStrokeWidth(This, point0, point1, color, strokeWidth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawLineAtCoordsWithColorAndStrokeWidth(This, x0, y0, x1, y1, color, strokeWidth) \
    ((This)->lpVtbl->DrawLineAtCoordsWithColorAndStrokeWidth(This, x0, y0, x1, y1, color, strokeWidth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawLineWithBrushAndStrokeWidthAndStrokeStyle(This, point0, point1, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawLineWithBrushAndStrokeWidthAndStrokeStyle(This, point0, point1, brush, strokeWidth, strokeStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawLineAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(This, x0, y0, x1, y1, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawLineAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(This, x0, y0, x1, y1, brush, strokeWidth, strokeStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawLineWithColorAndStrokeWidthAndStrokeStyle(This, point0, point1, color, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawLineWithColorAndStrokeWidthAndStrokeStyle(This, point0, point1, color, strokeWidth, strokeStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawLineAtCoordsWithColorAndStrokeWidthAndStrokeStyle(This, x0, y0, x1, y1, color, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawLineAtCoordsWithColorAndStrokeWidthAndStrokeStyle(This, x0, y0, x1, y1, color, strokeWidth, strokeStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawRectangleWithBrush(This, rect, brush) \
    ((This)->lpVtbl->DrawRectangleWithBrush(This, rect, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawRectangleAtCoordsWithBrush(This, x, y, w, h, brush) \
    ((This)->lpVtbl->DrawRectangleAtCoordsWithBrush(This, x, y, w, h, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawRectangleWithColor(This, rect, color) \
    ((This)->lpVtbl->DrawRectangleWithColor(This, rect, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawRectangleAtCoordsWithColor(This, x, y, w, h, color) \
    ((This)->lpVtbl->DrawRectangleAtCoordsWithColor(This, x, y, w, h, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawRectangleWithBrushAndStrokeWidth(This, rect, brush, strokeWidth) \
    ((This)->lpVtbl->DrawRectangleWithBrushAndStrokeWidth(This, rect, brush, strokeWidth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawRectangleAtCoordsWithBrushAndStrokeWidth(This, x, y, w, h, brush, strokeWidth) \
    ((This)->lpVtbl->DrawRectangleAtCoordsWithBrushAndStrokeWidth(This, x, y, w, h, brush, strokeWidth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawRectangleWithColorAndStrokeWidth(This, rect, color, strokeWidth) \
    ((This)->lpVtbl->DrawRectangleWithColorAndStrokeWidth(This, rect, color, strokeWidth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawRectangleAtCoordsWithColorAndStrokeWidth(This, x, y, w, h, color, strokeWidth) \
    ((This)->lpVtbl->DrawRectangleAtCoordsWithColorAndStrokeWidth(This, x, y, w, h, color, strokeWidth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawRectangleWithBrushAndStrokeWidthAndStrokeStyle(This, rect, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawRectangleWithBrushAndStrokeWidthAndStrokeStyle(This, rect, brush, strokeWidth, strokeStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawRectangleAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(This, x, y, w, h, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawRectangleAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(This, x, y, w, h, brush, strokeWidth, strokeStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawRectangleWithColorAndStrokeWidthAndStrokeStyle(This, rect, color, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawRectangleWithColorAndStrokeWidthAndStrokeStyle(This, rect, color, strokeWidth, strokeStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawRectangleAtCoordsWithColorAndStrokeWidthAndStrokeStyle(This, x, y, w, h, color, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawRectangleAtCoordsWithColorAndStrokeWidthAndStrokeStyle(This, x, y, w, h, color, strokeWidth, strokeStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillRectangleWithBrush(This, rect, brush) \
    ((This)->lpVtbl->FillRectangleWithBrush(This, rect, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillRectangleAtCoordsWithBrush(This, x, y, w, h, brush) \
    ((This)->lpVtbl->FillRectangleAtCoordsWithBrush(This, x, y, w, h, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillRectangleWithColor(This, rect, color) \
    ((This)->lpVtbl->FillRectangleWithColor(This, rect, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillRectangleAtCoordsWithColor(This, x, y, w, h, color) \
    ((This)->lpVtbl->FillRectangleAtCoordsWithColor(This, x, y, w, h, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillRectangleWithBrushAndOpacityBrush(This, rect, brush, opacityBrush) \
    ((This)->lpVtbl->FillRectangleWithBrushAndOpacityBrush(This, rect, brush, opacityBrush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillRectangleAtCoordsWithBrushAndOpacityBrush(This, x, y, w, h, brush, opacityBrush) \
    ((This)->lpVtbl->FillRectangleAtCoordsWithBrushAndOpacityBrush(This, x, y, w, h, brush, opacityBrush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawRoundedRectangleWithBrush(This, rect, radiusX, radiusY, brush) \
    ((This)->lpVtbl->DrawRoundedRectangleWithBrush(This, rect, radiusX, radiusY, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawRoundedRectangleAtCoordsWithBrush(This, x, y, w, h, radiusX, radiusY, brush) \
    ((This)->lpVtbl->DrawRoundedRectangleAtCoordsWithBrush(This, x, y, w, h, radiusX, radiusY, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawRoundedRectangleWithColor(This, rect, radiusX, radiusY, color) \
    ((This)->lpVtbl->DrawRoundedRectangleWithColor(This, rect, radiusX, radiusY, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawRoundedRectangleAtCoordsWithColor(This, x, y, w, h, radiusX, radiusY, color) \
    ((This)->lpVtbl->DrawRoundedRectangleAtCoordsWithColor(This, x, y, w, h, radiusX, radiusY, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawRoundedRectangleWithBrushAndStrokeWidth(This, rect, radiusX, radiusY, brush, strokeWidth) \
    ((This)->lpVtbl->DrawRoundedRectangleWithBrushAndStrokeWidth(This, rect, radiusX, radiusY, brush, strokeWidth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawRoundedRectangleAtCoordsWithBrushAndStrokeWidth(This, x, y, w, h, radiusX, radiusY, brush, strokeWidth) \
    ((This)->lpVtbl->DrawRoundedRectangleAtCoordsWithBrushAndStrokeWidth(This, x, y, w, h, radiusX, radiusY, brush, strokeWidth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawRoundedRectangleWithColorAndStrokeWidth(This, rect, radiusX, radiusY, color, strokeWidth) \
    ((This)->lpVtbl->DrawRoundedRectangleWithColorAndStrokeWidth(This, rect, radiusX, radiusY, color, strokeWidth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawRoundedRectangleAtCoordsWithColorAndStrokeWidth(This, x, y, w, h, radiusX, radiusY, color, strokeWidth) \
    ((This)->lpVtbl->DrawRoundedRectangleAtCoordsWithColorAndStrokeWidth(This, x, y, w, h, radiusX, radiusY, color, strokeWidth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawRoundedRectangleWithBrushAndStrokeWidthAndStrokeStyle(This, rect, radiusX, radiusY, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawRoundedRectangleWithBrushAndStrokeWidthAndStrokeStyle(This, rect, radiusX, radiusY, brush, strokeWidth, strokeStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawRoundedRectangleAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(This, x, y, w, h, radiusX, radiusY, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawRoundedRectangleAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(This, x, y, w, h, radiusX, radiusY, brush, strokeWidth, strokeStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawRoundedRectangleWithColorAndStrokeWidthAndStrokeStyle(This, rect, radiusX, radiusY, color, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawRoundedRectangleWithColorAndStrokeWidthAndStrokeStyle(This, rect, radiusX, radiusY, color, strokeWidth, strokeStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawRoundedRectangleAtCoordsWithColorAndStrokeWidthAndStrokeStyle(This, x, y, w, h, radiusX, radiusY, color, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawRoundedRectangleAtCoordsWithColorAndStrokeWidthAndStrokeStyle(This, x, y, w, h, radiusX, radiusY, color, strokeWidth, strokeStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillRoundedRectangleWithBrush(This, rect, radiusX, radiusY, brush) \
    ((This)->lpVtbl->FillRoundedRectangleWithBrush(This, rect, radiusX, radiusY, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillRoundedRectangleAtCoordsWithBrush(This, x, y, w, h, radiusX, radiusY, brush) \
    ((This)->lpVtbl->FillRoundedRectangleAtCoordsWithBrush(This, x, y, w, h, radiusX, radiusY, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillRoundedRectangleWithColor(This, rect, radiusX, radiusY, color) \
    ((This)->lpVtbl->FillRoundedRectangleWithColor(This, rect, radiusX, radiusY, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillRoundedRectangleAtCoordsWithColor(This, x, y, w, h, radiusX, radiusY, color) \
    ((This)->lpVtbl->FillRoundedRectangleAtCoordsWithColor(This, x, y, w, h, radiusX, radiusY, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawEllipseWithBrush(This, centerPoint, radiusX, radiusY, brush) \
    ((This)->lpVtbl->DrawEllipseWithBrush(This, centerPoint, radiusX, radiusY, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawEllipseAtCoordsWithBrush(This, x, y, radiusX, radiusY, brush) \
    ((This)->lpVtbl->DrawEllipseAtCoordsWithBrush(This, x, y, radiusX, radiusY, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawEllipseWithColor(This, centerPoint, radiusX, radiusY, color) \
    ((This)->lpVtbl->DrawEllipseWithColor(This, centerPoint, radiusX, radiusY, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawEllipseAtCoordsWithColor(This, x, y, radiusX, radiusY, color) \
    ((This)->lpVtbl->DrawEllipseAtCoordsWithColor(This, x, y, radiusX, radiusY, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawEllipseWithBrushAndStrokeWidth(This, centerPoint, radiusX, radiusY, brush, strokeWidth) \
    ((This)->lpVtbl->DrawEllipseWithBrushAndStrokeWidth(This, centerPoint, radiusX, radiusY, brush, strokeWidth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawEllipseAtCoordsWithBrushAndStrokeWidth(This, x, y, radiusX, radiusY, brush, strokeWidth) \
    ((This)->lpVtbl->DrawEllipseAtCoordsWithBrushAndStrokeWidth(This, x, y, radiusX, radiusY, brush, strokeWidth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawEllipseWithColorAndStrokeWidth(This, centerPoint, radiusX, radiusY, color, strokeWidth) \
    ((This)->lpVtbl->DrawEllipseWithColorAndStrokeWidth(This, centerPoint, radiusX, radiusY, color, strokeWidth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawEllipseAtCoordsWithColorAndStrokeWidth(This, x, y, radiusX, radiusY, color, strokeWidth) \
    ((This)->lpVtbl->DrawEllipseAtCoordsWithColorAndStrokeWidth(This, x, y, radiusX, radiusY, color, strokeWidth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawEllipseWithBrushAndStrokeWidthAndStrokeStyle(This, centerPoint, radiusX, radiusY, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawEllipseWithBrushAndStrokeWidthAndStrokeStyle(This, centerPoint, radiusX, radiusY, brush, strokeWidth, strokeStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawEllipseAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(This, x, y, radiusX, radiusY, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawEllipseAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(This, x, y, radiusX, radiusY, brush, strokeWidth, strokeStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawEllipseWithColorAndStrokeWidthAndStrokeStyle(This, centerPoint, radiusX, radiusY, color, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawEllipseWithColorAndStrokeWidthAndStrokeStyle(This, centerPoint, radiusX, radiusY, color, strokeWidth, strokeStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawEllipseAtCoordsWithColorAndStrokeWidthAndStrokeStyle(This, x, y, radiusX, radiusY, color, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawEllipseAtCoordsWithColorAndStrokeWidthAndStrokeStyle(This, x, y, radiusX, radiusY, color, strokeWidth, strokeStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillEllipseWithBrush(This, centerPoint, radiusX, radiusY, brush) \
    ((This)->lpVtbl->FillEllipseWithBrush(This, centerPoint, radiusX, radiusY, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillEllipseAtCoordsWithBrush(This, x, y, radiusX, radiusY, brush) \
    ((This)->lpVtbl->FillEllipseAtCoordsWithBrush(This, x, y, radiusX, radiusY, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillEllipseWithColor(This, centerPoint, radiusX, radiusY, color) \
    ((This)->lpVtbl->FillEllipseWithColor(This, centerPoint, radiusX, radiusY, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillEllipseAtCoordsWithColor(This, x, y, radiusX, radiusY, color) \
    ((This)->lpVtbl->FillEllipseAtCoordsWithColor(This, x, y, radiusX, radiusY, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawCircleWithBrush(This, centerPoint, radius, brush) \
    ((This)->lpVtbl->DrawCircleWithBrush(This, centerPoint, radius, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawCircleAtCoordsWithBrush(This, x, y, radius, brush) \
    ((This)->lpVtbl->DrawCircleAtCoordsWithBrush(This, x, y, radius, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawCircleWithColor(This, centerPoint, radius, color) \
    ((This)->lpVtbl->DrawCircleWithColor(This, centerPoint, radius, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawCircleAtCoordsWithColor(This, x, y, radius, color) \
    ((This)->lpVtbl->DrawCircleAtCoordsWithColor(This, x, y, radius, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawCircleWithBrushAndStrokeWidth(This, centerPoint, radius, brush, strokeWidth) \
    ((This)->lpVtbl->DrawCircleWithBrushAndStrokeWidth(This, centerPoint, radius, brush, strokeWidth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawCircleAtCoordsWithBrushAndStrokeWidth(This, x, y, radius, brush, strokeWidth) \
    ((This)->lpVtbl->DrawCircleAtCoordsWithBrushAndStrokeWidth(This, x, y, radius, brush, strokeWidth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawCircleWithColorAndStrokeWidth(This, centerPoint, radius, color, strokeWidth) \
    ((This)->lpVtbl->DrawCircleWithColorAndStrokeWidth(This, centerPoint, radius, color, strokeWidth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawCircleAtCoordsWithColorAndStrokeWidth(This, x, y, radius, color, strokeWidth) \
    ((This)->lpVtbl->DrawCircleAtCoordsWithColorAndStrokeWidth(This, x, y, radius, color, strokeWidth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawCircleWithBrushAndStrokeWidthAndStrokeStyle(This, centerPoint, radius, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawCircleWithBrushAndStrokeWidthAndStrokeStyle(This, centerPoint, radius, brush, strokeWidth, strokeStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawCircleAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(This, x, y, radius, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawCircleAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(This, x, y, radius, brush, strokeWidth, strokeStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawCircleWithColorAndStrokeWidthAndStrokeStyle(This, centerPoint, radius, color, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawCircleWithColorAndStrokeWidthAndStrokeStyle(This, centerPoint, radius, color, strokeWidth, strokeStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawCircleAtCoordsWithColorAndStrokeWidthAndStrokeStyle(This, x, y, radius, color, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawCircleAtCoordsWithColorAndStrokeWidthAndStrokeStyle(This, x, y, radius, color, strokeWidth, strokeStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillCircleWithBrush(This, centerPoint, radius, brush) \
    ((This)->lpVtbl->FillCircleWithBrush(This, centerPoint, radius, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillCircleAtCoordsWithBrush(This, x, y, radius, brush) \
    ((This)->lpVtbl->FillCircleAtCoordsWithBrush(This, x, y, radius, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillCircleWithColor(This, centerPoint, radius, color) \
    ((This)->lpVtbl->FillCircleWithColor(This, centerPoint, radius, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillCircleAtCoordsWithColor(This, x, y, radius, color) \
    ((This)->lpVtbl->FillCircleAtCoordsWithColor(This, x, y, radius, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawTextAtPointWithColor(This, text, point, color) \
    ((This)->lpVtbl->DrawTextAtPointWithColor(This, text, point, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawTextAtPointCoordsWithColor(This, text, x, y, color) \
    ((This)->lpVtbl->DrawTextAtPointCoordsWithColor(This, text, x, y, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawTextAtPointWithBrushAndFormat(This, text, point, brush, format) \
    ((This)->lpVtbl->DrawTextAtPointWithBrushAndFormat(This, text, point, brush, format))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawTextAtRectWithBrushAndFormat(This, text, rectangle, brush, format) \
    ((This)->lpVtbl->DrawTextAtRectWithBrushAndFormat(This, text, rectangle, brush, format))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawTextAtPointCoordsWithBrushAndFormat(This, text, x, y, brush, format) \
    ((This)->lpVtbl->DrawTextAtPointCoordsWithBrushAndFormat(This, text, x, y, brush, format))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawTextAtRectCoordsWithBrushAndFormat(This, text, x, y, w, h, brush, format) \
    ((This)->lpVtbl->DrawTextAtRectCoordsWithBrushAndFormat(This, text, x, y, w, h, brush, format))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawTextAtPointWithColorAndFormat(This, text, point, color, format) \
    ((This)->lpVtbl->DrawTextAtPointWithColorAndFormat(This, text, point, color, format))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawTextAtRectWithColorAndFormat(This, text, rectangle, color, format) \
    ((This)->lpVtbl->DrawTextAtRectWithColorAndFormat(This, text, rectangle, color, format))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawTextAtPointCoordsWithColorAndFormat(This, text, x, y, color, format) \
    ((This)->lpVtbl->DrawTextAtPointCoordsWithColorAndFormat(This, text, x, y, color, format))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawTextAtRectCoordsWithColorAndFormat(This, text, x, y, w, h, color, format) \
    ((This)->lpVtbl->DrawTextAtRectCoordsWithColorAndFormat(This, text, x, y, w, h, color, format))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawGeometryWithBrush(This, geometry, offset, brush) \
    ((This)->lpVtbl->DrawGeometryWithBrush(This, geometry, offset, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawGeometryWithColor(This, geometry, offset, color) \
    ((This)->lpVtbl->DrawGeometryWithColor(This, geometry, offset, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawGeometryAtCoordsWithBrush(This, geometry, x, y, brush) \
    ((This)->lpVtbl->DrawGeometryAtCoordsWithBrush(This, geometry, x, y, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawGeometryAtCoordsWithColor(This, geometry, x, y, color) \
    ((This)->lpVtbl->DrawGeometryAtCoordsWithColor(This, geometry, x, y, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawGeometryAtOriginWithBrush(This, geometry, brush) \
    ((This)->lpVtbl->DrawGeometryAtOriginWithBrush(This, geometry, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawGeometryAtOriginWithColor(This, geometry, color) \
    ((This)->lpVtbl->DrawGeometryAtOriginWithColor(This, geometry, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawGeometryWithBrushAndStrokeWidth(This, geometry, offset, brush, strokeWidth) \
    ((This)->lpVtbl->DrawGeometryWithBrushAndStrokeWidth(This, geometry, offset, brush, strokeWidth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawGeometryWithColorAndStrokeWidth(This, geometry, offset, color, strokeWidth) \
    ((This)->lpVtbl->DrawGeometryWithColorAndStrokeWidth(This, geometry, offset, color, strokeWidth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawGeometryAtCoordsWithBrushAndStrokeWidth(This, geometry, x, y, brush, strokeWidth) \
    ((This)->lpVtbl->DrawGeometryAtCoordsWithBrushAndStrokeWidth(This, geometry, x, y, brush, strokeWidth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawGeometryAtCoordsWithColorAndStrokeWidth(This, geometry, x, y, color, strokeWidth) \
    ((This)->lpVtbl->DrawGeometryAtCoordsWithColorAndStrokeWidth(This, geometry, x, y, color, strokeWidth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawGeometryAtOriginWithBrushAndStrokeWidth(This, geometry, brush, strokeWidth) \
    ((This)->lpVtbl->DrawGeometryAtOriginWithBrushAndStrokeWidth(This, geometry, brush, strokeWidth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawGeometryAtOriginWithColorAndStrokeWidth(This, geometry, color, strokeWidth) \
    ((This)->lpVtbl->DrawGeometryAtOriginWithColorAndStrokeWidth(This, geometry, color, strokeWidth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawGeometryWithBrushAndStrokeWidthAndStrokeStyle(This, geometry, offset, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawGeometryWithBrushAndStrokeWidthAndStrokeStyle(This, geometry, offset, brush, strokeWidth, strokeStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawGeometryWithColorAndStrokeWidthAndStrokeStyle(This, geometry, offset, color, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawGeometryWithColorAndStrokeWidthAndStrokeStyle(This, geometry, offset, color, strokeWidth, strokeStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawGeometryAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(This, geometry, x, y, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawGeometryAtCoordsWithBrushAndStrokeWidthAndStrokeStyle(This, geometry, x, y, brush, strokeWidth, strokeStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawGeometryAtCoordsWithColorAndStrokeWidthAndStrokeStyle(This, geometry, x, y, color, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawGeometryAtCoordsWithColorAndStrokeWidthAndStrokeStyle(This, geometry, x, y, color, strokeWidth, strokeStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawGeometryAtOriginWithBrushAndStrokeWidthAndStrokeStyle(This, geometry, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawGeometryAtOriginWithBrushAndStrokeWidthAndStrokeStyle(This, geometry, brush, strokeWidth, strokeStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawGeometryAtOriginWithColorAndStrokeWidthAndStrokeStyle(This, geometry, color, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawGeometryAtOriginWithColorAndStrokeWidthAndStrokeStyle(This, geometry, color, strokeWidth, strokeStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillGeometryWithBrush(This, geometry, offset, brush) \
    ((This)->lpVtbl->FillGeometryWithBrush(This, geometry, offset, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillGeometryWithBrushAndOpacityBrush(This, geometry, offset, brush, opacityBrush) \
    ((This)->lpVtbl->FillGeometryWithBrushAndOpacityBrush(This, geometry, offset, brush, opacityBrush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillGeometryWithColor(This, geometry, offset, color) \
    ((This)->lpVtbl->FillGeometryWithColor(This, geometry, offset, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillGeometryAtCoordsWithBrush(This, geometry, x, y, brush) \
    ((This)->lpVtbl->FillGeometryAtCoordsWithBrush(This, geometry, x, y, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillGeometryAtCoordsWithBrushAndOpacityBrush(This, geometry, x, y, brush, opacityBrush) \
    ((This)->lpVtbl->FillGeometryAtCoordsWithBrushAndOpacityBrush(This, geometry, x, y, brush, opacityBrush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillGeometryAtCoordsWithColor(This, geometry, x, y, color) \
    ((This)->lpVtbl->FillGeometryAtCoordsWithColor(This, geometry, x, y, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillGeometryAtOriginWithBrush(This, geometry, brush) \
    ((This)->lpVtbl->FillGeometryAtOriginWithBrush(This, geometry, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillGeometryAtOriginWithBrushAndOpacityBrush(This, geometry, brush, opacityBrush) \
    ((This)->lpVtbl->FillGeometryAtOriginWithBrushAndOpacityBrush(This, geometry, brush, opacityBrush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FillGeometryAtOriginWithColor(This, geometry, color) \
    ((This)->lpVtbl->FillGeometryAtOriginWithColor(This, geometry, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawCachedGeometryWithBrush(This, geometry, offset, brush) \
    ((This)->lpVtbl->DrawCachedGeometryWithBrush(This, geometry, offset, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawCachedGeometryWithColor(This, geometry, offset, color) \
    ((This)->lpVtbl->DrawCachedGeometryWithColor(This, geometry, offset, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawCachedGeometryAtCoordsWithBrush(This, geometry, x, y, brush) \
    ((This)->lpVtbl->DrawCachedGeometryAtCoordsWithBrush(This, geometry, x, y, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawCachedGeometryAtCoordsWithColor(This, geometry, x, y, color) \
    ((This)->lpVtbl->DrawCachedGeometryAtCoordsWithColor(This, geometry, x, y, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawCachedGeometryAtOriginWithBrush(This, geometry, brush) \
    ((This)->lpVtbl->DrawCachedGeometryAtOriginWithBrush(This, geometry, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawCachedGeometryAtOriginWithColor(This, geometry, color) \
    ((This)->lpVtbl->DrawCachedGeometryAtOriginWithColor(This, geometry, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawTextLayoutWithBrush(This, textLayout, point, brush) \
    ((This)->lpVtbl->DrawTextLayoutWithBrush(This, textLayout, point, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawTextLayoutAtCoordsWithBrush(This, textLayout, x, y, brush) \
    ((This)->lpVtbl->DrawTextLayoutAtCoordsWithBrush(This, textLayout, x, y, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawTextLayoutWithColor(This, textLayout, point, color) \
    ((This)->lpVtbl->DrawTextLayoutWithColor(This, textLayout, point, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawTextLayoutAtCoordsWithColor(This, textLayout, x, y, color) \
    ((This)->lpVtbl->DrawTextLayoutAtCoordsWithColor(This, textLayout, x, y, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawGradientMeshAtOrigin(This, gradientMesh) \
    ((This)->lpVtbl->DrawGradientMeshAtOrigin(This, gradientMesh))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawGradientMesh(This, gradientMesh, point) \
    ((This)->lpVtbl->DrawGradientMesh(This, gradientMesh, point))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawGradientMeshAtCoords(This, gradientMesh, x, y) \
    ((This)->lpVtbl->DrawGradientMeshAtCoords(This, gradientMesh, x, y))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawSvgAtOrigin(This, svgDocument, viewportSize) \
    ((This)->lpVtbl->DrawSvgAtOrigin(This, svgDocument, viewportSize))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawSvgAtPoint(This, svgDocument, viewportSize, point) \
    ((This)->lpVtbl->DrawSvgAtPoint(This, svgDocument, viewportSize, point))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawSvgAtCoords(This, svgDocument, viewportSize, x, y) \
    ((This)->lpVtbl->DrawSvgAtCoords(This, svgDocument, viewportSize, x, y))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_get_Antialiasing(This, value) \
    ((This)->lpVtbl->get_Antialiasing(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_put_Antialiasing(This, value) \
    ((This)->lpVtbl->put_Antialiasing(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_get_Blend(This, value) \
    ((This)->lpVtbl->get_Blend(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_put_Blend(This, value) \
    ((This)->lpVtbl->put_Blend(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_get_TextAntialiasing(This, value) \
    ((This)->lpVtbl->get_TextAntialiasing(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_put_TextAntialiasing(This, value) \
    ((This)->lpVtbl->put_TextAntialiasing(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_get_TextRenderingParameters(This, value) \
    ((This)->lpVtbl->get_TextRenderingParameters(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_put_TextRenderingParameters(This, value) \
    ((This)->lpVtbl->put_TextRenderingParameters(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_get_Transform(This, value) \
    ((This)->lpVtbl->get_Transform(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_put_Transform(This, value) \
    ((This)->lpVtbl->put_Transform(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_get_Units(This, value) \
    ((This)->lpVtbl->get_Units(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_put_Units(This, value) \
    ((This)->lpVtbl->put_Units(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_get_EffectBufferPrecision(This, value) \
    ((This)->lpVtbl->get_EffectBufferPrecision(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_put_EffectBufferPrecision(This, value) \
    ((This)->lpVtbl->put_EffectBufferPrecision(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_get_EffectTileSize(This, value) \
    ((This)->lpVtbl->get_EffectTileSize(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_put_EffectTileSize(This, value) \
    ((This)->lpVtbl->put_EffectTileSize(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_CreateLayerWithOpacity(This, opacity, layer) \
    ((This)->lpVtbl->CreateLayerWithOpacity(This, opacity, layer))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_CreateLayerWithOpacityBrush(This, opacityBrush, layer) \
    ((This)->lpVtbl->CreateLayerWithOpacityBrush(This, opacityBrush, layer))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_CreateLayerWithOpacityAndClipRectangle(This, opacity, clipRectangle, layer) \
    ((This)->lpVtbl->CreateLayerWithOpacityAndClipRectangle(This, opacity, clipRectangle, layer))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_CreateLayerWithOpacityBrushAndClipRectangle(This, opacityBrush, clipRectangle, layer) \
    ((This)->lpVtbl->CreateLayerWithOpacityBrushAndClipRectangle(This, opacityBrush, clipRectangle, layer))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_CreateLayerWithOpacityAndClipGeometry(This, opacity, clipGeometry, layer) \
    ((This)->lpVtbl->CreateLayerWithOpacityAndClipGeometry(This, opacity, clipGeometry, layer))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_CreateLayerWithOpacityBrushAndClipGeometry(This, opacityBrush, clipGeometry, layer) \
    ((This)->lpVtbl->CreateLayerWithOpacityBrushAndClipGeometry(This, opacityBrush, clipGeometry, layer))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_CreateLayerWithOpacityAndClipGeometryAndTransform(This, opacity, clipGeometry, geometryTransform, layer) \
    ((This)->lpVtbl->CreateLayerWithOpacityAndClipGeometryAndTransform(This, opacity, clipGeometry, geometryTransform, layer))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_CreateLayerWithOpacityBrushAndClipGeometryAndTransform(This, opacityBrush, clipGeometry, geometryTransform, layer) \
    ((This)->lpVtbl->CreateLayerWithOpacityBrushAndClipGeometryAndTransform(This, opacityBrush, clipGeometry, geometryTransform, layer))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_CreateLayerWithAllOptions(This, opacity, opacityBrush, clipRectangle, clipGeometry, geometryTransform, options, layer) \
    ((This)->lpVtbl->CreateLayerWithAllOptions(This, opacity, opacityBrush, clipRectangle, clipGeometry, geometryTransform, options, layer))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawGlyphRun(This, point, fontFace, fontSize, glyphsLength, glyphs, isSideways, bidiLevel, brush) \
    ((This)->lpVtbl->DrawGlyphRun(This, point, fontFace, fontSize, glyphsLength, glyphs, isSideways, bidiLevel, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawGlyphRunWithMeasuringMode(This, point, fontFace, fontSize, glyphsLength, glyphs, isSideways, bidiLevel, brush, measuringMode) \
    ((This)->lpVtbl->DrawGlyphRunWithMeasuringMode(This, point, fontFace, fontSize, glyphsLength, glyphs, isSideways, bidiLevel, brush, measuringMode))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_DrawGlyphRunWithMeasuringModeAndDescription(This, point, fontFace, fontSize, glyphsLength, glyphs, isSideways, bidiLevel, brush, measuringMode, localeName, textString, clusterMapIndicesLength, clusterMapIndices, textPosition) \
    ((This)->lpVtbl->DrawGlyphRunWithMeasuringModeAndDescription(This, point, fontFace, fontSize, glyphsLength, glyphs, isSideways, bidiLevel, brush, measuringMode, localeName, textString, clusterMapIndicesLength, clusterMapIndices, textPosition))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_CreateSpriteBatch(This, spriteBatch) \
    ((This)->lpVtbl->CreateSpriteBatch(This, spriteBatch))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_CreateSpriteBatchWithSortMode(This, sortMode, spriteBatch) \
    ((This)->lpVtbl->CreateSpriteBatchWithSortMode(This, sortMode, spriteBatch))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_CreateSpriteBatchWithSortModeAndInterpolation(This, sortMode, interpolation, spriteBatch) \
    ((This)->lpVtbl->CreateSpriteBatchWithSortModeAndInterpolation(This, sortMode, interpolation, spriteBatch))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_CreateSpriteBatchWithSortModeAndInterpolationAndOptions(This, sortMode, interpolation, options, spriteBatch) \
    ((This)->lpVtbl->CreateSpriteBatchWithSortModeAndInterpolationAndOptions(This, sortMode, interpolation, options, spriteBatch))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasImage
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Effects.IGraphicsEffectSource
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasImage[] = L"Microsoft.Graphics.Canvas.ICanvasImage";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetBounds)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        struct __x_ABI_CWindows_CFoundation_CRect* bounds);
    HRESULT (STDMETHODCALLTYPE* GetBoundsWithTransform)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform,
        struct __x_ABI_CWindows_CFoundation_CRect* bounds);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage_GetBounds(This, resourceCreator, bounds) \
    ((This)->lpVtbl->GetBounds(This, resourceCreator, bounds))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage_GetBoundsWithTransform(This, resourceCreator, transform, bounds) \
    ((This)->lpVtbl->GetBoundsWithTransform(This, resourceCreator, transform, bounds))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasImageStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasImage
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasImageStatics[] = L"Microsoft.Graphics.Canvas.ICanvasImageStatics";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* SaveAsync)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* image,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRectangle,
        FLOAT dpi,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream* stream,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBitmapFileFormat fileFormat,
        __x_ABI_CWindows_CFoundation_CIAsyncAction** action);
    HRESULT (STDMETHODCALLTYPE* SaveWithQualityAsync)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* image,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRectangle,
        FLOAT dpi,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream* stream,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBitmapFileFormat fileFormat,
        FLOAT quality,
        __x_ABI_CWindows_CFoundation_CIAsyncAction** action);
    HRESULT (STDMETHODCALLTYPE* SaveWithQualityAndBufferPrecisionAsync)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* image,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRectangle,
        FLOAT dpi,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream* stream,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBitmapFileFormat fileFormat,
        FLOAT quality,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBufferPrecision bufferPrecision,
        __x_ABI_CWindows_CFoundation_CIAsyncAction** action);
    HRESULT (STDMETHODCALLTYPE* ComputeHistogram)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* image,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRectangle,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CEffects_CEffectChannelSelect channelSelect,
        INT32 numberOfBins,
        UINT32* valueElementsLength,
        FLOAT** valueElements);
    HRESULT (STDMETHODCALLTYPE* IsHistogramSupported)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice* device,
        boolean* result);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStaticsVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics_SaveAsync(This, image, sourceRectangle, dpi, resourceCreator, stream, fileFormat, action) \
    ((This)->lpVtbl->SaveAsync(This, image, sourceRectangle, dpi, resourceCreator, stream, fileFormat, action))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics_SaveWithQualityAsync(This, image, sourceRectangle, dpi, resourceCreator, stream, fileFormat, quality, action) \
    ((This)->lpVtbl->SaveWithQualityAsync(This, image, sourceRectangle, dpi, resourceCreator, stream, fileFormat, quality, action))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics_SaveWithQualityAndBufferPrecisionAsync(This, image, sourceRectangle, dpi, resourceCreator, stream, fileFormat, quality, bufferPrecision, action) \
    ((This)->lpVtbl->SaveWithQualityAndBufferPrecisionAsync(This, image, sourceRectangle, dpi, resourceCreator, stream, fileFormat, quality, bufferPrecision, action))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics_ComputeHistogram(This, image, sourceRectangle, resourceCreator, channelSelect, numberOfBins, valueElementsLength, valueElements) \
    ((This)->lpVtbl->ComputeHistogram(This, image, sourceRectangle, resourceCreator, channelSelect, numberOfBins, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics_IsHistogramSupported(This, device, result) \
    ((This)->lpVtbl->IsHistogramSupported(This, device, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImageStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasLock
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasLock
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasLock[] = L"Microsoft.Graphics.Canvas.ICanvasLock";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLockVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock* This,
        TrustLevel* trustLevel);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLockVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLockVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasLock_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasRenderTarget
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasRenderTarget
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasRenderTarget[] = L"Microsoft.Graphics.Canvas.ICanvasRenderTarget";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateDrawingSession)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession** drawingSession);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget_CreateDrawingSession(This, drawingSession) \
    ((This)->lpVtbl->CreateDrawingSession(This, drawingSession))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasRenderTargetFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasRenderTarget
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasRenderTargetFactory[] = L"Microsoft.Graphics.Canvas.ICanvasRenderTargetFactory";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateWithSize)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi* resourceCreator,
        struct __x_ABI_CWindows_CFoundation_CSize size,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget** renderTarget);
    HRESULT (STDMETHODCALLTYPE* CreateWithWidthAndHeight)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi* resourceCreator,
        FLOAT width,
        FLOAT height,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget** renderTarget);
    HRESULT (STDMETHODCALLTYPE* CreateWithWidthAndHeightAndDpi)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        FLOAT width,
        FLOAT height,
        FLOAT dpi,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget** renderTarget);
    HRESULT (STDMETHODCALLTYPE* CreateWithWidthAndHeightAndDpiAndFormatAndAlpha)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        FLOAT width,
        FLOAT height,
        FLOAT dpi,
        enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat format,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode alpha,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget** renderTarget);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactoryVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory_CreateWithSize(This, resourceCreator, size, renderTarget) \
    ((This)->lpVtbl->CreateWithSize(This, resourceCreator, size, renderTarget))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory_CreateWithWidthAndHeight(This, resourceCreator, width, height, renderTarget) \
    ((This)->lpVtbl->CreateWithWidthAndHeight(This, resourceCreator, width, height, renderTarget))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory_CreateWithWidthAndHeightAndDpi(This, resourceCreator, width, height, dpi, renderTarget) \
    ((This)->lpVtbl->CreateWithWidthAndHeightAndDpi(This, resourceCreator, width, height, dpi, renderTarget))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory_CreateWithWidthAndHeightAndDpiAndFormatAndAlpha(This, resourceCreator, width, height, dpi, format, alpha, renderTarget) \
    ((This)->lpVtbl->CreateWithWidthAndHeightAndDpiAndFormatAndAlpha(This, resourceCreator, width, height, dpi, format, alpha, renderTarget))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasRenderTargetStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasRenderTarget
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasRenderTargetStatics[] = L"Microsoft.Graphics.Canvas.ICanvasRenderTargetStatics";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateFromDirect3D11Surface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface* surface,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget** bitmap);
    HRESULT (STDMETHODCALLTYPE* CreateFromDirect3D11SurfaceWithDpi)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface* surface,
        FLOAT dpi,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget** bitmap);
    HRESULT (STDMETHODCALLTYPE* CreateFromDirect3D11SurfaceWithDpiAndAlpha)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface* surface,
        FLOAT dpi,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode alpha,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTarget** bitmap);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStaticsVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics_CreateFromDirect3D11Surface(This, resourceCreator, surface, bitmap) \
    ((This)->lpVtbl->CreateFromDirect3D11Surface(This, resourceCreator, surface, bitmap))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics_CreateFromDirect3D11SurfaceWithDpi(This, resourceCreator, surface, dpi, bitmap) \
    ((This)->lpVtbl->CreateFromDirect3D11SurfaceWithDpi(This, resourceCreator, surface, dpi, bitmap))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics_CreateFromDirect3D11SurfaceWithDpiAndAlpha(This, resourceCreator, surface, dpi, alpha, bitmap) \
    ((This)->lpVtbl->CreateFromDirect3D11SurfaceWithDpiAndAlpha(This, resourceCreator, surface, dpi, alpha, bitmap))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasRenderTargetStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasResourceCreator[] = L"Microsoft.Graphics.Canvas.ICanvasResourceCreator";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Device)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice** value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_get_Device(This, value) \
    ((This)->lpVtbl->get_Device(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasResourceCreatorWithDpi[] = L"Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpiVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Dpi)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi* This,
        FLOAT* dpi);
    HRESULT (STDMETHODCALLTYPE* ConvertPixelsToDips)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi* This,
        INT32 pixels,
        FLOAT* dips);
    HRESULT (STDMETHODCALLTYPE* ConvertDipsToPixels)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi* This,
        FLOAT dips,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasDpiRounding dpiRounding,
        INT32* pixels);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpiVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpiVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi_get_Dpi(This, dpi) \
    ((This)->lpVtbl->get_Dpi(This, dpi))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi_ConvertPixelsToDips(This, pixels, dips) \
    ((This)->lpVtbl->ConvertPixelsToDips(This, pixels, dips))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi_ConvertDipsToPixels(This, dips, dpiRounding, pixels) \
    ((This)->lpVtbl->ConvertDipsToPixels(This, dips, dpiRounding, pixels))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasSpriteBatch
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasSpriteBatch
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasSpriteBatch[] = L"Microsoft.Graphics.Canvas.ICanvasSpriteBatch";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* DrawToRect)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* bitmap,
        struct __x_ABI_CWindows_CFoundation_CRect destRect);
    HRESULT (STDMETHODCALLTYPE* DrawAtOffset)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* bitmap,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 offset);
    HRESULT (STDMETHODCALLTYPE* DrawWithTransform)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* bitmap,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform);
    HRESULT (STDMETHODCALLTYPE* DrawToRectWithTint)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* bitmap,
        struct __x_ABI_CWindows_CFoundation_CRect destRect,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 tint);
    HRESULT (STDMETHODCALLTYPE* DrawAtOffsetWithTint)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* bitmap,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 offset,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 tint);
    HRESULT (STDMETHODCALLTYPE* DrawWithTransformAndTint)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* bitmap,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 tint);
    HRESULT (STDMETHODCALLTYPE* DrawToRectWithTintAndFlip)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* bitmap,
        struct __x_ABI_CWindows_CFoundation_CRect destRect,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 tint,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasSpriteFlip flip);
    HRESULT (STDMETHODCALLTYPE* DrawWithTransformAndTintAndFlip)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* bitmap,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 tint,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasSpriteFlip flip);
    HRESULT (STDMETHODCALLTYPE* DrawAtOffsetWithTintAndTransform)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* bitmap,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 offset,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 tint,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 origin,
        FLOAT rotation,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 scale,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasSpriteFlip flip);
    HRESULT (STDMETHODCALLTYPE* DrawFromSpriteSheetToRect)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* bitmap,
        struct __x_ABI_CWindows_CFoundation_CRect destRect,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRect);
    HRESULT (STDMETHODCALLTYPE* DrawFromSpriteSheetAtOffset)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* bitmap,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 offset,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRect);
    HRESULT (STDMETHODCALLTYPE* DrawFromSpriteSheetWithTransform)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* bitmap,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRect);
    HRESULT (STDMETHODCALLTYPE* DrawFromSpriteSheetToRectWithTint)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* bitmap,
        struct __x_ABI_CWindows_CFoundation_CRect destRect,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRect,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 tint);
    HRESULT (STDMETHODCALLTYPE* DrawFromSpriteSheetAtOffsetWithTint)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* bitmap,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 offset,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRect,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 tint);
    HRESULT (STDMETHODCALLTYPE* DrawFromSpriteSheetWithTransformAndTint)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* bitmap,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRect,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 tint);
    HRESULT (STDMETHODCALLTYPE* DrawFromSpriteSheetToRectWithTintAndFlip)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* bitmap,
        struct __x_ABI_CWindows_CFoundation_CRect destRect,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRect,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 tint,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasSpriteFlip flip);
    HRESULT (STDMETHODCALLTYPE* DrawFromSpriteSheetWithTransformAndTintAndFlip)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* bitmap,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRect,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 tint,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasSpriteFlip flip);
    HRESULT (STDMETHODCALLTYPE* DrawFromSpriteSheetAtOffsetWithTintAndTransform)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasBitmap* bitmap,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 offset,
        struct __x_ABI_CWindows_CFoundation_CRect sourceRect,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 tint,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 origin,
        FLOAT rotation,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 scale,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasSpriteFlip flip);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_DrawToRect(This, bitmap, destRect) \
    ((This)->lpVtbl->DrawToRect(This, bitmap, destRect))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_DrawAtOffset(This, bitmap, offset) \
    ((This)->lpVtbl->DrawAtOffset(This, bitmap, offset))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_DrawWithTransform(This, bitmap, transform) \
    ((This)->lpVtbl->DrawWithTransform(This, bitmap, transform))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_DrawToRectWithTint(This, bitmap, destRect, tint) \
    ((This)->lpVtbl->DrawToRectWithTint(This, bitmap, destRect, tint))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_DrawAtOffsetWithTint(This, bitmap, offset, tint) \
    ((This)->lpVtbl->DrawAtOffsetWithTint(This, bitmap, offset, tint))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_DrawWithTransformAndTint(This, bitmap, transform, tint) \
    ((This)->lpVtbl->DrawWithTransformAndTint(This, bitmap, transform, tint))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_DrawToRectWithTintAndFlip(This, bitmap, destRect, tint, flip) \
    ((This)->lpVtbl->DrawToRectWithTintAndFlip(This, bitmap, destRect, tint, flip))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_DrawWithTransformAndTintAndFlip(This, bitmap, transform, tint, flip) \
    ((This)->lpVtbl->DrawWithTransformAndTintAndFlip(This, bitmap, transform, tint, flip))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_DrawAtOffsetWithTintAndTransform(This, bitmap, offset, tint, origin, rotation, scale, flip) \
    ((This)->lpVtbl->DrawAtOffsetWithTintAndTransform(This, bitmap, offset, tint, origin, rotation, scale, flip))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_DrawFromSpriteSheetToRect(This, bitmap, destRect, sourceRect) \
    ((This)->lpVtbl->DrawFromSpriteSheetToRect(This, bitmap, destRect, sourceRect))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_DrawFromSpriteSheetAtOffset(This, bitmap, offset, sourceRect) \
    ((This)->lpVtbl->DrawFromSpriteSheetAtOffset(This, bitmap, offset, sourceRect))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_DrawFromSpriteSheetWithTransform(This, bitmap, transform, sourceRect) \
    ((This)->lpVtbl->DrawFromSpriteSheetWithTransform(This, bitmap, transform, sourceRect))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_DrawFromSpriteSheetToRectWithTint(This, bitmap, destRect, sourceRect, tint) \
    ((This)->lpVtbl->DrawFromSpriteSheetToRectWithTint(This, bitmap, destRect, sourceRect, tint))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_DrawFromSpriteSheetAtOffsetWithTint(This, bitmap, offset, sourceRect, tint) \
    ((This)->lpVtbl->DrawFromSpriteSheetAtOffsetWithTint(This, bitmap, offset, sourceRect, tint))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_DrawFromSpriteSheetWithTransformAndTint(This, bitmap, transform, sourceRect, tint) \
    ((This)->lpVtbl->DrawFromSpriteSheetWithTransformAndTint(This, bitmap, transform, sourceRect, tint))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_DrawFromSpriteSheetToRectWithTintAndFlip(This, bitmap, destRect, sourceRect, tint, flip) \
    ((This)->lpVtbl->DrawFromSpriteSheetToRectWithTintAndFlip(This, bitmap, destRect, sourceRect, tint, flip))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_DrawFromSpriteSheetWithTransformAndTintAndFlip(This, bitmap, transform, sourceRect, tint, flip) \
    ((This)->lpVtbl->DrawFromSpriteSheetWithTransformAndTintAndFlip(This, bitmap, transform, sourceRect, tint, flip))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_DrawFromSpriteSheetAtOffsetWithTintAndTransform(This, bitmap, offset, sourceRect, tint, origin, rotation, scale, flip) \
    ((This)->lpVtbl->DrawFromSpriteSheetAtOffsetWithTintAndTransform(This, bitmap, offset, sourceRect, tint, origin, rotation, scale, flip))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatch_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasSpriteBatchStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasSpriteBatch
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasSpriteBatchStatics[] = L"Microsoft.Graphics.Canvas.ICanvasSpriteBatchStatics";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* IsSupported)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice* device,
        boolean* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStaticsVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics_IsSupported(This, device, value) \
    ((This)->lpVtbl->IsSupported(This, device, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSpriteBatchStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasSwapChain
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasSwapChain
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasSwapChain[] = L"Microsoft.Graphics.Canvas.ICanvasSwapChain";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* Present)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain* This);
    HRESULT (STDMETHODCALLTYPE* PresentWithSyncInterval)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain* This,
        INT32 syncInterval);
    HRESULT (STDMETHODCALLTYPE* ResizeBuffersWithSize)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain* This,
        struct __x_ABI_CWindows_CFoundation_CSize newSize);
    HRESULT (STDMETHODCALLTYPE* ResizeBuffersWithWidthAndHeight)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain* This,
        FLOAT newWidth,
        FLOAT newHeight);
    HRESULT (STDMETHODCALLTYPE* ResizeBuffersWithWidthAndHeightAndDpi)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain* This,
        FLOAT newWidth,
        FLOAT newHeight,
        FLOAT newDpi);
    HRESULT (STDMETHODCALLTYPE* ResizeBuffersWithAllOptions)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain* This,
        FLOAT newWidth,
        FLOAT newHeight,
        FLOAT newDpi,
        enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat newFormat,
        INT32 bufferCount);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain* This,
        struct __x_ABI_CWindows_CFoundation_CSize* size);
    HRESULT (STDMETHODCALLTYPE* get_SizeInPixels)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain* This,
        struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize* size);
    HRESULT (STDMETHODCALLTYPE* get_Format)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain* This,
        enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat* value);
    HRESULT (STDMETHODCALLTYPE* get_BufferCount)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain* This,
        INT32* value);
    HRESULT (STDMETHODCALLTYPE* get_AlphaMode)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode* value);
    HRESULT (STDMETHODCALLTYPE* get_Rotation)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasSwapChainRotation* value);
    HRESULT (STDMETHODCALLTYPE* put_Rotation)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasSwapChainRotation value);
    HRESULT (STDMETHODCALLTYPE* get_SourceSize)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain* This,
        struct __x_ABI_CWindows_CFoundation_CSize* value);
    HRESULT (STDMETHODCALLTYPE* put_SourceSize)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain* This,
        struct __x_ABI_CWindows_CFoundation_CSize value);
    HRESULT (STDMETHODCALLTYPE* get_TransformMatrix)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2* value);
    HRESULT (STDMETHODCALLTYPE* put_TransformMatrix)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 value);
    HRESULT (STDMETHODCALLTYPE* CreateDrawingSession)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain* This,
        struct __x_ABI_CWindows_CUI_CColor clearColor,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession** drawingSession);
    HRESULT (STDMETHODCALLTYPE* WaitForVerticalBlank)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain* This);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_Present(This) \
    ((This)->lpVtbl->Present(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_PresentWithSyncInterval(This, syncInterval) \
    ((This)->lpVtbl->PresentWithSyncInterval(This, syncInterval))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_ResizeBuffersWithSize(This, newSize) \
    ((This)->lpVtbl->ResizeBuffersWithSize(This, newSize))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_ResizeBuffersWithWidthAndHeight(This, newWidth, newHeight) \
    ((This)->lpVtbl->ResizeBuffersWithWidthAndHeight(This, newWidth, newHeight))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_ResizeBuffersWithWidthAndHeightAndDpi(This, newWidth, newHeight, newDpi) \
    ((This)->lpVtbl->ResizeBuffersWithWidthAndHeightAndDpi(This, newWidth, newHeight, newDpi))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_ResizeBuffersWithAllOptions(This, newWidth, newHeight, newDpi, newFormat, bufferCount) \
    ((This)->lpVtbl->ResizeBuffersWithAllOptions(This, newWidth, newHeight, newDpi, newFormat, bufferCount))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_get_Size(This, size) \
    ((This)->lpVtbl->get_Size(This, size))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_get_SizeInPixels(This, size) \
    ((This)->lpVtbl->get_SizeInPixels(This, size))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_get_Format(This, value) \
    ((This)->lpVtbl->get_Format(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_get_BufferCount(This, value) \
    ((This)->lpVtbl->get_BufferCount(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_get_AlphaMode(This, value) \
    ((This)->lpVtbl->get_AlphaMode(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_get_Rotation(This, value) \
    ((This)->lpVtbl->get_Rotation(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_put_Rotation(This, value) \
    ((This)->lpVtbl->put_Rotation(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_get_SourceSize(This, value) \
    ((This)->lpVtbl->get_SourceSize(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_put_SourceSize(This, value) \
    ((This)->lpVtbl->put_SourceSize(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_get_TransformMatrix(This, value) \
    ((This)->lpVtbl->get_TransformMatrix(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_put_TransformMatrix(This, value) \
    ((This)->lpVtbl->put_TransformMatrix(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_CreateDrawingSession(This, clearColor, drawingSession) \
    ((This)->lpVtbl->CreateDrawingSession(This, clearColor, drawingSession))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_WaitForVerticalBlank(This) \
    ((This)->lpVtbl->WaitForVerticalBlank(This))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasSwapChainFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasSwapChain
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasSwapChainFactory[] = L"Microsoft.Graphics.Canvas.ICanvasSwapChainFactory";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateWithSize)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi* resourceCreator,
        struct __x_ABI_CWindows_CFoundation_CSize size,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain** swapChain);
    HRESULT (STDMETHODCALLTYPE* CreateWithWidthAndHeight)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi* resourceCreator,
        FLOAT width,
        FLOAT height,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain** swapChain);
    HRESULT (STDMETHODCALLTYPE* CreateWithWidthAndHeightAndDpi)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        FLOAT width,
        FLOAT height,
        FLOAT dpi,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain** swapChain);
    HRESULT (STDMETHODCALLTYPE* CreateWithAllOptions)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        FLOAT width,
        FLOAT height,
        FLOAT dpi,
        enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat format,
        INT32 bufferCount,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode alphaMode,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain** swapChain);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactoryVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory_CreateWithSize(This, resourceCreator, size, swapChain) \
    ((This)->lpVtbl->CreateWithSize(This, resourceCreator, size, swapChain))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory_CreateWithWidthAndHeight(This, resourceCreator, width, height, swapChain) \
    ((This)->lpVtbl->CreateWithWidthAndHeight(This, resourceCreator, width, height, swapChain))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory_CreateWithWidthAndHeightAndDpi(This, resourceCreator, width, height, dpi, swapChain) \
    ((This)->lpVtbl->CreateWithWidthAndHeightAndDpi(This, resourceCreator, width, height, dpi, swapChain))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory_CreateWithAllOptions(This, resourceCreator, width, height, dpi, format, bufferCount, alphaMode, swapChain) \
    ((This)->lpVtbl->CreateWithAllOptions(This, resourceCreator, width, height, dpi, format, bufferCount, alphaMode, swapChain))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasSwapChainStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasSwapChain
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasSwapChainStatics[] = L"Microsoft.Graphics.Canvas.ICanvasSwapChainStatics";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateForCoreWindowWithDpi)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CUI_CCore_CICoreWindow* coreWindow,
        FLOAT dpi,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain** swapChain);
    HRESULT (STDMETHODCALLTYPE* CreateForCoreWindowWithAllOptions)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CUI_CCore_CICoreWindow* coreWindow,
        FLOAT width,
        FLOAT height,
        FLOAT dpi,
        enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat format,
        INT32 bufferCount,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain** swapChain);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStaticsVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics_CreateForCoreWindowWithDpi(This, resourceCreator, coreWindow, dpi, swapChain) \
    ((This)->lpVtbl->CreateForCoreWindowWithDpi(This, resourceCreator, coreWindow, dpi, swapChain))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics_CreateForCoreWindowWithAllOptions(This, resourceCreator, coreWindow, width, height, dpi, format, bufferCount, swapChain) \
    ((This)->lpVtbl->CreateForCoreWindowWithAllOptions(This, resourceCreator, coreWindow, width, height, dpi, format, bufferCount, swapChain))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChainStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasVirtualBitmap
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasVirtualBitmap
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *     Microsoft.Graphics.Canvas.ICanvasImage
 *     Windows.Graphics.Effects.IGraphicsEffectSource
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasVirtualBitmap[] = L"Microsoft.Graphics.Canvas.ICanvasVirtualBitmap";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Device)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice** value);
    HRESULT (STDMETHODCALLTYPE* get_IsCachedOnDemand)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_SizeInPixels)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap* This,
        struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize* value);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap* This,
        struct __x_ABI_CWindows_CFoundation_CSize* value);
    HRESULT (STDMETHODCALLTYPE* get_Bounds)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap* This,
        struct __x_ABI_CWindows_CFoundation_CRect* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap_get_Device(This, value) \
    ((This)->lpVtbl->get_Device(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap_get_IsCachedOnDemand(This, value) \
    ((This)->lpVtbl->get_IsCachedOnDemand(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap_get_SizeInPixels(This, value) \
    ((This)->lpVtbl->get_SizeInPixels(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap_get_Size(This, value) \
    ((This)->lpVtbl->get_Size(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap_get_Bounds(This, value) \
    ((This)->lpVtbl->get_Bounds(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmap_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.ICanvasVirtualBitmapStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.CanvasVirtualBitmap
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_ICanvasVirtualBitmapStatics[] = L"Microsoft.Graphics.Canvas.ICanvasVirtualBitmapStatics";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* LoadAsyncFromFileName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        HSTRING fileName,
        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap** value);
    HRESULT (STDMETHODCALLTYPE* LoadAsyncFromFileNameWithOptions)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        HSTRING fileName,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasVirtualBitmapOptions options,
        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap** value);
    HRESULT (STDMETHODCALLTYPE* LoadAsyncFromFileNameWithOptionsAndAlpha)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        HSTRING fileName,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasVirtualBitmapOptions options,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode alpha,
        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap** value);
    HRESULT (STDMETHODCALLTYPE* LoadAsyncFromUri)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CFoundation_CIUriRuntimeClass* uri,
        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap** value);
    HRESULT (STDMETHODCALLTYPE* LoadAsyncFromUriWithOptions)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CFoundation_CIUriRuntimeClass* uri,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasVirtualBitmapOptions options,
        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap** value);
    HRESULT (STDMETHODCALLTYPE* LoadAsyncFromUriWithOptionsAndAlpha)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CFoundation_CIUriRuntimeClass* uri,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasVirtualBitmapOptions options,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode alpha,
        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap** value);
    HRESULT (STDMETHODCALLTYPE* LoadAsyncFromStream)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream* stream,
        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap** value);
    HRESULT (STDMETHODCALLTYPE* LoadAsyncFromStreamWithOptions)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream* stream,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasVirtualBitmapOptions options,
        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap** value);
    HRESULT (STDMETHODCALLTYPE* LoadAsyncFromStreamWithOptionsAndAlpha)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream* stream,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasVirtualBitmapOptions options,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode alpha,
        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CCanvasVirtualBitmap** value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStaticsVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_LoadAsyncFromFileName(This, resourceCreator, fileName, value) \
    ((This)->lpVtbl->LoadAsyncFromFileName(This, resourceCreator, fileName, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_LoadAsyncFromFileNameWithOptions(This, resourceCreator, fileName, options, value) \
    ((This)->lpVtbl->LoadAsyncFromFileNameWithOptions(This, resourceCreator, fileName, options, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_LoadAsyncFromFileNameWithOptionsAndAlpha(This, resourceCreator, fileName, options, alpha, value) \
    ((This)->lpVtbl->LoadAsyncFromFileNameWithOptionsAndAlpha(This, resourceCreator, fileName, options, alpha, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_LoadAsyncFromUri(This, resourceCreator, uri, value) \
    ((This)->lpVtbl->LoadAsyncFromUri(This, resourceCreator, uri, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_LoadAsyncFromUriWithOptions(This, resourceCreator, uri, options, value) \
    ((This)->lpVtbl->LoadAsyncFromUriWithOptions(This, resourceCreator, uri, options, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_LoadAsyncFromUriWithOptionsAndAlpha(This, resourceCreator, uri, options, alpha, value) \
    ((This)->lpVtbl->LoadAsyncFromUriWithOptionsAndAlpha(This, resourceCreator, uri, options, alpha, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_LoadAsyncFromStream(This, resourceCreator, stream, value) \
    ((This)->lpVtbl->LoadAsyncFromStream(This, resourceCreator, stream, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_LoadAsyncFromStreamWithOptions(This, resourceCreator, stream, options, value) \
    ((This)->lpVtbl->LoadAsyncFromStreamWithOptions(This, resourceCreator, stream, options, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_LoadAsyncFromStreamWithOptionsAndAlpha(This, resourceCreator, stream, options, alpha, value) \
    ((This)->lpVtbl->LoadAsyncFromStreamWithOptionsAndAlpha(This, resourceCreator, stream, options, alpha, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasVirtualBitmapStatics_INTERFACE_DEFINED__) */

/*
 *
 * Class Microsoft.Graphics.Canvas.CanvasActiveLayer
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.ICanvasActiveLayer ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasActiveLayer_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasActiveLayer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_CanvasActiveLayer[] = L"Microsoft.Graphics.Canvas.CanvasActiveLayer";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.CanvasBitmap
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.ICanvasBitmap ** Default Interface **
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *    Windows.Graphics.DirectX.Direct3D11.IDirect3DSurface
 *    Windows.Foundation.IClosable
 *    Microsoft.Graphics.Canvas.ICanvasImage
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasBitmap_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasBitmap_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_CanvasBitmap[] = L"Microsoft.Graphics.Canvas.CanvasBitmap";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.CanvasCommandList
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.ICanvasCommandList ** Default Interface **
 *    Microsoft.Graphics.Canvas.ICanvasImage
 *    Windows.Foundation.IClosable
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasCommandList_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasCommandList_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_CanvasCommandList[] = L"Microsoft.Graphics.Canvas.CanvasCommandList";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.CanvasDevice
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.ICanvasDevice ** Default Interface **
 *    Windows.Graphics.DirectX.Direct3D11.IDirect3DDevice
 *    Windows.Foundation.IClosable
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasDevice_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_CanvasDevice[] = L"Microsoft.Graphics.Canvas.CanvasDevice";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.CanvasDrawingSession
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.ICanvasDrawingSession ** Default Interface **
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasDrawingSession_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasDrawingSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_CanvasDrawingSession[] = L"Microsoft.Graphics.Canvas.CanvasDrawingSession";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.CanvasImage
 *
 * RuntimeClass contains static methods.
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasImage_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasImage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_CanvasImage[] = L"Microsoft.Graphics.Canvas.CanvasImage";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.CanvasLock
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.ICanvasLock ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasLock_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasLock_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_CanvasLock[] = L"Microsoft.Graphics.Canvas.CanvasLock";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.CanvasRenderTarget
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.ICanvasRenderTarget ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasRenderTarget_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasRenderTarget_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_CanvasRenderTarget[] = L"Microsoft.Graphics.Canvas.CanvasRenderTarget";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.CanvasSpriteBatch
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.ICanvasSpriteBatch ** Default Interface **
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasSpriteBatch_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasSpriteBatch_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_CanvasSpriteBatch[] = L"Microsoft.Graphics.Canvas.CanvasSpriteBatch";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.CanvasSwapChain
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.ICanvasSwapChain ** Default Interface **
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasSwapChain_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasSwapChain_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_CanvasSwapChain[] = L"Microsoft.Graphics.Canvas.CanvasSwapChain";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.CanvasVirtualBitmap
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.ICanvasVirtualBitmap ** Default Interface **
 *    Microsoft.Graphics.Canvas.ICanvasImage
 *    Windows.Foundation.IClosable
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasVirtualBitmap_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_CanvasVirtualBitmap_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_CanvasVirtualBitmap[] = L"Microsoft.Graphics.Canvas.CanvasVirtualBitmap";
#endif

#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __microsoft2Egraphics2Ecanvas_p_h__

#endif // __microsoft2Egraphics2Ecanvas_h__
