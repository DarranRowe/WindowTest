
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
#ifndef __microsoft2Egraphics2Ecanvas2Eui2Examl_h__
#define __microsoft2Egraphics2Ecanvas2Eui2Examl_h__
#ifndef __microsoft2Egraphics2Ecanvas2Eui2Examl_p_h__
#define __microsoft2Egraphics2Ecanvas2Eui2Examl_p_h__


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

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Microsoft.Graphics.Canvas.h"
#include "Microsoft.Graphics.Canvas.UI.h"
#include "Microsoft.UI.Xaml.Media.Imaging.h"
#include "Windows.Graphics.Imaging.h"
#include "Windows.UI.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    namespace Xaml {
                        interface ICanvasControl;
                    } /* Xaml */
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    namespace Xaml {
                        interface ICanvasDrawEventArgs;
                    } /* Xaml */
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgs

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    namespace Xaml {
                        interface ICanvasDrawEventArgsFactory;
                    } /* Xaml */
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgsFactory

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    namespace Xaml {
                        interface ICanvasImageSource;
                    } /* Xaml */
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSource

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    namespace Xaml {
                        interface ICanvasImageSourceFactory;
                    } /* Xaml */
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSourceFactory

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    namespace Xaml {
                        interface ICanvasRegionsInvalidatedEventArgs;
                    } /* Xaml */
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasRegionsInvalidatedEventArgs

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    namespace Xaml {
                        interface ICanvasSwapChainPanel;
                    } /* Xaml */
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasSwapChainPanel

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    namespace Xaml {
                        interface ICanvasVirtualControl;
                    } /* Xaml */
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    namespace Xaml {
                        interface ICanvasVirtualImageSource;
                    } /* Xaml */
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    namespace Xaml {
                        interface ICanvasVirtualImageSourceFactory;
                    } /* Xaml */
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSourceFactory

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    namespace Xaml {
                        class CanvasControl;
                    } /* Xaml */
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    class CanvasCreateResourcesEventArgs;
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    interface ICanvasCreateResourcesEventArgs;
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs ABI::Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgs

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_FWD_DEFINED__


#ifndef DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ffcd91a9-b0f6-5e59-b815-0581129240e6"))
ITypedEventHandler<ABI::Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl*, ABI::Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl*, ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl*>, ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs*, ABI::Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgs*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Graphics.Canvas.UI.Xaml.CanvasControl, Microsoft.Graphics.Canvas.UI.CanvasCreateResourcesEventArgs>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl*, ABI::Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs*> __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs_USE */


namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    namespace Xaml {
                        class CanvasDrawEventArgs;
                    } /* Xaml */
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */


#ifndef DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasDrawEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasDrawEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6b0b7674-c32a-59f5-ba42-79cd2fd7f023"))
ITypedEventHandler<ABI::Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl*, ABI::Microsoft::Graphics::Canvas::UI::Xaml::CanvasDrawEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl*, ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasControl*>, ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::UI::Xaml::CanvasDrawEventArgs*, ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgs*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Graphics.Canvas.UI.Xaml.CanvasControl, Microsoft.Graphics.Canvas.UI.Xaml.CanvasDrawEventArgs>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl*, ABI::Microsoft::Graphics::Canvas::UI::Xaml::CanvasDrawEventArgs*> __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasDrawEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasDrawEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasDrawEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasDrawEventArgs_USE */


namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    namespace Xaml {
                        class CanvasVirtualControl;
                    } /* Xaml */
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */


#ifndef DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("82c7431b-0f55-5f54-8dd8-f9a8327df123"))
ITypedEventHandler<ABI::Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualControl*, ABI::Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualControl*, ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl*>, ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs*, ABI::Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgs*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Graphics.Canvas.UI.Xaml.CanvasVirtualControl, Microsoft.Graphics.Canvas.UI.CanvasCreateResourcesEventArgs>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualControl*, ABI::Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesEventArgs*> __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs_USE */


namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    namespace Xaml {
                        class CanvasRegionsInvalidatedEventArgs;
                    } /* Xaml */
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */


#ifndef DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9a63a22f-5ad4-5195-beb6-9b73b4304443"))
ITypedEventHandler<ABI::Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualControl*, ABI::Microsoft::Graphics::Canvas::UI::Xaml::CanvasRegionsInvalidatedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualControl*, ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualControl*>, ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::UI::Xaml::CanvasRegionsInvalidatedEventArgs*, ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasRegionsInvalidatedEventArgs*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Graphics.Canvas.UI.Xaml.CanvasVirtualControl, Microsoft.Graphics.Canvas.UI.Xaml.CanvasRegionsInvalidatedEventArgs>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualControl*, ABI::Microsoft::Graphics::Canvas::UI::Xaml::CanvasRegionsInvalidatedEventArgs*> __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs_USE */


namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    namespace Xaml {
                        class CanvasVirtualImageSource;
                    } /* Xaml */
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */


