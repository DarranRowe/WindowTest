
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
#ifndef __microsoft2Egraphics2Ecanvas2Ebrushes_h__
#define __microsoft2Egraphics2Ecanvas2Ebrushes_h__
#ifndef __microsoft2Egraphics2Ecanvas2Ebrushes_p_h__
#define __microsoft2Egraphics2Ecanvas2Ebrushes_p_h__


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
#include "Windows.Foundation.Numerics.h"
#include "Windows.UI.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
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

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    interface ICanvasImageBrush;
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrush

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    interface ICanvasImageBrushFactory;
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrushFactory

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    interface ICanvasLinearGradientBrush;
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    interface ICanvasLinearGradientBrushFactory;
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushFactory

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    interface ICanvasLinearGradientBrushStatics;
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrushStatics

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    interface ICanvasRadialGradientBrush;
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    interface ICanvasRadialGradientBrushFactory;
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushFactory

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    interface ICanvasRadialGradientBrushStatics;
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrushStatics

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    interface ICanvasSolidColorBrush;
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrush

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    interface ICanvasSolidColorBrushFactory;
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrushFactory

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    interface ICanvasSolidColorBrushStatics;
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrushStatics

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Foundation {
            typedef struct Rect Rect;
        } /* Foundation */
    } /* Windows */
} /* ABI */

