
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
#ifndef __microsoft2Egraphics2Ecanvas2Eprinting_h__
#define __microsoft2Egraphics2Ecanvas2Eprinting_h__
#ifndef __microsoft2Egraphics2Ecanvas2Eprinting_p_h__
#define __microsoft2Egraphics2Ecanvas2Eprinting_p_h__


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
#include "Windows.Graphics.Printing.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Printing {
                    interface ICanvasPreviewEventArgs;
                } /* Printing */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs ABI::Microsoft::Graphics::Canvas::Printing::ICanvasPreviewEventArgs

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Printing {
                    interface ICanvasPrintDeferral;
                } /* Printing */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral ABI::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDeferral

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Printing {
                    interface ICanvasPrintDocument;
                } /* Printing */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument ABI::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Printing {
                    interface ICanvasPrintDocumentFactory;
                } /* Printing */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory ABI::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocumentFactory

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Printing {
                    interface ICanvasPrintEventArgs;
                } /* Printing */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs ABI::Microsoft::Graphics::Canvas::Printing::ICanvasPrintEventArgs

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Printing {
                    interface ICanvasPrintTaskOptionsChangedEventArgs;
                } /* Printing */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs ABI::Microsoft::Graphics::Canvas::Printing::ICanvasPrintTaskOptionsChangedEventArgs

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Printing {
                    class CanvasPrintDocument;
                } /* Printing */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Printing {
                    class CanvasPreviewEventArgs;
                } /* Printing */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */


#ifndef DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPreviewEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPreviewEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f406c30c-1745-5ada-a50f-11237a9d21c3"))
ITypedEventHandler<ABI::Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument*, ABI::Microsoft::Graphics::Canvas::Printing::CanvasPreviewEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument*, ABI::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument*>, ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::Printing::CanvasPreviewEventArgs*, ABI::Microsoft::Graphics::Canvas::Printing::ICanvasPreviewEventArgs*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Graphics.Canvas.Printing.CanvasPrintDocument, Microsoft.Graphics.Canvas.Printing.CanvasPreviewEventArgs>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument*, ABI::Microsoft::Graphics::Canvas::Printing::CanvasPreviewEventArgs*> __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPreviewEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPreviewEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPreviewEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPreviewEventArgs_USE */


namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Printing {
                    class CanvasPrintEventArgs;
                } /* Printing */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */


#ifndef DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e1b1643e-7f53-57d8-8bd1-90ff039d73ca"))
ITypedEventHandler<ABI::Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument*, ABI::Microsoft::Graphics::Canvas::Printing::CanvasPrintEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument*, ABI::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument*>, ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::Printing::CanvasPrintEventArgs*, ABI::Microsoft::Graphics::Canvas::Printing::ICanvasPrintEventArgs*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Graphics.Canvas.Printing.CanvasPrintDocument, Microsoft.Graphics.Canvas.Printing.CanvasPrintEventArgs>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument*, ABI::Microsoft::Graphics::Canvas::Printing::CanvasPrintEventArgs*> __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintEventArgs_USE */


namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Printing {
                    class CanvasPrintTaskOptionsChangedEventArgs;
                } /* Printing */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */


#ifndef DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintTaskOptionsChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintTaskOptionsChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("87076d4b-95f2-5eb5-94b8-f3a8feb8d335"))
ITypedEventHandler<ABI::Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument*, ABI::Microsoft::Graphics::Canvas::Printing::CanvasPrintTaskOptionsChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument*, ABI::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument*>, ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::Printing::CanvasPrintTaskOptionsChangedEventArgs*, ABI::Microsoft::Graphics::Canvas::Printing::ICanvasPrintTaskOptionsChangedEventArgs*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Graphics.Canvas.Printing.CanvasPrintDocument, Microsoft.Graphics.Canvas.Printing.CanvasPrintTaskOptionsChangedEventArgs>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument*, ABI::Microsoft::Graphics::Canvas::Printing::CanvasPrintTaskOptionsChangedEventArgs*> __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintTaskOptionsChangedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintTaskOptionsChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintTaskOptionsChangedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintTaskOptionsChangedEventArgs_USE */


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

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IPrintDocumentSource;
            } /* Printing */
        } /* Graphics */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource ABI::Windows::Graphics::Printing::IPrintDocumentSource

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_FWD_DEFINED__

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                class PrintTaskOptions;
            } /* Printing */
        } /* Graphics */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IPrintTaskOptionsCore;
            } /* Printing */
        } /* Graphics */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore ABI::Windows::Graphics::Printing::IPrintTaskOptionsCore

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_FWD_DEFINED__

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Printing {
                    class CanvasPrintDeferral;
                } /* Printing */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Printing.ICanvasPreviewEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Printing.CanvasPreviewEventArgs
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Printing_ICanvasPreviewEventArgs[] = L"Microsoft.Graphics.Canvas.Printing.ICanvasPreviewEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Printing {
                    MIDL_INTERFACE("0a6a80a0-b07d-4db2-bdeb-0368bb18c0f8")
                    ICanvasPreviewEventArgs : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_PageNumber(
                            UINT32* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_PrintTaskOptions(
                            ABI::Windows::Graphics::Printing::IPrintTaskOptionsCore** value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            ABI::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDeferral** value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_DrawingSession(
                            ABI::Microsoft::Graphics::Canvas::ICanvasDrawingSession** value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasPreviewEventArgs = _uuidof(ICanvasPreviewEventArgs);
                } /* Printing */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Printing.ICanvasPrintDeferral
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Printing.CanvasPrintDeferral
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDeferral[] = L"Microsoft.Graphics.Canvas.Printing.ICanvasPrintDeferral";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Printing {
                    MIDL_INTERFACE("08ca99a2-5801-4ea4-8687-896cbda69a47")
                    ICanvasPrintDeferral : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Complete(void) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasPrintDeferral = _uuidof(ICanvasPrintDeferral);
                } /* Printing */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Printing.ICanvasPrintDocument
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Printing.CanvasPrintDocument
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *     Windows.Graphics.Printing.IPrintDocumentSource
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDocument[] = L"Microsoft.Graphics.Canvas.Printing.ICanvasPrintDocument";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Printing {
                    MIDL_INTERFACE("0a99cdee-bf11-49d0-aa34-3ba5c32c51a5")
                    ICanvasPrintDocument : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE add_PrintTaskOptionsChanged(
                            __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintTaskOptionsChangedEventArgs* value,
                            EventRegistrationToken* token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE remove_PrintTaskOptionsChanged(
                            EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE add_Preview(
                            __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPreviewEventArgs* value,
                            EventRegistrationToken* token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE remove_Preview(
                            EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE add_Print(
                            __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintEventArgs* value,
                            EventRegistrationToken* token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE remove_Print(
                            EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE InvalidatePreview(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPageCount(
                            UINT32 count
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetIntermediatePageCount(
                            UINT32 count
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasPrintDocument = _uuidof(ICanvasPrintDocument);
                } /* Printing */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Printing.ICanvasPrintDocumentFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Printing.CanvasPrintDocument
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDocumentFactory[] = L"Microsoft.Graphics.Canvas.Printing.ICanvasPrintDocumentFactory";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Printing {
                    MIDL_INTERFACE("a201af1e-ce4a-401d-a719-2bf004d5c26a")
                    ICanvasPrintDocumentFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWithDevice(
                            ABI::Microsoft::Graphics::Canvas::ICanvasDevice* device,
                            ABI::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument** value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasPrintDocumentFactory = _uuidof(ICanvasPrintDocumentFactory);
                } /* Printing */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Printing.ICanvasPrintEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Printing.CanvasPrintEventArgs
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Printing_ICanvasPrintEventArgs[] = L"Microsoft.Graphics.Canvas.Printing.ICanvasPrintEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Printing {
                    MIDL_INTERFACE("0c6148c4-0216-4561-a817-34c8942aac8b")
                    ICanvasPrintEventArgs : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_PrintTaskOptions(
                            ABI::Windows::Graphics::Printing::IPrintTaskOptionsCore** value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Dpi(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_Dpi(
                            FLOAT value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            ABI::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDeferral** value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateDrawingSession(
                            ABI::Microsoft::Graphics::Canvas::ICanvasDrawingSession** value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasPrintEventArgs = _uuidof(ICanvasPrintEventArgs);
                } /* Printing */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Printing.ICanvasPrintTaskOptionsChangedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Printing.CanvasPrintTaskOptionsChangedEventArgs
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Printing_ICanvasPrintTaskOptionsChangedEventArgs[] = L"Microsoft.Graphics.Canvas.Printing.ICanvasPrintTaskOptionsChangedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Printing {
                    MIDL_INTERFACE("f92089ba-6c99-4cac-b28a-b5dcec7a310d")
                    ICanvasPrintTaskOptionsChangedEventArgs : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_CurrentPreviewPageNumber(
                            UINT32* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_NewPreviewPageNumber(
                            UINT32 value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_NewPreviewPageNumber(
                            UINT32* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            ABI::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDeferral** value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_PrintTaskOptions(
                            ABI::Windows::Graphics::Printing::IPrintTaskOptionsCore** value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasPrintTaskOptionsChangedEventArgs = _uuidof(ICanvasPrintTaskOptionsChangedEventArgs);
                } /* Printing */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs_INTERFACE_DEFINED__) */

/*
 *
 * Class Microsoft.Graphics.Canvas.Printing.CanvasPreviewEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Printing.ICanvasPreviewEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Printing_CanvasPreviewEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Printing_CanvasPreviewEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Printing_CanvasPreviewEventArgs[] = L"Microsoft.Graphics.Canvas.Printing.CanvasPreviewEventArgs";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Printing.CanvasPrintDeferral
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Printing.ICanvasPrintDeferral ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Printing_CanvasPrintDeferral_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Printing_CanvasPrintDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Printing_CanvasPrintDeferral[] = L"Microsoft.Graphics.Canvas.Printing.CanvasPrintDeferral";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Printing.CanvasPrintDocument
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Printing.ICanvasPrintDocument ** Default Interface **
 *    Windows.Graphics.Printing.IPrintDocumentSource
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Printing_CanvasPrintDocument_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Printing_CanvasPrintDocument_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Printing_CanvasPrintDocument[] = L"Microsoft.Graphics.Canvas.Printing.CanvasPrintDocument";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Printing.CanvasPrintEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Printing.ICanvasPrintEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Printing_CanvasPrintEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Printing_CanvasPrintEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Printing_CanvasPrintEventArgs[] = L"Microsoft.Graphics.Canvas.Printing.CanvasPrintEventArgs";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Printing.CanvasPrintTaskOptionsChangedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Printing.ICanvasPrintTaskOptionsChangedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Printing_CanvasPrintTaskOptionsChangedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Printing_CanvasPrintTaskOptionsChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Printing_CanvasPrintTaskOptionsChangedEventArgs[] = L"Microsoft.Graphics.Canvas.Printing.CanvasPrintTaskOptionsChangedEventArgs";
#endif

#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if !defined(____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPreviewEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPreviewEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPreviewEventArgs __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPreviewEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPreviewEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPreviewEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPreviewEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPreviewEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPreviewEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPreviewEventArgs* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument* sender,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs* args);

    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPreviewEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPreviewEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPreviewEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPreviewEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPreviewEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPreviewEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPreviewEventArgs_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPreviewEventArgs_INTERFACE_DEFINED__

#if !defined(____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintEventArgs __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintEventArgs* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument* sender,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs* args);

    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintEventArgs_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintEventArgs_INTERFACE_DEFINED__

#if !defined(____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintTaskOptionsChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintTaskOptionsChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintTaskOptionsChangedEventArgs __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintTaskOptionsChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintTaskOptionsChangedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintTaskOptionsChangedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintTaskOptionsChangedEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintTaskOptionsChangedEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintTaskOptionsChangedEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintTaskOptionsChangedEventArgs* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument* sender,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs* args);

    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintTaskOptionsChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintTaskOptionsChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintTaskOptionsChangedEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintTaskOptionsChangedEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintTaskOptionsChangedEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintTaskOptionsChangedEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintTaskOptionsChangedEventArgs_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintTaskOptionsChangedEventArgs_INTERFACE_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_FWD_DEFINED__

/*
 *
 * Interface Microsoft.Graphics.Canvas.Printing.ICanvasPreviewEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Printing.CanvasPreviewEventArgs
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Printing_ICanvasPreviewEventArgs[] = L"Microsoft.Graphics.Canvas.Printing.ICanvasPreviewEventArgs";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_PageNumber)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs* This,
        UINT32* value);
    HRESULT (STDMETHODCALLTYPE* get_PrintTaskOptions)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs* This,
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore** value);
    HRESULT (STDMETHODCALLTYPE* GetDeferral)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral** value);
    HRESULT (STDMETHODCALLTYPE* get_DrawingSession)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession** value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgsVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs_get_PageNumber(This, value) \
    ((This)->lpVtbl->get_PageNumber(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs_get_PrintTaskOptions(This, value) \
    ((This)->lpVtbl->get_PrintTaskOptions(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs_GetDeferral(This, value) \
    ((This)->lpVtbl->GetDeferral(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs_get_DrawingSession(This, value) \
    ((This)->lpVtbl->get_DrawingSession(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPreviewEventArgs_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Printing.ICanvasPrintDeferral
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Printing.CanvasPrintDeferral
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDeferral[] = L"Microsoft.Graphics.Canvas.Printing.ICanvasPrintDeferral";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferralVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* Complete)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral* This);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferralVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferralVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral_Complete(This) \
    ((This)->lpVtbl->Complete(This))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Printing.ICanvasPrintDocument
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Printing.CanvasPrintDocument
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *     Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *     Windows.Graphics.Printing.IPrintDocumentSource
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDocument[] = L"Microsoft.Graphics.Canvas.Printing.ICanvasPrintDocument";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* add_PrintTaskOptionsChanged)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument* This,
        __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintTaskOptionsChangedEventArgs* value,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_PrintTaskOptionsChanged)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_Preview)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument* This,
        __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPreviewEventArgs* value,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_Preview)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_Print)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument* This,
        __FITypedEventHandler_2_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintDocument_Microsoft__CGraphics__CCanvas__CPrinting__CCanvasPrintEventArgs* value,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_Print)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* InvalidatePreview)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument* This);
    HRESULT (STDMETHODCALLTYPE* SetPageCount)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument* This,
        UINT32 count);
    HRESULT (STDMETHODCALLTYPE* SetIntermediatePageCount)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument* This,
        UINT32 count);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_add_PrintTaskOptionsChanged(This, value, token) \
    ((This)->lpVtbl->add_PrintTaskOptionsChanged(This, value, token))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_remove_PrintTaskOptionsChanged(This, token) \
    ((This)->lpVtbl->remove_PrintTaskOptionsChanged(This, token))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_add_Preview(This, value, token) \
    ((This)->lpVtbl->add_Preview(This, value, token))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_remove_Preview(This, token) \
    ((This)->lpVtbl->remove_Preview(This, token))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_add_Print(This, value, token) \
    ((This)->lpVtbl->add_Print(This, value, token))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_remove_Print(This, token) \
    ((This)->lpVtbl->remove_Print(This, token))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_InvalidatePreview(This) \
    ((This)->lpVtbl->InvalidatePreview(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_SetPageCount(This, count) \
    ((This)->lpVtbl->SetPageCount(This, count))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_SetIntermediatePageCount(This, count) \
    ((This)->lpVtbl->SetIntermediatePageCount(This, count))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Printing.ICanvasPrintDocumentFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Printing.CanvasPrintDocument
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDocumentFactory[] = L"Microsoft.Graphics.Canvas.Printing.ICanvasPrintDocumentFactory";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateWithDevice)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice* device,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocument** value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactoryVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory_CreateWithDevice(This, device, value) \
    ((This)->lpVtbl->CreateWithDevice(This, device, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDocumentFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Printing.ICanvasPrintEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Printing.CanvasPrintEventArgs
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Printing_ICanvasPrintEventArgs[] = L"Microsoft.Graphics.Canvas.Printing.ICanvasPrintEventArgs";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_PrintTaskOptions)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs* This,
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore** value);
    HRESULT (STDMETHODCALLTYPE* get_Dpi)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* put_Dpi)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs* This,
        FLOAT value);
    HRESULT (STDMETHODCALLTYPE* GetDeferral)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral** value);
    HRESULT (STDMETHODCALLTYPE* CreateDrawingSession)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession** value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgsVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs_get_PrintTaskOptions(This, value) \
    ((This)->lpVtbl->get_PrintTaskOptions(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs_get_Dpi(This, value) \
    ((This)->lpVtbl->get_Dpi(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs_put_Dpi(This, value) \
    ((This)->lpVtbl->put_Dpi(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs_GetDeferral(This, value) \
    ((This)->lpVtbl->GetDeferral(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs_CreateDrawingSession(This, value) \
    ((This)->lpVtbl->CreateDrawingSession(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintEventArgs_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Printing.ICanvasPrintTaskOptionsChangedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Printing.CanvasPrintTaskOptionsChangedEventArgs
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Printing_ICanvasPrintTaskOptionsChangedEventArgs[] = L"Microsoft.Graphics.Canvas.Printing.ICanvasPrintTaskOptionsChangedEventArgs";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_CurrentPreviewPageNumber)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs* This,
        UINT32* value);
    HRESULT (STDMETHODCALLTYPE* put_NewPreviewPageNumber)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs* This,
        UINT32 value);
    HRESULT (STDMETHODCALLTYPE* get_NewPreviewPageNumber)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs* This,
        UINT32* value);
    HRESULT (STDMETHODCALLTYPE* GetDeferral)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintDeferral** value);
    HRESULT (STDMETHODCALLTYPE* get_PrintTaskOptions)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs* This,
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore** value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs_get_CurrentPreviewPageNumber(This, value) \
    ((This)->lpVtbl->get_CurrentPreviewPageNumber(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs_put_NewPreviewPageNumber(This, value) \
    ((This)->lpVtbl->put_NewPreviewPageNumber(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs_get_NewPreviewPageNumber(This, value) \
    ((This)->lpVtbl->get_NewPreviewPageNumber(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs_GetDeferral(This, value) \
    ((This)->lpVtbl->GetDeferral(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs_get_PrintTaskOptions(This, value) \
    ((This)->lpVtbl->get_PrintTaskOptions(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CPrinting_CICanvasPrintTaskOptionsChangedEventArgs_INTERFACE_DEFINED__) */

/*
 *
 * Class Microsoft.Graphics.Canvas.Printing.CanvasPreviewEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Printing.ICanvasPreviewEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Printing_CanvasPreviewEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Printing_CanvasPreviewEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Printing_CanvasPreviewEventArgs[] = L"Microsoft.Graphics.Canvas.Printing.CanvasPreviewEventArgs";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Printing.CanvasPrintDeferral
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Printing.ICanvasPrintDeferral ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Printing_CanvasPrintDeferral_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Printing_CanvasPrintDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Printing_CanvasPrintDeferral[] = L"Microsoft.Graphics.Canvas.Printing.CanvasPrintDeferral";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Printing.CanvasPrintDocument
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Printing.ICanvasPrintDocument ** Default Interface **
 *    Windows.Graphics.Printing.IPrintDocumentSource
 *    Microsoft.Graphics.Canvas.ICanvasResourceCreator
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Printing_CanvasPrintDocument_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Printing_CanvasPrintDocument_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Printing_CanvasPrintDocument[] = L"Microsoft.Graphics.Canvas.Printing.CanvasPrintDocument";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Printing.CanvasPrintEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Printing.ICanvasPrintEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Printing_CanvasPrintEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Printing_CanvasPrintEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Printing_CanvasPrintEventArgs[] = L"Microsoft.Graphics.Canvas.Printing.CanvasPrintEventArgs";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Printing.CanvasPrintTaskOptionsChangedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Printing.ICanvasPrintTaskOptionsChangedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Printing_CanvasPrintTaskOptionsChangedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Printing_CanvasPrintTaskOptionsChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Printing_CanvasPrintTaskOptionsChangedEventArgs[] = L"Microsoft.Graphics.Canvas.Printing.CanvasPrintTaskOptionsChangedEventArgs";
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
#endif // __microsoft2Egraphics2Ecanvas2Eprinting_p_h__

#endif // __microsoft2Egraphics2Ecanvas2Eprinting_h__
