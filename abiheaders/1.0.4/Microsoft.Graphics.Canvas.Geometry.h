
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
#ifndef __microsoft2Egraphics2Ecanvas2Egeometry_h__
#define __microsoft2Egraphics2Ecanvas2Egeometry_h__
#ifndef __microsoft2Egraphics2Ecanvas2Egeometry_p_h__
#define __microsoft2Egraphics2Ecanvas2Egeometry_p_h__


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
#include "Microsoft.Graphics.Canvas.Text.h"
#include "Windows.Foundation.Numerics.h"
#include "Windows.Graphics.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
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

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    interface ICanvasCachedGeometryStatics;
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometryStatics

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics_FWD_DEFINED__

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

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    interface ICanvasGeometryStatics;
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometryStatics

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_FWD_DEFINED__

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

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    interface ICanvasGradientMeshFactory;
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMeshFactory

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    interface ICanvasGradientMeshStatics;
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMeshStatics

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    interface ICanvasPathBuilder;
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    interface ICanvasPathBuilderFactory;
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilderFactory

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    interface ICanvasPathReceiver;
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasPathReceiver

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver_FWD_DEFINED__

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

// Parameterized interface forward declarations (C++)

// Collection interface definitions
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
                    typedef enum CanvasGlyphOrientation : int CanvasGlyphOrientation;
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

#ifndef ____x_ABI_CWindows_CGraphics_CIGeometrySource2D_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CIGeometrySource2D_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            interface IGeometrySource2D;
        } /* Graphics */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CGraphics_CIGeometrySource2D ABI::Windows::Graphics::IGeometrySource2D