#if WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIReference_1_Windows__CFoundation__CRect_USE
#define DEF___FIReference_1_Windows__CFoundation__CRect_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("80423f11-054f-5eac-afd3-63b6ce15e77b"))
IReference<struct ABI::Windows::Foundation::Rect> : IReference_impl<struct ABI::Windows::Foundation::Rect>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.IReference`1<Windows.Foundation.Rect>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Foundation::Rect> __FIReference_1_Windows__CFoundation__CRect_t;
#define __FIReference_1_Windows__CFoundation__CRect ABI::Windows::Foundation::__FIReference_1_Windows__CFoundation__CRect_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CFoundation__CRect_USE */

#endif // WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION >= 0x10000

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
                typedef enum CanvasBufferPrecision : int CanvasBufferPrecision;
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                typedef enum CanvasColorSpace : int CanvasColorSpace;
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
                typedef enum CanvasEdgeBehavior : int CanvasEdgeBehavior;
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
        namespace UI {
            typedef struct Color Color;
        } /* UI */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    typedef struct CanvasGradientStop CanvasGradientStop;
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    typedef struct CanvasGradientStopHdr CanvasGradientStopHdr;
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    class CanvasImageBrush;
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    class CanvasLinearGradientBrush;
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    class CanvasRadialGradientBrush;
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    class CanvasSolidColorBrush;
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Brushes.CanvasGradientStop
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    struct CanvasGradientStop
                    {
                        FLOAT Position;
                        ABI::Windows::UI::Color Color;
                    };
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Brushes.CanvasGradientStopHdr
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    struct CanvasGradientStopHdr
                    {
                        FLOAT Position;
                        ABI::Windows::Foundation::Numerics::Vector4 Color;
                    };
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Brushes.ICanvasBrush
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Brushes_ICanvasBrush[] = L"Microsoft.Graphics.Canvas.Brushes.ICanvasBrush";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    MIDL_INTERFACE("f5d58591-c803-41b4-878e-79d92ab13295")
                    ICanvasBrush : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_Opacity(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_Opacity(
                            FLOAT value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Transform(
                            ABI::Windows::Foundation::Numerics::Matrix3x2* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_Transform(
                            ABI::Windows::Foundation::Numerics::Matrix3x2 value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Device(
                            ABI::Microsoft::Graphics::Canvas::ICanvasDevice** value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasBrush = _uuidof(ICanvasBrush);
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Brushes.ICanvasImageBrush
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Brushes.CanvasImageBrush
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Microsoft.Graphics.Canvas.Brushes.ICanvasBrush
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Brushes_ICanvasImageBrush[] = L"Microsoft.Graphics.Canvas.Brushes.ICanvasImageBrush";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    MIDL_INTERFACE("5a21c4e7-d450-4942-8bbd-f017097ab763")
                    ICanvasImageBrush : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_Image(
                            ABI::Microsoft::Graphics::Canvas::ICanvasImage** value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_Image(
                            ABI::Microsoft::Graphics::Canvas::ICanvasImage* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_ExtendX(
                            ABI::Microsoft::Graphics::Canvas::CanvasEdgeBehavior* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_ExtendX(
                            ABI::Microsoft::Graphics::Canvas::CanvasEdgeBehavior value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_ExtendY(
                            ABI::Microsoft::Graphics::Canvas::CanvasEdgeBehavior* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_ExtendY(
                            ABI::Microsoft::Graphics::Canvas::CanvasEdgeBehavior value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_SourceRectangle(
                            __FIReference_1_Windows__CFoundation__CRect** value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_SourceRectangle(
                            __FIReference_1_Windows__CFoundation__CRect* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Interpolation(
                            ABI::Microsoft::Graphics::Canvas::CanvasImageInterpolation* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_Interpolation(
                            ABI::Microsoft::Graphics::Canvas::CanvasImageInterpolation value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasImageBrush = _uuidof(ICanvasImageBrush);
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Brushes.ICanvasImageBrushFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Brushes.CanvasImageBrush
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Brushes_ICanvasImageBrushFactory[] = L"Microsoft.Graphics.Canvas.Brushes.ICanvasImageBrushFactory";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    MIDL_INTERFACE("c40ccb59-1b87-4394-a6a6-ecd278e877d6")
                    ICanvasImageBrushFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrush** canvasImageBrush
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateWithImage(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            ABI::Microsoft::Graphics::Canvas::ICanvasImage* image,
                            ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrush** canvasImageBrush
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasImageBrushFactory = _uuidof(ICanvasImageBrushFactory);
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Brushes.ICanvasLinearGradientBrush
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Brushes.CanvasLinearGradientBrush
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Microsoft.Graphics.Canvas.Brushes.ICanvasBrush
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrush[] = L"Microsoft.Graphics.Canvas.Brushes.ICanvasLinearGradientBrush";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    MIDL_INTERFACE("a4ffbcb1-ec22-48c8-b1af-09bcfd34eebd")
                    ICanvasLinearGradientBrush : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_StartPoint(
                            ABI::Windows::Foundation::Numerics::Vector2* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_StartPoint(
                            ABI::Windows::Foundation::Numerics::Vector2 value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_EndPoint(
                            ABI::Windows::Foundation::Numerics::Vector2* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_EndPoint(
                            ABI::Windows::Foundation::Numerics::Vector2 value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Stops(
                            UINT32* valueElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_StopsHdr(
                            UINT32* valueElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_EdgeBehavior(
                            ABI::Microsoft::Graphics::Canvas::CanvasEdgeBehavior* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_PreInterpolationSpace(
                            ABI::Microsoft::Graphics::Canvas::CanvasColorSpace* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_PostInterpolationSpace(
                            ABI::Microsoft::Graphics::Canvas::CanvasColorSpace* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_BufferPrecision(
                            ABI::Microsoft::Graphics::Canvas::CanvasBufferPrecision* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_AlphaMode(
                            ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode* value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasLinearGradientBrush = _uuidof(ICanvasLinearGradientBrush);
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Brushes.ICanvasLinearGradientBrushFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Brushes.CanvasLinearGradientBrush
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrushFactory[] = L"Microsoft.Graphics.Canvas.Brushes.ICanvasLinearGradientBrushFactory";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    MIDL_INTERFACE("a2e8e34a-8592-4b9d-ba1c-00d3f3c34f54")
                    ICanvasLinearGradientBrushFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateSimple(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            ABI::Windows::UI::Color startColor,
                            ABI::Windows::UI::Color endColor,
                            ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush** canvasLinearGradientBrush
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateWithStops(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            UINT32 gradientStopsLength,
                            ABI::Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop* gradientStops,
                            ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush** canvasLinearGradientBrush
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateWithEdgeBehaviorAndAlphaMode(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            UINT32 gradientStopsLength,
                            ABI::Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop* gradientStops,
                            ABI::Microsoft::Graphics::Canvas::CanvasEdgeBehavior edgeBehavior,
                            ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode,
                            ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush** canvasLinearGradientBrush
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateWithEdgeBehaviorAndInterpolationOptions(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            UINT32 gradientStopsLength,
                            ABI::Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop* gradientStops,
                            ABI::Microsoft::Graphics::Canvas::CanvasEdgeBehavior edgeBehavior,
                            ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode,
                            ABI::Microsoft::Graphics::Canvas::CanvasColorSpace preInterpolationSpace,
                            ABI::Microsoft::Graphics::Canvas::CanvasColorSpace postInterpolationSpace,
                            ABI::Microsoft::Graphics::Canvas::CanvasBufferPrecision bufferPrecision,
                            ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush** canvasLinearGradientBrush
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasLinearGradientBrushFactory = _uuidof(ICanvasLinearGradientBrushFactory);
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Brushes.ICanvasLinearGradientBrushStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Brushes.CanvasLinearGradientBrush
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrushStatics[] = L"Microsoft.Graphics.Canvas.Brushes.ICanvasLinearGradientBrushStatics";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    MIDL_INTERFACE("e9de3392-8fbf-478c-8e6a-d0a0ea753b37")
                    ICanvasLinearGradientBrushStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateHdrSimple(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            ABI::Windows::Foundation::Numerics::Vector4 startColorHdr,
                            ABI::Windows::Foundation::Numerics::Vector4 endColorHdr,
                            ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush** canvasLinearGradientBrush
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateHdrWithStops(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            UINT32 gradientStopsHdrLength,
                            ABI::Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr* gradientStopsHdr,
                            ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush** canvasLinearGradientBrush
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateHdrWithEdgeBehaviorAndAlphaMode(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            UINT32 gradientStopsHdrLength,
                            ABI::Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr* gradientStopsHdr,
                            ABI::Microsoft::Graphics::Canvas::CanvasEdgeBehavior edgeBehavior,
                            ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode,
                            ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush** canvasLinearGradientBrush
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateHdrWithEdgeBehaviorAndInterpolationOptions(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            UINT32 gradientStopsHdrLength,
                            ABI::Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr* gradientStopsHdr,
                            ABI::Microsoft::Graphics::Canvas::CanvasEdgeBehavior edgeBehavior,
                            ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode,
                            ABI::Microsoft::Graphics::Canvas::CanvasColorSpace preInterpolationSpace,
                            ABI::Microsoft::Graphics::Canvas::CanvasColorSpace postInterpolationSpace,
                            ABI::Microsoft::Graphics::Canvas::CanvasBufferPrecision bufferPrecision,
                            ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush** canvasLinearGradientBrush
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateRainbow(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            FLOAT eldritchness,
                            ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush** canvasLinearGradientBrush
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasLinearGradientBrushStatics = _uuidof(ICanvasLinearGradientBrushStatics);
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Brushes.ICanvasRadialGradientBrush
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Brushes.CanvasRadialGradientBrush
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Microsoft.Graphics.Canvas.Brushes.ICanvasBrush
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrush[] = L"Microsoft.Graphics.Canvas.Brushes.ICanvasRadialGradientBrush";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    MIDL_INTERFACE("4d27d756-14a9-4eb7-973f-e6614d4f89e7")
                    ICanvasRadialGradientBrush : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_Center(
                            ABI::Windows::Foundation::Numerics::Vector2* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_Center(
                            ABI::Windows::Foundation::Numerics::Vector2 value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_OriginOffset(
                            ABI::Windows::Foundation::Numerics::Vector2* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_OriginOffset(
                            ABI::Windows::Foundation::Numerics::Vector2 value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_RadiusX(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_RadiusX(
                            FLOAT value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_RadiusY(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_RadiusY(
                            FLOAT value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Stops(
                            UINT32* valueElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_StopsHdr(
                            UINT32* valueElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_EdgeBehavior(
                            ABI::Microsoft::Graphics::Canvas::CanvasEdgeBehavior* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_PreInterpolationSpace(
                            ABI::Microsoft::Graphics::Canvas::CanvasColorSpace* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_PostInterpolationSpace(
                            ABI::Microsoft::Graphics::Canvas::CanvasColorSpace* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_BufferPrecision(
                            ABI::Microsoft::Graphics::Canvas::CanvasBufferPrecision* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_AlphaMode(
                            ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode* value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasRadialGradientBrush = _uuidof(ICanvasRadialGradientBrush);
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Brushes.ICanvasRadialGradientBrushFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Brushes.CanvasRadialGradientBrush
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrushFactory[] = L"Microsoft.Graphics.Canvas.Brushes.ICanvasRadialGradientBrushFactory";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    MIDL_INTERFACE("7933a51f-a910-4548-849f-42ddec466f41")
                    ICanvasRadialGradientBrushFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateSimple(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            ABI::Windows::UI::Color startColor,
                            ABI::Windows::UI::Color endColor,
                            ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush** canvasRadialGradientBrush
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateWithStops(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            UINT32 gradientStopsLength,
                            ABI::Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop* gradientStops,
                            ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush** canvasRadialGradientBrush
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateWithEdgeBehaviorAndAlphaMode(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            UINT32 gradientStopsLength,
                            ABI::Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop* gradientStops,
                            ABI::Microsoft::Graphics::Canvas::CanvasEdgeBehavior edgeBehavior,
                            ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode,
                            ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush** canvasRadialGradientBrush
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateWithEdgeBehaviorAndInterpolationOptions(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            UINT32 gradientStopsLength,
                            ABI::Microsoft::Graphics::Canvas::Brushes::CanvasGradientStop* gradientStops,
                            ABI::Microsoft::Graphics::Canvas::CanvasEdgeBehavior edgeBehavior,
                            ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode,
                            ABI::Microsoft::Graphics::Canvas::CanvasColorSpace preInterpolationSpace,
                            ABI::Microsoft::Graphics::Canvas::CanvasColorSpace postInterpolationSpace,
                            ABI::Microsoft::Graphics::Canvas::CanvasBufferPrecision bufferPrecision,
                            ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush** canvasRadialGradientBrush
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasRadialGradientBrushFactory = _uuidof(ICanvasRadialGradientBrushFactory);
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Brushes.ICanvasRadialGradientBrushStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Brushes.CanvasRadialGradientBrush
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrushStatics[] = L"Microsoft.Graphics.Canvas.Brushes.ICanvasRadialGradientBrushStatics";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    MIDL_INTERFACE("3b0d4dae-3e21-4818-99b4-779acaaf18be")
                    ICanvasRadialGradientBrushStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateHdrSimple(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            ABI::Windows::Foundation::Numerics::Vector4 startColorHdr,
                            ABI::Windows::Foundation::Numerics::Vector4 endColorHdr,
                            ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush** canvasRadialGradientBrush
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateHdrWithStops(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            UINT32 gradientStopsLength,
                            ABI::Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr* gradientStops,
                            ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush** canvasRadialGradientBrush
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateHdrWithEdgeBehaviorAndAlphaMode(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            UINT32 gradientStopsLength,
                            ABI::Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr* gradientStops,
                            ABI::Microsoft::Graphics::Canvas::CanvasEdgeBehavior edgeBehavior,
                            ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode,
                            ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush** canvasRadialGradientBrush
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateHdrWithEdgeBehaviorAndInterpolationOptions(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            UINT32 gradientStopsLength,
                            ABI::Microsoft::Graphics::Canvas::Brushes::CanvasGradientStopHdr* gradientStops,
                            ABI::Microsoft::Graphics::Canvas::CanvasEdgeBehavior edgeBehavior,
                            ABI::Microsoft::Graphics::Canvas::CanvasAlphaMode alphaMode,
                            ABI::Microsoft::Graphics::Canvas::CanvasColorSpace preInterpolationSpace,
                            ABI::Microsoft::Graphics::Canvas::CanvasColorSpace postInterpolationSpace,
                            ABI::Microsoft::Graphics::Canvas::CanvasBufferPrecision bufferPrecision,
                            ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush** canvasRadialGradientBrush
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateRainbow(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            FLOAT eldritchness,
                            ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush** canvasRadialGradientBrush
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasRadialGradientBrushStatics = _uuidof(ICanvasRadialGradientBrushStatics);
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Brushes.ICanvasSolidColorBrush
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Brushes.CanvasSolidColorBrush
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Microsoft.Graphics.Canvas.Brushes.ICanvasBrush
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Brushes_ICanvasSolidColorBrush[] = L"Microsoft.Graphics.Canvas.Brushes.ICanvasSolidColorBrush";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    MIDL_INTERFACE("8bc30f87-bad5-4871-88b8-9fe3c63d204a")
                    ICanvasSolidColorBrush : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_Color(
                            ABI::Windows::UI::Color* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_Color(
                            ABI::Windows::UI::Color value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_ColorHdr(
                            ABI::Windows::Foundation::Numerics::Vector4* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_ColorHdr(
                            ABI::Windows::Foundation::Numerics::Vector4 value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasSolidColorBrush = _uuidof(ICanvasSolidColorBrush);
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Brushes.ICanvasSolidColorBrushFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Brushes.CanvasSolidColorBrush
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Brushes_ICanvasSolidColorBrushFactory[] = L"Microsoft.Graphics.Canvas.Brushes.ICanvasSolidColorBrushFactory";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    MIDL_INTERFACE("8abf4780-4edd-4f2b-bf63-2c385115b201")
                    ICanvasSolidColorBrushFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            ABI::Windows::UI::Color color,
                            ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrush** canvasSolidColorBrush
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasSolidColorBrushFactory = _uuidof(ICanvasSolidColorBrushFactory);
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Brushes.ICanvasSolidColorBrushStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Brushes.CanvasSolidColorBrush
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Brushes_ICanvasSolidColorBrushStatics[] = L"Microsoft.Graphics.Canvas.Brushes.ICanvasSolidColorBrushStatics";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Brushes {
                    MIDL_INTERFACE("629b7244-5b9e-4ef8-8e09-264714201ee8")
                    ICanvasSolidColorBrushStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateHdr(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            ABI::Windows::Foundation::Numerics::Vector4 colorHdr,
                            ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrush** canvasSolidColorBrush
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasSolidColorBrushStatics = _uuidof(ICanvasSolidColorBrushStatics);
                } /* Brushes */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics_INTERFACE_DEFINED__) */

/*
 *
 * Class Microsoft.Graphics.Canvas.Brushes.CanvasImageBrush
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Brushes.ICanvasImageBrush ** Default Interface **
 *    Microsoft.Graphics.Canvas.Brushes.ICanvasBrush
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Brushes_CanvasImageBrush_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Brushes_CanvasImageBrush_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Brushes_CanvasImageBrush[] = L"Microsoft.Graphics.Canvas.Brushes.CanvasImageBrush";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Brushes.CanvasLinearGradientBrush
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Brushes.ICanvasLinearGradientBrush ** Default Interface **
 *    Microsoft.Graphics.Canvas.Brushes.ICanvasBrush
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Brushes_CanvasLinearGradientBrush_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Brushes_CanvasLinearGradientBrush_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Brushes_CanvasLinearGradientBrush[] = L"Microsoft.Graphics.Canvas.Brushes.CanvasLinearGradientBrush";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Brushes.CanvasRadialGradientBrush
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Brushes.ICanvasRadialGradientBrush ** Default Interface **
 *    Microsoft.Graphics.Canvas.Brushes.ICanvasBrush
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Brushes_CanvasRadialGradientBrush_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Brushes_CanvasRadialGradientBrush_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Brushes_CanvasRadialGradientBrush[] = L"Microsoft.Graphics.Canvas.Brushes.CanvasRadialGradientBrush";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Brushes.CanvasSolidColorBrush
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Brushes.ICanvasSolidColorBrush ** Default Interface **
 *    Microsoft.Graphics.Canvas.Brushes.ICanvasBrush
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Brushes_CanvasSolidColorBrush_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Brushes_CanvasSolidColorBrush_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Brushes_CanvasSolidColorBrush[] = L"Microsoft.Graphics.Canvas.Brushes.CanvasSolidColorBrush";
#endif

#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;

#if WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION >= 0x10000
#if !defined(____FIReference_1_Windows__CFoundation__CRect_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CFoundation__CRect_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CFoundation__CRect __FIReference_1_Windows__CFoundation__CRect;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CRect;

typedef struct __FIReference_1_Windows__CFoundation__CRectVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIReference_1_Windows__CFoundation__CRect* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIReference_1_Windows__CFoundation__CRect* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIReference_1_Windows__CFoundation__CRect* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIReference_1_Windows__CFoundation__CRect* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIReference_1_Windows__CFoundation__CRect* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIReference_1_Windows__CFoundation__CRect* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Value)(__FIReference_1_Windows__CFoundation__CRect* This,
        struct __x_ABI_CWindows_CFoundation_CRect* result);

    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CRectVtbl;

interface __FIReference_1_Windows__CFoundation__CRect
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CRectVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIReference_1_Windows__CFoundation__CRect_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIReference_1_Windows__CFoundation__CRect_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIReference_1_Windows__CFoundation__CRect_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIReference_1_Windows__CFoundation__CRect_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIReference_1_Windows__CFoundation__CRect_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIReference_1_Windows__CFoundation__CRect_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIReference_1_Windows__CFoundation__CRect_get_Value(This, result) \
    ((This)->lpVtbl->get_Value(This, result))

#endif /* COBJMACROS */

#endif // ____FIReference_1_Windows__CFoundation__CRect_INTERFACE_DEFINED__
#endif // WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION >= 0x10000

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBufferPrecision __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBufferPrecision;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasColorSpace __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasColorSpace;

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_FWD_DEFINED__

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasEdgeBehavior __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasEdgeBehavior;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasImageInterpolation __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasImageInterpolation;

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIPropertyValue_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIPropertyValue_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIPropertyValue __x_ABI_CWindows_CFoundation_CIPropertyValue;

#endif // ____x_ABI_CWindows_CFoundation_CIPropertyValue_FWD_DEFINED__

typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2;

typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 __x_ABI_CWindows_CFoundation_CNumerics_CVector2;

typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 __x_ABI_CWindows_CFoundation_CNumerics_CVector4;

typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;

typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CCanvasGradientStop __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CCanvasGradientStop;

typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CCanvasGradientStopHdr __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CCanvasGradientStopHdr;

/*
 *
 * Struct Microsoft.Graphics.Canvas.Brushes.CanvasGradientStop
 *
 */
struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CCanvasGradientStop
{
    FLOAT Position;
    struct __x_ABI_CWindows_CUI_CColor Color;
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Brushes.CanvasGradientStopHdr
 *
 */
struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CCanvasGradientStopHdr
{
    FLOAT Position;
    struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 Color;
};

/*
 *
 * Interface Microsoft.Graphics.Canvas.Brushes.ICanvasBrush
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Brushes_ICanvasBrush[] = L"Microsoft.Graphics.Canvas.Brushes.ICanvasBrush";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrushVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Opacity)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* put_Opacity)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* This,
        FLOAT value);
    HRESULT (STDMETHODCALLTYPE* get_Transform)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2* value);
    HRESULT (STDMETHODCALLTYPE* put_Transform)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 value);
    HRESULT (STDMETHODCALLTYPE* get_Device)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice** value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrushVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrushVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_get_Opacity(This, value) \
    ((This)->lpVtbl->get_Opacity(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_put_Opacity(This, value) \
    ((This)->lpVtbl->put_Opacity(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_get_Transform(This, value) \
    ((This)->lpVtbl->get_Transform(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_put_Transform(This, value) \
    ((This)->lpVtbl->put_Transform(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_get_Device(This, value) \
    ((This)->lpVtbl->get_Device(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Brushes.ICanvasImageBrush
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Brushes.CanvasImageBrush
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Microsoft.Graphics.Canvas.Brushes.ICanvasBrush
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Brushes_ICanvasImageBrush[] = L"Microsoft.Graphics.Canvas.Brushes.ICanvasImageBrush";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Image)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage** value);
    HRESULT (STDMETHODCALLTYPE* put_Image)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* value);
    HRESULT (STDMETHODCALLTYPE* get_ExtendX)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasEdgeBehavior* value);
    HRESULT (STDMETHODCALLTYPE* put_ExtendX)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasEdgeBehavior value);
    HRESULT (STDMETHODCALLTYPE* get_ExtendY)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasEdgeBehavior* value);
    HRESULT (STDMETHODCALLTYPE* put_ExtendY)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasEdgeBehavior value);
    HRESULT (STDMETHODCALLTYPE* get_SourceRectangle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush* This,
        __FIReference_1_Windows__CFoundation__CRect** value);
    HRESULT (STDMETHODCALLTYPE* put_SourceRectangle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush* This,
        __FIReference_1_Windows__CFoundation__CRect* value);
    HRESULT (STDMETHODCALLTYPE* get_Interpolation)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasImageInterpolation* value);
    HRESULT (STDMETHODCALLTYPE* put_Interpolation)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasImageInterpolation value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_get_Image(This, value) \
    ((This)->lpVtbl->get_Image(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_put_Image(This, value) \
    ((This)->lpVtbl->put_Image(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_get_ExtendX(This, value) \
    ((This)->lpVtbl->get_ExtendX(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_put_ExtendX(This, value) \
    ((This)->lpVtbl->put_ExtendX(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_get_ExtendY(This, value) \
    ((This)->lpVtbl->get_ExtendY(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_put_ExtendY(This, value) \
    ((This)->lpVtbl->put_ExtendY(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_get_SourceRectangle(This, value) \
    ((This)->lpVtbl->get_SourceRectangle(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_put_SourceRectangle(This, value) \
    ((This)->lpVtbl->put_SourceRectangle(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_get_Interpolation(This, value) \
    ((This)->lpVtbl->get_Interpolation(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_put_Interpolation(This, value) \
    ((This)->lpVtbl->put_Interpolation(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Brushes.ICanvasImageBrushFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Brushes.CanvasImageBrush
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Brushes_ICanvasImageBrushFactory[] = L"Microsoft.Graphics.Canvas.Brushes.ICanvasImageBrushFactory";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* Create)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush** canvasImageBrush);
    HRESULT (STDMETHODCALLTYPE* CreateWithImage)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasImage* image,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrush** canvasImageBrush);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactoryVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory_Create(This, resourceCreator, canvasImageBrush) \
    ((This)->lpVtbl->Create(This, resourceCreator, canvasImageBrush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory_CreateWithImage(This, resourceCreator, image, canvasImageBrush) \
    ((This)->lpVtbl->CreateWithImage(This, resourceCreator, image, canvasImageBrush))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasImageBrushFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Brushes.ICanvasLinearGradientBrush
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Brushes.CanvasLinearGradientBrush
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Microsoft.Graphics.Canvas.Brushes.ICanvasBrush
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrush[] = L"Microsoft.Graphics.Canvas.Brushes.ICanvasLinearGradientBrush";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_StartPoint)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2* value);
    HRESULT (STDMETHODCALLTYPE* put_StartPoint)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value);
    HRESULT (STDMETHODCALLTYPE* get_EndPoint)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2* value);
    HRESULT (STDMETHODCALLTYPE* put_EndPoint)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value);
    HRESULT (STDMETHODCALLTYPE* get_Stops)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush* This,
        UINT32* valueElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CCanvasGradientStop** valueElements);
    HRESULT (STDMETHODCALLTYPE* get_StopsHdr)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush* This,
        UINT32* valueElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CCanvasGradientStopHdr** valueElements);
    HRESULT (STDMETHODCALLTYPE* get_EdgeBehavior)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasEdgeBehavior* value);
    HRESULT (STDMETHODCALLTYPE* get_PreInterpolationSpace)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasColorSpace* value);
    HRESULT (STDMETHODCALLTYPE* get_PostInterpolationSpace)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasColorSpace* value);
    HRESULT (STDMETHODCALLTYPE* get_BufferPrecision)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBufferPrecision* value);
    HRESULT (STDMETHODCALLTYPE* get_AlphaMode)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_get_StartPoint(This, value) \
    ((This)->lpVtbl->get_StartPoint(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_put_StartPoint(This, value) \
    ((This)->lpVtbl->put_StartPoint(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_get_EndPoint(This, value) \
    ((This)->lpVtbl->get_EndPoint(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_put_EndPoint(This, value) \
    ((This)->lpVtbl->put_EndPoint(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_get_Stops(This, valueElementsLength, valueElements) \
    ((This)->lpVtbl->get_Stops(This, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_get_StopsHdr(This, valueElementsLength, valueElements) \
    ((This)->lpVtbl->get_StopsHdr(This, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_get_EdgeBehavior(This, value) \
    ((This)->lpVtbl->get_EdgeBehavior(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_get_PreInterpolationSpace(This, value) \
    ((This)->lpVtbl->get_PreInterpolationSpace(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_get_PostInterpolationSpace(This, value) \
    ((This)->lpVtbl->get_PostInterpolationSpace(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_get_BufferPrecision(This, value) \
    ((This)->lpVtbl->get_BufferPrecision(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_get_AlphaMode(This, value) \
    ((This)->lpVtbl->get_AlphaMode(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Brushes.ICanvasLinearGradientBrushFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Brushes.CanvasLinearGradientBrush
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrushFactory[] = L"Microsoft.Graphics.Canvas.Brushes.ICanvasLinearGradientBrushFactory";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateSimple)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        struct __x_ABI_CWindows_CUI_CColor startColor,
        struct __x_ABI_CWindows_CUI_CColor endColor,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush** canvasLinearGradientBrush);
    HRESULT (STDMETHODCALLTYPE* CreateWithStops)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        UINT32 gradientStopsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CCanvasGradientStop* gradientStops,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush** canvasLinearGradientBrush);
    HRESULT (STDMETHODCALLTYPE* CreateWithEdgeBehaviorAndAlphaMode)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        UINT32 gradientStopsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CCanvasGradientStop* gradientStops,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasEdgeBehavior edgeBehavior,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode alphaMode,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush** canvasLinearGradientBrush);
    HRESULT (STDMETHODCALLTYPE* CreateWithEdgeBehaviorAndInterpolationOptions)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        UINT32 gradientStopsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CCanvasGradientStop* gradientStops,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasEdgeBehavior edgeBehavior,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode alphaMode,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasColorSpace preInterpolationSpace,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasColorSpace postInterpolationSpace,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBufferPrecision bufferPrecision,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush** canvasLinearGradientBrush);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactoryVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory_CreateSimple(This, resourceCreator, startColor, endColor, canvasLinearGradientBrush) \
    ((This)->lpVtbl->CreateSimple(This, resourceCreator, startColor, endColor, canvasLinearGradientBrush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory_CreateWithStops(This, resourceCreator, gradientStopsLength, gradientStops, canvasLinearGradientBrush) \
    ((This)->lpVtbl->CreateWithStops(This, resourceCreator, gradientStopsLength, gradientStops, canvasLinearGradientBrush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory_CreateWithEdgeBehaviorAndAlphaMode(This, resourceCreator, gradientStopsLength, gradientStops, edgeBehavior, alphaMode, canvasLinearGradientBrush) \
    ((This)->lpVtbl->CreateWithEdgeBehaviorAndAlphaMode(This, resourceCreator, gradientStopsLength, gradientStops, edgeBehavior, alphaMode, canvasLinearGradientBrush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory_CreateWithEdgeBehaviorAndInterpolationOptions(This, resourceCreator, gradientStopsLength, gradientStops, edgeBehavior, alphaMode, preInterpolationSpace, postInterpolationSpace, bufferPrecision, canvasLinearGradientBrush) \
    ((This)->lpVtbl->CreateWithEdgeBehaviorAndInterpolationOptions(This, resourceCreator, gradientStopsLength, gradientStops, edgeBehavior, alphaMode, preInterpolationSpace, postInterpolationSpace, bufferPrecision, canvasLinearGradientBrush))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Brushes.ICanvasLinearGradientBrushStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Brushes.CanvasLinearGradientBrush
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Brushes_ICanvasLinearGradientBrushStatics[] = L"Microsoft.Graphics.Canvas.Brushes.ICanvasLinearGradientBrushStatics";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateHdrSimple)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 startColorHdr,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 endColorHdr,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush** canvasLinearGradientBrush);
    HRESULT (STDMETHODCALLTYPE* CreateHdrWithStops)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        UINT32 gradientStopsHdrLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CCanvasGradientStopHdr* gradientStopsHdr,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush** canvasLinearGradientBrush);
    HRESULT (STDMETHODCALLTYPE* CreateHdrWithEdgeBehaviorAndAlphaMode)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        UINT32 gradientStopsHdrLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CCanvasGradientStopHdr* gradientStopsHdr,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasEdgeBehavior edgeBehavior,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode alphaMode,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush** canvasLinearGradientBrush);
    HRESULT (STDMETHODCALLTYPE* CreateHdrWithEdgeBehaviorAndInterpolationOptions)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        UINT32 gradientStopsHdrLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CCanvasGradientStopHdr* gradientStopsHdr,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasEdgeBehavior edgeBehavior,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode alphaMode,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasColorSpace preInterpolationSpace,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasColorSpace postInterpolationSpace,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBufferPrecision bufferPrecision,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush** canvasLinearGradientBrush);
    HRESULT (STDMETHODCALLTYPE* CreateRainbow)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        FLOAT eldritchness,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrush** canvasLinearGradientBrush);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStaticsVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics_CreateHdrSimple(This, resourceCreator, startColorHdr, endColorHdr, canvasLinearGradientBrush) \
    ((This)->lpVtbl->CreateHdrSimple(This, resourceCreator, startColorHdr, endColorHdr, canvasLinearGradientBrush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics_CreateHdrWithStops(This, resourceCreator, gradientStopsHdrLength, gradientStopsHdr, canvasLinearGradientBrush) \
    ((This)->lpVtbl->CreateHdrWithStops(This, resourceCreator, gradientStopsHdrLength, gradientStopsHdr, canvasLinearGradientBrush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics_CreateHdrWithEdgeBehaviorAndAlphaMode(This, resourceCreator, gradientStopsHdrLength, gradientStopsHdr, edgeBehavior, alphaMode, canvasLinearGradientBrush) \
    ((This)->lpVtbl->CreateHdrWithEdgeBehaviorAndAlphaMode(This, resourceCreator, gradientStopsHdrLength, gradientStopsHdr, edgeBehavior, alphaMode, canvasLinearGradientBrush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics_CreateHdrWithEdgeBehaviorAndInterpolationOptions(This, resourceCreator, gradientStopsHdrLength, gradientStopsHdr, edgeBehavior, alphaMode, preInterpolationSpace, postInterpolationSpace, bufferPrecision, canvasLinearGradientBrush) \
    ((This)->lpVtbl->CreateHdrWithEdgeBehaviorAndInterpolationOptions(This, resourceCreator, gradientStopsHdrLength, gradientStopsHdr, edgeBehavior, alphaMode, preInterpolationSpace, postInterpolationSpace, bufferPrecision, canvasLinearGradientBrush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics_CreateRainbow(This, resourceCreator, eldritchness, canvasLinearGradientBrush) \
    ((This)->lpVtbl->CreateRainbow(This, resourceCreator, eldritchness, canvasLinearGradientBrush))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasLinearGradientBrushStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Brushes.ICanvasRadialGradientBrush
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Brushes.CanvasRadialGradientBrush
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Microsoft.Graphics.Canvas.Brushes.ICanvasBrush
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrush[] = L"Microsoft.Graphics.Canvas.Brushes.ICanvasRadialGradientBrush";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Center)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2* value);
    HRESULT (STDMETHODCALLTYPE* put_Center)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value);
    HRESULT (STDMETHODCALLTYPE* get_OriginOffset)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2* value);
    HRESULT (STDMETHODCALLTYPE* put_OriginOffset)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value);
    HRESULT (STDMETHODCALLTYPE* get_RadiusX)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* put_RadiusX)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush* This,
        FLOAT value);
    HRESULT (STDMETHODCALLTYPE* get_RadiusY)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* put_RadiusY)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush* This,
        FLOAT value);
    HRESULT (STDMETHODCALLTYPE* get_Stops)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush* This,
        UINT32* valueElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CCanvasGradientStop** valueElements);
    HRESULT (STDMETHODCALLTYPE* get_StopsHdr)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush* This,
        UINT32* valueElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CCanvasGradientStopHdr** valueElements);
    HRESULT (STDMETHODCALLTYPE* get_EdgeBehavior)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasEdgeBehavior* value);
    HRESULT (STDMETHODCALLTYPE* get_PreInterpolationSpace)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasColorSpace* value);
    HRESULT (STDMETHODCALLTYPE* get_PostInterpolationSpace)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasColorSpace* value);
    HRESULT (STDMETHODCALLTYPE* get_BufferPrecision)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBufferPrecision* value);
    HRESULT (STDMETHODCALLTYPE* get_AlphaMode)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_get_Center(This, value) \
    ((This)->lpVtbl->get_Center(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_put_Center(This, value) \
    ((This)->lpVtbl->put_Center(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_get_OriginOffset(This, value) \
    ((This)->lpVtbl->get_OriginOffset(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_put_OriginOffset(This, value) \
    ((This)->lpVtbl->put_OriginOffset(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_get_RadiusX(This, value) \
    ((This)->lpVtbl->get_RadiusX(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_put_RadiusX(This, value) \
    ((This)->lpVtbl->put_RadiusX(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_get_RadiusY(This, value) \
    ((This)->lpVtbl->get_RadiusY(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_put_RadiusY(This, value) \
    ((This)->lpVtbl->put_RadiusY(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_get_Stops(This, valueElementsLength, valueElements) \
    ((This)->lpVtbl->get_Stops(This, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_get_StopsHdr(This, valueElementsLength, valueElements) \
    ((This)->lpVtbl->get_StopsHdr(This, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_get_EdgeBehavior(This, value) \
    ((This)->lpVtbl->get_EdgeBehavior(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_get_PreInterpolationSpace(This, value) \
    ((This)->lpVtbl->get_PreInterpolationSpace(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_get_PostInterpolationSpace(This, value) \
    ((This)->lpVtbl->get_PostInterpolationSpace(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_get_BufferPrecision(This, value) \
    ((This)->lpVtbl->get_BufferPrecision(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_get_AlphaMode(This, value) \
    ((This)->lpVtbl->get_AlphaMode(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Brushes.ICanvasRadialGradientBrushFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Brushes.CanvasRadialGradientBrush
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrushFactory[] = L"Microsoft.Graphics.Canvas.Brushes.ICanvasRadialGradientBrushFactory";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateSimple)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        struct __x_ABI_CWindows_CUI_CColor startColor,
        struct __x_ABI_CWindows_CUI_CColor endColor,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush** canvasRadialGradientBrush);
    HRESULT (STDMETHODCALLTYPE* CreateWithStops)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        UINT32 gradientStopsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CCanvasGradientStop* gradientStops,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush** canvasRadialGradientBrush);
    HRESULT (STDMETHODCALLTYPE* CreateWithEdgeBehaviorAndAlphaMode)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        UINT32 gradientStopsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CCanvasGradientStop* gradientStops,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasEdgeBehavior edgeBehavior,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode alphaMode,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush** canvasRadialGradientBrush);
    HRESULT (STDMETHODCALLTYPE* CreateWithEdgeBehaviorAndInterpolationOptions)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        UINT32 gradientStopsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CCanvasGradientStop* gradientStops,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasEdgeBehavior edgeBehavior,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode alphaMode,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasColorSpace preInterpolationSpace,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasColorSpace postInterpolationSpace,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBufferPrecision bufferPrecision,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush** canvasRadialGradientBrush);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactoryVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory_CreateSimple(This, resourceCreator, startColor, endColor, canvasRadialGradientBrush) \
    ((This)->lpVtbl->CreateSimple(This, resourceCreator, startColor, endColor, canvasRadialGradientBrush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory_CreateWithStops(This, resourceCreator, gradientStopsLength, gradientStops, canvasRadialGradientBrush) \
    ((This)->lpVtbl->CreateWithStops(This, resourceCreator, gradientStopsLength, gradientStops, canvasRadialGradientBrush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory_CreateWithEdgeBehaviorAndAlphaMode(This, resourceCreator, gradientStopsLength, gradientStops, edgeBehavior, alphaMode, canvasRadialGradientBrush) \
    ((This)->lpVtbl->CreateWithEdgeBehaviorAndAlphaMode(This, resourceCreator, gradientStopsLength, gradientStops, edgeBehavior, alphaMode, canvasRadialGradientBrush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory_CreateWithEdgeBehaviorAndInterpolationOptions(This, resourceCreator, gradientStopsLength, gradientStops, edgeBehavior, alphaMode, preInterpolationSpace, postInterpolationSpace, bufferPrecision, canvasRadialGradientBrush) \
    ((This)->lpVtbl->CreateWithEdgeBehaviorAndInterpolationOptions(This, resourceCreator, gradientStopsLength, gradientStops, edgeBehavior, alphaMode, preInterpolationSpace, postInterpolationSpace, bufferPrecision, canvasRadialGradientBrush))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Brushes.ICanvasRadialGradientBrushStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Brushes.CanvasRadialGradientBrush
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Brushes_ICanvasRadialGradientBrushStatics[] = L"Microsoft.Graphics.Canvas.Brushes.ICanvasRadialGradientBrushStatics";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateHdrSimple)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 startColorHdr,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 endColorHdr,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush** canvasRadialGradientBrush);
    HRESULT (STDMETHODCALLTYPE* CreateHdrWithStops)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        UINT32 gradientStopsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CCanvasGradientStopHdr* gradientStops,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush** canvasRadialGradientBrush);
    HRESULT (STDMETHODCALLTYPE* CreateHdrWithEdgeBehaviorAndAlphaMode)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        UINT32 gradientStopsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CCanvasGradientStopHdr* gradientStops,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasEdgeBehavior edgeBehavior,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode alphaMode,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush** canvasRadialGradientBrush);
    HRESULT (STDMETHODCALLTYPE* CreateHdrWithEdgeBehaviorAndInterpolationOptions)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        UINT32 gradientStopsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CCanvasGradientStopHdr* gradientStops,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasEdgeBehavior edgeBehavior,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAlphaMode alphaMode,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasColorSpace preInterpolationSpace,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasColorSpace postInterpolationSpace,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasBufferPrecision bufferPrecision,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush** canvasRadialGradientBrush);
    HRESULT (STDMETHODCALLTYPE* CreateRainbow)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        FLOAT eldritchness,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrush** canvasRadialGradientBrush);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStaticsVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics_CreateHdrSimple(This, resourceCreator, startColorHdr, endColorHdr, canvasRadialGradientBrush) \
    ((This)->lpVtbl->CreateHdrSimple(This, resourceCreator, startColorHdr, endColorHdr, canvasRadialGradientBrush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics_CreateHdrWithStops(This, resourceCreator, gradientStopsLength, gradientStops, canvasRadialGradientBrush) \
    ((This)->lpVtbl->CreateHdrWithStops(This, resourceCreator, gradientStopsLength, gradientStops, canvasRadialGradientBrush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics_CreateHdrWithEdgeBehaviorAndAlphaMode(This, resourceCreator, gradientStopsLength, gradientStops, edgeBehavior, alphaMode, canvasRadialGradientBrush) \
    ((This)->lpVtbl->CreateHdrWithEdgeBehaviorAndAlphaMode(This, resourceCreator, gradientStopsLength, gradientStops, edgeBehavior, alphaMode, canvasRadialGradientBrush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics_CreateHdrWithEdgeBehaviorAndInterpolationOptions(This, resourceCreator, gradientStopsLength, gradientStops, edgeBehavior, alphaMode, preInterpolationSpace, postInterpolationSpace, bufferPrecision, canvasRadialGradientBrush) \
    ((This)->lpVtbl->CreateHdrWithEdgeBehaviorAndInterpolationOptions(This, resourceCreator, gradientStopsLength, gradientStops, edgeBehavior, alphaMode, preInterpolationSpace, postInterpolationSpace, bufferPrecision, canvasRadialGradientBrush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics_CreateRainbow(This, resourceCreator, eldritchness, canvasRadialGradientBrush) \
    ((This)->lpVtbl->CreateRainbow(This, resourceCreator, eldritchness, canvasRadialGradientBrush))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasRadialGradientBrushStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Brushes.ICanvasSolidColorBrush
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Brushes.CanvasSolidColorBrush
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Microsoft.Graphics.Canvas.Brushes.ICanvasBrush
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Brushes_ICanvasSolidColorBrush[] = L"Microsoft.Graphics.Canvas.Brushes.ICanvasSolidColorBrush";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Color)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush* This,
        struct __x_ABI_CWindows_CUI_CColor* value);
    HRESULT (STDMETHODCALLTYPE* put_Color)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush* This,
        struct __x_ABI_CWindows_CUI_CColor value);
    HRESULT (STDMETHODCALLTYPE* get_ColorHdr)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4* value);
    HRESULT (STDMETHODCALLTYPE* put_ColorHdr)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush_get_Color(This, value) \
    ((This)->lpVtbl->get_Color(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush_put_Color(This, value) \
    ((This)->lpVtbl->put_Color(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush_get_ColorHdr(This, value) \
    ((This)->lpVtbl->get_ColorHdr(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush_put_ColorHdr(This, value) \
    ((This)->lpVtbl->put_ColorHdr(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Brushes.ICanvasSolidColorBrushFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Brushes.CanvasSolidColorBrush
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Brushes_ICanvasSolidColorBrushFactory[] = L"Microsoft.Graphics.Canvas.Brushes.ICanvasSolidColorBrushFactory";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* Create)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        struct __x_ABI_CWindows_CUI_CColor color,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush** canvasSolidColorBrush);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactoryVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory_Create(This, resourceCreator, color, canvasSolidColorBrush) \
    ((This)->lpVtbl->Create(This, resourceCreator, color, canvasSolidColorBrush))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Brushes.ICanvasSolidColorBrushStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Brushes.CanvasSolidColorBrush
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Brushes_ICanvasSolidColorBrushStatics[] = L"Microsoft.Graphics.Canvas.Brushes.ICanvasSolidColorBrushStatics";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateHdr)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 colorHdr,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrush** canvasSolidColorBrush);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStaticsVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics_CreateHdr(This, resourceCreator, colorHdr, canvasSolidColorBrush) \
    ((This)->lpVtbl->CreateHdr(This, resourceCreator, colorHdr, canvasSolidColorBrush))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasSolidColorBrushStatics_INTERFACE_DEFINED__) */

/*
 *
 * Class Microsoft.Graphics.Canvas.Brushes.CanvasImageBrush
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Brushes.ICanvasImageBrush ** Default Interface **
 *    Microsoft.Graphics.Canvas.Brushes.ICanvasBrush
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Brushes_CanvasImageBrush_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Brushes_CanvasImageBrush_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Brushes_CanvasImageBrush[] = L"Microsoft.Graphics.Canvas.Brushes.CanvasImageBrush";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Brushes.CanvasLinearGradientBrush
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Brushes.ICanvasLinearGradientBrush ** Default Interface **
 *    Microsoft.Graphics.Canvas.Brushes.ICanvasBrush
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Brushes_CanvasLinearGradientBrush_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Brushes_CanvasLinearGradientBrush_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Brushes_CanvasLinearGradientBrush[] = L"Microsoft.Graphics.Canvas.Brushes.CanvasLinearGradientBrush";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Brushes.CanvasRadialGradientBrush
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Brushes.ICanvasRadialGradientBrush ** Default Interface **
 *    Microsoft.Graphics.Canvas.Brushes.ICanvasBrush
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Brushes_CanvasRadialGradientBrush_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Brushes_CanvasRadialGradientBrush_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Brushes_CanvasRadialGradientBrush[] = L"Microsoft.Graphics.Canvas.Brushes.CanvasRadialGradientBrush";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Brushes.CanvasSolidColorBrush
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Brushes.ICanvasSolidColorBrush ** Default Interface **
 *    Microsoft.Graphics.Canvas.Brushes.ICanvasBrush
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Brushes_CanvasSolidColorBrush_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Brushes_CanvasSolidColorBrush_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Brushes_CanvasSolidColorBrush[] = L"Microsoft.Graphics.Canvas.Brushes.CanvasSolidColorBrush";
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
#endif // __microsoft2Egraphics2Ecanvas2Ebrushes_p_h__

#endif // __microsoft2Egraphics2Ecanvas2Ebrushes_h__