#ifndef DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualImageSource_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualImageSource_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("fed1b996-f368-58b3-bccd-8ebacf6611b2"))
ITypedEventHandler<ABI::Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualImageSource*, ABI::Microsoft::Graphics::Canvas::UI::Xaml::CanvasRegionsInvalidatedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualImageSource*, ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource*>, ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::UI::Xaml::CanvasRegionsInvalidatedEventArgs*, ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasRegionsInvalidatedEventArgs*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Graphics.Canvas.UI.Xaml.CanvasVirtualImageSource, Microsoft.Graphics.Canvas.UI.Xaml.CanvasRegionsInvalidatedEventArgs>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Graphics::Canvas::UI::Xaml::CanvasVirtualImageSource*, ABI::Microsoft::Graphics::Canvas::UI::Xaml::CanvasRegionsInvalidatedEventArgs*> __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualImageSource_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualImageSource_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualImageSource_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualImageSource_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs_USE */


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
                class CanvasDevice;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

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

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                class CanvasDrawingSession;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

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

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                class CanvasSwapChain;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

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

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        class VirtualSurfaceImageSource;
                    } /* Imaging */
                } /* Media */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface IVirtualSurfaceImageSource;
                    } /* Imaging */
                } /* Media */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource ABI::Microsoft::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource_FWD_DEFINED__

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
        namespace Graphics {
            namespace Imaging {
                typedef struct BitmapSize BitmapSize;
            } /* Imaging */
        } /* Graphics */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            typedef struct Color Color;
        } /* UI */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    namespace Xaml {
                        class CanvasImageSource;
                    } /* Xaml */
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Interface Microsoft.Graphics.Canvas.UI.Xaml.ICanvasControl
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.UI.Xaml.CanvasControl
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasControl[] = L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasControl";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    namespace Xaml {
                        MIDL_INTERFACE("f006e06d-79db-484f-b898-479cf069c0f5")
                        ICanvasControl : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE add_CreateResources(
                                __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs* value,
                                EventRegistrationToken* token
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE remove_CreateResources(
                                EventRegistrationToken token
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE get_ReadyToDraw(
                                boolean* value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE add_Draw(
                                __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasDrawEventArgs* value,
                                EventRegistrationToken* token
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE remove_Draw(
                                EventRegistrationToken token
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE put_ClearColor(
                                ABI::Windows::UI::Color value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE get_ClearColor(
                                ABI::Windows::UI::Color* value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Invalidate(void) = 0;
                            virtual HRESULT STDMETHODCALLTYPE get_Size(
                                ABI::Windows::Foundation::Size* size
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE RemoveFromVisualTree(void) = 0;
                            virtual HRESULT STDMETHODCALLTYPE get_UseSharedDevice(
                                boolean* value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE put_UseSharedDevice(
                                boolean value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE get_ForceSoftwareRenderer(
                                boolean* value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE put_ForceSoftwareRenderer(
                                boolean value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE get_CustomDevice(
                                ABI::Microsoft::Graphics::Canvas::ICanvasDevice** value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE put_CustomDevice(
                                ABI::Microsoft::Graphics::Canvas::ICanvasDevice* value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE get_DpiScale(
                                FLOAT* value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE put_DpiScale(
                                FLOAT ratio
                                ) = 0;
                        };

                        extern MIDL_CONST_ID IID& IID_ICanvasControl = _uuidof(ICanvasControl);
                    } /* Xaml */
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.UI.Xaml.ICanvasDrawEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.UI.Xaml.CanvasDrawEventArgs
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasDrawEventArgs[] = L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasDrawEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    namespace Xaml {
                        MIDL_INTERFACE("fb86169f-25d4-4551-bd8f-214beaf0ac24")
                        ICanvasDrawEventArgs : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE get_DrawingSession(
                                ABI::Microsoft::Graphics::Canvas::ICanvasDrawingSession** value
                                ) = 0;
                        };

                        extern MIDL_CONST_ID IID& IID_ICanvasDrawEventArgs = _uuidof(ICanvasDrawEventArgs);
                    } /* Xaml */
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.UI.Xaml.ICanvasDrawEventArgsFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.UI.Xaml.CanvasDrawEventArgs
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasDrawEventArgsFactory[] = L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasDrawEventArgsFactory";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    namespace Xaml {
                        MIDL_INTERFACE("7299d72c-f8e4-4a2f-9e30-7cdfccf31c44")
                        ICanvasDrawEventArgsFactory : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE Create(
                                ABI::Microsoft::Graphics::Canvas::ICanvasDrawingSession* canvasDrawingSession,
                                ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasDrawEventArgs** drawEventArgs
                                ) = 0;
                        };

                        extern MIDL_CONST_ID IID& IID_ICanvasDrawEventArgsFactory = _uuidof(ICanvasDrawEventArgsFactory);
                    } /* Xaml */
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.UI.Xaml.ICanvasImageSource
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.UI.Xaml.CanvasImageSource
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasImageSource[] = L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasImageSource";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    namespace Xaml {
                        MIDL_INTERFACE("3c35e87a-e881-4f44-b0d1-551413aec66d")
                        ICanvasImageSource : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE CreateDrawingSession(
                                ABI::Windows::UI::Color clearColor,
                                ABI::Microsoft::Graphics::Canvas::ICanvasDrawingSession** drawingSession
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE CreateDrawingSessionWithUpdateRectangle(
                                ABI::Windows::UI::Color clearColor,
                                ABI::Windows::Foundation::Rect updateRectangle,
                                ABI::Microsoft::Graphics::Canvas::ICanvasDrawingSession** drawingSession
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Recreate(
                                ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE get_Size(
                                ABI::Windows::Foundation::Size* size
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE get_SizeInPixels(
                                ABI::Windows::Graphics::Imaging::BitmapSize* size
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE get_AlphaMode(
                                ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode* value
                                ) = 0;
                        };

                        extern MIDL_CONST_ID IID& IID_ICanvasImageSource = _uuidof(ICanvasImageSource);
                    } /* Xaml */
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.UI.Xaml.ICanvasImageSourceFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.UI.Xaml.CanvasImageSource
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasImageSourceFactory[] = L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasImageSourceFactory";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    namespace Xaml {
                        MIDL_INTERFACE("8596bedd-d7f7-4c6b-b1ad-41949035e084")
                        ICanvasImageSourceFactory : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE CreateWithSize(
                                ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi* resourceCreator,
                                ABI::Windows::Foundation::Size size,
                                ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSource** imageSource
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE CreateWithWidthAndHeight(
                                ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi* resourceCreator,
                                FLOAT width,
                                FLOAT height,
                                ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSource** imageSource
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE CreateWithWidthAndHeightAndDpi(
                                ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                                FLOAT width,
                                FLOAT height,
                                FLOAT dpi,
                                ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSource** imageSource
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE CreateWithWidthAndHeightAndDpiAndAlphaMode(
                                ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                                FLOAT width,
                                FLOAT height,
                                FLOAT dpi,
                                ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode,
                                ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasImageSource** imageSource
                                ) = 0;
                        };

                        extern MIDL_CONST_ID IID& IID_ICanvasImageSourceFactory = _uuidof(ICanvasImageSourceFactory);
                    } /* Xaml */
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.UI.Xaml.ICanvasRegionsInvalidatedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.UI.Xaml.CanvasRegionsInvalidatedEventArgs
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasRegionsInvalidatedEventArgs[] = L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasRegionsInvalidatedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    namespace Xaml {
                        MIDL_INTERFACE("3a21a204-f52f-4e7a-9b3f-94669819d981")
                        ICanvasRegionsInvalidatedEventArgs : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE get_InvalidatedRegions(
                                UINT32* valueLength,
                                ABI::Windows::Foundation::Rect** value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE get_VisibleRegion(
                                ABI::Windows::Foundation::Rect* value
                                ) = 0;
                        };

                        extern MIDL_CONST_ID IID& IID_ICanvasRegionsInvalidatedEventArgs = _uuidof(ICanvasRegionsInvalidatedEventArgs);
                    } /* Xaml */
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.UI.Xaml.ICanvasSwapChainPanel
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.UI.Xaml.CanvasSwapChainPanel
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasSwapChainPanel[] = L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasSwapChainPanel";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    namespace Xaml {
                        MIDL_INTERFACE("dbdccb96-147e-4a82-af3a-c91c7800daa7")
                        ICanvasSwapChainPanel : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE put_SwapChain(
                                ABI::Microsoft::Graphics::Canvas::ICanvasSwapChain* value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE get_SwapChain(
                                ABI::Microsoft::Graphics::Canvas::ICanvasSwapChain** value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE RemoveFromVisualTree(void) = 0;
                        };

                        extern MIDL_CONST_ID IID& IID_ICanvasSwapChainPanel = _uuidof(ICanvasSwapChainPanel);
                    } /* Xaml */
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.UI.Xaml.ICanvasVirtualControl
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.UI.Xaml.CanvasVirtualControl
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl[] = L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasVirtualControl";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    namespace Xaml {
                        MIDL_INTERFACE("3c2b5177-7c61-41d2-95ae-fcfc92fd617a")
                        ICanvasVirtualControl : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE add_CreateResources(
                                __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs* value,
                                EventRegistrationToken* token
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE remove_CreateResources(
                                EventRegistrationToken token
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE get_ReadyToDraw(
                                boolean* value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE add_RegionsInvalidated(
                                __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs* value,
                                EventRegistrationToken* token
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE remove_RegionsInvalidated(
                                EventRegistrationToken token
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE put_ClearColor(
                                ABI::Windows::UI::Color value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE get_ClearColor(
                                ABI::Windows::UI::Color* value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE CreateDrawingSession(
                                ABI::Windows::Foundation::Rect updateRectangle,
                                ABI::Microsoft::Graphics::Canvas::ICanvasDrawingSession** drawingSession
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE SuspendDrawingSession(
                                ABI::Microsoft::Graphics::Canvas::ICanvasDrawingSession* drawingSession
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE ResumeDrawingSession(
                                ABI::Microsoft::Graphics::Canvas::ICanvasDrawingSession* drawingSession
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Invalidate(void) = 0;
                            virtual HRESULT STDMETHODCALLTYPE InvalidateRegion(
                                ABI::Windows::Foundation::Rect region
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE get_Size(
                                ABI::Windows::Foundation::Size* size
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE RemoveFromVisualTree(void) = 0;
                            virtual HRESULT STDMETHODCALLTYPE get_UseSharedDevice(
                                boolean* value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE put_UseSharedDevice(
                                boolean value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE get_ForceSoftwareRenderer(
                                boolean* value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE put_ForceSoftwareRenderer(
                                boolean value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE get_CustomDevice(
                                ABI::Microsoft::Graphics::Canvas::ICanvasDevice** value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE put_CustomDevice(
                                ABI::Microsoft::Graphics::Canvas::ICanvasDevice* value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE get_DpiScale(
                                FLOAT* value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE put_DpiScale(
                                FLOAT ratio
                                ) = 0;
                        };

                        extern MIDL_CONST_ID IID& IID_ICanvasVirtualControl = _uuidof(ICanvasVirtualControl);
                    } /* Xaml */
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.UI.Xaml.ICanvasVirtualImageSource
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.UI.Xaml.CanvasVirtualImageSource
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSource[] = L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasVirtualImageSource";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    namespace Xaml {
                        MIDL_INTERFACE("df342987-4fe6-4bcd-b885-2ad3e6ef9fce")
                        ICanvasVirtualImageSource : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE get_Source(
                                ABI::Microsoft::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource** value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE CreateDrawingSession(
                                ABI::Windows::UI::Color clearColor,
                                ABI::Windows::Foundation::Rect updateRectangle,
                                ABI::Microsoft::Graphics::Canvas::ICanvasDrawingSession** drawingSession
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE SuspendDrawingSession(
                                ABI::Microsoft::Graphics::Canvas::ICanvasDrawingSession* drawingSession
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE ResumeDrawingSession(
                                ABI::Microsoft::Graphics::Canvas::ICanvasDrawingSession* drawingSession
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Invalidate(void) = 0;
                            virtual HRESULT STDMETHODCALLTYPE InvalidateRegion(
                                ABI::Windows::Foundation::Rect region
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE RaiseRegionsInvalidatedIfAny(void) = 0;
                            virtual HRESULT STDMETHODCALLTYPE add_RegionsInvalidated(
                                __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualImageSource_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs* value,
                                EventRegistrationToken* token
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE remove_RegionsInvalidated(
                                EventRegistrationToken token
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE ResizeWithSize(
                                ABI::Windows::Foundation::Size size
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE ResizeWithWidthAndHeight(
                                FLOAT width,
                                FLOAT height
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE ResizeWithWidthAndHeightAndDpi(
                                FLOAT width,
                                FLOAT height,
                                FLOAT dpi
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Recreate(
                                ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE get_Size(
                                ABI::Windows::Foundation::Size* size
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE get_SizeInPixels(
                                ABI::Windows::Graphics::Imaging::BitmapSize* size
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE get_AlphaMode(
                                ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode* value
                                ) = 0;
                        };

                        extern MIDL_CONST_ID IID& IID_ICanvasVirtualImageSource = _uuidof(ICanvasVirtualImageSource);
                    } /* Xaml */
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.UI.Xaml.ICanvasVirtualImageSourceFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.UI.Xaml.CanvasVirtualImageSource
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSourceFactory[] = L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasVirtualImageSourceFactory";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    namespace Xaml {
                        MIDL_INTERFACE("2fe755a1-307a-4623-9250-29590485bdb6")
                        ICanvasVirtualImageSourceFactory : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE CreateWithSize(
                                ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi* resourceCreator,
                                ABI::Windows::Foundation::Size size,
                                ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource** imageSource
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE CreateWithWidthAndHeight(
                                ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi* resourceCreator,
                                FLOAT width,
                                FLOAT height,
                                ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource** imageSource
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE CreateWithWidthAndHeightAndDpi(
                                ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                                FLOAT width,
                                FLOAT height,
                                FLOAT dpi,
                                ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource** imageSource
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE CreateWithWidthAndHeightAndDpiAndAlphaMode(
                                ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                                FLOAT width,
                                FLOAT height,
                                FLOAT dpi,
                                ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode,
                                ABI::Microsoft::Graphics::Canvas::UI::Xaml::ICanvasVirtualImageSource** imageSource
                                ) = 0;
                        };

                        extern MIDL_CONST_ID IID& IID_ICanvasVirtualImageSourceFactory = _uuidof(ICanvasVirtualImageSourceFactory);
                    } /* Xaml */
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory_INTERFACE_DEFINED__) */

/*
 *
 * Class Microsoft.Graphics.Canvas.UI.Xaml.CanvasControl
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.UI.Xaml.ICanvasControl ** Default Interface **
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasControl_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_UI_Xaml_CanvasControl[] = L"Microsoft.Graphics.Canvas.UI.Xaml.CanvasControl";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.UI.Xaml.CanvasDrawEventArgs
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.UI.Xaml.ICanvasDrawEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasDrawEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasDrawEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_UI_Xaml_CanvasDrawEventArgs[] = L"Microsoft.Graphics.Canvas.UI.Xaml.CanvasDrawEventArgs";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.UI.Xaml.CanvasImageSource
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.UI.Xaml.ICanvasImageSource ** Default Interface **
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasImageSource_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasImageSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_UI_Xaml_CanvasImageSource[] = L"Microsoft.Graphics.Canvas.UI.Xaml.CanvasImageSource";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.UI.Xaml.CanvasRegionsInvalidatedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.UI.Xaml.ICanvasRegionsInvalidatedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasRegionsInvalidatedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasRegionsInvalidatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_UI_Xaml_CanvasRegionsInvalidatedEventArgs[] = L"Microsoft.Graphics.Canvas.UI.Xaml.CanvasRegionsInvalidatedEventArgs";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.UI.Xaml.CanvasSwapChainPanel
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.UI.Xaml.ICanvasSwapChainPanel ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasSwapChainPanel_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasSwapChainPanel_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_UI_Xaml_CanvasSwapChainPanel[] = L"Microsoft.Graphics.Canvas.UI.Xaml.CanvasSwapChainPanel";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.UI.Xaml.CanvasVirtualControl
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.UI.Xaml.ICanvasVirtualControl ** Default Interface **
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasVirtualControl_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasVirtualControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_UI_Xaml_CanvasVirtualControl[] = L"Microsoft.Graphics.Canvas.UI.Xaml.CanvasVirtualControl";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.UI.Xaml.CanvasVirtualImageSource
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.UI.Xaml.ICanvasVirtualImageSource ** Default Interface **
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasVirtualImageSource_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasVirtualImageSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_UI_Xaml_CanvasVirtualImageSource[] = L"Microsoft.Graphics.Canvas.UI.Xaml.CanvasVirtualImageSource";
#endif

#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_FWD_DEFINED__

#if !defined(____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl* sender,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs* args);

    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs_INTERFACE_DEFINED__

#if !defined(____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasDrawEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasDrawEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasDrawEventArgs __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasDrawEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasDrawEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasDrawEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasDrawEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasDrawEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasDrawEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasDrawEventArgs* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl* sender,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs* args);

    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasDrawEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasDrawEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasDrawEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasDrawEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasDrawEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasDrawEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasDrawEventArgs_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasDrawEventArgs_INTERFACE_DEFINED__

#if !defined(____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* sender,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs* args);

    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs_INTERFACE_DEFINED__

#if !defined(____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* sender,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs* args);

    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs_INTERFACE_DEFINED__

#if !defined(____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualImageSource_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualImageSource_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualImageSource_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualImageSource_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualImageSource_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualImageSource_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualImageSource_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualImageSource_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualImageSource_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualImageSource_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource* sender,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs* args);

    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualImageSource_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualImageSource_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualImageSource_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualImageSource_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualImageSource_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualImageSource_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualImageSource_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualImageSource_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs_INTERFACE_DEFINED__

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode;

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource __x_ABI_CMicrosoft_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource_FWD_DEFINED__

typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;

typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;

typedef struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize;

typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;

/*
 *
 * Interface Microsoft.Graphics.Canvas.UI.Xaml.ICanvasControl
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.UI.Xaml.CanvasControl
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasControl[] = L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasControl";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControlVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* add_CreateResources)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl* This,
        __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs* value,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_CreateResources)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* get_ReadyToDraw)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* add_Draw)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl* This,
        __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasDrawEventArgs* value,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_Draw)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* put_ClearColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl* This,
        struct __x_ABI_CWindows_CUI_CColor value);
    HRESULT (STDMETHODCALLTYPE* get_ClearColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl* This,
        struct __x_ABI_CWindows_CUI_CColor* value);
    HRESULT (STDMETHODCALLTYPE* Invalidate)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl* This);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl* This,
        struct __x_ABI_CWindows_CFoundation_CSize* size);
    HRESULT (STDMETHODCALLTYPE* RemoveFromVisualTree)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl* This);
    HRESULT (STDMETHODCALLTYPE* get_UseSharedDevice)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* put_UseSharedDevice)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl* This,
        boolean value);
    HRESULT (STDMETHODCALLTYPE* get_ForceSoftwareRenderer)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* put_ForceSoftwareRenderer)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl* This,
        boolean value);
    HRESULT (STDMETHODCALLTYPE* get_CustomDevice)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice** value);
    HRESULT (STDMETHODCALLTYPE* put_CustomDevice)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice* value);
    HRESULT (STDMETHODCALLTYPE* get_DpiScale)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* put_DpiScale)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl* This,
        FLOAT ratio);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControlVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControlVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_add_CreateResources(This, value, token) \
    ((This)->lpVtbl->add_CreateResources(This, value, token))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_remove_CreateResources(This, token) \
    ((This)->lpVtbl->remove_CreateResources(This, token))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_get_ReadyToDraw(This, value) \
    ((This)->lpVtbl->get_ReadyToDraw(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_add_Draw(This, value, token) \
    ((This)->lpVtbl->add_Draw(This, value, token))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_remove_Draw(This, token) \
    ((This)->lpVtbl->remove_Draw(This, token))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_put_ClearColor(This, value) \
    ((This)->lpVtbl->put_ClearColor(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_get_ClearColor(This, value) \
    ((This)->lpVtbl->get_ClearColor(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_Invalidate(This) \
    ((This)->lpVtbl->Invalidate(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_get_Size(This, size) \
    ((This)->lpVtbl->get_Size(This, size))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_RemoveFromVisualTree(This) \
    ((This)->lpVtbl->RemoveFromVisualTree(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_get_UseSharedDevice(This, value) \
    ((This)->lpVtbl->get_UseSharedDevice(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_put_UseSharedDevice(This, value) \
    ((This)->lpVtbl->put_UseSharedDevice(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_get_ForceSoftwareRenderer(This, value) \
    ((This)->lpVtbl->get_ForceSoftwareRenderer(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_put_ForceSoftwareRenderer(This, value) \
    ((This)->lpVtbl->put_ForceSoftwareRenderer(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_get_CustomDevice(This, value) \
    ((This)->lpVtbl->get_CustomDevice(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_put_CustomDevice(This, value) \
    ((This)->lpVtbl->put_CustomDevice(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_get_DpiScale(This, value) \
    ((This)->lpVtbl->get_DpiScale(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_put_DpiScale(This, ratio) \
    ((This)->lpVtbl->put_DpiScale(This, ratio))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasControl_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.UI.Xaml.ICanvasDrawEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.UI.Xaml.CanvasDrawEventArgs
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasDrawEventArgs[] = L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasDrawEventArgs";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_DrawingSession)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession** value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs_get_DrawingSession(This, value) \
    ((This)->lpVtbl->get_DrawingSession(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.UI.Xaml.ICanvasDrawEventArgsFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.UI.Xaml.CanvasDrawEventArgs
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasDrawEventArgsFactory[] = L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasDrawEventArgsFactory";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* Create)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* canvasDrawingSession,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgs** drawEventArgs);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactoryVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory_Create(This, canvasDrawingSession, drawEventArgs) \
    ((This)->lpVtbl->Create(This, canvasDrawingSession, drawEventArgs))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasDrawEventArgsFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.UI.Xaml.ICanvasImageSource
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.UI.Xaml.CanvasImageSource
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasImageSource[] = L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasImageSource";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateDrawingSession)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource* This,
        struct __x_ABI_CWindows_CUI_CColor clearColor,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession** drawingSession);
    HRESULT (STDMETHODCALLTYPE* CreateDrawingSessionWithUpdateRectangle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource* This,
        struct __x_ABI_CWindows_CUI_CColor clearColor,
        struct __x_ABI_CWindows_CFoundation_CRect updateRectangle,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession** drawingSession);
    HRESULT (STDMETHODCALLTYPE* Recreate)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* value);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource* This,
        struct __x_ABI_CWindows_CFoundation_CSize* size);
    HRESULT (STDMETHODCALLTYPE* get_SizeInPixels)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource* This,
        struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize* size);
    HRESULT (STDMETHODCALLTYPE* get_AlphaMode)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource_CreateDrawingSession(This, clearColor, drawingSession) \
    ((This)->lpVtbl->CreateDrawingSession(This, clearColor, drawingSession))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource_CreateDrawingSessionWithUpdateRectangle(This, clearColor, updateRectangle, drawingSession) \
    ((This)->lpVtbl->CreateDrawingSessionWithUpdateRectangle(This, clearColor, updateRectangle, drawingSession))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource_Recreate(This, value) \
    ((This)->lpVtbl->Recreate(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource_get_Size(This, size) \
    ((This)->lpVtbl->get_Size(This, size))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource_get_SizeInPixels(This, size) \
    ((This)->lpVtbl->get_SizeInPixels(This, size))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource_get_AlphaMode(This, value) \
    ((This)->lpVtbl->get_AlphaMode(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.UI.Xaml.ICanvasImageSourceFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.UI.Xaml.CanvasImageSource
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasImageSourceFactory[] = L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasImageSourceFactory";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateWithSize)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi* resourceCreator,
        struct __x_ABI_CWindows_CFoundation_CSize size,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource** imageSource);
    HRESULT (STDMETHODCALLTYPE* CreateWithWidthAndHeight)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi* resourceCreator,
        FLOAT width,
        FLOAT height,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource** imageSource);
    HRESULT (STDMETHODCALLTYPE* CreateWithWidthAndHeightAndDpi)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        FLOAT width,
        FLOAT height,
        FLOAT dpi,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource** imageSource);
    HRESULT (STDMETHODCALLTYPE* CreateWithWidthAndHeightAndDpiAndAlphaMode)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        FLOAT width,
        FLOAT height,
        FLOAT dpi,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode alphaMode,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSource** imageSource);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactoryVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory_CreateWithSize(This, resourceCreator, size, imageSource) \
    ((This)->lpVtbl->CreateWithSize(This, resourceCreator, size, imageSource))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory_CreateWithWidthAndHeight(This, resourceCreator, width, height, imageSource) \
    ((This)->lpVtbl->CreateWithWidthAndHeight(This, resourceCreator, width, height, imageSource))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory_CreateWithWidthAndHeightAndDpi(This, resourceCreator, width, height, dpi, imageSource) \
    ((This)->lpVtbl->CreateWithWidthAndHeightAndDpi(This, resourceCreator, width, height, dpi, imageSource))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory_CreateWithWidthAndHeightAndDpiAndAlphaMode(This, resourceCreator, width, height, dpi, alphaMode, imageSource) \
    ((This)->lpVtbl->CreateWithWidthAndHeightAndDpiAndAlphaMode(This, resourceCreator, width, height, dpi, alphaMode, imageSource))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasImageSourceFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.UI.Xaml.ICanvasRegionsInvalidatedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.UI.Xaml.CanvasRegionsInvalidatedEventArgs
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasRegionsInvalidatedEventArgs[] = L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasRegionsInvalidatedEventArgs";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_InvalidatedRegions)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs* This,
        UINT32* valueLength,
        struct __x_ABI_CWindows_CFoundation_CRect** value);
    HRESULT (STDMETHODCALLTYPE* get_VisibleRegion)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs* This,
        struct __x_ABI_CWindows_CFoundation_CRect* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs_get_InvalidatedRegions(This, valueLength, value) \
    ((This)->lpVtbl->get_InvalidatedRegions(This, valueLength, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs_get_VisibleRegion(This, value) \
    ((This)->lpVtbl->get_VisibleRegion(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasRegionsInvalidatedEventArgs_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.UI.Xaml.ICanvasSwapChainPanel
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.UI.Xaml.CanvasSwapChainPanel
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasSwapChainPanel[] = L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasSwapChainPanel";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanelVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* put_SwapChain)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain* value);
    HRESULT (STDMETHODCALLTYPE* get_SwapChain)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasSwapChain** value);
    HRESULT (STDMETHODCALLTYPE* RemoveFromVisualTree)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel* This);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanelVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanelVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel_put_SwapChain(This, value) \
    ((This)->lpVtbl->put_SwapChain(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel_get_SwapChain(This, value) \
    ((This)->lpVtbl->get_SwapChain(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel_RemoveFromVisualTree(This) \
    ((This)->lpVtbl->RemoveFromVisualTree(This))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasSwapChainPanel_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.UI.Xaml.ICanvasVirtualControl
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.UI.Xaml.CanvasVirtualControl
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualControl[] = L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasVirtualControl";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControlVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* add_CreateResources)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This,
        __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CCanvasCreateResourcesEventArgs* value,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_CreateResources)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* get_ReadyToDraw)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* add_RegionsInvalidated)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This,
        __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualControl_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs* value,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_RegionsInvalidated)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* put_ClearColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This,
        struct __x_ABI_CWindows_CUI_CColor value);
    HRESULT (STDMETHODCALLTYPE* get_ClearColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This,
        struct __x_ABI_CWindows_CUI_CColor* value);
    HRESULT (STDMETHODCALLTYPE* CreateDrawingSession)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This,
        struct __x_ABI_CWindows_CFoundation_CRect updateRectangle,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession** drawingSession);
    HRESULT (STDMETHODCALLTYPE* SuspendDrawingSession)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* drawingSession);
    HRESULT (STDMETHODCALLTYPE* ResumeDrawingSession)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* drawingSession);
    HRESULT (STDMETHODCALLTYPE* Invalidate)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This);
    HRESULT (STDMETHODCALLTYPE* InvalidateRegion)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This,
        struct __x_ABI_CWindows_CFoundation_CRect region);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This,
        struct __x_ABI_CWindows_CFoundation_CSize* size);
    HRESULT (STDMETHODCALLTYPE* RemoveFromVisualTree)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This);
    HRESULT (STDMETHODCALLTYPE* get_UseSharedDevice)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* put_UseSharedDevice)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This,
        boolean value);
    HRESULT (STDMETHODCALLTYPE* get_ForceSoftwareRenderer)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* put_ForceSoftwareRenderer)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This,
        boolean value);
    HRESULT (STDMETHODCALLTYPE* get_CustomDevice)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice** value);
    HRESULT (STDMETHODCALLTYPE* put_CustomDevice)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice* value);
    HRESULT (STDMETHODCALLTYPE* get_DpiScale)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* put_DpiScale)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl* This,
        FLOAT ratio);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControlVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControlVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_add_CreateResources(This, value, token) \
    ((This)->lpVtbl->add_CreateResources(This, value, token))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_remove_CreateResources(This, token) \
    ((This)->lpVtbl->remove_CreateResources(This, token))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_get_ReadyToDraw(This, value) \
    ((This)->lpVtbl->get_ReadyToDraw(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_add_RegionsInvalidated(This, value, token) \
    ((This)->lpVtbl->add_RegionsInvalidated(This, value, token))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_remove_RegionsInvalidated(This, token) \
    ((This)->lpVtbl->remove_RegionsInvalidated(This, token))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_put_ClearColor(This, value) \
    ((This)->lpVtbl->put_ClearColor(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_get_ClearColor(This, value) \
    ((This)->lpVtbl->get_ClearColor(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_CreateDrawingSession(This, updateRectangle, drawingSession) \
    ((This)->lpVtbl->CreateDrawingSession(This, updateRectangle, drawingSession))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_SuspendDrawingSession(This, drawingSession) \
    ((This)->lpVtbl->SuspendDrawingSession(This, drawingSession))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_ResumeDrawingSession(This, drawingSession) \
    ((This)->lpVtbl->ResumeDrawingSession(This, drawingSession))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_Invalidate(This) \
    ((This)->lpVtbl->Invalidate(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_InvalidateRegion(This, region) \
    ((This)->lpVtbl->InvalidateRegion(This, region))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_get_Size(This, size) \
    ((This)->lpVtbl->get_Size(This, size))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_RemoveFromVisualTree(This) \
    ((This)->lpVtbl->RemoveFromVisualTree(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_get_UseSharedDevice(This, value) \
    ((This)->lpVtbl->get_UseSharedDevice(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_put_UseSharedDevice(This, value) \
    ((This)->lpVtbl->put_UseSharedDevice(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_get_ForceSoftwareRenderer(This, value) \
    ((This)->lpVtbl->get_ForceSoftwareRenderer(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_put_ForceSoftwareRenderer(This, value) \
    ((This)->lpVtbl->put_ForceSoftwareRenderer(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_get_CustomDevice(This, value) \
    ((This)->lpVtbl->get_CustomDevice(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_put_CustomDevice(This, value) \
    ((This)->lpVtbl->put_CustomDevice(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_get_DpiScale(This, value) \
    ((This)->lpVtbl->get_DpiScale(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_put_DpiScale(This, ratio) \
    ((This)->lpVtbl->put_DpiScale(This, ratio))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualControl_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.UI.Xaml.ICanvasVirtualImageSource
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.UI.Xaml.CanvasVirtualImageSource
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSource[] = L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasVirtualImageSource";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Source)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource* This,
        __x_ABI_CMicrosoft_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource** value);
    HRESULT (STDMETHODCALLTYPE* CreateDrawingSession)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource* This,
        struct __x_ABI_CWindows_CUI_CColor clearColor,
        struct __x_ABI_CWindows_CFoundation_CRect updateRectangle,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession** drawingSession);
    HRESULT (STDMETHODCALLTYPE* SuspendDrawingSession)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* drawingSession);
    HRESULT (STDMETHODCALLTYPE* ResumeDrawingSession)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* drawingSession);
    HRESULT (STDMETHODCALLTYPE* Invalidate)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource* This);
    HRESULT (STDMETHODCALLTYPE* InvalidateRegion)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource* This,
        struct __x_ABI_CWindows_CFoundation_CRect region);
    HRESULT (STDMETHODCALLTYPE* RaiseRegionsInvalidatedIfAny)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource* This);
    HRESULT (STDMETHODCALLTYPE* add_RegionsInvalidated)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource* This,
        __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasVirtualImageSource_Microsoft__CGraphics__CCanvas__CUI__CXaml__CCanvasRegionsInvalidatedEventArgs* value,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_RegionsInvalidated)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* ResizeWithSize)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource* This,
        struct __x_ABI_CWindows_CFoundation_CSize size);
    HRESULT (STDMETHODCALLTYPE* ResizeWithWidthAndHeight)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource* This,
        FLOAT width,
        FLOAT height);
    HRESULT (STDMETHODCALLTYPE* ResizeWithWidthAndHeightAndDpi)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource* This,
        FLOAT width,
        FLOAT height,
        FLOAT dpi);
    HRESULT (STDMETHODCALLTYPE* Recreate)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource* This,
        struct __x_ABI_CWindows_CFoundation_CSize* size);
    HRESULT (STDMETHODCALLTYPE* get_SizeInPixels)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource* This,
        struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize* size);
    HRESULT (STDMETHODCALLTYPE* get_AlphaMode)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_get_Source(This, value) \
    ((This)->lpVtbl->get_Source(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_CreateDrawingSession(This, clearColor, updateRectangle, drawingSession) \
    ((This)->lpVtbl->CreateDrawingSession(This, clearColor, updateRectangle, drawingSession))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_SuspendDrawingSession(This, drawingSession) \
    ((This)->lpVtbl->SuspendDrawingSession(This, drawingSession))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_ResumeDrawingSession(This, drawingSession) \
    ((This)->lpVtbl->ResumeDrawingSession(This, drawingSession))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_Invalidate(This) \
    ((This)->lpVtbl->Invalidate(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_InvalidateRegion(This, region) \
    ((This)->lpVtbl->InvalidateRegion(This, region))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_RaiseRegionsInvalidatedIfAny(This) \
    ((This)->lpVtbl->RaiseRegionsInvalidatedIfAny(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_add_RegionsInvalidated(This, value, token) \
    ((This)->lpVtbl->add_RegionsInvalidated(This, value, token))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_remove_RegionsInvalidated(This, token) \
    ((This)->lpVtbl->remove_RegionsInvalidated(This, token))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_ResizeWithSize(This, size) \
    ((This)->lpVtbl->ResizeWithSize(This, size))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_ResizeWithWidthAndHeight(This, width, height) \
    ((This)->lpVtbl->ResizeWithWidthAndHeight(This, width, height))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_ResizeWithWidthAndHeightAndDpi(This, width, height, dpi) \
    ((This)->lpVtbl->ResizeWithWidthAndHeightAndDpi(This, width, height, dpi))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_Recreate(This, resourceCreator) \
    ((This)->lpVtbl->Recreate(This, resourceCreator))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_get_Size(This, size) \
    ((This)->lpVtbl->get_Size(This, size))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_get_SizeInPixels(This, size) \
    ((This)->lpVtbl->get_SizeInPixels(This, size))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_get_AlphaMode(This, value) \
    ((This)->lpVtbl->get_AlphaMode(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.UI.Xaml.ICanvasVirtualImageSourceFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.UI.Xaml.CanvasVirtualImageSource
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_UI_Xaml_ICanvasVirtualImageSourceFactory[] = L"Microsoft.Graphics.Canvas.UI.Xaml.ICanvasVirtualImageSourceFactory";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateWithSize)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi* resourceCreator,
        struct __x_ABI_CWindows_CFoundation_CSize size,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource** imageSource);
    HRESULT (STDMETHODCALLTYPE* CreateWithWidthAndHeight)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreatorWithDpi* resourceCreator,
        FLOAT width,
        FLOAT height,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource** imageSource);
    HRESULT (STDMETHODCALLTYPE* CreateWithWidthAndHeightAndDpi)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        FLOAT width,
        FLOAT height,
        FLOAT dpi,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource** imageSource);
    HRESULT (STDMETHODCALLTYPE* CreateWithWidthAndHeightAndDpiAndAlphaMode)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        FLOAT width,
        FLOAT height,
        FLOAT dpi,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode alphaMode,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSource** imageSource);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactoryVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory_CreateWithSize(This, resourceCreator, size, imageSource) \
    ((This)->lpVtbl->CreateWithSize(This, resourceCreator, size, imageSource))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory_CreateWithWidthAndHeight(This, resourceCreator, width, height, imageSource) \
    ((This)->lpVtbl->CreateWithWidthAndHeight(This, resourceCreator, width, height, imageSource))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory_CreateWithWidthAndHeightAndDpi(This, resourceCreator, width, height, dpi, imageSource) \
    ((This)->lpVtbl->CreateWithWidthAndHeightAndDpi(This, resourceCreator, width, height, dpi, imageSource))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory_CreateWithWidthAndHeightAndDpiAndAlphaMode(This, resourceCreator, width, height, dpi, alphaMode, imageSource) \
    ((This)->lpVtbl->CreateWithWidthAndHeightAndDpiAndAlphaMode(This, resourceCreator, width, height, dpi, alphaMode, imageSource))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CXaml_CICanvasVirtualImageSourceFactory_INTERFACE_DEFINED__) */

/*
 *
 * Class Microsoft.Graphics.Canvas.UI.Xaml.CanvasControl
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.UI.Xaml.ICanvasControl ** Default Interface **
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasControl_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_UI_Xaml_CanvasControl[] = L"Microsoft.Graphics.Canvas.UI.Xaml.CanvasControl";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.UI.Xaml.CanvasDrawEventArgs
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.UI.Xaml.ICanvasDrawEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasDrawEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasDrawEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_UI_Xaml_CanvasDrawEventArgs[] = L"Microsoft.Graphics.Canvas.UI.Xaml.CanvasDrawEventArgs";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.UI.Xaml.CanvasImageSource
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.UI.Xaml.ICanvasImageSource ** Default Interface **
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasImageSource_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasImageSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_UI_Xaml_CanvasImageSource[] = L"Microsoft.Graphics.Canvas.UI.Xaml.CanvasImageSource";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.UI.Xaml.CanvasRegionsInvalidatedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.UI.Xaml.ICanvasRegionsInvalidatedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasRegionsInvalidatedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasRegionsInvalidatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_UI_Xaml_CanvasRegionsInvalidatedEventArgs[] = L"Microsoft.Graphics.Canvas.UI.Xaml.CanvasRegionsInvalidatedEventArgs";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.UI.Xaml.CanvasSwapChainPanel
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.UI.Xaml.ICanvasSwapChainPanel ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasSwapChainPanel_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasSwapChainPanel_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_UI_Xaml_CanvasSwapChainPanel[] = L"Microsoft.Graphics.Canvas.UI.Xaml.CanvasSwapChainPanel";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.UI.Xaml.CanvasVirtualControl
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.UI.Xaml.ICanvasVirtualControl ** Default Interface **
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasVirtualControl_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasVirtualControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_UI_Xaml_CanvasVirtualControl[] = L"Microsoft.Graphics.Canvas.UI.Xaml.CanvasVirtualControl";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.UI.Xaml.CanvasVirtualImageSource
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.UI.Xaml.ICanvasVirtualImageSource ** Default Interface **
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreatorWithDpi
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasVirtualImageSource_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_Xaml_CanvasVirtualImageSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_UI_Xaml_CanvasVirtualImageSource[] = L"Microsoft.Graphics.Canvas.UI.Xaml.CanvasVirtualImageSource";
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
#endif // __microsoft2Egraphics2Ecanvas2Eui2Examl_p_h__

#endif // __microsoft2Egraphics2Ecanvas2Eui2Examl_h__
