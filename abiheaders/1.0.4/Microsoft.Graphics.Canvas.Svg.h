
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
#ifndef __microsoft2Egraphics2Ecanvas2Esvg_h__
#define __microsoft2Egraphics2Ecanvas2Esvg_h__
#ifndef __microsoft2Egraphics2Ecanvas2Esvg_p_h__
#define __microsoft2Egraphics2Ecanvas2Esvg_p_h__


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
#include "Microsoft.Graphics.Canvas.Geometry.h"
#include "Windows.Foundation.Numerics.h"
#include "Windows.Storage.Streams.h"
#include "Windows.UI.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    interface ICanvasSvgAttribute;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute_FWD_DEFINED__

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

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    interface ICanvasSvgDocumentFactory;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentFactory

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    interface ICanvasSvgDocumentStatics;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocumentStatics

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    interface ICanvasSvgElement;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    interface ICanvasSvgNamedElement;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    interface ICanvasSvgPaintAttribute;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgPaintAttribute

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    interface ICanvasSvgPathAttribute;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgPathAttribute

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    interface ICanvasSvgPointsAttribute;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgPointsAttribute

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    interface ICanvasSvgStrokeDashArrayAttribute;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgStrokeDashArrayAttribute

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    interface ICanvasSvgTextElement;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgTextElement

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
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


#ifndef DEF___FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_USE
#define DEF___FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("63adbeeb-f748-5aec-a9d3-5fd731b2bc67"))
IAsyncOperation<ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument*, ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.IAsyncOperation`1<Microsoft.Graphics.Canvas.Svg.CanvasSvgDocument>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument*> __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_t;
#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument ABI::Windows::Foundation::__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_USE */



#ifndef DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("45ebe17c-efb1-5ba2-9280-84134cea38f9"))
IAsyncOperationCompletedHandler<ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument*, ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Microsoft.Graphics.Canvas.Svg.CanvasSvgDocument>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgDocument*> __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_t;
#define __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_USE */


namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    class CanvasSvgNamedElement;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */


#ifndef DEF___FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_USE
#define DEF___FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("68a752f6-827a-5816-8e65-0b3342673075"))
IAsyncOperation<ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement*, ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.IAsyncOperation`1<Microsoft.Graphics.Canvas.Svg.CanvasSvgNamedElement>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement*> __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_t;
#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement ABI::Windows::Foundation::__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_USE */