#endif // ____x_ABI_CWindows_CGraphics_CIGeometrySource2D_FWD_DEFINED__

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    typedef enum CanvasArcSize : int CanvasArcSize;
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
                    typedef enum CanvasDashStyle : int CanvasDashStyle;
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
                    typedef enum CanvasFigureFill : int CanvasFigureFill;
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
                    typedef enum CanvasFigureLoop : int CanvasFigureLoop;
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
                    typedef enum CanvasFigureSegmentOptions : unsigned int CanvasFigureSegmentOptions;
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
                    typedef enum CanvasGeometryCombine : int CanvasGeometryCombine;
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
                    typedef enum CanvasGeometryRelation : int CanvasGeometryRelation;
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
                    typedef enum CanvasGeometrySimplification : int CanvasGeometrySimplification;
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
                    typedef enum CanvasGradientMeshPatchEdge : int CanvasGradientMeshPatchEdge;
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
                    typedef enum CanvasLineJoin : int CanvasLineJoin;
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
                    typedef enum CanvasStrokeTransformBehavior : int CanvasStrokeTransformBehavior;
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
                    typedef enum CanvasSweepDirection : int CanvasSweepDirection;
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
                    typedef struct CanvasGradientMeshPatch CanvasGradientMeshPatch;
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
                    typedef struct CanvasTriangleVertices CanvasTriangleVertices;
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
                    class CanvasCachedGeometry;
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

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    class CanvasPathBuilder;
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
                    class CanvasStrokeStyle;
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasArcSize
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    enum CanvasArcSize : int
                    {
                        CanvasArcSize_Small = 0,
                        CanvasArcSize_Large = 1,
                    };
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasCapStyle
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    enum CanvasCapStyle : int
                    {
                        CanvasCapStyle_Flat = 0,
                        CanvasCapStyle_Square = 1,
                        CanvasCapStyle_Round = 2,
                        CanvasCapStyle_Triangle = 3,
                    };
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasDashStyle
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    enum CanvasDashStyle : int
                    {
                        CanvasDashStyle_Solid = 0,
                        CanvasDashStyle_Dash = 1,
                        CanvasDashStyle_Dot = 2,
                        CanvasDashStyle_DashDot = 3,
                        CanvasDashStyle_DashDotDot = 4,
                    };
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasFigureFill
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    enum CanvasFigureFill : int
                    {
                        CanvasFigureFill_Default = 0,
                        CanvasFigureFill_DoesNotAffectFills = 1,
                    };
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasFigureLoop
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    enum CanvasFigureLoop : int
                    {
                        CanvasFigureLoop_Open = 0,
                        CanvasFigureLoop_Closed = 1,
                    };
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasFigureSegmentOptions
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    enum CanvasFigureSegmentOptions : unsigned int
                    {
                        CanvasFigureSegmentOptions_None = 0,
                        CanvasFigureSegmentOptions_ForceUnstroked = 0x1,
                        CanvasFigureSegmentOptions_ForceRoundLineJoin = 0x2,
                    };

                    DEFINE_ENUM_FLAG_OPERATORS(CanvasFigureSegmentOptions)
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasFilledRegionDetermination
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    enum CanvasFilledRegionDetermination : int
                    {
                        CanvasFilledRegionDetermination_Alternate = 0,
                        CanvasFilledRegionDetermination_Winding = 1,
                    };
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasGeometryCombine
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    enum CanvasGeometryCombine : int
                    {
                        CanvasGeometryCombine_Union = 0,
                        CanvasGeometryCombine_Intersect = 1,
                        CanvasGeometryCombine_Xor = 2,
                        CanvasGeometryCombine_Exclude = 3,
                    };
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasGeometryRelation
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    enum CanvasGeometryRelation : int
                    {
                        CanvasGeometryRelation_Disjoint = 0,
                        CanvasGeometryRelation_Contained = 1,
                        CanvasGeometryRelation_Contains = 2,
                        CanvasGeometryRelation_Overlap = 3,
                    };
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasGeometrySimplification
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    enum CanvasGeometrySimplification : int
                    {
                        CanvasGeometrySimplification_CubicsAndLines = 0,
                        CanvasGeometrySimplification_Lines = 1,
                    };
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasGradientMeshPatchEdge
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    enum CanvasGradientMeshPatchEdge : int
                    {
                        CanvasGradientMeshPatchEdge_Aliased = 0,
                        CanvasGradientMeshPatchEdge_Antialiased = 1,
                        CanvasGradientMeshPatchEdge_AliasedAndInflated = 2,
                    };
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasLineJoin
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    enum CanvasLineJoin : int
                    {
                        CanvasLineJoin_Miter = 0,
                        CanvasLineJoin_Bevel = 1,
                        CanvasLineJoin_Round = 2,
                        CanvasLineJoin_MiterOrBevel = 3,
                    };
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasStrokeTransformBehavior
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    enum CanvasStrokeTransformBehavior : int
                    {
                        CanvasStrokeTransformBehavior_Normal = 0,
                        CanvasStrokeTransformBehavior_Fixed = 1,
                        CanvasStrokeTransformBehavior_Hairline = 2,
                    };
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasSweepDirection
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    enum CanvasSweepDirection : int
                    {
                        CanvasSweepDirection_CounterClockwise = 0,
                        CanvasSweepDirection_Clockwise = 1,
                    };
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasGradientMeshPatch
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    struct CanvasGradientMeshPatch
                    {
                        ABI::Windows::Foundation::Numerics::Vector2 Point00;
                        ABI::Windows::Foundation::Numerics::Vector2 Point01;
                        ABI::Windows::Foundation::Numerics::Vector2 Point02;
                        ABI::Windows::Foundation::Numerics::Vector2 Point03;
                        ABI::Windows::Foundation::Numerics::Vector2 Point10;
                        ABI::Windows::Foundation::Numerics::Vector2 Point11;
                        ABI::Windows::Foundation::Numerics::Vector2 Point12;
                        ABI::Windows::Foundation::Numerics::Vector2 Point13;
                        ABI::Windows::Foundation::Numerics::Vector2 Point20;
                        ABI::Windows::Foundation::Numerics::Vector2 Point21;
                        ABI::Windows::Foundation::Numerics::Vector2 Point22;
                        ABI::Windows::Foundation::Numerics::Vector2 Point23;
                        ABI::Windows::Foundation::Numerics::Vector2 Point30;
                        ABI::Windows::Foundation::Numerics::Vector2 Point31;
                        ABI::Windows::Foundation::Numerics::Vector2 Point32;
                        ABI::Windows::Foundation::Numerics::Vector2 Point33;
                        ABI::Windows::Foundation::Numerics::Vector4 Color00;
                        ABI::Windows::Foundation::Numerics::Vector4 Color03;
                        ABI::Windows::Foundation::Numerics::Vector4 Color30;
                        ABI::Windows::Foundation::Numerics::Vector4 Color33;
                        ABI::Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge Edge00To03;
                        ABI::Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge Edge03To33;
                        ABI::Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge Edge33To30;
                        ABI::Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge Edge30To00;
                    };
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasTriangleVertices
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    struct CanvasTriangleVertices
                    {
                        ABI::Windows::Foundation::Numerics::Vector2 Vertex1;
                        ABI::Windows::Foundation::Numerics::Vector2 Vertex2;
                        ABI::Windows::Foundation::Numerics::Vector2 Vertex3;
                    };
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Geometry.ICanvasCachedGeometry
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Geometry.CanvasCachedGeometry
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Geometry_ICanvasCachedGeometry[] = L"Microsoft.Graphics.Canvas.Geometry.ICanvasCachedGeometry";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    MIDL_INTERFACE("ba6cb114-e1a1-448d-ab7c-8d2b92674119")
                    ICanvasCachedGeometry : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_Device(
                            ABI::Microsoft::Graphics::Canvas::ICanvasDevice** value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasCachedGeometry = _uuidof(ICanvasCachedGeometry);
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Geometry.ICanvasCachedGeometryStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Geometry.CanvasCachedGeometry
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Geometry_ICanvasCachedGeometryStatics[] = L"Microsoft.Graphics.Canvas.Geometry.ICanvasCachedGeometryStatics";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    MIDL_INTERFACE("80ba1060-a9d7-41ba-9372-ec3fc1744e5d")
                    ICanvasCachedGeometryStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateFill(
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometry** cachedGeometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateFillWithFlatteningTolerance(
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                            FLOAT flatteningTolerance,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometry** cachedGeometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateStroke(
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                            FLOAT strokeWidth,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometry** cachedGeometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateStrokeWithStrokeStyle(
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                            FLOAT strokeWidth,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometry** cachedGeometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateStrokeWithStrokeStyleAndFlatteningTolerance(
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry,
                            FLOAT strokeWidth,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle,
                            FLOAT flatteningTolerance,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasCachedGeometry** cachedGeometry
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasCachedGeometryStatics = _uuidof(ICanvasCachedGeometryStatics);
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Geometry.ICanvasGeometry
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Geometry.CanvasGeometry
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry[] = L"Microsoft.Graphics.Canvas.Geometry.ICanvasGeometry";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    MIDL_INTERFACE("74ea89fa-c87c-4d0d-9057-2743b8db67ee")
                    ICanvasGeometry : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CombineWith(
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* otherGeometry,
                            ABI::Windows::Foundation::Numerics::Matrix3x2 otherGeometryTransform,
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasGeometryCombine combine,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** geometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CombineWithUsingFlatteningTolerance(
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* otherGeometry,
                            ABI::Windows::Foundation::Numerics::Matrix3x2 otherGeometryTransform,
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasGeometryCombine combine,
                            FLOAT flatteningTolerance,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** geometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Stroke(
                            FLOAT strokeWidth,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** geometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE StrokeWithStrokeStyle(
                            FLOAT strokeWidth,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** geometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE StrokeWithAllOptions(
                            FLOAT strokeWidth,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle,
                            ABI::Windows::Foundation::Numerics::Matrix3x2 transform,
                            FLOAT flatteningTolerance,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** geometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Outline(
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** geometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE OutlineWithTransformAndFlatteningTolerance(
                            ABI::Windows::Foundation::Numerics::Matrix3x2 transform,
                            FLOAT flatteningTolerance,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** geometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Simplify(
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasGeometrySimplification simplification,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** geometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SimplifyWithTransformAndFlatteningTolerance(
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasGeometrySimplification simplification,
                            ABI::Windows::Foundation::Numerics::Matrix3x2 transform,
                            FLOAT flatteningTolerance,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** geometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Transform(
                            ABI::Windows::Foundation::Numerics::Matrix3x2 transform,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** geometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CompareWith(
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* otherGeometry,
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasGeometryRelation* relation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CompareWithUsingTransformAndFlatteningTolerance(
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* otherGeometry,
                            ABI::Windows::Foundation::Numerics::Matrix3x2 otherGeometryTransform,
                            FLOAT flatteningTolerance,
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasGeometryRelation* relation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ComputeArea(
                            FLOAT* area
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ComputeAreaWithTransformAndFlatteningTolerance(
                            ABI::Windows::Foundation::Numerics::Matrix3x2 transform,
                            FLOAT flatteningTolerance,
                            FLOAT* area
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ComputePathLength(
                            FLOAT* length
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ComputePathLengthWithTransformAndFlatteningTolerance(
                            ABI::Windows::Foundation::Numerics::Matrix3x2 transform,
                            FLOAT flatteningTolerance,
                            FLOAT* length
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ComputePointOnPath(
                            FLOAT distance,
                            ABI::Windows::Foundation::Numerics::Vector2* point
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ComputePointOnPathWithTangent(
                            FLOAT distance,
                            ABI::Windows::Foundation::Numerics::Vector2* tangent,
                            ABI::Windows::Foundation::Numerics::Vector2* point
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ComputePointOnPathWithTransformAndFlatteningToleranceAndTangent(
                            FLOAT length,
                            ABI::Windows::Foundation::Numerics::Matrix3x2 transform,
                            FLOAT flatteningTolerance,
                            ABI::Windows::Foundation::Numerics::Vector2* tangent,
                            ABI::Windows::Foundation::Numerics::Vector2* point
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE FillContainsPoint(
                            ABI::Windows::Foundation::Numerics::Vector2 point,
                            boolean* containsPoint
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE FillContainsPointWithTransformAndFlatteningTolerance(
                            ABI::Windows::Foundation::Numerics::Vector2 point,
                            ABI::Windows::Foundation::Numerics::Matrix3x2 transform,
                            FLOAT flatteningTolerance,
                            boolean* containsPoint
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ComputeBounds(
                            ABI::Windows::Foundation::Rect* bounds
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ComputeBoundsWithTransform(
                            ABI::Windows::Foundation::Numerics::Matrix3x2 transform,
                            ABI::Windows::Foundation::Rect* bounds
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ComputeStrokeBounds(
                            FLOAT strokeWidth,
                            ABI::Windows::Foundation::Rect* bounds
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ComputeStrokeBoundsWithStrokeStyle(
                            FLOAT strokeWidth,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle,
                            ABI::Windows::Foundation::Rect* bounds
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ComputeStrokeBoundsWithAllOptions(
                            FLOAT strokeWidth,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle,
                            ABI::Windows::Foundation::Numerics::Matrix3x2 transform,
                            FLOAT flatteningTolerance,
                            ABI::Windows::Foundation::Rect* bounds
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE StrokeContainsPoint(
                            ABI::Windows::Foundation::Numerics::Vector2 point,
                            FLOAT strokeWidth,
                            boolean* containsPoint
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE StrokeContainsPointWithStrokeStyle(
                            ABI::Windows::Foundation::Numerics::Vector2 point,
                            FLOAT strokeWidth,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle,
                            boolean* containsPoint
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE StrokeContainsPointWithAllOptions(
                            ABI::Windows::Foundation::Numerics::Vector2 point,
                            FLOAT strokeWidth,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasStrokeStyle* strokeStyle,
                            ABI::Windows::Foundation::Numerics::Matrix3x2 transform,
                            FLOAT flatteningTolerance,
                            boolean* containsPoint
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Tessellate(
                            UINT32* trianglesLength,
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasTriangleVertices** triangles
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TessellateWithTransformAndFlatteningTolerance(
                            ABI::Windows::Foundation::Numerics::Matrix3x2 transform,
                            FLOAT flatteningTolerance,
                            UINT32* trianglesLength,
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasTriangleVertices** triangles
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SendPathTo(
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasPathReceiver* streamReader
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Device(
                            ABI::Microsoft::Graphics::Canvas::ICanvasDevice** value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasGeometry = _uuidof(ICanvasGeometry);
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Geometry.ICanvasGeometryStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Geometry.CanvasGeometry
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometryStatics[] = L"Microsoft.Graphics.Canvas.Geometry.ICanvasGeometryStatics";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    MIDL_INTERFACE("d94e33cf-cd59-46f2-8df4-55066aabfd56")
                    ICanvasGeometryStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateRectangle(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            ABI::Windows::Foundation::Rect rect,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** geometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateRectangleAtCoords(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            FLOAT x,
                            FLOAT y,
                            FLOAT w,
                            FLOAT h,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** geometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateRoundedRectangle(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            ABI::Windows::Foundation::Rect rect,
                            FLOAT radiusX,
                            FLOAT radiusY,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** geometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateRoundedRectangleAtCoords(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            FLOAT x,
                            FLOAT y,
                            FLOAT w,
                            FLOAT h,
                            FLOAT radiusX,
                            FLOAT radiusY,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** geometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateEllipse(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            ABI::Windows::Foundation::Numerics::Vector2 centerPoint,
                            FLOAT radiusX,
                            FLOAT radiusY,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** geometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateEllipseAtCoords(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            FLOAT x,
                            FLOAT y,
                            FLOAT radiusX,
                            FLOAT radiusY,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** geometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateCircle(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            ABI::Windows::Foundation::Numerics::Vector2 centerPoint,
                            FLOAT radius,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** geometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateCircleAtCoords(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            FLOAT x,
                            FLOAT y,
                            FLOAT radius,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** geometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreatePath(
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder* pathBuilder,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** geometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreatePolygon(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            UINT32 pointsLength,
                            ABI::Windows::Foundation::Numerics::Vector2* points,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** geometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateGroup(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            UINT32 geometriesLength,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** geometries,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** geometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateGroupWithFilledRegionDetermination(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            UINT32 geometriesLength,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** geometries,
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination filledRegionDetermination,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** geometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateText(
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextLayout* textLayout,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** geometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateGlyphRun(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            ABI::Windows::Foundation::Numerics::Vector2 point,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasFontFace* fontFace,
                            FLOAT fontSize,
                            UINT32 glyphsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyph* glyphs,
                            boolean isSideways,
                            UINT32 bidiLevel,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode measuringMode,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation glyphOrientation,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry** geometry
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ComputeFlatteningTolerance(
                            FLOAT dpi,
                            FLOAT maximumZoomFactor,
                            FLOAT* flatteningTolerance
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ComputeFlatteningToleranceWithTransform(
                            FLOAT dpi,
                            FLOAT maximumZoomFactor,
                            ABI::Windows::Foundation::Numerics::Matrix3x2 expectedGeometryTransform,
                            FLOAT* flatteningTolerance
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_DefaultFlatteningTolerance(
                            FLOAT* value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasGeometryStatics = _uuidof(ICanvasGeometryStatics);
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Geometry.ICanvasGradientMesh
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Geometry.CanvasGradientMesh
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Geometry_ICanvasGradientMesh[] = L"Microsoft.Graphics.Canvas.Geometry.ICanvasGradientMesh";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    MIDL_INTERFACE("6bfc2bf1-0a7a-449c-a7ef-6706321b0c1a")
                    ICanvasGradientMesh : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_Patches(
                            UINT32* valueElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetBounds(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            ABI::Windows::Foundation::Rect* bounds
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetBoundsWithTransform(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            ABI::Windows::Foundation::Numerics::Matrix3x2 transform,
                            ABI::Windows::Foundation::Rect* bounds
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Device(
                            ABI::Microsoft::Graphics::Canvas::ICanvasDevice** value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasGradientMesh = _uuidof(ICanvasGradientMesh);
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Geometry.ICanvasGradientMeshFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Geometry.CanvasGradientMesh
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Geometry_ICanvasGradientMeshFactory[] = L"Microsoft.Graphics.Canvas.Geometry.ICanvasGradientMeshFactory";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    MIDL_INTERFACE("4756492d-251e-421d-834d-87ec260d5e4d")
                    ICanvasGradientMeshFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            UINT32 patchElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch* patchElements,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGradientMesh** canvasGradientMesh
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasGradientMeshFactory = _uuidof(ICanvasGradientMeshFactory);
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Geometry.ICanvasGradientMeshStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Geometry.CanvasGradientMesh
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Geometry_ICanvasGradientMeshStatics[] = L"Microsoft.Graphics.Canvas.Geometry.ICanvasGradientMeshStatics";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    MIDL_INTERFACE("44027640-3eab-4199-aa3b-644890d0123d")
                    ICanvasGradientMeshStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateCoonsPatch(
                            UINT32 pointsLength,
                            ABI::Windows::Foundation::Numerics::Vector2* points,
                            UINT32 colorsLength,
                            ABI::Windows::Foundation::Numerics::Vector4* colors,
                            UINT32 edgesLength,
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge* edges,
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch* gradientMeshPatch
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateTensorPatch(
                            UINT32 pointsLength,
                            ABI::Windows::Foundation::Numerics::Vector2* points,
                            UINT32 colorsLength,
                            ABI::Windows::Foundation::Numerics::Vector4* colors,
                            UINT32 edgesLength,
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatchEdge* edges,
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasGradientMeshPatch* gradientMeshPatch
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasGradientMeshStatics = _uuidof(ICanvasGradientMeshStatics);
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Geometry.ICanvasPathBuilder
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Geometry.CanvasPathBuilder
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Geometry_ICanvasPathBuilder[] = L"Microsoft.Graphics.Canvas.Geometry.ICanvasPathBuilder";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    MIDL_INTERFACE("bcf5822f-8127-4e5c-96b8-29983b915541")
                    ICanvasPathBuilder : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE BeginFigureWithFigureFill(
                            ABI::Windows::Foundation::Numerics::Vector2 startPoint,
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasFigureFill figureFill
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE BeginFigure(
                            ABI::Windows::Foundation::Numerics::Vector2 startPoint
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE BeginFigureAtCoordsWithFigureFill(
                            FLOAT startX,
                            FLOAT startY,
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasFigureFill figureFill
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE BeginFigureAtCoords(
                            FLOAT startX,
                            FLOAT startY
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AddArcToPoint(
                            ABI::Windows::Foundation::Numerics::Vector2 endPoint,
                            FLOAT radiusX,
                            FLOAT radiusY,
                            FLOAT rotationAngle,
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasSweepDirection sweepDirection,
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasArcSize arcSize
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AddArcAroundEllipse(
                            ABI::Windows::Foundation::Numerics::Vector2 centerPoint,
                            FLOAT radiusX,
                            FLOAT radiusY,
                            FLOAT startAngle,
                            FLOAT sweepAngle
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AddCubicBezier(
                            ABI::Windows::Foundation::Numerics::Vector2 controlPoint1,
                            ABI::Windows::Foundation::Numerics::Vector2 controlPoint2,
                            ABI::Windows::Foundation::Numerics::Vector2 endPoint
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AddLine(
                            ABI::Windows::Foundation::Numerics::Vector2 endPoint
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AddLineWithCoords(
                            FLOAT x,
                            FLOAT y
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AddQuadraticBezier(
                            ABI::Windows::Foundation::Numerics::Vector2 controlPoint,
                            ABI::Windows::Foundation::Numerics::Vector2 endPoint
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetFilledRegionDetermination(
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination filledRegionDetermination
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetSegmentOptions(
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasFigureSegmentOptions figureSegmentOptions
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE EndFigure(
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasFigureLoop figureLoop
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AddGeometry(
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasGeometry* geometry
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasPathBuilder = _uuidof(ICanvasPathBuilder);
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Geometry.ICanvasPathBuilderFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Geometry.CanvasPathBuilder
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Geometry_ICanvasPathBuilderFactory[] = L"Microsoft.Graphics.Canvas.Geometry.ICanvasPathBuilderFactory";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    MIDL_INTERFACE("ac2bee14-efd1-4343-8e53-ba62153d8966")
                    ICanvasPathBuilderFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            ABI::Microsoft::Graphics::Canvas::Geometry::ICanvasPathBuilder** canvasPathBuilder
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasPathBuilderFactory = _uuidof(ICanvasPathBuilderFactory);
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Geometry.ICanvasPathReceiver
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Geometry_ICanvasPathReceiver[] = L"Microsoft.Graphics.Canvas.Geometry.ICanvasPathReceiver";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    MIDL_INTERFACE("70e65373-7fb3-4645-8b6d-f616d1b9a9d7")
                    ICanvasPathReceiver : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE BeginFigure(
                            ABI::Windows::Foundation::Numerics::Vector2 startPoint,
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasFigureFill figureFill
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AddArc(
                            ABI::Windows::Foundation::Numerics::Vector2 endPoint,
                            FLOAT radiusX,
                            FLOAT radiusY,
                            FLOAT rotationAngle,
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasSweepDirection sweepDirection,
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasArcSize arcSize
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AddCubicBezier(
                            ABI::Windows::Foundation::Numerics::Vector2 controlPoint1,
                            ABI::Windows::Foundation::Numerics::Vector2 controlPoint2,
                            ABI::Windows::Foundation::Numerics::Vector2 endPoint
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AddLine(
                            ABI::Windows::Foundation::Numerics::Vector2 endPoint
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AddQuadraticBezier(
                            ABI::Windows::Foundation::Numerics::Vector2 controlPoint,
                            ABI::Windows::Foundation::Numerics::Vector2 endPoint
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetFilledRegionDetermination(
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasFilledRegionDetermination filledRegionDetermination
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetSegmentOptions(
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasFigureSegmentOptions figureSegmentOptions
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE EndFigure(
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasFigureLoop figureLoop
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasPathReceiver = _uuidof(ICanvasPathReceiver);
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Geometry.ICanvasStrokeStyle
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Geometry.CanvasStrokeStyle
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Geometry_ICanvasStrokeStyle[] = L"Microsoft.Graphics.Canvas.Geometry.ICanvasStrokeStyle";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Geometry {
                    MIDL_INTERFACE("fd3e1cd2-6019-40a1-b315-267eef6c2aeb")
                    ICanvasStrokeStyle : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_StartCap(
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_StartCap(
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_EndCap(
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_EndCap(
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_DashCap(
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_DashCap(
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasCapStyle value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_LineJoin(
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasLineJoin* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_LineJoin(
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasLineJoin value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_MiterLimit(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_MiterLimit(
                            FLOAT value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_DashStyle(
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasDashStyle* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_DashStyle(
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasDashStyle value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_DashOffset(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_DashOffset(
                            FLOAT value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_CustomDashStyle(
                            UINT32* valueElementsLength,
                            FLOAT** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_CustomDashStyle(
                            UINT32 valueElementsLength,
                            FLOAT* valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_TransformBehavior(
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasStrokeTransformBehavior* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_TransformBehavior(
                            ABI::Microsoft::Graphics::Canvas::Geometry::CanvasStrokeTransformBehavior value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasStrokeStyle = _uuidof(ICanvasStrokeStyle);
                } /* Geometry */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_INTERFACE_DEFINED__) */

/*
 *
 * Class Microsoft.Graphics.Canvas.Geometry.CanvasCachedGeometry
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Geometry.ICanvasCachedGeometry ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Geometry_CanvasCachedGeometry_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Geometry_CanvasCachedGeometry_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Geometry_CanvasCachedGeometry[] = L"Microsoft.Graphics.Canvas.Geometry.CanvasCachedGeometry";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Geometry.CanvasGeometry
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Geometry.ICanvasGeometry ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Graphics.IGeometrySource2D
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Geometry_CanvasGeometry_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Geometry_CanvasGeometry_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Geometry_CanvasGeometry[] = L"Microsoft.Graphics.Canvas.Geometry.CanvasGeometry";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Geometry.CanvasGradientMesh
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Geometry.ICanvasGradientMesh ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Geometry_CanvasGradientMesh_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Geometry_CanvasGradientMesh_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Geometry_CanvasGradientMesh[] = L"Microsoft.Graphics.Canvas.Geometry.CanvasGradientMesh";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Geometry.CanvasPathBuilder
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Geometry.ICanvasPathBuilder ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Geometry_CanvasPathBuilder_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Geometry_CanvasPathBuilder_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Geometry_CanvasPathBuilder[] = L"Microsoft.Graphics.Canvas.Geometry.CanvasPathBuilder";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Geometry.CanvasStrokeStyle
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Geometry.ICanvasStrokeStyle ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Geometry_CanvasStrokeStyle_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Geometry_CanvasStrokeStyle_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Geometry_CanvasStrokeStyle[] = L"Microsoft.Graphics.Canvas.Geometry.CanvasStrokeStyle";
#endif

#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_FWD_DEFINED__

typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyph __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyph;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphOrientation __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphOrientation;

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_FWD_DEFINED__

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextMeasuringMode __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextMeasuringMode;

#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__

typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2;

typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 __x_ABI_CWindows_CFoundation_CNumerics_CVector2;

typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 __x_ABI_CWindows_CFoundation_CNumerics_CVector4;

typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;

#ifndef ____x_ABI_CWindows_CGraphics_CIGeometrySource2D_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CIGeometrySource2D_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CIGeometrySource2D __x_ABI_CWindows_CGraphics_CIGeometrySource2D;

#endif // ____x_ABI_CWindows_CGraphics_CIGeometrySource2D_FWD_DEFINED__

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasArcSize __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasArcSize;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasCapStyle __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasCapStyle;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasDashStyle __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasDashStyle;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFigureFill __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFigureFill;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFigureLoop __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFigureLoop;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFigureSegmentOptions __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFigureSegmentOptions;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFilledRegionDetermination __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFilledRegionDetermination;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGeometryCombine __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGeometryCombine;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGeometryRelation __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGeometryRelation;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGeometrySimplification __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGeometrySimplification;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGradientMeshPatchEdge __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGradientMeshPatchEdge;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasLineJoin __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasLineJoin;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasStrokeTransformBehavior __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasStrokeTransformBehavior;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasSweepDirection __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasSweepDirection;

typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGradientMeshPatch __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGradientMeshPatch;

typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasTriangleVertices __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasTriangleVertices;

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasArcSize
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasArcSize
{
    CanvasArcSize_Small = 0,
    CanvasArcSize_Large = 1,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasCapStyle
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasCapStyle
{
    CanvasCapStyle_Flat = 0,
    CanvasCapStyle_Square = 1,
    CanvasCapStyle_Round = 2,
    CanvasCapStyle_Triangle = 3,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasDashStyle
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasDashStyle
{
    CanvasDashStyle_Solid = 0,
    CanvasDashStyle_Dash = 1,
    CanvasDashStyle_Dot = 2,
    CanvasDashStyle_DashDot = 3,
    CanvasDashStyle_DashDotDot = 4,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasFigureFill
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFigureFill
{
    CanvasFigureFill_Default = 0,
    CanvasFigureFill_DoesNotAffectFills = 1,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasFigureLoop
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFigureLoop
{
    CanvasFigureLoop_Open = 0,
    CanvasFigureLoop_Closed = 1,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasFigureSegmentOptions
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFigureSegmentOptions
{
    CanvasFigureSegmentOptions_None = 0,
    CanvasFigureSegmentOptions_ForceUnstroked = 0x1,
    CanvasFigureSegmentOptions_ForceRoundLineJoin = 0x2,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasFilledRegionDetermination
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFilledRegionDetermination
{
    CanvasFilledRegionDetermination_Alternate = 0,
    CanvasFilledRegionDetermination_Winding = 1,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasGeometryCombine
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGeometryCombine
{
    CanvasGeometryCombine_Union = 0,
    CanvasGeometryCombine_Intersect = 1,
    CanvasGeometryCombine_Xor = 2,
    CanvasGeometryCombine_Exclude = 3,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasGeometryRelation
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGeometryRelation
{
    CanvasGeometryRelation_Disjoint = 0,
    CanvasGeometryRelation_Contained = 1,
    CanvasGeometryRelation_Contains = 2,
    CanvasGeometryRelation_Overlap = 3,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasGeometrySimplification
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGeometrySimplification
{
    CanvasGeometrySimplification_CubicsAndLines = 0,
    CanvasGeometrySimplification_Lines = 1,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasGradientMeshPatchEdge
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGradientMeshPatchEdge
{
    CanvasGradientMeshPatchEdge_Aliased = 0,
    CanvasGradientMeshPatchEdge_Antialiased = 1,
    CanvasGradientMeshPatchEdge_AliasedAndInflated = 2,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasLineJoin
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasLineJoin
{
    CanvasLineJoin_Miter = 0,
    CanvasLineJoin_Bevel = 1,
    CanvasLineJoin_Round = 2,
    CanvasLineJoin_MiterOrBevel = 3,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasStrokeTransformBehavior
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasStrokeTransformBehavior
{
    CanvasStrokeTransformBehavior_Normal = 0,
    CanvasStrokeTransformBehavior_Fixed = 1,
    CanvasStrokeTransformBehavior_Hairline = 2,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasSweepDirection
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasSweepDirection
{
    CanvasSweepDirection_CounterClockwise = 0,
    CanvasSweepDirection_Clockwise = 1,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasGradientMeshPatch
 *
 */
struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGradientMeshPatch
{
    struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 Point00;
    struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 Point01;
    struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 Point02;
    struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 Point03;
    struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 Point10;
    struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 Point11;
    struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 Point12;
    struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 Point13;
    struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 Point20;
    struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 Point21;
    struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 Point22;
    struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 Point23;
    struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 Point30;
    struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 Point31;
    struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 Point32;
    struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 Point33;
    struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 Color00;
    struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 Color03;
    struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 Color30;
    struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 Color33;
    enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGradientMeshPatchEdge Edge00To03;
    enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGradientMeshPatchEdge Edge03To33;
    enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGradientMeshPatchEdge Edge33To30;
    enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGradientMeshPatchEdge Edge30To00;
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Geometry.CanvasTriangleVertices
 *
 */
struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasTriangleVertices
{
    struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 Vertex1;
    struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 Vertex2;
    struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 Vertex3;
};

/*
 *
 * Interface Microsoft.Graphics.Canvas.Geometry.ICanvasCachedGeometry
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Geometry.CanvasCachedGeometry
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Geometry_ICanvasCachedGeometry[] = L"Microsoft.Graphics.Canvas.Geometry.ICanvasCachedGeometry";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Device)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice** value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry_get_Device(This, value) \
    ((This)->lpVtbl->get_Device(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Geometry.ICanvasCachedGeometryStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Geometry.CanvasCachedGeometry
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Geometry_ICanvasCachedGeometryStatics[] = L"Microsoft.Graphics.Canvas.Geometry.ICanvasCachedGeometryStatics";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateFill)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry** cachedGeometry);
    HRESULT (STDMETHODCALLTYPE* CreateFillWithFlatteningTolerance)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        FLOAT flatteningTolerance,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry** cachedGeometry);
    HRESULT (STDMETHODCALLTYPE* CreateStroke)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry** cachedGeometry);
    HRESULT (STDMETHODCALLTYPE* CreateStrokeWithStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry** cachedGeometry);
    HRESULT (STDMETHODCALLTYPE* CreateStrokeWithStrokeStyleAndFlatteningTolerance)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle,
        FLOAT flatteningTolerance,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometry** cachedGeometry);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStaticsVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics_CreateFill(This, geometry, cachedGeometry) \
    ((This)->lpVtbl->CreateFill(This, geometry, cachedGeometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics_CreateFillWithFlatteningTolerance(This, geometry, flatteningTolerance, cachedGeometry) \
    ((This)->lpVtbl->CreateFillWithFlatteningTolerance(This, geometry, flatteningTolerance, cachedGeometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics_CreateStroke(This, geometry, strokeWidth, cachedGeometry) \
    ((This)->lpVtbl->CreateStroke(This, geometry, strokeWidth, cachedGeometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics_CreateStrokeWithStrokeStyle(This, geometry, strokeWidth, strokeStyle, cachedGeometry) \
    ((This)->lpVtbl->CreateStrokeWithStrokeStyle(This, geometry, strokeWidth, strokeStyle, cachedGeometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics_CreateStrokeWithStrokeStyleAndFlatteningTolerance(This, geometry, strokeWidth, strokeStyle, flatteningTolerance, cachedGeometry) \
    ((This)->lpVtbl->CreateStrokeWithStrokeStyleAndFlatteningTolerance(This, geometry, strokeWidth, strokeStyle, flatteningTolerance, cachedGeometry))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasCachedGeometryStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Geometry.ICanvasGeometry
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Geometry.CanvasGeometry
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometry[] = L"Microsoft.Graphics.Canvas.Geometry.ICanvasGeometry";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CombineWith)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* otherGeometry,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 otherGeometryTransform,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGeometryCombine combine,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** geometry);
    HRESULT (STDMETHODCALLTYPE* CombineWithUsingFlatteningTolerance)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* otherGeometry,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 otherGeometryTransform,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGeometryCombine combine,
        FLOAT flatteningTolerance,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** geometry);
    HRESULT (STDMETHODCALLTYPE* Stroke)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** geometry);
    HRESULT (STDMETHODCALLTYPE* StrokeWithStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** geometry);
    HRESULT (STDMETHODCALLTYPE* StrokeWithAllOptions)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform,
        FLOAT flatteningTolerance,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** geometry);
    HRESULT (STDMETHODCALLTYPE* Outline)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** geometry);
    HRESULT (STDMETHODCALLTYPE* OutlineWithTransformAndFlatteningTolerance)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform,
        FLOAT flatteningTolerance,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** geometry);
    HRESULT (STDMETHODCALLTYPE* Simplify)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGeometrySimplification simplification,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** geometry);
    HRESULT (STDMETHODCALLTYPE* SimplifyWithTransformAndFlatteningTolerance)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGeometrySimplification simplification,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform,
        FLOAT flatteningTolerance,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** geometry);
    HRESULT (STDMETHODCALLTYPE* Transform)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** geometry);
    HRESULT (STDMETHODCALLTYPE* CompareWith)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* otherGeometry,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGeometryRelation* relation);
    HRESULT (STDMETHODCALLTYPE* CompareWithUsingTransformAndFlatteningTolerance)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* otherGeometry,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 otherGeometryTransform,
        FLOAT flatteningTolerance,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGeometryRelation* relation);
    HRESULT (STDMETHODCALLTYPE* ComputeArea)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        FLOAT* area);
    HRESULT (STDMETHODCALLTYPE* ComputeAreaWithTransformAndFlatteningTolerance)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform,
        FLOAT flatteningTolerance,
        FLOAT* area);
    HRESULT (STDMETHODCALLTYPE* ComputePathLength)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        FLOAT* length);
    HRESULT (STDMETHODCALLTYPE* ComputePathLengthWithTransformAndFlatteningTolerance)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform,
        FLOAT flatteningTolerance,
        FLOAT* length);
    HRESULT (STDMETHODCALLTYPE* ComputePointOnPath)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        FLOAT distance,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2* point);
    HRESULT (STDMETHODCALLTYPE* ComputePointOnPathWithTangent)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        FLOAT distance,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2* tangent,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2* point);
    HRESULT (STDMETHODCALLTYPE* ComputePointOnPathWithTransformAndFlatteningToleranceAndTangent)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        FLOAT length,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform,
        FLOAT flatteningTolerance,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2* tangent,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2* point);
    HRESULT (STDMETHODCALLTYPE* FillContainsPoint)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point,
        boolean* containsPoint);
    HRESULT (STDMETHODCALLTYPE* FillContainsPointWithTransformAndFlatteningTolerance)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform,
        FLOAT flatteningTolerance,
        boolean* containsPoint);
    HRESULT (STDMETHODCALLTYPE* ComputeBounds)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        struct __x_ABI_CWindows_CFoundation_CRect* bounds);
    HRESULT (STDMETHODCALLTYPE* ComputeBoundsWithTransform)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform,
        struct __x_ABI_CWindows_CFoundation_CRect* bounds);
    HRESULT (STDMETHODCALLTYPE* ComputeStrokeBounds)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        FLOAT strokeWidth,
        struct __x_ABI_CWindows_CFoundation_CRect* bounds);
    HRESULT (STDMETHODCALLTYPE* ComputeStrokeBoundsWithStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle,
        struct __x_ABI_CWindows_CFoundation_CRect* bounds);
    HRESULT (STDMETHODCALLTYPE* ComputeStrokeBoundsWithAllOptions)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform,
        FLOAT flatteningTolerance,
        struct __x_ABI_CWindows_CFoundation_CRect* bounds);
    HRESULT (STDMETHODCALLTYPE* StrokeContainsPoint)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point,
        FLOAT strokeWidth,
        boolean* containsPoint);
    HRESULT (STDMETHODCALLTYPE* StrokeContainsPointWithStrokeStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle,
        boolean* containsPoint);
    HRESULT (STDMETHODCALLTYPE* StrokeContainsPointWithAllOptions)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point,
        FLOAT strokeWidth,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* strokeStyle,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform,
        FLOAT flatteningTolerance,
        boolean* containsPoint);
    HRESULT (STDMETHODCALLTYPE* Tessellate)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        UINT32* trianglesLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasTriangleVertices** triangles);
    HRESULT (STDMETHODCALLTYPE* TessellateWithTransformAndFlatteningTolerance)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform,
        FLOAT flatteningTolerance,
        UINT32* trianglesLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasTriangleVertices** triangles);
    HRESULT (STDMETHODCALLTYPE* SendPathTo)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver* streamReader);
    HRESULT (STDMETHODCALLTYPE* get_Device)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice** value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_CombineWith(This, otherGeometry, otherGeometryTransform, combine, geometry) \
    ((This)->lpVtbl->CombineWith(This, otherGeometry, otherGeometryTransform, combine, geometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_CombineWithUsingFlatteningTolerance(This, otherGeometry, otherGeometryTransform, combine, flatteningTolerance, geometry) \
    ((This)->lpVtbl->CombineWithUsingFlatteningTolerance(This, otherGeometry, otherGeometryTransform, combine, flatteningTolerance, geometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_Stroke(This, strokeWidth, geometry) \
    ((This)->lpVtbl->Stroke(This, strokeWidth, geometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_StrokeWithStrokeStyle(This, strokeWidth, strokeStyle, geometry) \
    ((This)->lpVtbl->StrokeWithStrokeStyle(This, strokeWidth, strokeStyle, geometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_StrokeWithAllOptions(This, strokeWidth, strokeStyle, transform, flatteningTolerance, geometry) \
    ((This)->lpVtbl->StrokeWithAllOptions(This, strokeWidth, strokeStyle, transform, flatteningTolerance, geometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_Outline(This, geometry) \
    ((This)->lpVtbl->Outline(This, geometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_OutlineWithTransformAndFlatteningTolerance(This, transform, flatteningTolerance, geometry) \
    ((This)->lpVtbl->OutlineWithTransformAndFlatteningTolerance(This, transform, flatteningTolerance, geometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_Simplify(This, simplification, geometry) \
    ((This)->lpVtbl->Simplify(This, simplification, geometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_SimplifyWithTransformAndFlatteningTolerance(This, simplification, transform, flatteningTolerance, geometry) \
    ((This)->lpVtbl->SimplifyWithTransformAndFlatteningTolerance(This, simplification, transform, flatteningTolerance, geometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_Transform(This, transform, geometry) \
    ((This)->lpVtbl->Transform(This, transform, geometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_CompareWith(This, otherGeometry, relation) \
    ((This)->lpVtbl->CompareWith(This, otherGeometry, relation))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_CompareWithUsingTransformAndFlatteningTolerance(This, otherGeometry, otherGeometryTransform, flatteningTolerance, relation) \
    ((This)->lpVtbl->CompareWithUsingTransformAndFlatteningTolerance(This, otherGeometry, otherGeometryTransform, flatteningTolerance, relation))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_ComputeArea(This, area) \
    ((This)->lpVtbl->ComputeArea(This, area))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_ComputeAreaWithTransformAndFlatteningTolerance(This, transform, flatteningTolerance, area) \
    ((This)->lpVtbl->ComputeAreaWithTransformAndFlatteningTolerance(This, transform, flatteningTolerance, area))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_ComputePathLength(This, length) \
    ((This)->lpVtbl->ComputePathLength(This, length))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_ComputePathLengthWithTransformAndFlatteningTolerance(This, transform, flatteningTolerance, length) \
    ((This)->lpVtbl->ComputePathLengthWithTransformAndFlatteningTolerance(This, transform, flatteningTolerance, length))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_ComputePointOnPath(This, distance, point) \
    ((This)->lpVtbl->ComputePointOnPath(This, distance, point))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_ComputePointOnPathWithTangent(This, distance, tangent, point) \
    ((This)->lpVtbl->ComputePointOnPathWithTangent(This, distance, tangent, point))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_ComputePointOnPathWithTransformAndFlatteningToleranceAndTangent(This, length, transform, flatteningTolerance, tangent, point) \
    ((This)->lpVtbl->ComputePointOnPathWithTransformAndFlatteningToleranceAndTangent(This, length, transform, flatteningTolerance, tangent, point))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_FillContainsPoint(This, point, containsPoint) \
    ((This)->lpVtbl->FillContainsPoint(This, point, containsPoint))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_FillContainsPointWithTransformAndFlatteningTolerance(This, point, transform, flatteningTolerance, containsPoint) \
    ((This)->lpVtbl->FillContainsPointWithTransformAndFlatteningTolerance(This, point, transform, flatteningTolerance, containsPoint))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_ComputeBounds(This, bounds) \
    ((This)->lpVtbl->ComputeBounds(This, bounds))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_ComputeBoundsWithTransform(This, transform, bounds) \
    ((This)->lpVtbl->ComputeBoundsWithTransform(This, transform, bounds))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_ComputeStrokeBounds(This, strokeWidth, bounds) \
    ((This)->lpVtbl->ComputeStrokeBounds(This, strokeWidth, bounds))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_ComputeStrokeBoundsWithStrokeStyle(This, strokeWidth, strokeStyle, bounds) \
    ((This)->lpVtbl->ComputeStrokeBoundsWithStrokeStyle(This, strokeWidth, strokeStyle, bounds))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_ComputeStrokeBoundsWithAllOptions(This, strokeWidth, strokeStyle, transform, flatteningTolerance, bounds) \
    ((This)->lpVtbl->ComputeStrokeBoundsWithAllOptions(This, strokeWidth, strokeStyle, transform, flatteningTolerance, bounds))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_StrokeContainsPoint(This, point, strokeWidth, containsPoint) \
    ((This)->lpVtbl->StrokeContainsPoint(This, point, strokeWidth, containsPoint))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_StrokeContainsPointWithStrokeStyle(This, point, strokeWidth, strokeStyle, containsPoint) \
    ((This)->lpVtbl->StrokeContainsPointWithStrokeStyle(This, point, strokeWidth, strokeStyle, containsPoint))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_StrokeContainsPointWithAllOptions(This, point, strokeWidth, strokeStyle, transform, flatteningTolerance, containsPoint) \
    ((This)->lpVtbl->StrokeContainsPointWithAllOptions(This, point, strokeWidth, strokeStyle, transform, flatteningTolerance, containsPoint))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_Tessellate(This, trianglesLength, triangles) \
    ((This)->lpVtbl->Tessellate(This, trianglesLength, triangles))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_TessellateWithTransformAndFlatteningTolerance(This, transform, flatteningTolerance, trianglesLength, triangles) \
    ((This)->lpVtbl->TessellateWithTransformAndFlatteningTolerance(This, transform, flatteningTolerance, trianglesLength, triangles))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_SendPathTo(This, streamReader) \
    ((This)->lpVtbl->SendPathTo(This, streamReader))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_get_Device(This, value) \
    ((This)->lpVtbl->get_Device(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Geometry.ICanvasGeometryStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Geometry.CanvasGeometry
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Geometry_ICanvasGeometryStatics[] = L"Microsoft.Graphics.Canvas.Geometry.ICanvasGeometryStatics";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateRectangle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        struct __x_ABI_CWindows_CFoundation_CRect rect,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** geometry);
    HRESULT (STDMETHODCALLTYPE* CreateRectangleAtCoords)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        FLOAT x,
        FLOAT y,
        FLOAT w,
        FLOAT h,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** geometry);
    HRESULT (STDMETHODCALLTYPE* CreateRoundedRectangle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        struct __x_ABI_CWindows_CFoundation_CRect rect,
        FLOAT radiusX,
        FLOAT radiusY,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** geometry);
    HRESULT (STDMETHODCALLTYPE* CreateRoundedRectangleAtCoords)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        FLOAT x,
        FLOAT y,
        FLOAT w,
        FLOAT h,
        FLOAT radiusX,
        FLOAT radiusY,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** geometry);
    HRESULT (STDMETHODCALLTYPE* CreateEllipse)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 centerPoint,
        FLOAT radiusX,
        FLOAT radiusY,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** geometry);
    HRESULT (STDMETHODCALLTYPE* CreateEllipseAtCoords)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        FLOAT x,
        FLOAT y,
        FLOAT radiusX,
        FLOAT radiusY,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** geometry);
    HRESULT (STDMETHODCALLTYPE* CreateCircle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 centerPoint,
        FLOAT radius,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** geometry);
    HRESULT (STDMETHODCALLTYPE* CreateCircleAtCoords)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        FLOAT x,
        FLOAT y,
        FLOAT radius,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** geometry);
    HRESULT (STDMETHODCALLTYPE* CreatePath)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder* pathBuilder,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** geometry);
    HRESULT (STDMETHODCALLTYPE* CreatePolygon)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        UINT32 pointsLength,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2* points,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** geometry);
    HRESULT (STDMETHODCALLTYPE* CreateGroup)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        UINT32 geometriesLength,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** geometries,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** geometry);
    HRESULT (STDMETHODCALLTYPE* CreateGroupWithFilledRegionDetermination)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        UINT32 geometriesLength,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** geometries,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFilledRegionDetermination filledRegionDetermination,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** geometry);
    HRESULT (STDMETHODCALLTYPE* CreateText)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* textLayout,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** geometry);
    HRESULT (STDMETHODCALLTYPE* CreateGlyphRun)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* fontFace,
        FLOAT fontSize,
        UINT32 glyphsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyph* glyphs,
        boolean isSideways,
        UINT32 bidiLevel,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextMeasuringMode measuringMode,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphOrientation glyphOrientation,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry** geometry);
    HRESULT (STDMETHODCALLTYPE* ComputeFlatteningTolerance)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics* This,
        FLOAT dpi,
        FLOAT maximumZoomFactor,
        FLOAT* flatteningTolerance);
    HRESULT (STDMETHODCALLTYPE* ComputeFlatteningToleranceWithTransform)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics* This,
        FLOAT dpi,
        FLOAT maximumZoomFactor,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 expectedGeometryTransform,
        FLOAT* flatteningTolerance);
    HRESULT (STDMETHODCALLTYPE* get_DefaultFlatteningTolerance)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics* This,
        FLOAT* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStaticsVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_CreateRectangle(This, resourceCreator, rect, geometry) \
    ((This)->lpVtbl->CreateRectangle(This, resourceCreator, rect, geometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_CreateRectangleAtCoords(This, resourceCreator, x, y, w, h, geometry) \
    ((This)->lpVtbl->CreateRectangleAtCoords(This, resourceCreator, x, y, w, h, geometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_CreateRoundedRectangle(This, resourceCreator, rect, radiusX, radiusY, geometry) \
    ((This)->lpVtbl->CreateRoundedRectangle(This, resourceCreator, rect, radiusX, radiusY, geometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_CreateRoundedRectangleAtCoords(This, resourceCreator, x, y, w, h, radiusX, radiusY, geometry) \
    ((This)->lpVtbl->CreateRoundedRectangleAtCoords(This, resourceCreator, x, y, w, h, radiusX, radiusY, geometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_CreateEllipse(This, resourceCreator, centerPoint, radiusX, radiusY, geometry) \
    ((This)->lpVtbl->CreateEllipse(This, resourceCreator, centerPoint, radiusX, radiusY, geometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_CreateEllipseAtCoords(This, resourceCreator, x, y, radiusX, radiusY, geometry) \
    ((This)->lpVtbl->CreateEllipseAtCoords(This, resourceCreator, x, y, radiusX, radiusY, geometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_CreateCircle(This, resourceCreator, centerPoint, radius, geometry) \
    ((This)->lpVtbl->CreateCircle(This, resourceCreator, centerPoint, radius, geometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_CreateCircleAtCoords(This, resourceCreator, x, y, radius, geometry) \
    ((This)->lpVtbl->CreateCircleAtCoords(This, resourceCreator, x, y, radius, geometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_CreatePath(This, pathBuilder, geometry) \
    ((This)->lpVtbl->CreatePath(This, pathBuilder, geometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_CreatePolygon(This, resourceCreator, pointsLength, points, geometry) \
    ((This)->lpVtbl->CreatePolygon(This, resourceCreator, pointsLength, points, geometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_CreateGroup(This, resourceCreator, geometriesLength, geometries, geometry) \
    ((This)->lpVtbl->CreateGroup(This, resourceCreator, geometriesLength, geometries, geometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_CreateGroupWithFilledRegionDetermination(This, resourceCreator, geometriesLength, geometries, filledRegionDetermination, geometry) \
    ((This)->lpVtbl->CreateGroupWithFilledRegionDetermination(This, resourceCreator, geometriesLength, geometries, filledRegionDetermination, geometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_CreateText(This, textLayout, geometry) \
    ((This)->lpVtbl->CreateText(This, textLayout, geometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_CreateGlyphRun(This, resourceCreator, point, fontFace, fontSize, glyphsLength, glyphs, isSideways, bidiLevel, measuringMode, glyphOrientation, geometry) \
    ((This)->lpVtbl->CreateGlyphRun(This, resourceCreator, point, fontFace, fontSize, glyphsLength, glyphs, isSideways, bidiLevel, measuringMode, glyphOrientation, geometry))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_ComputeFlatteningTolerance(This, dpi, maximumZoomFactor, flatteningTolerance) \
    ((This)->lpVtbl->ComputeFlatteningTolerance(This, dpi, maximumZoomFactor, flatteningTolerance))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_ComputeFlatteningToleranceWithTransform(This, dpi, maximumZoomFactor, expectedGeometryTransform, flatteningTolerance) \
    ((This)->lpVtbl->ComputeFlatteningToleranceWithTransform(This, dpi, maximumZoomFactor, expectedGeometryTransform, flatteningTolerance))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_get_DefaultFlatteningTolerance(This, value) \
    ((This)->lpVtbl->get_DefaultFlatteningTolerance(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometryStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Geometry.ICanvasGradientMesh
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Geometry.CanvasGradientMesh
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Geometry_ICanvasGradientMesh[] = L"Microsoft.Graphics.Canvas.Geometry.ICanvasGradientMesh";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Patches)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh* This,
        UINT32* valueElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGradientMeshPatch** valueElements);
    HRESULT (STDMETHODCALLTYPE* GetBounds)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        struct __x_ABI_CWindows_CFoundation_CRect* bounds);
    HRESULT (STDMETHODCALLTYPE* GetBoundsWithTransform)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform,
        struct __x_ABI_CWindows_CFoundation_CRect* bounds);
    HRESULT (STDMETHODCALLTYPE* get_Device)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice** value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh_get_Patches(This, valueElementsLength, valueElements) \
    ((This)->lpVtbl->get_Patches(This, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh_GetBounds(This, resourceCreator, bounds) \
    ((This)->lpVtbl->GetBounds(This, resourceCreator, bounds))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh_GetBoundsWithTransform(This, resourceCreator, transform, bounds) \
    ((This)->lpVtbl->GetBoundsWithTransform(This, resourceCreator, transform, bounds))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh_get_Device(This, value) \
    ((This)->lpVtbl->get_Device(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Geometry.ICanvasGradientMeshFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Geometry.CanvasGradientMesh
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Geometry_ICanvasGradientMeshFactory[] = L"Microsoft.Graphics.Canvas.Geometry.ICanvasGradientMeshFactory";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* Create)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        UINT32 patchElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGradientMeshPatch* patchElements,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMesh** canvasGradientMesh);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactoryVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory_Create(This, resourceCreator, patchElementsLength, patchElements, canvasGradientMesh) \
    ((This)->lpVtbl->Create(This, resourceCreator, patchElementsLength, patchElements, canvasGradientMesh))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Geometry.ICanvasGradientMeshStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Geometry.CanvasGradientMesh
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Geometry_ICanvasGradientMeshStatics[] = L"Microsoft.Graphics.Canvas.Geometry.ICanvasGradientMeshStatics";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateCoonsPatch)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics* This,
        UINT32 pointsLength,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2* points,
        UINT32 colorsLength,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4* colors,
        UINT32 edgesLength,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGradientMeshPatchEdge* edges,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGradientMeshPatch* gradientMeshPatch);
    HRESULT (STDMETHODCALLTYPE* CreateTensorPatch)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics* This,
        UINT32 pointsLength,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2* points,
        UINT32 colorsLength,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4* colors,
        UINT32 edgesLength,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGradientMeshPatchEdge* edges,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasGradientMeshPatch* gradientMeshPatch);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStaticsVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics_CreateCoonsPatch(This, pointsLength, points, colorsLength, colors, edgesLength, edges, gradientMeshPatch) \
    ((This)->lpVtbl->CreateCoonsPatch(This, pointsLength, points, colorsLength, colors, edgesLength, edges, gradientMeshPatch))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics_CreateTensorPatch(This, pointsLength, points, colorsLength, colors, edgesLength, edges, gradientMeshPatch) \
    ((This)->lpVtbl->CreateTensorPatch(This, pointsLength, points, colorsLength, colors, edgesLength, edges, gradientMeshPatch))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGradientMeshStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Geometry.ICanvasPathBuilder
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Geometry.CanvasPathBuilder
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Geometry_ICanvasPathBuilder[] = L"Microsoft.Graphics.Canvas.Geometry.ICanvasPathBuilder";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* BeginFigureWithFigureFill)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 startPoint,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFigureFill figureFill);
    HRESULT (STDMETHODCALLTYPE* BeginFigure)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 startPoint);
    HRESULT (STDMETHODCALLTYPE* BeginFigureAtCoordsWithFigureFill)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder* This,
        FLOAT startX,
        FLOAT startY,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFigureFill figureFill);
    HRESULT (STDMETHODCALLTYPE* BeginFigureAtCoords)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder* This,
        FLOAT startX,
        FLOAT startY);
    HRESULT (STDMETHODCALLTYPE* AddArcToPoint)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 endPoint,
        FLOAT radiusX,
        FLOAT radiusY,
        FLOAT rotationAngle,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasSweepDirection sweepDirection,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasArcSize arcSize);
    HRESULT (STDMETHODCALLTYPE* AddArcAroundEllipse)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 centerPoint,
        FLOAT radiusX,
        FLOAT radiusY,
        FLOAT startAngle,
        FLOAT sweepAngle);
    HRESULT (STDMETHODCALLTYPE* AddCubicBezier)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 controlPoint1,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 controlPoint2,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 endPoint);
    HRESULT (STDMETHODCALLTYPE* AddLine)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 endPoint);
    HRESULT (STDMETHODCALLTYPE* AddLineWithCoords)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder* This,
        FLOAT x,
        FLOAT y);
    HRESULT (STDMETHODCALLTYPE* AddQuadraticBezier)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 controlPoint,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 endPoint);
    HRESULT (STDMETHODCALLTYPE* SetFilledRegionDetermination)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFilledRegionDetermination filledRegionDetermination);
    HRESULT (STDMETHODCALLTYPE* SetSegmentOptions)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFigureSegmentOptions figureSegmentOptions);
    HRESULT (STDMETHODCALLTYPE* EndFigure)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFigureLoop figureLoop);
    HRESULT (STDMETHODCALLTYPE* AddGeometry)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasGeometry* geometry);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_BeginFigureWithFigureFill(This, startPoint, figureFill) \
    ((This)->lpVtbl->BeginFigureWithFigureFill(This, startPoint, figureFill))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_BeginFigure(This, startPoint) \
    ((This)->lpVtbl->BeginFigure(This, startPoint))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_BeginFigureAtCoordsWithFigureFill(This, startX, startY, figureFill) \
    ((This)->lpVtbl->BeginFigureAtCoordsWithFigureFill(This, startX, startY, figureFill))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_BeginFigureAtCoords(This, startX, startY) \
    ((This)->lpVtbl->BeginFigureAtCoords(This, startX, startY))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_AddArcToPoint(This, endPoint, radiusX, radiusY, rotationAngle, sweepDirection, arcSize) \
    ((This)->lpVtbl->AddArcToPoint(This, endPoint, radiusX, radiusY, rotationAngle, sweepDirection, arcSize))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_AddArcAroundEllipse(This, centerPoint, radiusX, radiusY, startAngle, sweepAngle) \
    ((This)->lpVtbl->AddArcAroundEllipse(This, centerPoint, radiusX, radiusY, startAngle, sweepAngle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_AddCubicBezier(This, controlPoint1, controlPoint2, endPoint) \
    ((This)->lpVtbl->AddCubicBezier(This, controlPoint1, controlPoint2, endPoint))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_AddLine(This, endPoint) \
    ((This)->lpVtbl->AddLine(This, endPoint))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_AddLineWithCoords(This, x, y) \
    ((This)->lpVtbl->AddLineWithCoords(This, x, y))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_AddQuadraticBezier(This, controlPoint, endPoint) \
    ((This)->lpVtbl->AddQuadraticBezier(This, controlPoint, endPoint))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_SetFilledRegionDetermination(This, filledRegionDetermination) \
    ((This)->lpVtbl->SetFilledRegionDetermination(This, filledRegionDetermination))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_SetSegmentOptions(This, figureSegmentOptions) \
    ((This)->lpVtbl->SetSegmentOptions(This, figureSegmentOptions))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_EndFigure(This, figureLoop) \
    ((This)->lpVtbl->EndFigure(This, figureLoop))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_AddGeometry(This, geometry) \
    ((This)->lpVtbl->AddGeometry(This, geometry))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Geometry.ICanvasPathBuilderFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Geometry.CanvasPathBuilder
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Geometry_ICanvasPathBuilderFactory[] = L"Microsoft.Graphics.Canvas.Geometry.ICanvasPathBuilderFactory";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* Create)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilder** canvasPathBuilder);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactoryVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory_Create(This, resourceCreator, canvasPathBuilder) \
    ((This)->lpVtbl->Create(This, resourceCreator, canvasPathBuilder))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathBuilderFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Geometry.ICanvasPathReceiver
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Geometry_ICanvasPathReceiver[] = L"Microsoft.Graphics.Canvas.Geometry.ICanvasPathReceiver";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiverVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* BeginFigure)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 startPoint,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFigureFill figureFill);
    HRESULT (STDMETHODCALLTYPE* AddArc)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 endPoint,
        FLOAT radiusX,
        FLOAT radiusY,
        FLOAT rotationAngle,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasSweepDirection sweepDirection,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasArcSize arcSize);
    HRESULT (STDMETHODCALLTYPE* AddCubicBezier)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 controlPoint1,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 controlPoint2,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 endPoint);
    HRESULT (STDMETHODCALLTYPE* AddLine)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 endPoint);
    HRESULT (STDMETHODCALLTYPE* AddQuadraticBezier)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 controlPoint,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 endPoint);
    HRESULT (STDMETHODCALLTYPE* SetFilledRegionDetermination)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFilledRegionDetermination filledRegionDetermination);
    HRESULT (STDMETHODCALLTYPE* SetSegmentOptions)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFigureSegmentOptions figureSegmentOptions);
    HRESULT (STDMETHODCALLTYPE* EndFigure)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasFigureLoop figureLoop);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiverVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiverVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver_BeginFigure(This, startPoint, figureFill) \
    ((This)->lpVtbl->BeginFigure(This, startPoint, figureFill))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver_AddArc(This, endPoint, radiusX, radiusY, rotationAngle, sweepDirection, arcSize) \
    ((This)->lpVtbl->AddArc(This, endPoint, radiusX, radiusY, rotationAngle, sweepDirection, arcSize))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver_AddCubicBezier(This, controlPoint1, controlPoint2, endPoint) \
    ((This)->lpVtbl->AddCubicBezier(This, controlPoint1, controlPoint2, endPoint))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver_AddLine(This, endPoint) \
    ((This)->lpVtbl->AddLine(This, endPoint))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver_AddQuadraticBezier(This, controlPoint, endPoint) \
    ((This)->lpVtbl->AddQuadraticBezier(This, controlPoint, endPoint))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver_SetFilledRegionDetermination(This, filledRegionDetermination) \
    ((This)->lpVtbl->SetFilledRegionDetermination(This, filledRegionDetermination))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver_SetSegmentOptions(This, figureSegmentOptions) \
    ((This)->lpVtbl->SetSegmentOptions(This, figureSegmentOptions))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver_EndFigure(This, figureLoop) \
    ((This)->lpVtbl->EndFigure(This, figureLoop))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Geometry.ICanvasStrokeStyle
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Geometry.CanvasStrokeStyle
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Geometry_ICanvasStrokeStyle[] = L"Microsoft.Graphics.Canvas.Geometry.ICanvasStrokeStyle";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyleVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_StartCap)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasCapStyle* value);
    HRESULT (STDMETHODCALLTYPE* put_StartCap)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasCapStyle value);
    HRESULT (STDMETHODCALLTYPE* get_EndCap)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasCapStyle* value);
    HRESULT (STDMETHODCALLTYPE* put_EndCap)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasCapStyle value);
    HRESULT (STDMETHODCALLTYPE* get_DashCap)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasCapStyle* value);
    HRESULT (STDMETHODCALLTYPE* put_DashCap)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasCapStyle value);
    HRESULT (STDMETHODCALLTYPE* get_LineJoin)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasLineJoin* value);
    HRESULT (STDMETHODCALLTYPE* put_LineJoin)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasLineJoin value);
    HRESULT (STDMETHODCALLTYPE* get_MiterLimit)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* put_MiterLimit)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* This,
        FLOAT value);
    HRESULT (STDMETHODCALLTYPE* get_DashStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasDashStyle* value);
    HRESULT (STDMETHODCALLTYPE* put_DashStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasDashStyle value);
    HRESULT (STDMETHODCALLTYPE* get_DashOffset)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* put_DashOffset)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* This,
        FLOAT value);
    HRESULT (STDMETHODCALLTYPE* get_CustomDashStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* This,
        UINT32* valueElementsLength,
        FLOAT** valueElements);
    HRESULT (STDMETHODCALLTYPE* put_CustomDashStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* This,
        UINT32 valueElementsLength,
        FLOAT* valueElements);
    HRESULT (STDMETHODCALLTYPE* get_TransformBehavior)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasStrokeTransformBehavior* value);
    HRESULT (STDMETHODCALLTYPE* put_TransformBehavior)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CCanvasStrokeTransformBehavior value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyleVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyleVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_get_StartCap(This, value) \
    ((This)->lpVtbl->get_StartCap(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_put_StartCap(This, value) \
    ((This)->lpVtbl->put_StartCap(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_get_EndCap(This, value) \
    ((This)->lpVtbl->get_EndCap(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_put_EndCap(This, value) \
    ((This)->lpVtbl->put_EndCap(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_get_DashCap(This, value) \
    ((This)->lpVtbl->get_DashCap(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_put_DashCap(This, value) \
    ((This)->lpVtbl->put_DashCap(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_get_LineJoin(This, value) \
    ((This)->lpVtbl->get_LineJoin(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_put_LineJoin(This, value) \
    ((This)->lpVtbl->put_LineJoin(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_get_MiterLimit(This, value) \
    ((This)->lpVtbl->get_MiterLimit(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_put_MiterLimit(This, value) \
    ((This)->lpVtbl->put_MiterLimit(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_get_DashStyle(This, value) \
    ((This)->lpVtbl->get_DashStyle(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_put_DashStyle(This, value) \
    ((This)->lpVtbl->put_DashStyle(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_get_DashOffset(This, value) \
    ((This)->lpVtbl->get_DashOffset(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_put_DashOffset(This, value) \
    ((This)->lpVtbl->put_DashOffset(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_get_CustomDashStyle(This, valueElementsLength, valueElements) \
    ((This)->lpVtbl->get_CustomDashStyle(This, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_put_CustomDashStyle(This, valueElementsLength, valueElements) \
    ((This)->lpVtbl->put_CustomDashStyle(This, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_get_TransformBehavior(This, value) \
    ((This)->lpVtbl->get_TransformBehavior(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_put_TransformBehavior(This, value) \
    ((This)->lpVtbl->put_TransformBehavior(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasStrokeStyle_INTERFACE_DEFINED__) */

/*
 *
 * Class Microsoft.Graphics.Canvas.Geometry.CanvasCachedGeometry
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Geometry.ICanvasCachedGeometry ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Geometry_CanvasCachedGeometry_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Geometry_CanvasCachedGeometry_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Geometry_CanvasCachedGeometry[] = L"Microsoft.Graphics.Canvas.Geometry.CanvasCachedGeometry";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Geometry.CanvasGeometry
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Geometry.ICanvasGeometry ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Graphics.IGeometrySource2D
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Geometry_CanvasGeometry_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Geometry_CanvasGeometry_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Geometry_CanvasGeometry[] = L"Microsoft.Graphics.Canvas.Geometry.CanvasGeometry";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Geometry.CanvasGradientMesh
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Geometry.ICanvasGradientMesh ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Geometry_CanvasGradientMesh_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Geometry_CanvasGradientMesh_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Geometry_CanvasGradientMesh[] = L"Microsoft.Graphics.Canvas.Geometry.CanvasGradientMesh";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Geometry.CanvasPathBuilder
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Geometry.ICanvasPathBuilder ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Geometry_CanvasPathBuilder_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Geometry_CanvasPathBuilder_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Geometry_CanvasPathBuilder[] = L"Microsoft.Graphics.Canvas.Geometry.CanvasPathBuilder";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Geometry.CanvasStrokeStyle
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Geometry.ICanvasStrokeStyle ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Geometry_CanvasStrokeStyle_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Geometry_CanvasStrokeStyle_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Geometry_CanvasStrokeStyle[] = L"Microsoft.Graphics.Canvas.Geometry.CanvasStrokeStyle";
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
#endif // __microsoft2Egraphics2Ecanvas2Egeometry_p_h__

#endif // __microsoft2Egraphics2Ecanvas2Egeometry_h__