#ifndef DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("76b5a817-1bef-5f3e-91bb-5697a3ba6e51"))
IAsyncOperationCompletedHandler<ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement*, ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Microsoft.Graphics.Canvas.Svg.CanvasSvgNamedElement>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgNamedElement*> __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_t;
#define __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_USE */


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
                typedef enum CanvasEdgeBehavior : int CanvasEdgeBehavior;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    typedef enum CanvasCapStyle : int CanvasCapStyle;
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    typedef enum CanvasFilledRegionDetermination : int CanvasFilledRegionDetermination;
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

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
                    typedef enum CanvasLineJoin : int CanvasLineJoin;
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

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
                typedef struct Vector2 Vector2;
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
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    typedef enum CanvasSvgAspectAlignment : int CanvasSvgAspectAlignment;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    typedef enum CanvasSvgAspectScaling : int CanvasSvgAspectScaling;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    typedef enum CanvasSvgDisplay : int CanvasSvgDisplay;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    typedef enum CanvasSvgLengthUnits : int CanvasSvgLengthUnits;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    typedef enum CanvasSvgOverflow : int CanvasSvgOverflow;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    typedef enum CanvasSvgPaintType : int CanvasSvgPaintType;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    typedef enum CanvasSvgPathCommand : int CanvasSvgPathCommand;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    typedef enum CanvasSvgUnits : int CanvasSvgUnits;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    typedef enum CanvasSvgVisibility : int CanvasSvgVisibility;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    class CanvasSvgPaintAttribute;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    class CanvasSvgPathAttribute;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    class CanvasSvgPointsAttribute;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    class CanvasSvgStrokeDashArrayAttribute;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    class CanvasSvgTextElement;
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Svg.CanvasSvgAspectAlignment
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    enum CanvasSvgAspectAlignment : int
                    {
                        CanvasSvgAspectAlignment_None = 0,
                        CanvasSvgAspectAlignment_XMinYMin = 1,
                        CanvasSvgAspectAlignment_XMidYMin = 2,
                        CanvasSvgAspectAlignment_XMaxYMin = 3,
                        CanvasSvgAspectAlignment_XMinYMid = 4,
                        CanvasSvgAspectAlignment_XMidYMid = 5,
                        CanvasSvgAspectAlignment_XMaxYMid = 6,
                        CanvasSvgAspectAlignment_XMinYMax = 7,
                        CanvasSvgAspectAlignment_XMidYMax = 8,
                        CanvasSvgAspectAlignment_XMaxYMax = 9,
                    };
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Svg.CanvasSvgAspectScaling
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    enum CanvasSvgAspectScaling : int
                    {
                        CanvasSvgAspectScaling_Meet = 0,
                        CanvasSvgAspectScaling_Slice = 1,
                    };
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Svg.CanvasSvgDisplay
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    enum CanvasSvgDisplay : int
                    {
                        CanvasSvgDisplay_Inline = 0,
                        CanvasSvgDisplay_None = 1,
                    };
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Svg.CanvasSvgLengthUnits
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    enum CanvasSvgLengthUnits : int
                    {
                        CanvasSvgLengthUnits_Number = 0,
                        CanvasSvgLengthUnits_Percentage = 1,
                    };
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Svg.CanvasSvgOverflow
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    enum CanvasSvgOverflow : int
                    {
                        CanvasSvgOverflow_DoNotClipToViewport = 0,
                        CanvasSvgOverflow_ClipToViewport = 1,
                    };
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Svg.CanvasSvgPaintType
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    enum CanvasSvgPaintType : int
                    {
                        CanvasSvgPaintType_None = 0,
                        CanvasSvgPaintType_Color = 1,
                        CanvasSvgPaintType_CurrentColor = 2,
                        CanvasSvgPaintType_Uri = 3,
                        CanvasSvgPaintType_UriThenNone = 4,
                        CanvasSvgPaintType_UriThenColor = 5,
                        CanvasSvgPaintType_UriThenCurrentColor = 6,
                    };
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Svg.CanvasSvgPathCommand
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    enum CanvasSvgPathCommand : int
                    {
                        CanvasSvgPathCommand_ClosePath = 0,
                        CanvasSvgPathCommand_MoveAbsolute = 1,
                        CanvasSvgPathCommand_MoveRelative = 2,
                        CanvasSvgPathCommand_LineAbsolute = 3,
                        CanvasSvgPathCommand_LineRelative = 4,
                        CanvasSvgPathCommand_CubicAbsolute = 5,
                        CanvasSvgPathCommand_CubicRelative = 6,
                        CanvasSvgPathCommand_QuadraticAbsolute = 7,
                        CanvasSvgPathCommand_QuadraticRelative = 8,
                        CanvasSvgPathCommand_ArcAbsolute = 9,
                        CanvasSvgPathCommand_ArcRelative = 10,
                        CanvasSvgPathCommand_HorizontalAbsolute = 11,
                        CanvasSvgPathCommand_HorizontalRelative = 12,
                        CanvasSvgPathCommand_VerticalAbsolute = 13,
                        CanvasSvgPathCommand_VerticalRelative = 14,
                        CanvasSvgPathCommand_CubicSmoothAbsolute = 15,
                        CanvasSvgPathCommand_CubicSmoothRelative = 16,
                        CanvasSvgPathCommand_QuadraticSmoothAbsolute = 17,
                        CanvasSvgPathCommand_QuadraticSmoothRelative = 18,
                    };
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Svg.CanvasSvgUnits
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    enum CanvasSvgUnits : int
                    {
                        CanvasSvgUnits_UserSpaceOnUse = 0,
                        CanvasSvgUnits_ObjectBoundingBox = 1,
                    };
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Svg.CanvasSvgVisibility
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    enum CanvasSvgVisibility : int
                    {
                        CanvasSvgVisibility_Visible = 0,
                        CanvasSvgVisibility_Hidden = 1,
                    };
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Svg.ICanvasSvgAttribute
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Svg_ICanvasSvgAttribute[] = L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgAttribute";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    MIDL_INTERFACE("652786a8-f3ab-4083-991d-9748aa86bd6e")
                    ICanvasSvgAttribute : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Clone(
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute** result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetElement(
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement** value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Device(
                            ABI::Microsoft::Graphics::Canvas::ICanvasDevice** value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasSvgAttribute = _uuidof(ICanvasSvgAttribute);
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Svg.ICanvasSvgDocument
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Svg.CanvasSvgDocument
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocument[] = L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgDocument";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    MIDL_INTERFACE("a0e34929-3551-44fe-a670-d9b3fd800516")
                    ICanvasSvgDocument : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_Device(
                            ABI::Microsoft::Graphics::Canvas::ICanvasDevice** value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetXml(
                            HSTRING* xmlString
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SaveAsync(
                            ABI::Windows::Storage::Streams::IRandomAccessStream* stream,
                            ABI::Windows::Foundation::IAsyncAction** asyncAction
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_Root(
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Root(
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement** value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE FindElementById(
                            HSTRING id,
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement** element
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreatePaintAttributeWithDefaults(
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgPaintAttribute** result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreatePaintAttribute(
                            ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintType paintType,
                            ABI::Windows::UI::Color color,
                            HSTRING id,
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgPaintAttribute** result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreatePathAttributeWithDefaults(
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgPathAttribute** result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreatePathAttribute(
                            UINT32 segmentDataLength,
                            FLOAT* segmentData,
                            UINT32 commandsLength,
                            ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand* commands,
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgPathAttribute** result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreatePointsAttributeWithDefaults(
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgPointsAttribute** result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreatePointsAttribute(
                            UINT32 pointsLength,
                            ABI::Windows::Foundation::Numerics::Vector2* points,
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgPointsAttribute** result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateStrokeDashArrayAttributeWithDefaults(
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgStrokeDashArrayAttribute** result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateStrokeDashArrayAttribute(
                            UINT32 dashValuesLength,
                            FLOAT* dashValues,
                            UINT32 unitValuesLength,
                            ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits* unitValues,
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgStrokeDashArrayAttribute** result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE LoadElementFromXml(
                            HSTRING xmlString,
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement** svgElement
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE LoadElementAsync(
                            ABI::Windows::Storage::Streams::IRandomAccessStream* stream,
                            __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement** svgElement
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasSvgDocument = _uuidof(ICanvasSvgDocument);
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Svg.ICanvasSvgDocumentFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Svg.CanvasSvgDocument
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocumentFactory[] = L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgDocumentFactory";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    MIDL_INTERFACE("bab0f16d-4050-4ef6-8022-8a07e9e74a9d")
                    ICanvasSvgDocumentFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateEmpty(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument** canvasSvgDocument
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasSvgDocumentFactory = _uuidof(ICanvasSvgDocumentFactory);
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Svg.ICanvasSvgDocumentStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Svg.CanvasSvgDocument
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocumentStatics[] = L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgDocumentStatics";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    MIDL_INTERFACE("7740e748-cb9a-453f-a678-8b3b3a7254d3")
                    ICanvasSvgDocumentStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE LoadFromXml(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            HSTRING xmlString,
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument** svgDocument
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE LoadAsync(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            ABI::Windows::Storage::Streams::IRandomAccessStream* stream,
                            __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument** svgDocument
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE IsSupported(
                            ABI::Microsoft::Graphics::Canvas::ICanvasDevice* device,
                            boolean* value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasSvgDocumentStatics = _uuidof(ICanvasSvgDocumentStatics);
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Svg.ICanvasSvgElement
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Svg_ICanvasSvgElement[] = L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgElement";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    MIDL_INTERFACE("0775cb81-c555-45bf-9795-0ff59151c3be")
                    ICanvasSvgElement : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_ContainingDocument(
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgDocument** value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Parent(
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement** value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Device(
                            ABI::Microsoft::Graphics::Canvas::ICanvasDevice** value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasSvgElement = _uuidof(ICanvasSvgElement);
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Svg.ICanvasSvgNamedElement
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Svg.CanvasSvgNamedElement
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Microsoft.Graphics.Canvas.Svg.ICanvasSvgElement
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement[] = L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgNamedElement";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    MIDL_INTERFACE("d8b7cb94-8167-495d-9c71-5e97e5d08d2b")
                    ICanvasSvgNamedElement : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE AppendChild(
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement* child
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateAndAppendNamedChildElement(
                            HSTRING childName,
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgNamedElement** childElement
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateAndAppendTextChildElement(
                            HSTRING textContent,
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgTextElement** childElement
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_FirstChild(
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement** value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_LastChild(
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement** value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetPreviousSibling(
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement* child,
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement** value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetNextSibling(
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement* child,
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement** value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_SpecifiedAttributes(
                            UINT32* valueElementsLength,
                            HSTRING** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Tag(
                            HSTRING* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_HasChildren(
                            boolean* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE InsertChildBefore(
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement* child,
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement* referenceChild
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE IsAttributeSpecified(
                            HSTRING attributeName,
                            boolean* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE IsAttributeSpecifiedWithInherhited(
                            HSTRING attributeName,
                            boolean inherited,
                            boolean* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RemoveAttribute(
                            HSTRING attributeName
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RemoveChild(
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement* child
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReplaceChild(
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement* newChild,
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgElement* oldChild
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStringAttribute(
                            HSTRING attributeName,
                            HSTRING attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStringAttribute(
                            HSTRING attributeName,
                            HSTRING* attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetAttribute(
                            HSTRING attributeName,
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute* attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetAttribute(
                            HSTRING attributeName,
                            ABI::Microsoft::Graphics::Canvas::Svg::ICanvasSvgAttribute** attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetIdAttribute(
                            HSTRING attributeName,
                            HSTRING attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetIdAttribute(
                            HSTRING attributeName,
                            HSTRING* attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetFloatAttribute(
                            HSTRING attributeName,
                            FLOAT attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetFloatAttribute(
                            HSTRING attributeName,
                            FLOAT* attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetColorAttribute(
                            HSTRING attributeName,
                            ABI::Windows::UI::Color attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetColorAttribute(
                            HSTRING attributeName,
                            ABI::Windows::UI::Color* attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetFilledRegionDeterminationAttribute(
                            HSTRING attributeName,
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetFilledRegionDeterminationAttribute(
                            HSTRING attributeName,
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination* attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetDisplayAttribute(
                            HSTRING attributeName,
                            ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgDisplay attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDisplayAttribute(
                            HSTRING attributeName,
                            ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgDisplay* attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetOverflowAttribute(
                            HSTRING attributeName,
                            ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgOverflow attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetOverflowAttribute(
                            HSTRING attributeName,
                            ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgOverflow* attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetCapStyleAttribute(
                            HSTRING attributeName,
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetCapStyleAttribute(
                            HSTRING attributeName,
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle* attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetLineJoinAttribute(
                            HSTRING attributeName,
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasLineJoin attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetLineJoinAttribute(
                            HSTRING attributeName,
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasLineJoin* attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetVisibilityAttribute(
                            HSTRING attributeName,
                            ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgVisibility attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetVisibilityAttribute(
                            HSTRING attributeName,
                            ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgVisibility* attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetTransformAttribute(
                            HSTRING attributeName,
                            ABI::Windows::Foundation::Numerics::Matrix3x2 attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetTransformAttribute(
                            HSTRING attributeName,
                            ABI::Windows::Foundation::Numerics::Matrix3x2* attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetUnitsAttribute(
                            HSTRING attributeName,
                            ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgUnits attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetUnitsAttribute(
                            HSTRING attributeName,
                            ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgUnits* attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetEdgeBehaviorAttribute(
                            HSTRING attributeName,
                            ABI::Microsoft::Graphics::Canvas::CanvasEdgeBehavior attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetEdgeBehaviorAttribute(
                            HSTRING attributeName,
                            ABI::Microsoft::Graphics::Canvas::CanvasEdgeBehavior* attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetRectangleAttribute(
                            HSTRING attributeName,
                            ABI::Windows::Foundation::Rect attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetRectangleAttribute(
                            HSTRING attributeName,
                            ABI::Windows::Foundation::Rect* attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetLengthAttribute(
                            HSTRING attributeName,
                            FLOAT value,
                            ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits units
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetLengthAttribute(
                            HSTRING attributeName,
                            ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits* units,
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetAspectRatioAttribute(
                            HSTRING attributeName,
                            ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectAlignment alignment,
                            ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectScaling meetOrSlice
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetAspectRatioAttribute(
                            HSTRING attributeName,
                            ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectScaling* meetOrSlice,
                            ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgAspectAlignment* alignment
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasSvgNamedElement = _uuidof(ICanvasSvgNamedElement);
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Svg.ICanvasSvgPaintAttribute
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Svg.CanvasSvgPaintAttribute
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *     Microsoft.Graphics.Canvas.Svg.ICanvasSvgAttribute
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPaintAttribute[] = L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgPaintAttribute";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    MIDL_INTERFACE("653786a8-f3ab-4083-991d-9748aa86bd6e")
                    ICanvasSvgPaintAttribute : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE put_PaintType(
                            ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintType value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_PaintType(
                            ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgPaintType* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_Color(
                            ABI::Windows::UI::Color value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Color(
                            ABI::Windows::UI::Color* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_Id(
                            HSTRING value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Id(
                            HSTRING* value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasSvgPaintAttribute = _uuidof(ICanvasSvgPaintAttribute);
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Svg.ICanvasSvgPathAttribute
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Svg.CanvasSvgPathAttribute
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *     Microsoft.Graphics.Canvas.Svg.ICanvasSvgAttribute
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPathAttribute[] = L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgPathAttribute";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    MIDL_INTERFACE("652786a8-f3ab-4083-991d-9748ab86bd6e")
                    ICanvasSvgPathAttribute : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreatePathGeometry(
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** outputGeometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreatePathGeometryWithFill(
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination fill,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** outputGeometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Commands(
                            UINT32* valueElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetCommands(
                            INT32 startIndex,
                            INT32 elementCount,
                            UINT32* outputValueElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand** outputValueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_SegmentData(
                            UINT32* valueElementsLength,
                            FLOAT** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetSegmentData(
                            INT32 startIndex,
                            INT32 elementCount,
                            UINT32* outputValueElementsLength,
                            FLOAT** outputValueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RemoveCommandsAtEnd(
                            INT32 commandsCount
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RemoveSegmentDataAtEnd(
                            INT32 commandsCount
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetCommands(
                            INT32 startIndex,
                            UINT32 commandsLength,
                            ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgPathCommand* commands
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetSegmentData(
                            INT32 startIndex,
                            UINT32 segmentDataLength,
                            FLOAT* segmentData
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasSvgPathAttribute = _uuidof(ICanvasSvgPathAttribute);
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Svg.ICanvasSvgPointsAttribute
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Svg.CanvasSvgPointsAttribute
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *     Microsoft.Graphics.Canvas.Svg.ICanvasSvgAttribute
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPointsAttribute[] = L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgPointsAttribute";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    MIDL_INTERFACE("652786a8-f3ab-4083-991d-9748aa86bd6f")
                    ICanvasSvgPointsAttribute : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_Points(
                            UINT32* valueElementsLength,
                            ABI::Windows::Foundation::Numerics::Vector2** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetPoints(
                            INT32 startIndex,
                            INT32 elementCount,
                            UINT32* outputValueElementsLength,
                            ABI::Windows::Foundation::Numerics::Vector2** outputValueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RemovePointsAtEnd(
                            INT32 pointCount
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPoints(
                            INT32 startIndex,
                            UINT32 pointsLength,
                            ABI::Windows::Foundation::Numerics::Vector2* points
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasSvgPointsAttribute = _uuidof(ICanvasSvgPointsAttribute);
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Svg.ICanvasSvgStrokeDashArrayAttribute
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Svg.CanvasSvgStrokeDashArrayAttribute
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *     Microsoft.Graphics.Canvas.Svg.ICanvasSvgAttribute
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Svg_ICanvasSvgStrokeDashArrayAttribute[] = L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgStrokeDashArrayAttribute";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    MIDL_INTERFACE("652786a8-f3ab-4083-991d-9748aa86bd70")
                    ICanvasSvgStrokeDashArrayAttribute : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetDashes(
                            UINT32* valueElementsLength,
                            FLOAT** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDashesWithUnits(
                            INT32 startIndex,
                            INT32 elementCount,
                            UINT32* outputUnitsElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits** outputUnitsElements,
                            UINT32* outputValueElementsLength,
                            FLOAT** outputValueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RemoveDashesAtEnd(
                            INT32 dashCount
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetDashes(
                            INT32 startIndex,
                            UINT32 dashesLength,
                            FLOAT* dashes
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetDashesWithUnit(
                            INT32 startIndex,
                            UINT32 dashesLength,
                            FLOAT* dashes,
                            ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits units
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetDashesWithUnits(
                            INT32 startIndex,
                            UINT32 dashValuesLength,
                            FLOAT* dashValues,
                            UINT32 unitValuesLength,
                            ABI::Microsoft::Graphics::Canvas::Svg::CanvasSvgLengthUnits* unitValues
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasSvgStrokeDashArrayAttribute = _uuidof(ICanvasSvgStrokeDashArrayAttribute);
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Svg.ICanvasSvgTextElement
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Svg.CanvasSvgTextElement
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Svg_ICanvasSvgTextElement[] = L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgTextElement";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Svg {
                    MIDL_INTERFACE("652786a8-f3ab-4083-991d-9748aa86bd6d")
                    ICanvasSvgTextElement : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE put_Text(
                            HSTRING value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Text(
                            HSTRING* value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasSvgTextElement = _uuidof(ICanvasSvgTextElement);
                } /* Svg */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement_INTERFACE_DEFINED__) */

/*
 *
 * Class Microsoft.Graphics.Canvas.Svg.CanvasSvgDocument
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Svg.ICanvasSvgDocument ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgDocument_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgDocument_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Svg_CanvasSvgDocument[] = L"Microsoft.Graphics.Canvas.Svg.CanvasSvgDocument";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Svg.CanvasSvgNamedElement
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Svg.ICanvasSvgNamedElement ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Microsoft.Graphics.Canvas.Svg.ICanvasSvgElement
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgNamedElement_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgNamedElement_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Svg_CanvasSvgNamedElement[] = L"Microsoft.Graphics.Canvas.Svg.CanvasSvgNamedElement";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Svg.CanvasSvgPaintAttribute
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Svg.ICanvasSvgPaintAttribute ** Default Interface **
 *    Microsoft.Graphics.Canvas.Svg.ICanvasSvgAttribute
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgPaintAttribute_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgPaintAttribute_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Svg_CanvasSvgPaintAttribute[] = L"Microsoft.Graphics.Canvas.Svg.CanvasSvgPaintAttribute";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Svg.CanvasSvgPathAttribute
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Svg.ICanvasSvgPathAttribute ** Default Interface **
 *    Microsoft.Graphics.Canvas.Svg.ICanvasSvgAttribute
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgPathAttribute_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgPathAttribute_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Svg_CanvasSvgPathAttribute[] = L"Microsoft.Graphics.Canvas.Svg.CanvasSvgPathAttribute";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Svg.CanvasSvgPointsAttribute
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Svg.ICanvasSvgPointsAttribute ** Default Interface **
 *    Microsoft.Graphics.Canvas.Svg.ICanvasSvgAttribute
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgPointsAttribute_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgPointsAttribute_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Svg_CanvasSvgPointsAttribute[] = L"Microsoft.Graphics.Canvas.Svg.CanvasSvgPointsAttribute";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Svg.CanvasSvgStrokeDashArrayAttribute
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Svg.ICanvasSvgStrokeDashArrayAttribute ** Default Interface **
 *    Microsoft.Graphics.Canvas.Svg.ICanvasSvgAttribute
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgStrokeDashArrayAttribute_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgStrokeDashArrayAttribute_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Svg_CanvasSvgStrokeDashArrayAttribute[] = L"Microsoft.Graphics.Canvas.Svg.CanvasSvgStrokeDashArrayAttribute";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Svg.CanvasSvgTextElement
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Svg.ICanvasSvgTextElement ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgTextElement_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgTextElement_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Svg_CanvasSvgTextElement[] = L"Microsoft.Graphics.Canvas.Svg.CanvasSvgTextElement";
#endif

#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

typedef interface __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument;

#if !defined(____FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument;

typedef struct __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocumentVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* put_Completed)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument* This,
        __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument* handler);
    HRESULT (STDMETHODCALLTYPE* get_Completed)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument* This,
        __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument** result);
    HRESULT (STDMETHODCALLTYPE* GetResults)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument** result);

    END_INTERFACE
} __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocumentVtbl;

interface __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument
{
    CONST_VTBL struct __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocumentVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_put_Completed(This, handler) \
    ((This)->lpVtbl->put_Completed(This, handler))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_get_Completed(This, result) \
    ((This)->lpVtbl->get_Completed(This, result))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_GetResults(This, result) \
    ((This)->lpVtbl->GetResults(This, result))

#endif /* COBJMACROS */

#endif // ____FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_INTERFACE_DEFINED__

#if !defined(____FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument;

typedef struct __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocumentVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument* This,
        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument* asyncInfo,
        AsyncStatus asyncStatus);

    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocumentVtbl;

interface __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocumentVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_Invoke(This, asyncInfo, asyncStatus) \
    ((This)->lpVtbl->Invoke(This, asyncInfo, asyncStatus))

#endif /* COBJMACROS */

#endif // ____FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement;

#if !defined(____FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement;

typedef struct __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElementVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* put_Completed)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement* This,
        __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement* handler);
    HRESULT (STDMETHODCALLTYPE* get_Completed)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement* This,
        __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement** result);
    HRESULT (STDMETHODCALLTYPE* GetResults)(__FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement** result);

    END_INTERFACE
} __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElementVtbl;

interface __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement
{
    CONST_VTBL struct __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElementVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_put_Completed(This, handler) \
    ((This)->lpVtbl->put_Completed(This, handler))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_get_Completed(This, result) \
    ((This)->lpVtbl->get_Completed(This, result))

#define __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_GetResults(This, result) \
    ((This)->lpVtbl->GetResults(This, result))

#endif /* COBJMACROS */

#endif // ____FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_INTERFACE_DEFINED__

#if !defined(____FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement;

typedef struct __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElementVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement* This,
        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement* asyncInfo,
        AsyncStatus asyncStatus);

    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElementVtbl;

interface __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElementVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_Invoke(This, asyncInfo, asyncStatus) \
    ((This)->lpVtbl->Invoke(This, asyncInfo, asyncStatus))

#endif /* COBJMACROS */

#endif // ____FIAsyncOperationCompletedHandler_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement_INTERFACE_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_FWD_DEFINED__

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasEdgeBehavior __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasEdgeBehavior;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasCapStyle __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasCapStyle;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFilledRegionDetermination __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFilledRegionDetermination;

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_FWD_DEFINED__

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasLineJoin __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasLineJoin;

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__

typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2;

typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 __x_ABI_CWindows_CFoundation_CNumerics_CVector2;

typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__

typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgAspectAlignment __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgAspectAlignment;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgAspectScaling __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgAspectScaling;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgDisplay __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgDisplay;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgLengthUnits __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgLengthUnits;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgOverflow __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgOverflow;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgPaintType __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgPaintType;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgPathCommand __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgPathCommand;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgUnits __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgUnits;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgVisibility __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgVisibility;

/*
 *
 * Struct Microsoft.Graphics.Canvas.Svg.CanvasSvgAspectAlignment
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgAspectAlignment
{
    CanvasSvgAspectAlignment_None = 0,
    CanvasSvgAspectAlignment_XMinYMin = 1,
    CanvasSvgAspectAlignment_XMidYMin = 2,
    CanvasSvgAspectAlignment_XMaxYMin = 3,
    CanvasSvgAspectAlignment_XMinYMid = 4,
    CanvasSvgAspectAlignment_XMidYMid = 5,
    CanvasSvgAspectAlignment_XMaxYMid = 6,
    CanvasSvgAspectAlignment_XMinYMax = 7,
    CanvasSvgAspectAlignment_XMidYMax = 8,
    CanvasSvgAspectAlignment_XMaxYMax = 9,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Svg.CanvasSvgAspectScaling
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgAspectScaling
{
    CanvasSvgAspectScaling_Meet = 0,
    CanvasSvgAspectScaling_Slice = 1,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Svg.CanvasSvgDisplay
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgDisplay
{
    CanvasSvgDisplay_Inline = 0,
    CanvasSvgDisplay_None = 1,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Svg.CanvasSvgLengthUnits
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgLengthUnits
{
    CanvasSvgLengthUnits_Number = 0,
    CanvasSvgLengthUnits_Percentage = 1,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Svg.CanvasSvgOverflow
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgOverflow
{
    CanvasSvgOverflow_DoNotClipToViewport = 0,
    CanvasSvgOverflow_ClipToViewport = 1,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Svg.CanvasSvgPaintType
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgPaintType
{
    CanvasSvgPaintType_None = 0,
    CanvasSvgPaintType_Color = 1,
    CanvasSvgPaintType_CurrentColor = 2,
    CanvasSvgPaintType_Uri = 3,
    CanvasSvgPaintType_UriThenNone = 4,
    CanvasSvgPaintType_UriThenColor = 5,
    CanvasSvgPaintType_UriThenCurrentColor = 6,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Svg.CanvasSvgPathCommand
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgPathCommand
{
    CanvasSvgPathCommand_ClosePath = 0,
    CanvasSvgPathCommand_MoveAbsolute = 1,
    CanvasSvgPathCommand_MoveRelative = 2,
    CanvasSvgPathCommand_LineAbsolute = 3,
    CanvasSvgPathCommand_LineRelative = 4,
    CanvasSvgPathCommand_CubicAbsolute = 5,
    CanvasSvgPathCommand_CubicRelative = 6,
    CanvasSvgPathCommand_QuadraticAbsolute = 7,
    CanvasSvgPathCommand_QuadraticRelative = 8,
    CanvasSvgPathCommand_ArcAbsolute = 9,
    CanvasSvgPathCommand_ArcRelative = 10,
    CanvasSvgPathCommand_HorizontalAbsolute = 11,
    CanvasSvgPathCommand_HorizontalRelative = 12,
    CanvasSvgPathCommand_VerticalAbsolute = 13,
    CanvasSvgPathCommand_VerticalRelative = 14,
    CanvasSvgPathCommand_CubicSmoothAbsolute = 15,
    CanvasSvgPathCommand_CubicSmoothRelative = 16,
    CanvasSvgPathCommand_QuadraticSmoothAbsolute = 17,
    CanvasSvgPathCommand_QuadraticSmoothRelative = 18,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Svg.CanvasSvgUnits
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgUnits
{
    CanvasSvgUnits_UserSpaceOnUse = 0,
    CanvasSvgUnits_ObjectBoundingBox = 1,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Svg.CanvasSvgVisibility
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgVisibility
{
    CanvasSvgVisibility_Visible = 0,
    CanvasSvgVisibility_Hidden = 1,
};

/*
 *
 * Interface Microsoft.Graphics.Canvas.Svg.ICanvasSvgAttribute
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Svg_ICanvasSvgAttribute[] = L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgAttribute";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttributeVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* Clone)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute** result);
    HRESULT (STDMETHODCALLTYPE* GetElement)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement** value);
    HRESULT (STDMETHODCALLTYPE* get_Device)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice** value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttributeVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttributeVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute_Clone(This, result) \
    ((This)->lpVtbl->Clone(This, result))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute_GetElement(This, value) \
    ((This)->lpVtbl->GetElement(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute_get_Device(This, value) \
    ((This)->lpVtbl->get_Device(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Svg.ICanvasSvgDocument
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Svg.CanvasSvgDocument
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocument[] = L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgDocument";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Device)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice** value);
    HRESULT (STDMETHODCALLTYPE* GetXml)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument* This,
        HSTRING* xmlString);
    HRESULT (STDMETHODCALLTYPE* SaveAsync)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument* This,
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream* stream,
        __x_ABI_CWindows_CFoundation_CIAsyncAction** asyncAction);
    HRESULT (STDMETHODCALLTYPE* put_Root)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* value);
    HRESULT (STDMETHODCALLTYPE* get_Root)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement** value);
    HRESULT (STDMETHODCALLTYPE* FindElementById)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument* This,
        HSTRING id,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement** element);
    HRESULT (STDMETHODCALLTYPE* CreatePaintAttributeWithDefaults)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute** result);
    HRESULT (STDMETHODCALLTYPE* CreatePaintAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgPaintType paintType,
        struct __x_ABI_CWindows_CUI_CColor color,
        HSTRING id,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute** result);
    HRESULT (STDMETHODCALLTYPE* CreatePathAttributeWithDefaults)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute** result);
    HRESULT (STDMETHODCALLTYPE* CreatePathAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument* This,
        UINT32 segmentDataLength,
        FLOAT* segmentData,
        UINT32 commandsLength,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgPathCommand* commands,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute** result);
    HRESULT (STDMETHODCALLTYPE* CreatePointsAttributeWithDefaults)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute** result);
    HRESULT (STDMETHODCALLTYPE* CreatePointsAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument* This,
        UINT32 pointsLength,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2* points,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute** result);
    HRESULT (STDMETHODCALLTYPE* CreateStrokeDashArrayAttributeWithDefaults)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute** result);
    HRESULT (STDMETHODCALLTYPE* CreateStrokeDashArrayAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument* This,
        UINT32 dashValuesLength,
        FLOAT* dashValues,
        UINT32 unitValuesLength,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgLengthUnits* unitValues,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute** result);
    HRESULT (STDMETHODCALLTYPE* LoadElementFromXml)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument* This,
        HSTRING xmlString,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement** svgElement);
    HRESULT (STDMETHODCALLTYPE* LoadElementAsync)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument* This,
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream* stream,
        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgNamedElement** svgElement);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_get_Device(This, value) \
    ((This)->lpVtbl->get_Device(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_GetXml(This, xmlString) \
    ((This)->lpVtbl->GetXml(This, xmlString))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_SaveAsync(This, stream, asyncAction) \
    ((This)->lpVtbl->SaveAsync(This, stream, asyncAction))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_put_Root(This, value) \
    ((This)->lpVtbl->put_Root(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_get_Root(This, value) \
    ((This)->lpVtbl->get_Root(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_FindElementById(This, id, element) \
    ((This)->lpVtbl->FindElementById(This, id, element))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_CreatePaintAttributeWithDefaults(This, result) \
    ((This)->lpVtbl->CreatePaintAttributeWithDefaults(This, result))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_CreatePaintAttribute(This, paintType, color, id, result) \
    ((This)->lpVtbl->CreatePaintAttribute(This, paintType, color, id, result))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_CreatePathAttributeWithDefaults(This, result) \
    ((This)->lpVtbl->CreatePathAttributeWithDefaults(This, result))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_CreatePathAttribute(This, segmentDataLength, segmentData, commandsLength, commands, result) \
    ((This)->lpVtbl->CreatePathAttribute(This, segmentDataLength, segmentData, commandsLength, commands, result))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_CreatePointsAttributeWithDefaults(This, result) \
    ((This)->lpVtbl->CreatePointsAttributeWithDefaults(This, result))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_CreatePointsAttribute(This, pointsLength, points, result) \
    ((This)->lpVtbl->CreatePointsAttribute(This, pointsLength, points, result))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_CreateStrokeDashArrayAttributeWithDefaults(This, result) \
    ((This)->lpVtbl->CreateStrokeDashArrayAttributeWithDefaults(This, result))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_CreateStrokeDashArrayAttribute(This, dashValuesLength, dashValues, unitValuesLength, unitValues, result) \
    ((This)->lpVtbl->CreateStrokeDashArrayAttribute(This, dashValuesLength, dashValues, unitValuesLength, unitValues, result))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_LoadElementFromXml(This, xmlString, svgElement) \
    ((This)->lpVtbl->LoadElementFromXml(This, xmlString, svgElement))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_LoadElementAsync(This, stream, svgElement) \
    ((This)->lpVtbl->LoadElementAsync(This, stream, svgElement))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Svg.ICanvasSvgDocumentFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Svg.CanvasSvgDocument
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocumentFactory[] = L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgDocumentFactory";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateEmpty)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument** canvasSvgDocument);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactoryVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory_CreateEmpty(This, resourceCreator, canvasSvgDocument) \
    ((This)->lpVtbl->CreateEmpty(This, resourceCreator, canvasSvgDocument))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Svg.ICanvasSvgDocumentStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Svg.CanvasSvgDocument
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Svg_ICanvasSvgDocumentStatics[] = L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgDocumentStatics";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* LoadFromXml)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        HSTRING xmlString,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument** svgDocument);
    HRESULT (STDMETHODCALLTYPE* LoadAsync)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream* stream,
        __FIAsyncOperation_1_Microsoft__CGraphics__CCanvas__CSvg__CCanvasSvgDocument** svgDocument);
    HRESULT (STDMETHODCALLTYPE* IsSupported)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice* device,
        boolean* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStaticsVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics_LoadFromXml(This, resourceCreator, xmlString, svgDocument) \
    ((This)->lpVtbl->LoadFromXml(This, resourceCreator, xmlString, svgDocument))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics_LoadAsync(This, resourceCreator, stream, svgDocument) \
    ((This)->lpVtbl->LoadAsync(This, resourceCreator, stream, svgDocument))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics_IsSupported(This, device, value) \
    ((This)->lpVtbl->IsSupported(This, device, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocumentStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Svg.ICanvasSvgElement
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Svg_ICanvasSvgElement[] = L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgElement";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElementVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_ContainingDocument)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgDocument** value);
    HRESULT (STDMETHODCALLTYPE* get_Parent)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement** value);
    HRESULT (STDMETHODCALLTYPE* get_Device)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice** value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElementVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElementVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement_get_ContainingDocument(This, value) \
    ((This)->lpVtbl->get_ContainingDocument(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement_get_Parent(This, value) \
    ((This)->lpVtbl->get_Parent(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement_get_Device(This, value) \
    ((This)->lpVtbl->get_Device(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Svg.ICanvasSvgNamedElement
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Svg.CanvasSvgNamedElement
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Microsoft.Graphics.Canvas.Svg.ICanvasSvgElement
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Svg_ICanvasSvgNamedElement[] = L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgNamedElement";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElementVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* AppendChild)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement* child);
    HRESULT (STDMETHODCALLTYPE* CreateAndAppendNamedChildElement)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING childName,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement** childElement);
    HRESULT (STDMETHODCALLTYPE* CreateAndAppendTextChildElement)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING textContent,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement** childElement);
    HRESULT (STDMETHODCALLTYPE* get_FirstChild)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement** value);
    HRESULT (STDMETHODCALLTYPE* get_LastChild)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement** value);
    HRESULT (STDMETHODCALLTYPE* GetPreviousSibling)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement* child,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement** value);
    HRESULT (STDMETHODCALLTYPE* GetNextSibling)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement* child,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement** value);
    HRESULT (STDMETHODCALLTYPE* get_SpecifiedAttributes)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        UINT32* valueElementsLength,
        HSTRING** valueElements);
    HRESULT (STDMETHODCALLTYPE* get_Tag)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_HasChildren)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* InsertChildBefore)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement* child,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement* referenceChild);
    HRESULT (STDMETHODCALLTYPE* IsAttributeSpecified)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* IsAttributeSpecifiedWithInherhited)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        boolean inherited,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* RemoveAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName);
    HRESULT (STDMETHODCALLTYPE* RemoveChild)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement* child);
    HRESULT (STDMETHODCALLTYPE* ReplaceChild)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement* newChild,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgElement* oldChild);
    HRESULT (STDMETHODCALLTYPE* SetStringAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        HSTRING attributeValue);
    HRESULT (STDMETHODCALLTYPE* GetStringAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        HSTRING* attributeValue);
    HRESULT (STDMETHODCALLTYPE* SetAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute* attributeValue);
    HRESULT (STDMETHODCALLTYPE* GetAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgAttribute** attributeValue);
    HRESULT (STDMETHODCALLTYPE* SetIdAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        HSTRING attributeValue);
    HRESULT (STDMETHODCALLTYPE* GetIdAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        HSTRING* attributeValue);
    HRESULT (STDMETHODCALLTYPE* SetFloatAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        FLOAT attributeValue);
    HRESULT (STDMETHODCALLTYPE* GetFloatAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        FLOAT* attributeValue);
    HRESULT (STDMETHODCALLTYPE* SetColorAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        struct __x_ABI_CWindows_CUI_CColor attributeValue);
    HRESULT (STDMETHODCALLTYPE* GetColorAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        struct __x_ABI_CWindows_CUI_CColor* attributeValue);
    HRESULT (STDMETHODCALLTYPE* SetFilledRegionDeterminationAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFilledRegionDetermination attributeValue);
    HRESULT (STDMETHODCALLTYPE* GetFilledRegionDeterminationAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFilledRegionDetermination* attributeValue);
    HRESULT (STDMETHODCALLTYPE* SetDisplayAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgDisplay attributeValue);
    HRESULT (STDMETHODCALLTYPE* GetDisplayAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgDisplay* attributeValue);
    HRESULT (STDMETHODCALLTYPE* SetOverflowAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgOverflow attributeValue);
    HRESULT (STDMETHODCALLTYPE* GetOverflowAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgOverflow* attributeValue);
    HRESULT (STDMETHODCALLTYPE* SetCapStyleAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasCapStyle attributeValue);
    HRESULT (STDMETHODCALLTYPE* GetCapStyleAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasCapStyle* attributeValue);
    HRESULT (STDMETHODCALLTYPE* SetLineJoinAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasLineJoin attributeValue);
    HRESULT (STDMETHODCALLTYPE* GetLineJoinAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasLineJoin* attributeValue);
    HRESULT (STDMETHODCALLTYPE* SetVisibilityAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgVisibility attributeValue);
    HRESULT (STDMETHODCALLTYPE* GetVisibilityAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgVisibility* attributeValue);
    HRESULT (STDMETHODCALLTYPE* SetTransformAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 attributeValue);
    HRESULT (STDMETHODCALLTYPE* GetTransformAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2* attributeValue);
    HRESULT (STDMETHODCALLTYPE* SetUnitsAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgUnits attributeValue);
    HRESULT (STDMETHODCALLTYPE* GetUnitsAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgUnits* attributeValue);
    HRESULT (STDMETHODCALLTYPE* SetEdgeBehaviorAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasEdgeBehavior attributeValue);
    HRESULT (STDMETHODCALLTYPE* GetEdgeBehaviorAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasEdgeBehavior* attributeValue);
    HRESULT (STDMETHODCALLTYPE* SetRectangleAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        struct __x_ABI_CWindows_CFoundation_CRect attributeValue);
    HRESULT (STDMETHODCALLTYPE* GetRectangleAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        struct __x_ABI_CWindows_CFoundation_CRect* attributeValue);
    HRESULT (STDMETHODCALLTYPE* SetLengthAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        FLOAT value,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgLengthUnits units);
    HRESULT (STDMETHODCALLTYPE* GetLengthAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgLengthUnits* units,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* SetAspectRatioAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgAspectAlignment alignment,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgAspectScaling meetOrSlice);
    HRESULT (STDMETHODCALLTYPE* GetAspectRatioAttribute)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement* This,
        HSTRING attributeName,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgAspectScaling* meetOrSlice,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgAspectAlignment* alignment);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElementVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElementVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_AppendChild(This, child) \
    ((This)->lpVtbl->AppendChild(This, child))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_CreateAndAppendNamedChildElement(This, childName, childElement) \
    ((This)->lpVtbl->CreateAndAppendNamedChildElement(This, childName, childElement))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_CreateAndAppendTextChildElement(This, textContent, childElement) \
    ((This)->lpVtbl->CreateAndAppendTextChildElement(This, textContent, childElement))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_get_FirstChild(This, value) \
    ((This)->lpVtbl->get_FirstChild(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_get_LastChild(This, value) \
    ((This)->lpVtbl->get_LastChild(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_GetPreviousSibling(This, child, value) \
    ((This)->lpVtbl->GetPreviousSibling(This, child, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_GetNextSibling(This, child, value) \
    ((This)->lpVtbl->GetNextSibling(This, child, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_get_SpecifiedAttributes(This, valueElementsLength, valueElements) \
    ((This)->lpVtbl->get_SpecifiedAttributes(This, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_get_Tag(This, value) \
    ((This)->lpVtbl->get_Tag(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_get_HasChildren(This, value) \
    ((This)->lpVtbl->get_HasChildren(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_InsertChildBefore(This, child, referenceChild) \
    ((This)->lpVtbl->InsertChildBefore(This, child, referenceChild))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_IsAttributeSpecified(This, attributeName, value) \
    ((This)->lpVtbl->IsAttributeSpecified(This, attributeName, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_IsAttributeSpecifiedWithInherhited(This, attributeName, inherited, value) \
    ((This)->lpVtbl->IsAttributeSpecifiedWithInherhited(This, attributeName, inherited, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_RemoveAttribute(This, attributeName) \
    ((This)->lpVtbl->RemoveAttribute(This, attributeName))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_RemoveChild(This, child) \
    ((This)->lpVtbl->RemoveChild(This, child))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_ReplaceChild(This, newChild, oldChild) \
    ((This)->lpVtbl->ReplaceChild(This, newChild, oldChild))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_SetStringAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->SetStringAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_GetStringAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->GetStringAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_SetAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->SetAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_GetAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->GetAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_SetIdAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->SetIdAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_GetIdAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->GetIdAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_SetFloatAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->SetFloatAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_GetFloatAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->GetFloatAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_SetColorAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->SetColorAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_GetColorAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->GetColorAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_SetFilledRegionDeterminationAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->SetFilledRegionDeterminationAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_GetFilledRegionDeterminationAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->GetFilledRegionDeterminationAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_SetDisplayAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->SetDisplayAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_GetDisplayAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->GetDisplayAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_SetOverflowAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->SetOverflowAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_GetOverflowAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->GetOverflowAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_SetCapStyleAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->SetCapStyleAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_GetCapStyleAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->GetCapStyleAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_SetLineJoinAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->SetLineJoinAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_GetLineJoinAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->GetLineJoinAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_SetVisibilityAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->SetVisibilityAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_GetVisibilityAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->GetVisibilityAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_SetTransformAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->SetTransformAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_GetTransformAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->GetTransformAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_SetUnitsAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->SetUnitsAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_GetUnitsAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->GetUnitsAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_SetEdgeBehaviorAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->SetEdgeBehaviorAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_GetEdgeBehaviorAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->GetEdgeBehaviorAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_SetRectangleAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->SetRectangleAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_GetRectangleAttribute(This, attributeName, attributeValue) \
    ((This)->lpVtbl->GetRectangleAttribute(This, attributeName, attributeValue))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_SetLengthAttribute(This, attributeName, value, units) \
    ((This)->lpVtbl->SetLengthAttribute(This, attributeName, value, units))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_GetLengthAttribute(This, attributeName, units, value) \
    ((This)->lpVtbl->GetLengthAttribute(This, attributeName, units, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_SetAspectRatioAttribute(This, attributeName, alignment, meetOrSlice) \
    ((This)->lpVtbl->SetAspectRatioAttribute(This, attributeName, alignment, meetOrSlice))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_GetAspectRatioAttribute(This, attributeName, meetOrSlice, alignment) \
    ((This)->lpVtbl->GetAspectRatioAttribute(This, attributeName, meetOrSlice, alignment))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgNamedElement_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Svg.ICanvasSvgPaintAttribute
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Svg.CanvasSvgPaintAttribute
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *     Microsoft.Graphics.Canvas.Svg.ICanvasSvgAttribute
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPaintAttribute[] = L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgPaintAttribute";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttributeVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* put_PaintType)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgPaintType value);
    HRESULT (STDMETHODCALLTYPE* get_PaintType)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgPaintType* value);
    HRESULT (STDMETHODCALLTYPE* put_Color)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute* This,
        struct __x_ABI_CWindows_CUI_CColor value);
    HRESULT (STDMETHODCALLTYPE* get_Color)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute* This,
        struct __x_ABI_CWindows_CUI_CColor* value);
    HRESULT (STDMETHODCALLTYPE* put_Id)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* get_Id)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute* This,
        HSTRING* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttributeVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttributeVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute_put_PaintType(This, value) \
    ((This)->lpVtbl->put_PaintType(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute_get_PaintType(This, value) \
    ((This)->lpVtbl->get_PaintType(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute_put_Color(This, value) \
    ((This)->lpVtbl->put_Color(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute_get_Color(This, value) \
    ((This)->lpVtbl->get_Color(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute_put_Id(This, value) \
    ((This)->lpVtbl->put_Id(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute_get_Id(This, value) \
    ((This)->lpVtbl->get_Id(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPaintAttribute_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Svg.ICanvasSvgPathAttribute
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Svg.CanvasSvgPathAttribute
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *     Microsoft.Graphics.Canvas.Svg.ICanvasSvgAttribute
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPathAttribute[] = L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgPathAttribute";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttributeVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreatePathGeometry)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** outputGeometry);
    HRESULT (STDMETHODCALLTYPE* CreatePathGeometryWithFill)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFilledRegionDetermination fill,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** outputGeometry);
    HRESULT (STDMETHODCALLTYPE* get_Commands)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute* This,
        UINT32* valueElementsLength,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgPathCommand** valueElements);
    HRESULT (STDMETHODCALLTYPE* GetCommands)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute* This,
        INT32 startIndex,
        INT32 elementCount,
        UINT32* outputValueElementsLength,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgPathCommand** outputValueElements);
    HRESULT (STDMETHODCALLTYPE* get_SegmentData)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute* This,
        UINT32* valueElementsLength,
        FLOAT** valueElements);
    HRESULT (STDMETHODCALLTYPE* GetSegmentData)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute* This,
        INT32 startIndex,
        INT32 elementCount,
        UINT32* outputValueElementsLength,
        FLOAT** outputValueElements);
    HRESULT (STDMETHODCALLTYPE* RemoveCommandsAtEnd)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute* This,
        INT32 commandsCount);
    HRESULT (STDMETHODCALLTYPE* RemoveSegmentDataAtEnd)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute* This,
        INT32 commandsCount);
    HRESULT (STDMETHODCALLTYPE* SetCommands)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute* This,
        INT32 startIndex,
        UINT32 commandsLength,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgPathCommand* commands);
    HRESULT (STDMETHODCALLTYPE* SetSegmentData)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute* This,
        INT32 startIndex,
        UINT32 segmentDataLength,
        FLOAT* segmentData);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttributeVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttributeVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_CreatePathGeometry(This, outputGeometry) \
    ((This)->lpVtbl->CreatePathGeometry(This, outputGeometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_CreatePathGeometryWithFill(This, fill, outputGeometry) \
    ((This)->lpVtbl->CreatePathGeometryWithFill(This, fill, outputGeometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_get_Commands(This, valueElementsLength, valueElements) \
    ((This)->lpVtbl->get_Commands(This, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_GetCommands(This, startIndex, elementCount, outputValueElementsLength, outputValueElements) \
    ((This)->lpVtbl->GetCommands(This, startIndex, elementCount, outputValueElementsLength, outputValueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_get_SegmentData(This, valueElementsLength, valueElements) \
    ((This)->lpVtbl->get_SegmentData(This, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_GetSegmentData(This, startIndex, elementCount, outputValueElementsLength, outputValueElements) \
    ((This)->lpVtbl->GetSegmentData(This, startIndex, elementCount, outputValueElementsLength, outputValueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_RemoveCommandsAtEnd(This, commandsCount) \
    ((This)->lpVtbl->RemoveCommandsAtEnd(This, commandsCount))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_RemoveSegmentDataAtEnd(This, commandsCount) \
    ((This)->lpVtbl->RemoveSegmentDataAtEnd(This, commandsCount))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_SetCommands(This, startIndex, commandsLength, commands) \
    ((This)->lpVtbl->SetCommands(This, startIndex, commandsLength, commands))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_SetSegmentData(This, startIndex, segmentDataLength, segmentData) \
    ((This)->lpVtbl->SetSegmentData(This, startIndex, segmentDataLength, segmentData))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPathAttribute_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Svg.ICanvasSvgPointsAttribute
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Svg.CanvasSvgPointsAttribute
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *     Microsoft.Graphics.Canvas.Svg.ICanvasSvgAttribute
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Svg_ICanvasSvgPointsAttribute[] = L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgPointsAttribute";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttributeVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Points)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute* This,
        UINT32* valueElementsLength,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2** valueElements);
    HRESULT (STDMETHODCALLTYPE* GetPoints)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute* This,
        INT32 startIndex,
        INT32 elementCount,
        UINT32* outputValueElementsLength,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2** outputValueElements);
    HRESULT (STDMETHODCALLTYPE* RemovePointsAtEnd)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute* This,
        INT32 pointCount);
    HRESULT (STDMETHODCALLTYPE* SetPoints)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute* This,
        INT32 startIndex,
        UINT32 pointsLength,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2* points);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttributeVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttributeVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute_get_Points(This, valueElementsLength, valueElements) \
    ((This)->lpVtbl->get_Points(This, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute_GetPoints(This, startIndex, elementCount, outputValueElementsLength, outputValueElements) \
    ((This)->lpVtbl->GetPoints(This, startIndex, elementCount, outputValueElementsLength, outputValueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute_RemovePointsAtEnd(This, pointCount) \
    ((This)->lpVtbl->RemovePointsAtEnd(This, pointCount))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute_SetPoints(This, startIndex, pointsLength, points) \
    ((This)->lpVtbl->SetPoints(This, startIndex, pointsLength, points))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgPointsAttribute_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Svg.ICanvasSvgStrokeDashArrayAttribute
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Svg.CanvasSvgStrokeDashArrayAttribute
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *     Microsoft.Graphics.Canvas.Svg.ICanvasSvgAttribute
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Svg_ICanvasSvgStrokeDashArrayAttribute[] = L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgStrokeDashArrayAttribute";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttributeVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetDashes)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute* This,
        UINT32* valueElementsLength,
        FLOAT** valueElements);
    HRESULT (STDMETHODCALLTYPE* GetDashesWithUnits)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute* This,
        INT32 startIndex,
        INT32 elementCount,
        UINT32* outputUnitsElementsLength,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgLengthUnits** outputUnitsElements,
        UINT32* outputValueElementsLength,
        FLOAT** outputValueElements);
    HRESULT (STDMETHODCALLTYPE* RemoveDashesAtEnd)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute* This,
        INT32 dashCount);
    HRESULT (STDMETHODCALLTYPE* SetDashes)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute* This,
        INT32 startIndex,
        UINT32 dashesLength,
        FLOAT* dashes);
    HRESULT (STDMETHODCALLTYPE* SetDashesWithUnit)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute* This,
        INT32 startIndex,
        UINT32 dashesLength,
        FLOAT* dashes,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgLengthUnits units);
    HRESULT (STDMETHODCALLTYPE* SetDashesWithUnits)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute* This,
        INT32 startIndex,
        UINT32 dashValuesLength,
        FLOAT* dashValues,
        UINT32 unitValuesLength,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CCanvasSvgLengthUnits* unitValues);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttributeVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttributeVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute_GetDashes(This, valueElementsLength, valueElements) \
    ((This)->lpVtbl->GetDashes(This, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute_GetDashesWithUnits(This, startIndex, elementCount, outputUnitsElementsLength, outputUnitsElements, outputValueElementsLength, outputValueElements) \
    ((This)->lpVtbl->GetDashesWithUnits(This, startIndex, elementCount, outputUnitsElementsLength, outputUnitsElements, outputValueElementsLength, outputValueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute_RemoveDashesAtEnd(This, dashCount) \
    ((This)->lpVtbl->RemoveDashesAtEnd(This, dashCount))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute_SetDashes(This, startIndex, dashesLength, dashes) \
    ((This)->lpVtbl->SetDashes(This, startIndex, dashesLength, dashes))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute_SetDashesWithUnit(This, startIndex, dashesLength, dashes, units) \
    ((This)->lpVtbl->SetDashesWithUnit(This, startIndex, dashesLength, dashes, units))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute_SetDashesWithUnits(This, startIndex, dashValuesLength, dashValues, unitValuesLength, unitValues) \
    ((This)->lpVtbl->SetDashesWithUnits(This, startIndex, dashValuesLength, dashValues, unitValuesLength, unitValues))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgStrokeDashArrayAttribute_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Svg.ICanvasSvgTextElement
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Svg.CanvasSvgTextElement
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Svg_ICanvasSvgTextElement[] = L"Microsoft.Graphics.Canvas.Svg.ICanvasSvgTextElement";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElementVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* put_Text)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* get_Text)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement* This,
        HSTRING* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElementVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElementVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement_put_Text(This, value) \
    ((This)->lpVtbl->put_Text(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement_get_Text(This, value) \
    ((This)->lpVtbl->get_Text(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CSvg_CICanvasSvgTextElement_INTERFACE_DEFINED__) */

/*
 *
 * Class Microsoft.Graphics.Canvas.Svg.CanvasSvgDocument
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Svg.ICanvasSvgDocument ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgDocument_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgDocument_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Svg_CanvasSvgDocument[] = L"Microsoft.Graphics.Canvas.Svg.CanvasSvgDocument";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Svg.CanvasSvgNamedElement
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Svg.ICanvasSvgNamedElement ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Microsoft.Graphics.Canvas.Svg.ICanvasSvgElement
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgNamedElement_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgNamedElement_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Svg_CanvasSvgNamedElement[] = L"Microsoft.Graphics.Canvas.Svg.CanvasSvgNamedElement";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Svg.CanvasSvgPaintAttribute
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Svg.ICanvasSvgPaintAttribute ** Default Interface **
 *    Microsoft.Graphics.Canvas.Svg.ICanvasSvgAttribute
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgPaintAttribute_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgPaintAttribute_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Svg_CanvasSvgPaintAttribute[] = L"Microsoft.Graphics.Canvas.Svg.CanvasSvgPaintAttribute";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Svg.CanvasSvgPathAttribute
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Svg.ICanvasSvgPathAttribute ** Default Interface **
 *    Microsoft.Graphics.Canvas.Svg.ICanvasSvgAttribute
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgPathAttribute_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgPathAttribute_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Svg_CanvasSvgPathAttribute[] = L"Microsoft.Graphics.Canvas.Svg.CanvasSvgPathAttribute";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Svg.CanvasSvgPointsAttribute
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Svg.ICanvasSvgPointsAttribute ** Default Interface **
 *    Microsoft.Graphics.Canvas.Svg.ICanvasSvgAttribute
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgPointsAttribute_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgPointsAttribute_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Svg_CanvasSvgPointsAttribute[] = L"Microsoft.Graphics.Canvas.Svg.CanvasSvgPointsAttribute";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Svg.CanvasSvgStrokeDashArrayAttribute
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Svg.ICanvasSvgStrokeDashArrayAttribute ** Default Interface **
 *    Microsoft.Graphics.Canvas.Svg.ICanvasSvgAttribute
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgStrokeDashArrayAttribute_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgStrokeDashArrayAttribute_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Svg_CanvasSvgStrokeDashArrayAttribute[] = L"Microsoft.Graphics.Canvas.Svg.CanvasSvgStrokeDashArrayAttribute";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Svg.CanvasSvgTextElement
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Svg.ICanvasSvgTextElement ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgTextElement_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Svg_CanvasSvgTextElement_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Svg_CanvasSvgTextElement[] = L"Microsoft.Graphics.Canvas.Svg.CanvasSvgTextElement";
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
#endif // __microsoft2Egraphics2Ecanvas2Esvg_p_h__

#endif // __microsoft2Egraphics2Ecanvas2Esvg_h__
