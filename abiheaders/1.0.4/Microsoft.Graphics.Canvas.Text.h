
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
#ifndef __microsoft2Egraphics2Ecanvas2Etext_h__
#define __microsoft2Egraphics2Ecanvas2Etext_h__
#ifndef __microsoft2Egraphics2Ecanvas2Etext_p_h__
#define __microsoft2Egraphics2Ecanvas2Etext_p_h__


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
#include "Microsoft.Graphics.Canvas.Brushes.h"
#include "Windows.Foundation.Numerics.h"
#include "Windows.UI.h"
#include "Windows.UI.Text.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
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

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    interface ICanvasFontSet;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet ABI::Microsoft::Graphics::Canvas::Text::ICanvasFontSet

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    interface ICanvasFontSetFactory;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory ABI::Microsoft::Graphics::Canvas::Text::ICanvasFontSetFactory

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    interface ICanvasFontSetStatics;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics ABI::Microsoft::Graphics::Canvas::Text::ICanvasFontSetStatics

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    interface ICanvasNumberSubstitution;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution ABI::Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitution

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    interface ICanvasNumberSubstitutionFactory;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory ABI::Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitutionFactory

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    interface ICanvasScaledFont;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont ABI::Microsoft::Graphics::Canvas::Text::ICanvasScaledFont

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    interface ICanvasTextAnalyzer;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    interface ICanvasTextAnalyzerFactory;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerFactory

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    interface ICanvasTextAnalyzerOptions;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerOptions

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions_FWD_DEFINED__

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

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    interface ICanvasTextFormatStatics;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextFormatStatics

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    interface ICanvasTextInlineObject;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject_FWD_DEFINED__

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

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    interface ICanvasTextLayoutFactory;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextLayoutFactory

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    interface ICanvasTextLayoutStatics;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextLayoutStatics

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    interface ICanvasTextRenderer;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer_FWD_DEFINED__

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

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    interface ICanvasTextRenderingParametersFactory;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParametersFactory

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    interface ICanvasTypography;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography ABI::Microsoft::Graphics::Canvas::Text::ICanvasTypography

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
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


#ifndef DEF___FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_USE
#define DEF___FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ba9cfc0b-75d0-5455-9d9d-b88a73a806d0"))
IIterator<ABI::Microsoft::Graphics::Canvas::Text::CanvasFontFace*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::Text::CanvasFontFace*, ABI::Microsoft::Graphics::Canvas::Text::ICanvasFontFace*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IIterator`1<Microsoft.Graphics.Canvas.Text.CanvasFontFace>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Microsoft::Graphics::Canvas::Text::CanvasFontFace*> __FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_t;
#define __FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace ABI::Windows::Foundation::Collections::__FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_USE */



#ifndef DEF___FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_USE
#define DEF___FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("dadc03be-adec-5e2b-8056-e620ebd250a6"))
IIterable<ABI::Microsoft::Graphics::Canvas::Text::CanvasFontFace*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::Text::CanvasFontFace*, ABI::Microsoft::Graphics::Canvas::Text::ICanvasFontFace*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IIterable`1<Microsoft.Graphics.Canvas.Text.CanvasFontFace>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Microsoft::Graphics::Canvas::Text::CanvasFontFace*> __FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_t;
#define __FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace ABI::Windows::Foundation::Collections::__FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_USE */



#ifndef DEF___FIIterator_1_HSTRING_USE
#define DEF___FIIterator_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236"))
IIterator<HSTRING> : IIterator_impl<HSTRING>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IIterator`1<String>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<HSTRING> __FIIterator_1_HSTRING_t;
#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_HSTRING_USE */



#ifndef DEF___FIIterable_1_HSTRING_USE
#define DEF___FIIterable_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e"))
IIterable<HSTRING> : IIterable_impl<HSTRING>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IIterable`1<String>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<HSTRING> __FIIterable_1_HSTRING_t;
#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_HSTRING_USE */


namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    typedef struct CanvasCharacterRange CanvasCharacterRange;
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
                    typedef struct CanvasAnalyzedBidi CanvasAnalyzedBidi;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */


#ifndef DEF___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_USE
#define DEF___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9f5425b6-be6f-5f3d-9d65-ad8c61aa01de"))
IKeyValuePair<struct ABI::Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, struct ABI::Microsoft::Graphics::Canvas::Text::CanvasAnalyzedBidi> : IKeyValuePair_impl<struct ABI::Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, struct ABI::Microsoft::Graphics::Canvas::Text::CanvasAnalyzedBidi>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<Microsoft.Graphics.Canvas.Text.CanvasCharacterRange, Microsoft.Graphics.Canvas.Text.CanvasAnalyzedBidi>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<struct ABI::Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, struct ABI::Microsoft::Graphics::Canvas::Text::CanvasAnalyzedBidi> __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_t;
#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_USE */



#ifndef DEF___FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7e9530ef-eb03-5e8f-9d38-f2c62e31d4bc"))
IIterator<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi*> : IIterator_impl<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi*>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<Microsoft.Graphics.Canvas.Text.CanvasCharacterRange, Microsoft.Graphics.Canvas.Text.CanvasAnalyzedBidi>>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi*> __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_t;
#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_USE */



#ifndef DEF___FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("51271225-b352-5aaa-ae19-95d387c9b6b7"))
IIterable<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi*> : IIterable_impl<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi*>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<Microsoft.Graphics.Canvas.Text.CanvasCharacterRange, Microsoft.Graphics.Canvas.Text.CanvasAnalyzedBidi>>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi*> __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_t;
#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_USE */


namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    typedef struct CanvasAnalyzedGlyphOrientation CanvasAnalyzedGlyphOrientation;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */


#ifndef DEF___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_USE
#define DEF___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a8240806-1266-51ae-9276-0d6eb62f403b"))
IKeyValuePair<struct ABI::Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, struct ABI::Microsoft::Graphics::Canvas::Text::CanvasAnalyzedGlyphOrientation> : IKeyValuePair_impl<struct ABI::Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, struct ABI::Microsoft::Graphics::Canvas::Text::CanvasAnalyzedGlyphOrientation>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<Microsoft.Graphics.Canvas.Text.CanvasCharacterRange, Microsoft.Graphics.Canvas.Text.CanvasAnalyzedGlyphOrientation>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<struct ABI::Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, struct ABI::Microsoft::Graphics::Canvas::Text::CanvasAnalyzedGlyphOrientation> __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_t;
#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_USE */



#ifndef DEF___FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6fa01beb-a02e-57b4-975d-0662230315e9"))
IIterator<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation*> : IIterator_impl<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation*>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<Microsoft.Graphics.Canvas.Text.CanvasCharacterRange, Microsoft.Graphics.Canvas.Text.CanvasAnalyzedGlyphOrientation>>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation*> __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_t;
#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_USE */



#ifndef DEF___FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bc2186a2-f834-5c78-8d4c-ec4166c46b40"))
IIterable<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation*> : IIterable_impl<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation*>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<Microsoft.Graphics.Canvas.Text.CanvasCharacterRange, Microsoft.Graphics.Canvas.Text.CanvasAnalyzedGlyphOrientation>>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation*> __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_t;
#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_USE */


namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    typedef struct CanvasAnalyzedScript CanvasAnalyzedScript;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */


#ifndef DEF___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_USE
#define DEF___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f113a468-5320-5b3d-b976-1c12d95d71fe"))
IKeyValuePair<struct ABI::Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, struct ABI::Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript> : IKeyValuePair_impl<struct ABI::Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, struct ABI::Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<Microsoft.Graphics.Canvas.Text.CanvasCharacterRange, Microsoft.Graphics.Canvas.Text.CanvasAnalyzedScript>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<struct ABI::Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, struct ABI::Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript> __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_t;
#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_USE */



#ifndef DEF___FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d6dd13e4-d1e8-577c-bbcb-cf31b96f09ed"))
IIterator<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript*> : IIterator_impl<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript*>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<Microsoft.Graphics.Canvas.Text.CanvasCharacterRange, Microsoft.Graphics.Canvas.Text.CanvasAnalyzedScript>>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript*> __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_t;
#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_USE */



#ifndef DEF___FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4b15169a-c4b5-51d3-b6c8-79ec3e177871"))
IIterable<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript*> : IIterable_impl<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript*>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<Microsoft.Graphics.Canvas.Text.CanvasCharacterRange, Microsoft.Graphics.Canvas.Text.CanvasAnalyzedScript>>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript*> __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_t;
#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_USE */


namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    class CanvasNumberSubstitution;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */


#ifndef DEF___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_USE
#define DEF___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("93f9a2ab-5b51-5468-8b38-4693d96b4255"))
IKeyValuePair<struct ABI::Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, ABI::Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution*> : IKeyValuePair_impl<struct ABI::Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution*, ABI::Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitution*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<Microsoft.Graphics.Canvas.Text.CanvasCharacterRange, Microsoft.Graphics.Canvas.Text.CanvasNumberSubstitution>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<struct ABI::Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, ABI::Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitution*> __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_t;
#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_USE */



#ifndef DEF___FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c95c26dd-c066-543f-a3d4-a3fc9f0cad1a"))
IIterator<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution*> : IIterator_impl<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution*>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<Microsoft.Graphics.Canvas.Text.CanvasCharacterRange, Microsoft.Graphics.Canvas.Text.CanvasNumberSubstitution>>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution*> __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_t;
#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_USE */



#ifndef DEF___FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("27f7d15b-8c80-5fa3-a202-899cef70e002"))
IIterable<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution*> : IIterable_impl<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution*>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<Microsoft.Graphics.Canvas.Text.CanvasCharacterRange, Microsoft.Graphics.Canvas.Text.CanvasNumberSubstitution>>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution*> __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_t;
#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_USE */


namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    class CanvasScaledFont;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */


#ifndef DEF___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_USE
#define DEF___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("659fa7a9-d350-5c96-9eda-65d151127be6"))
IKeyValuePair<struct ABI::Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, ABI::Microsoft::Graphics::Canvas::Text::CanvasScaledFont*> : IKeyValuePair_impl<struct ABI::Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::Text::CanvasScaledFont*, ABI::Microsoft::Graphics::Canvas::Text::ICanvasScaledFont*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<Microsoft.Graphics.Canvas.Text.CanvasCharacterRange, Microsoft.Graphics.Canvas.Text.CanvasScaledFont>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<struct ABI::Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, ABI::Microsoft::Graphics::Canvas::Text::CanvasScaledFont*> __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_t;
#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_USE */



#ifndef DEF___FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("56051c10-f92f-5a6c-911e-367267245224"))
IIterator<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont*> : IIterator_impl<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont*>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<Microsoft.Graphics.Canvas.Text.CanvasCharacterRange, Microsoft.Graphics.Canvas.Text.CanvasScaledFont>>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont*> __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_t;
#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_USE */



#ifndef DEF___FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e13342d7-18ac-5a96-8f97-4ad9aa7cc211"))
IIterable<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont*> : IIterable_impl<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont*>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<Microsoft.Graphics.Canvas.Text.CanvasCharacterRange, Microsoft.Graphics.Canvas.Text.CanvasScaledFont>>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont*> __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_t;
#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_USE */


namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    class CanvasTypography;
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */


#ifndef DEF___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_USE
#define DEF___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3e238e5e-5b0e-519e-b8ee-9524d51e0376"))
IKeyValuePair<struct ABI::Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, ABI::Microsoft::Graphics::Canvas::Text::CanvasTypography*> : IKeyValuePair_impl<struct ABI::Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::Text::CanvasTypography*, ABI::Microsoft::Graphics::Canvas::Text::ICanvasTypography*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<Microsoft.Graphics.Canvas.Text.CanvasCharacterRange, Microsoft.Graphics.Canvas.Text.CanvasTypography>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<struct ABI::Microsoft::Graphics::Canvas::Text::CanvasCharacterRange, ABI::Microsoft::Graphics::Canvas::Text::CanvasTypography*> __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_t;
#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_USE */



#ifndef DEF___FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6bf99e32-7516-5e16-ad21-f83a89898c50"))
IIterator<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography*> : IIterator_impl<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography*>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<Microsoft.Graphics.Canvas.Text.CanvasCharacterRange, Microsoft.Graphics.Canvas.Text.CanvasTypography>>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography*> __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_t;
#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_USE */



#ifndef DEF___FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9101ecfa-8e8b-5236-b3c1-3ae419df1a4d"))
IIterable<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography*> : IIterable_impl<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography*>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<Microsoft.Graphics.Canvas.Text.CanvasCharacterRange, Microsoft.Graphics.Canvas.Text.CanvasTypography>>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography*> __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_t;
#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_USE */



#ifndef DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("60310303-49c5-52e6-abc6-a9b36eccc716"))
IKeyValuePair<HSTRING, HSTRING> : IKeyValuePair_impl<HSTRING, HSTRING>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, String>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING, HSTRING> __FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE */



#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("05eb86f1-7140-5517-b88d-cbaebe57e6b1"))
IIterator<__FIKeyValuePair_2_HSTRING_HSTRING*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_HSTRING*>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, String>>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_HSTRING*> __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE */



#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e9bdaaf0-cbf6-5c72-be90-29cbf3a1319b"))
IIterable<__FIKeyValuePair_2_HSTRING_HSTRING*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_HSTRING*>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, String>>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_HSTRING*> __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE */



#ifndef DEF___FIMapView_2_HSTRING_HSTRING_USE
#define DEF___FIMapView_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ac7f26f2-feb7-5b2a-8ac4-345bc62caede"))
IMapView<HSTRING, HSTRING> : IMapView_impl<HSTRING, HSTRING>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, String>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING, HSTRING> __FIMapView_2_HSTRING_HSTRING_t;
#define __FIMapView_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_HSTRING_USE */



#ifndef DEF___FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_USE
#define DEF___FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f90149d7-8a7e-5e74-a251-9e92f5a8084d"))
IVectorView<ABI::Microsoft::Graphics::Canvas::Text::CanvasFontFace*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Graphics::Canvas::Text::CanvasFontFace*, ABI::Microsoft::Graphics::Canvas::Text::ICanvasFontFace*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Microsoft.Graphics.Canvas.Text.CanvasFontFace>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Microsoft::Graphics::Canvas::Text::CanvasFontFace*> __FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_t;
#define __FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace ABI::Windows::Foundation::Collections::__FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_USE */



#ifndef DEF___FIVectorView_1_HSTRING_USE
#define DEF___FIVectorView_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e"))
IVectorView<HSTRING> : IVectorView_impl<HSTRING>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IVectorView`1<String>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<HSTRING> __FIVectorView_1_HSTRING_t;
#define __FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::__FIVectorView_1_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_HSTRING_USE */



#ifndef DEF___FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_USE
#define DEF___FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("67c4d9c7-c31e-51c1-ab1d-f8a0ebcd5552"))
IVectorView<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi*> : IVectorView_impl<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi*>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Collections.IKeyValuePair`2<Microsoft.Graphics.Canvas.Text.CanvasCharacterRange, Microsoft.Graphics.Canvas.Text.CanvasAnalyzedBidi>>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi*> __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_t;
#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi ABI::Windows::Foundation::Collections::__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_USE */



#ifndef DEF___FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_USE
#define DEF___FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ce1ccf50-cc60-5c33-98d5-fb6ea38131bd"))
IVectorView<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation*> : IVectorView_impl<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation*>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Collections.IKeyValuePair`2<Microsoft.Graphics.Canvas.Text.CanvasCharacterRange, Microsoft.Graphics.Canvas.Text.CanvasAnalyzedGlyphOrientation>>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation*> __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_t;
#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation ABI::Windows::Foundation::Collections::__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_USE */



#ifndef DEF___FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_USE
#define DEF___FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9b325f09-f744-53fd-acc7-d5e6fea523d7"))
IVectorView<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript*> : IVectorView_impl<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript*>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Collections.IKeyValuePair`2<Microsoft.Graphics.Canvas.Text.CanvasCharacterRange, Microsoft.Graphics.Canvas.Text.CanvasAnalyzedScript>>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript*> __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_t;
#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript ABI::Windows::Foundation::Collections::__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_USE */



#ifndef DEF___FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_USE
#define DEF___FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("80a1114f-758f-5110-baa8-f1884a7bb922"))
IVectorView<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution*> : IVectorView_impl<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution*>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Collections.IKeyValuePair`2<Microsoft.Graphics.Canvas.Text.CanvasCharacterRange, Microsoft.Graphics.Canvas.Text.CanvasNumberSubstitution>>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution*> __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_t;
#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution ABI::Windows::Foundation::Collections::__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_USE */



#ifndef DEF___FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_USE
#define DEF___FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f1eaee0a-1f12-5e87-9657-cb93e8827bb0"))
IVectorView<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont*> : IVectorView_impl<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont*>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Collections.IKeyValuePair`2<Microsoft.Graphics.Canvas.Text.CanvasCharacterRange, Microsoft.Graphics.Canvas.Text.CanvasScaledFont>>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont*> __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_t;
#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont ABI::Windows::Foundation::Collections::__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_USE */



#ifndef DEF___FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_USE
#define DEF___FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("08f216fc-38e5-5c04-bb90-ed0436cdf91d"))
IVectorView<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography*> : IVectorView_impl<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography*>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Collections.IKeyValuePair`2<Microsoft.Graphics.Canvas.Text.CanvasCharacterRange, Microsoft.Graphics.Canvas.Text.CanvasTypography>>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography*> __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_t;
#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography ABI::Windows::Foundation::Collections::__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_USE */


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
                typedef enum CanvasAntialiasing : int CanvasAntialiasing;
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
            namespace Text {
                typedef enum FontStretch : int FontStretch;
            } /* Text */
        } /* UI */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                typedef enum FontStyle : int FontStyle;
            } /* Text */
        } /* UI */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                typedef struct FontWeight FontWeight;
            } /* Text */
        } /* UI */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    typedef enum CanvasClusterProperties : unsigned int CanvasClusterProperties;
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
                    typedef enum CanvasDrawTextOptions : unsigned int CanvasDrawTextOptions;
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
                    typedef enum CanvasFontFileFormatType : int CanvasFontFileFormatType;
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
                    typedef enum CanvasFontInformation : int CanvasFontInformation;
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
                    typedef enum CanvasFontPropertyIdentifier : int CanvasFontPropertyIdentifier;
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
                    typedef enum CanvasFontSimulations : unsigned int CanvasFontSimulations;
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
                    typedef enum CanvasGlyphJustification : int CanvasGlyphJustification;
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
                    typedef enum CanvasHorizontalAlignment : int CanvasHorizontalAlignment;
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
                    typedef enum CanvasLineBreakCondition : int CanvasLineBreakCondition;
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
                    typedef enum CanvasLineSpacingMode : int CanvasLineSpacingMode;
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
                    typedef enum CanvasNumberSubstitutionMethod : int CanvasNumberSubstitutionMethod;
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
                    typedef enum CanvasOpticalAlignment : int CanvasOpticalAlignment;
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
                    typedef enum CanvasScriptShape : int CanvasScriptShape;
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
                    typedef enum CanvasTextDirection : int CanvasTextDirection;
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
                    typedef enum CanvasTextGridFit : int CanvasTextGridFit;
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
                    typedef enum CanvasTextRenderingMode : int CanvasTextRenderingMode;
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
                    typedef enum CanvasTextTrimmingGranularity : int CanvasTextTrimmingGranularity;
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
                    typedef enum CanvasTrimmingSign : int CanvasTrimmingSign;
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
                    typedef enum CanvasTypographyFeatureName : int CanvasTypographyFeatureName;
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
                    typedef enum CanvasVerticalAlignment : int CanvasVerticalAlignment;
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
                    typedef enum CanvasVerticalGlyphOrientation : int CanvasVerticalGlyphOrientation;
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
                    typedef enum CanvasWordWrapping : int CanvasWordWrapping;
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
                    typedef struct CanvasAnalyzedBreakpoint CanvasAnalyzedBreakpoint;
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
                    typedef struct CanvasClusterMetrics CanvasClusterMetrics;
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
                    typedef struct CanvasFontProperty CanvasFontProperty;
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
                    typedef struct CanvasGlyphMetrics CanvasGlyphMetrics;
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
                    typedef struct CanvasGlyphShaping CanvasGlyphShaping;
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
                    typedef struct CanvasJustificationOpportunity CanvasJustificationOpportunity;
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
                    typedef struct CanvasLineMetrics CanvasLineMetrics;
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
                    typedef struct CanvasScriptProperties CanvasScriptProperties;
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
                    typedef struct CanvasTextLayoutRegion CanvasTextLayoutRegion;
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
                    typedef struct CanvasTypographyFeature CanvasTypographyFeature;
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
                    typedef struct CanvasUnicodeRange CanvasUnicodeRange;
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
                    class CanvasFontSet;
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
                    class CanvasTextAnalyzer;
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

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasClusterProperties
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    enum CanvasClusterProperties : unsigned int
                    {
                        CanvasClusterProperties_None = 0,
                        CanvasClusterProperties_CanWrapLineAfter = 0x1,
                        CanvasClusterProperties_Whitespace = 0x2,
                        CanvasClusterProperties_Newline = 0x4,
                        CanvasClusterProperties_SoftHyphen = 0x8,
                        CanvasClusterProperties_RightToLeft = 0x10,
                    };

                    DEFINE_ENUM_FLAG_OPERATORS(CanvasClusterProperties)
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasDrawTextOptions
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    enum CanvasDrawTextOptions : unsigned int
                    {
                        CanvasDrawTextOptions_Default = 0,
                        CanvasDrawTextOptions_NoPixelSnap = 0x1,
                        CanvasDrawTextOptions_Clip = 0x2,
                        CanvasDrawTextOptions_EnableColorFont = 0x4,
                    };

                    DEFINE_ENUM_FLAG_OPERATORS(CanvasDrawTextOptions)
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasFontFileFormatType
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    enum CanvasFontFileFormatType : int
                    {
                        CanvasFontFileFormatType_Cff = 0,
                        CanvasFontFileFormatType_TrueType = 1,
                        CanvasFontFileFormatType_TrueTypeCollection = 2,
                        CanvasFontFileFormatType_Type1 = 3,
                        CanvasFontFileFormatType_Vector = 4,
                        CanvasFontFileFormatType_Bitmap = 5,
                        CanvasFontFileFormatType_Unknown = 6,
                        CanvasFontFileFormatType_RawCff = 7,
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasFontInformation
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    enum CanvasFontInformation : int
                    {
                        CanvasFontInformation_None = 0,
                        CanvasFontInformation_CopyrightNotice = 1,
                        CanvasFontInformation_VersionStrings = 2,
                        CanvasFontInformation_Trademark = 3,
                        CanvasFontInformation_Manufacturer = 4,
                        CanvasFontInformation_Designer = 5,
                        CanvasFontInformation_DesignerUrl = 6,
                        CanvasFontInformation_Description = 7,
                        CanvasFontInformation_FontVendorUrl = 8,
                        CanvasFontInformation_LicenseDescription = 9,
                        CanvasFontInformation_LicenseInfoUrl = 10,
                        CanvasFontInformation_Win32FamilyNames = 11,
                        CanvasFontInformation_Win32SubfamilyNames = 12,
                        CanvasFontInformation_PreferredFamilyNames = 13,
                        CanvasFontInformation_PreferredSubfamilyNames = 14,
                        CanvasFontInformation_SampleText = 15,
                        CanvasFontInformation_FullName = 16,
                        CanvasFontInformation_PostscriptName = 17,
                        CanvasFontInformation_PostscriptCidName = 18,
                        CanvasFontInformation_WwsFamilyName = 19,
                        CanvasFontInformation_DesignScriptLanguageTag = 20,
                        CanvasFontInformation_SupportedScriptLanguageTag = 21,
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasFontPropertyIdentifier
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    enum CanvasFontPropertyIdentifier : int
                    {
                        CanvasFontPropertyIdentifier_None = 0,
                        CanvasFontPropertyIdentifier_FamilyName = 1,
                        CanvasFontPropertyIdentifier_PreferredFamilyName = 2,
                        CanvasFontPropertyIdentifier_FaceName = 3,
                        CanvasFontPropertyIdentifier_FullName = 4,
                        CanvasFontPropertyIdentifier_Win32FamilyName = 5,
                        CanvasFontPropertyIdentifier_PostscriptName = 6,
                        CanvasFontPropertyIdentifier_DesignScriptLanguageTag = 7,
                        CanvasFontPropertyIdentifier_SupportedScriptLanguageTag = 8,
                        CanvasFontPropertyIdentifier_SemanticTag = 9,
                        CanvasFontPropertyIdentifier_Weight = 10,
                        CanvasFontPropertyIdentifier_Stretch = 11,
                        CanvasFontPropertyIdentifier_Style = 12,
                        CanvasFontPropertyIdentifier_Total = 13,
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasFontSimulations
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    enum CanvasFontSimulations : unsigned int
                    {
                        CanvasFontSimulations_None = 0,
                        CanvasFontSimulations_Bold = 0x1,
                        CanvasFontSimulations_Oblique = 0x2,
                    };

                    DEFINE_ENUM_FLAG_OPERATORS(CanvasFontSimulations)
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasGlyphJustification
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    enum CanvasGlyphJustification : int
                    {
                        CanvasGlyphJustification_None = 0,
                        CanvasGlyphJustification_ArabicBlank = 1,
                        CanvasGlyphJustification_Character = 2,
                        CanvasGlyphJustification_Blank = 4,
                        CanvasGlyphJustification_ArabicNormal = 7,
                        CanvasGlyphJustification_ArabicKashida = 8,
                        CanvasGlyphJustification_ArabicAlef = 9,
                        CanvasGlyphJustification_ArabicHa = 10,
                        CanvasGlyphJustification_ArabicRa = 11,
                        CanvasGlyphJustification_ArabicBa = 12,
                        CanvasGlyphJustification_ArabicBara = 13,
                        CanvasGlyphJustification_ArabicSeen = 14,
                        CanvasGlyphJustification_ArabicSeenM = 15,
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasGlyphOrientation
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    enum CanvasGlyphOrientation : int
                    {
                        CanvasGlyphOrientation_Upright = 0,
                        CanvasGlyphOrientation_Clockwise90Degrees = 1,
                        CanvasGlyphOrientation_Clockwise180Degrees = 2,
                        CanvasGlyphOrientation_Clockwise270Degrees = 3,
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasHorizontalAlignment
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    enum CanvasHorizontalAlignment : int
                    {
                        CanvasHorizontalAlignment_Left = 0,
                        CanvasHorizontalAlignment_Right = 1,
                        CanvasHorizontalAlignment_Center = 2,
                        CanvasHorizontalAlignment_Justified = 3,
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasLineBreakCondition
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    enum CanvasLineBreakCondition : int
                    {
                        CanvasLineBreakCondition_Neutral = 0,
                        CanvasLineBreakCondition_CanBreak = 1,
                        CanvasLineBreakCondition_CannotBreak = 2,
                        CanvasLineBreakCondition_MustBreak = 3,
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasLineSpacingMode
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    enum CanvasLineSpacingMode : int
                    {
                        CanvasLineSpacingMode_Default = 0,
                        CanvasLineSpacingMode_Uniform = 1,
                        CanvasLineSpacingMode_Proportional = 2,
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasNumberSubstitutionMethod
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    enum CanvasNumberSubstitutionMethod : int
                    {
                        CanvasNumberSubstitutionMethod_FromCulture = 0,
                        CanvasNumberSubstitutionMethod_Contextual = 1,
                        CanvasNumberSubstitutionMethod_Disabled = 2,
                        CanvasNumberSubstitutionMethod_National = 3,
                        CanvasNumberSubstitutionMethod_Traditional = 4,
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasOpticalAlignment
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    enum CanvasOpticalAlignment : int
                    {
                        CanvasOpticalAlignment_Default = 0,
                        CanvasOpticalAlignment_NoSideBearings = 1,
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasScriptShape
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    enum CanvasScriptShape : int
                    {
                        CanvasScriptShape_Default = 0,
                        CanvasScriptShape_NoVisual = 1,
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasTextAntialiasing
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    enum CanvasTextAntialiasing : int
                    {
                        CanvasTextAntialiasing_Auto = 0,
                        CanvasTextAntialiasing_ClearType = 1,
                        CanvasTextAntialiasing_Grayscale = 2,
                        CanvasTextAntialiasing_Aliased = 3,
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasTextDirection
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    enum CanvasTextDirection : int
                    {
                        CanvasTextDirection_LeftToRightThenTopToBottom = 0,
                        CanvasTextDirection_RightToLeftThenTopToBottom = 1,
                        CanvasTextDirection_LeftToRightThenBottomToTop = 2,
                        CanvasTextDirection_RightToLeftThenBottomToTop = 3,
                        CanvasTextDirection_TopToBottomThenLeftToRight = 4,
                        CanvasTextDirection_BottomToTopThenLeftToRight = 5,
                        CanvasTextDirection_TopToBottomThenRightToLeft = 6,
                        CanvasTextDirection_BottomToTopThenRightToLeft = 7,
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasTextGridFit
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    enum CanvasTextGridFit : int
                    {
                        CanvasTextGridFit_Default = 0,
                        CanvasTextGridFit_Disable = 1,
                        CanvasTextGridFit_Enable = 2,
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasTextMeasuringMode
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    enum CanvasTextMeasuringMode : int
                    {
                        CanvasTextMeasuringMode_Natural = 0,
                        CanvasTextMeasuringMode_GdiClassic = 1,
                        CanvasTextMeasuringMode_GdiNatural = 2,
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasTextRenderingMode
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    enum CanvasTextRenderingMode : int
                    {
                        CanvasTextRenderingMode_Default = 0,
                        CanvasTextRenderingMode_Aliased = 1,
                        CanvasTextRenderingMode_GdiClassic = 2,
                        CanvasTextRenderingMode_GdiNatural = 3,
                        CanvasTextRenderingMode_Natural = 4,
                        CanvasTextRenderingMode_NaturalSymmetric = 5,
                        CanvasTextRenderingMode_Outline = 6,
                        CanvasTextRenderingMode_NaturalSymmetricDownsampled = 7,
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasTextTrimmingGranularity
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    enum CanvasTextTrimmingGranularity : int
                    {
                        CanvasTextTrimmingGranularity_None = 0,
                        CanvasTextTrimmingGranularity_Character = 1,
                        CanvasTextTrimmingGranularity_Word = 2,
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasTrimmingSign
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    enum CanvasTrimmingSign : int
                    {
                        CanvasTrimmingSign_None = 0,
                        CanvasTrimmingSign_Ellipsis = 1,
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasTypographyFeatureName
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    enum CanvasTypographyFeatureName : int
                    {
                        CanvasTypographyFeatureName_None = 0,
                        CanvasTypographyFeatureName_Default = 1953261156,
                        CanvasTypographyFeatureName_VerticalWriting = 1953654134,
                        CanvasTypographyFeatureName_VerticalAlternatesAndRotation = 846492278,
                        CanvasTypographyFeatureName_AlternativeFractions = 1668441697,
                        CanvasTypographyFeatureName_PetiteCapitalsFromCapitals = 1668297315,
                        CanvasTypographyFeatureName_SmallCapitalsFromCapitals = 1668493923,
                        CanvasTypographyFeatureName_ContextualAlternates = 1953259875,
                        CanvasTypographyFeatureName_CaseSensitiveForms = 1702060387,
                        CanvasTypographyFeatureName_GlyphCompositionDecomposition = 1886217059,
                        CanvasTypographyFeatureName_ContextualLigatures = 1734962275,
                        CanvasTypographyFeatureName_CapitalSpacing = 1886613603,
                        CanvasTypographyFeatureName_ContextualSwash = 1752658787,
                        CanvasTypographyFeatureName_CursivePositioning = 1936880995,
                        CanvasTypographyFeatureName_DiscretionaryLigatures = 1734962276,
                        CanvasTypographyFeatureName_ExpertForms = 1953527909,
                        CanvasTypographyFeatureName_Fractions = 1667330662,
                        CanvasTypographyFeatureName_FullWidth = 1684633446,
                        CanvasTypographyFeatureName_HalfForms = 1718378856,
                        CanvasTypographyFeatureName_HalantForms = 1852596584,
                        CanvasTypographyFeatureName_AlternateHalfWidth = 1953259880,
                        CanvasTypographyFeatureName_HistoricalForms = 1953720680,
                        CanvasTypographyFeatureName_HorizontalKanaAlternates = 1634626408,
                        CanvasTypographyFeatureName_HistoricalLigatures = 1734962280,
                        CanvasTypographyFeatureName_HalfWidth = 1684633448,
                        CanvasTypographyFeatureName_HojoKanjiForms = 1869246312,
                        CanvasTypographyFeatureName_Jis04Forms = 875589738,
                        CanvasTypographyFeatureName_Jis78Forms = 943157354,
                        CanvasTypographyFeatureName_Jis83Forms = 859336810,
                        CanvasTypographyFeatureName_Jis90Forms = 809070698,
                        CanvasTypographyFeatureName_Kerning = 1852990827,
                        CanvasTypographyFeatureName_StandardLigatures = 1634167148,
                        CanvasTypographyFeatureName_LiningFigures = 1836412524,
                        CanvasTypographyFeatureName_LocalizedForms = 1818455916,
                        CanvasTypographyFeatureName_MarkPositioning = 1802658157,
                        CanvasTypographyFeatureName_MathematicalGreek = 1802659693,
                        CanvasTypographyFeatureName_MarkToMarkPositioning = 1802333037,
                        CanvasTypographyFeatureName_AlternateAnnotationForms = 1953259886,
                        CanvasTypographyFeatureName_NlcKanjiForms = 1801677934,
                        CanvasTypographyFeatureName_OldStyleFigures = 1836412527,
                        CanvasTypographyFeatureName_Ordinals = 1852076655,
                        CanvasTypographyFeatureName_ProportionalAlternateWidth = 1953259888,
                        CanvasTypographyFeatureName_PetiteCapitals = 1885430640,
                        CanvasTypographyFeatureName_ProportionalFigures = 1836412528,
                        CanvasTypographyFeatureName_ProportionalWidths = 1684633456,
                        CanvasTypographyFeatureName_QuarterWidths = 1684633457,
                        CanvasTypographyFeatureName_RequiredLigatures = 1734962290,
                        CanvasTypographyFeatureName_RubyNotationForms = 2036495730,
                        CanvasTypographyFeatureName_StylisticAlternates = 1953259891,
                        CanvasTypographyFeatureName_ScientificInferiors = 1718511987,
                        CanvasTypographyFeatureName_SmallCapitals = 1885564275,
                        CanvasTypographyFeatureName_SimplifiedForms = 1819307379,
                        CanvasTypographyFeatureName_StylisticSet1 = 825258867,
                        CanvasTypographyFeatureName_StylisticSet2 = 842036083,
                        CanvasTypographyFeatureName_StylisticSet3 = 858813299,
                        CanvasTypographyFeatureName_StylisticSet4 = 875590515,
                        CanvasTypographyFeatureName_StylisticSet5 = 892367731,
                        CanvasTypographyFeatureName_StylisticSet6 = 909144947,
                        CanvasTypographyFeatureName_StylisticSet7 = 925922163,
                        CanvasTypographyFeatureName_StylisticSet8 = 942699379,
                        CanvasTypographyFeatureName_StylisticSet9 = 959476595,
                        CanvasTypographyFeatureName_StylisticSet10 = 808547187,
                        CanvasTypographyFeatureName_StylisticSet11 = 825324403,
                        CanvasTypographyFeatureName_StylisticSet12 = 842101619,
                        CanvasTypographyFeatureName_StylisticSet13 = 858878835,
                        CanvasTypographyFeatureName_StylisticSet14 = 875656051,
                        CanvasTypographyFeatureName_StylisticSet15 = 892433267,
                        CanvasTypographyFeatureName_StylisticSet16 = 909210483,
                        CanvasTypographyFeatureName_StylisticSet17 = 925987699,
                        CanvasTypographyFeatureName_StylisticSet18 = 942764915,
                        CanvasTypographyFeatureName_StylisticSet19 = 959542131,
                        CanvasTypographyFeatureName_StylisticSet20 = 808612723,
                        CanvasTypographyFeatureName_Subscript = 1935832435,
                        CanvasTypographyFeatureName_Superscript = 1936749939,
                        CanvasTypographyFeatureName_Swash = 1752397683,
                        CanvasTypographyFeatureName_Titling = 1819568500,
                        CanvasTypographyFeatureName_TraditionalNameForms = 1835101812,
                        CanvasTypographyFeatureName_TabularFigures = 1836412532,
                        CanvasTypographyFeatureName_TraditionalForms = 1684107892,
                        CanvasTypographyFeatureName_ThirdWidths = 1684633460,
                        CanvasTypographyFeatureName_Unicase = 1667853941,
                        CanvasTypographyFeatureName_SlashedZero = 1869768058,
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasVerticalAlignment
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    enum CanvasVerticalAlignment : int
                    {
                        CanvasVerticalAlignment_Top = 0,
                        CanvasVerticalAlignment_Bottom = 1,
                        CanvasVerticalAlignment_Center = 2,
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasVerticalGlyphOrientation
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    enum CanvasVerticalGlyphOrientation : int
                    {
                        CanvasVerticalGlyphOrientation_Default = 0,
                        CanvasVerticalGlyphOrientation_Stacked = 1,
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasWordWrapping
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    enum CanvasWordWrapping : int
                    {
                        CanvasWordWrapping_Wrap = 0,
                        CanvasWordWrapping_NoWrap = 1,
                        CanvasWordWrapping_EmergencyBreak = 2,
                        CanvasWordWrapping_WholeWord = 3,
                        CanvasWordWrapping_Character = 4,
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasAnalyzedBidi
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    struct CanvasAnalyzedBidi
                    {
                        UINT32 ExplicitLevel;
                        UINT32 ResolvedLevel;
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasAnalyzedBreakpoint
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    struct CanvasAnalyzedBreakpoint
                    {
                        ABI::Microsoft::Graphics::Canvas::Text::CanvasLineBreakCondition BreakBefore;
                        ABI::Microsoft::Graphics::Canvas::Text::CanvasLineBreakCondition BreakAfter;
                        boolean IsWhitespace;
                        boolean IsSoftHyphen;
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasAnalyzedGlyphOrientation
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    struct CanvasAnalyzedGlyphOrientation
                    {
                        ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation GlyphOrientation;
                        UINT32 AdjustedBidiLevel;
                        boolean IsSideways;
                        boolean IsRightToLeft;
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasAnalyzedScript
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    struct CanvasAnalyzedScript
                    {
                        INT32 ScriptIdentifier;
                        ABI::Microsoft::Graphics::Canvas::Text::CanvasScriptShape Shape;
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasCharacterRange
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    struct CanvasCharacterRange
                    {
                        INT32 CharacterIndex;
                        INT32 CharacterCount;
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasClusterMetrics
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    struct CanvasClusterMetrics
                    {
                        INT32 CharacterCount;
                        FLOAT Width;
                        ABI::Microsoft::Graphics::Canvas::Text::CanvasClusterProperties Properties;
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasFontProperty
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    struct CanvasFontProperty
                    {
                        ABI::Microsoft::Graphics::Canvas::Text::CanvasFontPropertyIdentifier Identifier;
                        HSTRING Value;
                        HSTRING Locale;
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasGlyph
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    struct CanvasGlyph
                    {
                        INT32 Index;
                        FLOAT Advance;
                        FLOAT AdvanceOffset;
                        FLOAT AscenderOffset;
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasGlyphMetrics
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    struct CanvasGlyphMetrics
                    {
                        FLOAT LeftSideBearing;
                        FLOAT AdvanceWidth;
                        FLOAT RightSideBearing;
                        FLOAT TopSideBearing;
                        FLOAT AdvanceHeight;
                        FLOAT BottomSideBearing;
                        FLOAT VerticalOrigin;
                        ABI::Windows::Foundation::Rect DrawBounds;
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasGlyphShaping
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    struct CanvasGlyphShaping
                    {
                        ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyphJustification Justification;
                        boolean IsClusterStart;
                        boolean IsDiacritic;
                        boolean IsZeroWidthSpace;
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasJustificationOpportunity
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    struct CanvasJustificationOpportunity
                    {
                        FLOAT ExpansionMinimum;
                        FLOAT ExpansionMaximum;
                        FLOAT CompressionMaximum;
                        BYTE ExpansionPriority;
                        BYTE CompressionPriority;
                        boolean AllowResidualExpansion;
                        boolean AllowResidualCompression;
                        boolean ApplyToLeadingEdge;
                        boolean ApplyToTrailingEdge;
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasLineMetrics
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    struct CanvasLineMetrics
                    {
                        INT32 CharacterCount;
                        INT32 TrailingWhitespaceCount;
                        INT32 TerminalNewlineCount;
                        FLOAT Height;
                        FLOAT Baseline;
                        boolean IsTrimmed;
                        FLOAT LeadingWhitespaceBefore;
                        FLOAT LeadingWhitespaceAfter;
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasScriptProperties
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    struct CanvasScriptProperties
                    {
                        HSTRING IsoScriptCode;
                        INT32 IsoScriptNumber;
                        INT32 ClusterLookahead;
                        HSTRING JustificationCharacter;
                        boolean RestrictCaretToClusters;
                        boolean UsesWordDividers;
                        boolean IsDiscreteWriting;
                        boolean IsBlockWriting;
                        boolean IsDistributedWithinCluster;
                        boolean IsConnectedWriting;
                        boolean IsCursiveWriting;
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasTextLayoutRegion
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    struct CanvasTextLayoutRegion
                    {
                        INT32 CharacterIndex;
                        INT32 CharacterCount;
                        ABI::Windows::Foundation::Rect LayoutBounds;
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasTypographyFeature
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    struct CanvasTypographyFeature
                    {
                        ABI::Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName Name;
                        UINT32 Parameter;
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasUnicodeRange
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    struct CanvasUnicodeRange
                    {
                        UINT32 First;
                        UINT32 Last;
                    };
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasFontFace
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasFontFace
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasFontFace[] = L"Microsoft.Graphics.Canvas.Text.ICanvasFontFace";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    MIDL_INTERFACE("5199d129-4ef9-4dee-b74c-4dc910201a7f")
                    ICanvasFontFace : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetRecommendedRenderingMode(
                            FLOAT fontSize,
                            FLOAT dpi,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode measuringMode,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParameters* renderingParameters,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode* renderingMode
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetRecommendedRenderingModeWithAllOptions(
                            FLOAT fontSize,
                            FLOAT dpi,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode measuringMode,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParameters* renderingParameters,
                            ABI::Windows::Foundation::Numerics::Matrix3x2 transform,
                            boolean isSideways,
                            ABI::Microsoft::Graphics::Canvas::CanvasAntialiasing outlineThreshold,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode* renderingMode
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetRecommendedGridFit(
                            FLOAT fontSize,
                            FLOAT dpi,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode measuringMode,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParameters* renderingParameters,
                            ABI::Windows::Foundation::Numerics::Matrix3x2 transform,
                            boolean isSideways,
                            ABI::Microsoft::Graphics::Canvas::CanvasAntialiasing outlineThreshold,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextGridFit* gridFit
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_GlyphBox(
                            ABI::Windows::Foundation::Rect* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_SubscriptPosition(
                            ABI::Windows::Foundation::Numerics::Vector2* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_SubscriptSize(
                            ABI::Windows::Foundation::Size* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_SuperscriptPosition(
                            ABI::Windows::Foundation::Numerics::Vector2* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_SuperscriptSize(
                            ABI::Windows::Foundation::Size* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_HasTypographicMetrics(
                            boolean* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Ascent(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Descent(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_LineGap(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_CapHeight(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_LowercaseLetterHeight(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_UnderlinePosition(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_UnderlineThickness(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_StrikethroughPosition(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_StrikethroughThickness(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_CaretSlopeRise(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_CaretSlopeRun(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_CaretOffset(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_UnicodeRanges(
                            UINT32* valueElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasUnicodeRange** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_IsMonospaced(
                            boolean* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetVerticalGlyphVariants(
                            UINT32 inputElementsLength,
                            INT32* inputElements,
                            UINT32* outputElementsLength,
                            INT32** outputElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_HasVerticalGlyphVariants(
                            boolean* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_FileFormatType(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasFontFileFormatType* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Simulations(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasFontSimulations* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_IsSymbolFont(
                            boolean* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_GlyphCount(
                            UINT32* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetGlyphIndices(
                            UINT32 inputElementsLength,
                            UINT32* inputElements,
                            UINT32* outputElementsLength,
                            INT32** outputElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetGlyphMetrics(
                            UINT32 inputElementsLength,
                            INT32* inputElements,
                            boolean isSideways,
                            UINT32* outputElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyphMetrics** outputElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetGdiCompatibleGlyphMetrics(
                            FLOAT fontSize,
                            FLOAT dpi,
                            ABI::Windows::Foundation::Numerics::Matrix3x2 transform,
                            boolean useGdiNatural,
                            UINT32 inputElementsLength,
                            INT32* inputElements,
                            boolean isSideways,
                            UINT32* outputElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyphMetrics** outputElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Weight(
                            ABI::Windows::UI::Text::FontWeight* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Stretch(
                            ABI::Windows::UI::Text::FontStretch* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Style(
                            ABI::Windows::UI::Text::FontStyle* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_FamilyNames(
                            __FIMapView_2_HSTRING_HSTRING** values
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_FaceNames(
                            __FIMapView_2_HSTRING_HSTRING** values
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetInformationalStrings(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasFontInformation fontInformation,
                            __FIMapView_2_HSTRING_HSTRING** values
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE HasCharacter(
                            UINT32 unicodeValue,
                            boolean* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetGlyphRunBounds(
                            ABI::Microsoft::Graphics::Canvas::ICanvasDrawingSession* drawingSession,
                            ABI::Windows::Foundation::Numerics::Vector2 point,
                            FLOAT fontSize,
                            UINT32 glyphsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyph* glyphs,
                            boolean isSideways,
                            UINT32 bidiLevel,
                            ABI::Windows::Foundation::Rect* bounds
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetGlyphRunBoundsWithMeasuringMode(
                            ABI::Microsoft::Graphics::Canvas::ICanvasDrawingSession* drawingSession,
                            ABI::Windows::Foundation::Numerics::Vector2 point,
                            FLOAT fontSize,
                            UINT32 glyphsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyph* glyphs,
                            boolean isSideways,
                            UINT32 bidiLevel,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode measuringMode,
                            ABI::Windows::Foundation::Rect* bounds
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Panose(
                            UINT32* valueElementsLength,
                            BYTE** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetSupportedTypographicFeatureNames(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript script,
                            UINT32* valueElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetSupportedTypographicFeatureNamesWithLocale(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript script,
                            HSTRING locale,
                            UINT32* valueElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetTypographicFeatureGlyphSupport(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript script,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName typographicFeatureName,
                            UINT32 glyphsElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyph* glyphsElements,
                            UINT32* valueElementsLength,
                            boolean** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetTypographicFeatureGlyphSupportWithLocale(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript script,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName typographicFeatureName,
                            UINT32 glyphsElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyph* glyphsElements,
                            HSTRING locale,
                            UINT32* valueElementsLength,
                            boolean** valueElements
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasFontFace = _uuidof(ICanvasFontFace);
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasFontSet
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasFontSet
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasFontSet[] = L"Microsoft.Graphics.Canvas.Text.ICanvasFontSet";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    MIDL_INTERFACE("0a5bfb92-1f3c-459f-9d7e-a6289dd093c0")
                    ICanvasFontSet : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_Fonts(
                            __FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace** value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryFindFontFace(
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasFontFace* fontFace,
                            INT32* index,
                            boolean* succeeded
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetMatchingFontsFromProperties(
                            UINT32 propertyElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasFontProperty* propertyElements,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasFontSet** matchingFonts
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetMatchingFontsFromWwsFamily(
                            HSTRING familyName,
                            ABI::Windows::UI::Text::FontWeight weight,
                            ABI::Windows::UI::Text::FontStretch stretch,
                            ABI::Windows::UI::Text::FontStyle style,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasFontSet** matchingFonts
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CountFontsMatchingProperty(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasFontProperty property,
                            UINT32* count
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetPropertyValuesFromIndex(
                            UINT32 fontIndex,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasFontPropertyIdentifier propertyIdentifier,
                            __FIMapView_2_HSTRING_HSTRING** values
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetPropertyValuesFromIdentifier(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasFontPropertyIdentifier propertyIdentifier,
                            HSTRING preferredLocaleNames,
                            UINT32* valueElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasFontProperty** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetPropertyValues(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasFontPropertyIdentifier propertyIdentifier,
                            UINT32* valueElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasFontProperty** valueElements
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasFontSet = _uuidof(ICanvasFontSet);
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasFontSetFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasFontSet
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasFontSetFactory[] = L"Microsoft.Graphics.Canvas.Text.ICanvasFontSetFactory";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    MIDL_INTERFACE("3c9c9bda-70f9-4ff9-aab2-3b42923286ee")
                    ICanvasFontSetFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            ABI::Windows::Foundation::IUriRuntimeClass* uri,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasFontSet** fontSet
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasFontSetFactory = _uuidof(ICanvasFontSetFactory);
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasFontSetStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasFontSet
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasFontSetStatics[] = L"Microsoft.Graphics.Canvas.Text.ICanvasFontSetStatics";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    MIDL_INTERFACE("5f4275ce-bcfa-48c5-9e67-fbe9866d4924")
                    ICanvasFontSetStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetSystemFontSet(
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasFontSet** fontSet
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasFontSetStatics = _uuidof(ICanvasFontSetStatics);
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasNumberSubstitution
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasNumberSubstitution
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasNumberSubstitution[] = L"Microsoft.Graphics.Canvas.Text.ICanvasNumberSubstitution";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    MIDL_INTERFACE("c81a67ad-0639-4f8f-878b-d937f8a14293")
                    ICanvasNumberSubstitution : public IInspectable
                    {
                    public:
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasNumberSubstitution = _uuidof(ICanvasNumberSubstitution);
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasNumberSubstitutionFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasNumberSubstitution
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasNumberSubstitutionFactory[] = L"Microsoft.Graphics.Canvas.Text.ICanvasNumberSubstitutionFactory";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    MIDL_INTERFACE("7496a822-c781-4eb0-aafb-c078e7fa8e24")
                    ICanvasNumberSubstitutionFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitutionMethod method,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitution** canvasNumberSubstitution
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateWithLocaleAndIgnoreOverrides(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasNumberSubstitutionMethod method,
                            HSTRING localeName,
                            boolean ignoreEnvironmentOverrides,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitution** canvasNumberSubstitution
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasNumberSubstitutionFactory = _uuidof(ICanvasNumberSubstitutionFactory);
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasScaledFont
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasScaledFont
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasScaledFont[] = L"Microsoft.Graphics.Canvas.Text.ICanvasScaledFont";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    MIDL_INTERFACE("bbc4f8d2-eb2b-45f1-ac2a-cfc1f598bae3")
                    ICanvasScaledFont : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_FontFace(
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasFontFace** value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_ScaleFactor(
                            FLOAT* value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasScaledFont = _uuidof(ICanvasScaledFont);
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasTextAnalyzer
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasTextAnalyzer
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzer[] = L"Microsoft.Graphics.Canvas.Text.ICanvasTextAnalyzer";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    MIDL_INTERFACE("4298f3d1-645b-40e3-b91b-81986d767fc0")
                    ICanvasTextAnalyzer : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetFontsUsingSystemFontSet(
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextFormat* textFormat,
                            __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont** values
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetFonts(
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextFormat* textFormat,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasFontSet* fontSet,
                            __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont** values
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetBidi(
                            __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi** values
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetBidiWithLocale(
                            HSTRING locale,
                            __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi** values
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetBreakpoints(
                            UINT32* valueElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasAnalyzedBreakpoint** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetBreakpointsWithLocale(
                            HSTRING locale,
                            UINT32* valueElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasAnalyzedBreakpoint** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetNumberSubstitutions(
                            __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution** values
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetScript(
                            __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript** values
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetScriptWithLocale(
                            HSTRING locale,
                            __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript** values
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetGlyphOrientations(
                            __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation** values
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetGlyphOrientationsWithLocale(
                            HSTRING locale,
                            __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation** values
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetScriptProperties(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript analyzedScript,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasScriptProperties* scriptProperties
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetGlyphs(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasCharacterRange characterRange,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasFontFace* fontFace,
                            FLOAT fontSize,
                            boolean isSideways,
                            boolean isRightToLeft,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript script,
                            UINT32* valueElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyph** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetGlyphsWithAllOptions(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasCharacterRange characterRange,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasFontFace* fontFace,
                            FLOAT fontSize,
                            boolean isSideways,
                            boolean isRightToLeft,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript script,
                            HSTRING locale,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitution* numberSubstitution,
                            __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* typographyRanges,
                            UINT32* clusterMapIndicesElementsLength,
                            INT32** clusterMapIndicesElements,
                            UINT32* isShapedAloneGlyphsElementsLength,
                            boolean** isShapedAloneGlyphsElements,
                            UINT32* glyphShapingResultsElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyphShaping** glyphShapingResultsElements,
                            UINT32* valueElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyph** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetJustificationOpportunities(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasCharacterRange characterRange,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasFontFace* fontFace,
                            FLOAT fontSize,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript script,
                            UINT32 clusterMapIndicesElementsLength,
                            INT32* clusterMapIndicesElements,
                            UINT32 glyphShapingResultsElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyphShaping* glyphShapingResultsElements,
                            UINT32* valueElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasJustificationOpportunity** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ApplyJustificationOpportunities(
                            FLOAT lineWidth,
                            UINT32 justificationOpportunitiesElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasJustificationOpportunity* justificationOpportunitiesElements,
                            UINT32 sourceGlyphsElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyph* sourceGlyphsElements,
                            UINT32* valueElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyph** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AddGlyphsAfterJustification(
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasFontFace* fontFace,
                            FLOAT fontSize,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript script,
                            UINT32 clusterMapIndicesElementsLength,
                            INT32* clusterMapIndicesElements,
                            UINT32 originalGlyphsElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyph* originalGlyphsElements,
                            UINT32 justifiedGlyphsElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyph* justifiedGlyphsElements,
                            UINT32 glyphShapingResultsElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyphShaping* glyphShapingResultsElements,
                            UINT32* valueElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyph** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AddGlyphsAfterJustificationWithClusterMap(
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasFontFace* fontFace,
                            FLOAT fontSize,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasAnalyzedScript script,
                            UINT32 clusterMapIndicesElementsLength,
                            INT32* clusterMapIndicesElements,
                            UINT32 originalGlyphsElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyph* originalGlyphsElements,
                            UINT32 justifiedGlyphsElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyph* justifiedGlyphsElements,
                            UINT32 glyphShapingResultsElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyphShaping* glyphShapingResultsElements,
                            UINT32* outputClusterMapIndicesElementsLength,
                            INT32** outputClusterMapIndicesElements,
                            UINT32* valueElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyph** valueElements
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasTextAnalyzer = _uuidof(ICanvasTextAnalyzer);
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasTextAnalyzerFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasTextAnalyzer
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzerFactory[] = L"Microsoft.Graphics.Canvas.Text.ICanvasTextAnalyzerFactory";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    MIDL_INTERFACE("521e433f-f698-44c0-8d7f-fe374fe539e1")
                    ICanvasTextAnalyzerFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            HSTRING text,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextDirection textDirection,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer** canvasTextAnalyzer
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateWithNumberSubstitutionAndVerticalGlyphOrientationAndBidiLevel(
                            HSTRING text,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextDirection textDirection,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitution* numberSubstitution,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation verticalGlyphOrientation,
                            UINT32 bidiLevel,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer** canvasTextAnalyzer
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateWithOptions(
                            HSTRING text,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextDirection textDirection,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzerOptions* options,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextAnalyzer** canvasTextAnalyzer
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasTextAnalyzerFactory = _uuidof(ICanvasTextAnalyzerFactory);
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasTextAnalyzerOptions
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzerOptions[] = L"Microsoft.Graphics.Canvas.Text.ICanvasTextAnalyzerOptions";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    MIDL_INTERFACE("31f2406a-8c5f-4e12-8bd6-cfbbc7214d02")
                    ICanvasTextAnalyzerOptions : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetLocaleName(
                            INT32 characterIndex,
                            INT32* characterCount,
                            HSTRING* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetNumberSubstitution(
                            INT32 characterIndex,
                            INT32* characterCount,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasNumberSubstitution** value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetVerticalGlyphOrientation(
                            INT32 characterIndex,
                            INT32* characterCount,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetBidiLevel(
                            INT32 characterIndex,
                            INT32* characterCount,
                            UINT32* value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasTextAnalyzerOptions = _uuidof(ICanvasTextAnalyzerOptions);
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasTextFormat
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasTextFormat
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat[] = L"Microsoft.Graphics.Canvas.Text.ICanvasTextFormat";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    MIDL_INTERFACE("af61bfdc-eabb-4d38-ba1b-afb340612d33")
                    ICanvasTextFormat : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_Direction(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextDirection* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_Direction(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextDirection value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_FontFamily(
                            HSTRING* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_FontFamily(
                            HSTRING value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_FontSize(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_FontSize(
                            FLOAT value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_FontStretch(
                            ABI::Windows::UI::Text::FontStretch* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_FontStretch(
                            ABI::Windows::UI::Text::FontStretch value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_FontStyle(
                            ABI::Windows::UI::Text::FontStyle* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_FontStyle(
                            ABI::Windows::UI::Text::FontStyle value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_FontWeight(
                            ABI::Windows::UI::Text::FontWeight* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_FontWeight(
                            ABI::Windows::UI::Text::FontWeight value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_IncrementalTabStop(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_IncrementalTabStop(
                            FLOAT value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_LineSpacing(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_LineSpacing(
                            FLOAT value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_LineSpacingBaseline(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_LineSpacingBaseline(
                            FLOAT value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_LocaleName(
                            HSTRING* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_LocaleName(
                            HSTRING value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_VerticalAlignment(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasVerticalAlignment* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_VerticalAlignment(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasVerticalAlignment value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_HorizontalAlignment(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasHorizontalAlignment* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_HorizontalAlignment(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasHorizontalAlignment value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_TrimmingGranularity(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextTrimmingGranularity* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_TrimmingGranularity(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextTrimmingGranularity value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_TrimmingDelimiter(
                            HSTRING* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_TrimmingDelimiter(
                            HSTRING value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_TrimmingDelimiterCount(
                            INT32* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_TrimmingDelimiterCount(
                            INT32 value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_WordWrapping(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasWordWrapping* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_WordWrapping(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasWordWrapping value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Options(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_Options(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_VerticalGlyphOrientation(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_VerticalGlyphOrientation(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_OpticalAlignment(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasOpticalAlignment* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_OpticalAlignment(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasOpticalAlignment value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_LastLineWrapping(
                            boolean* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_LastLineWrapping(
                            boolean value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_LineSpacingMode(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasLineSpacingMode* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_LineSpacingMode(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasLineSpacingMode value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_TrimmingSign(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTrimmingSign* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_TrimmingSign(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTrimmingSign value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_CustomTrimmingSign(
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject** value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_CustomTrimmingSign(
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject* value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasTextFormat = _uuidof(ICanvasTextFormat);
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasTextFormatStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasTextFormat
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasTextFormatStatics[] = L"Microsoft.Graphics.Canvas.Text.ICanvasTextFormatStatics";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    MIDL_INTERFACE("8a927515-33fc-4c92-a6aa-94a8f29c140b")
                    ICanvasTextFormatStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetSystemFontFamilies(
                            UINT32* valueElementsLength,
                            HSTRING** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetSystemFontFamiliesFromLocaleList(
                            __FIVectorView_1_HSTRING* localeList,
                            UINT32* valueElementsLength,
                            HSTRING** valueElements
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasTextFormatStatics = _uuidof(ICanvasTextFormatStatics);
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasTextInlineObject
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasTextInlineObject[] = L"Microsoft.Graphics.Canvas.Text.ICanvasTextInlineObject";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    MIDL_INTERFACE("7a89ee99-ce2a-47fa-9dd2-0a6825f6053f")
                    ICanvasTextInlineObject : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Draw(
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer* textRenderer,
                            ABI::Windows::Foundation::Numerics::Vector2 point,
                            boolean isSideways,
                            boolean isRightToLeft,
                            IInspectable* brush
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Size(
                            ABI::Windows::Foundation::Size* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Baseline(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_SupportsSideways(
                            boolean* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_DrawBounds(
                            ABI::Windows::Foundation::Rect* bounds
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_BreakBefore(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasLineBreakCondition* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_BreakAfter(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasLineBreakCondition* value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasTextInlineObject = _uuidof(ICanvasTextInlineObject);
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasTextLayout
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasTextLayout
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout[] = L"Microsoft.Graphics.Canvas.Text.ICanvasTextLayout";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    MIDL_INTERFACE("bae63e54-48ae-4446-a2c7-b6ef93806c20")
                    ICanvasTextLayout : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetFormatChangeIndices(
                            UINT32* stopsLength,
                            INT32** stops
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Direction(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextDirection* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_Direction(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextDirection value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_DefaultFontFamily(
                            HSTRING* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_DefaultFontSize(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_DefaultFontStretch(
                            ABI::Windows::UI::Text::FontStretch* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_DefaultFontStyle(
                            ABI::Windows::UI::Text::FontStyle* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_DefaultFontWeight(
                            ABI::Windows::UI::Text::FontWeight* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_IncrementalTabStop(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_IncrementalTabStop(
                            FLOAT value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_LineSpacing(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_LineSpacing(
                            FLOAT value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_LineSpacingBaseline(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_LineSpacingBaseline(
                            FLOAT value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_DefaultLocaleName(
                            HSTRING* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_VerticalAlignment(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasVerticalAlignment* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_VerticalAlignment(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasVerticalAlignment value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_HorizontalAlignment(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasHorizontalAlignment* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_HorizontalAlignment(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasHorizontalAlignment value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_TrimmingGranularity(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextTrimmingGranularity* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_TrimmingGranularity(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextTrimmingGranularity value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_TrimmingDelimiter(
                            HSTRING* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_TrimmingDelimiter(
                            HSTRING value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_TrimmingDelimiterCount(
                            INT32* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_TrimmingDelimiterCount(
                            INT32 value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_WordWrapping(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasWordWrapping* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_WordWrapping(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasWordWrapping value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Options(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_Options(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasDrawTextOptions value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_LineSpacingMode(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasLineSpacingMode* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_LineSpacingMode(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasLineSpacingMode value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_TrimmingSign(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTrimmingSign* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_TrimmingSign(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTrimmingSign value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_CustomTrimmingSign(
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject** value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_CustomTrimmingSign(
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_RequestedSize(
                            ABI::Windows::Foundation::Size* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_RequestedSize(
                            ABI::Windows::Foundation::Size value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetMinimumLineLength(
                            FLOAT* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetBrush(
                            INT32 characterIndex,
                            ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush** brush
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetCustomBrush(
                            INT32 characterIndex,
                            IInspectable** brush
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetFontFamily(
                            INT32 characterIndex,
                            HSTRING* fontFamily
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetFontSize(
                            INT32 characterIndex,
                            FLOAT* fontSize
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetFontStretch(
                            INT32 characterIndex,
                            ABI::Windows::UI::Text::FontStretch* fontStretch
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetFontStyle(
                            INT32 characterIndex,
                            ABI::Windows::UI::Text::FontStyle* fontStyle
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetFontWeight(
                            INT32 characterIndex,
                            ABI::Windows::UI::Text::FontWeight* fontWeight
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetLocaleName(
                            INT32 characterIndex,
                            HSTRING* localeName
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStrikethrough(
                            INT32 characterIndex,
                            boolean* hasStrikethrough
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetUnderline(
                            INT32 characterIndex,
                            boolean* hasUnderline
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetInlineObject(
                            INT32 characterIndex,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject** inlineObject
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetColor(
                            INT32 characterIndex,
                            INT32 characterCount,
                            ABI::Windows::UI::Color color
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetBrush(
                            INT32 characterIndex,
                            INT32 characterCount,
                            ABI::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush* brush
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetCustomBrush(
                            INT32 characterIndex,
                            INT32 characterCount,
                            IInspectable* brush
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetFontFamily(
                            INT32 characterIndex,
                            INT32 characterCount,
                            HSTRING fontFamily
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetFontSize(
                            INT32 characterIndex,
                            INT32 characterCount,
                            FLOAT fontSize
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetFontStretch(
                            INT32 characterIndex,
                            INT32 characterCount,
                            ABI::Windows::UI::Text::FontStretch fontStretch
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetFontStyle(
                            INT32 characterIndex,
                            INT32 characterCount,
                            ABI::Windows::UI::Text::FontStyle fontStyle
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetFontWeight(
                            INT32 characterIndex,
                            INT32 characterCount,
                            ABI::Windows::UI::Text::FontWeight fontWeight
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetLocaleName(
                            INT32 characterIndex,
                            INT32 characterCount,
                            HSTRING name
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStrikethrough(
                            INT32 characterIndex,
                            INT32 characterCount,
                            boolean hasStrikethrough
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetUnderline(
                            INT32 characterIndex,
                            INT32 characterCount,
                            boolean hasUnderline
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetInlineObject(
                            INT32 characterIndex,
                            INT32 characterCount,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject* inlineObject
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DrawToTextRenderer(
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer* textRenderer,
                            ABI::Windows::Foundation::Numerics::Vector2 position
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DrawToTextRendererWithCoords(
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextRenderer* textRenderer,
                            FLOAT x,
                            FLOAT y
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_LineMetrics(
                            UINT32* valueElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasLineMetrics** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_ClusterMetrics(
                            UINT32* valueElementsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasClusterMetrics** valueElements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetTypography(
                            INT32 characterIndex,
                            INT32 characterCount,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasTypography* typography
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetTypography(
                            INT32 characterIndex,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasTypography** typography
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_LayoutBounds(
                            ABI::Windows::Foundation::Rect* bounds
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_LayoutBoundsIncludingTrailingWhitespace(
                            ABI::Windows::Foundation::Rect* bounds
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_LineCount(
                            INT32* lineCount
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_MaximumBidiReorderingDepth(
                            INT32* depth
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_DrawBounds(
                            ABI::Windows::Foundation::Rect* bounds
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE HitTest(
                            ABI::Windows::Foundation::Numerics::Vector2 point,
                            boolean* isHit
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE HitTestWithCoords(
                            FLOAT x,
                            FLOAT y,
                            boolean* isHit
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE HitTestWithDescription(
                            ABI::Windows::Foundation::Numerics::Vector2 point,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion* textLayoutRegion,
                            boolean* isHit
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE HitTestWithDescriptionAndCoords(
                            FLOAT x,
                            FLOAT y,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion* textLayoutRegion,
                            boolean* isHit
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE HitTestWithDescriptionAndTrailingSide(
                            ABI::Windows::Foundation::Numerics::Vector2 point,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion* textLayoutRegion,
                            boolean* trailingSideOfCharacter,
                            boolean* isHit
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE HitTestWithDescriptionAndCoordsAndTrailingSide(
                            FLOAT x,
                            FLOAT y,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion* textLayoutRegion,
                            boolean* trailingSideOfCharacter,
                            boolean* isHit
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetCaretPosition(
                            INT32 characterIndex,
                            boolean trailingSideOfCharacter,
                            ABI::Windows::Foundation::Numerics::Vector2* location
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetCaretPositionWithDescription(
                            INT32 characterIndex,
                            boolean trailingSideOfCharacter,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion* textLayoutRegion,
                            ABI::Windows::Foundation::Numerics::Vector2* location
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetCharacterRegions(
                            INT32 characterIndex,
                            INT32 characterCount,
                            UINT32* hitTestDescriptionsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextLayoutRegion** hitTestDescriptions
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetPairKerning(
                            INT32 characterIndex,
                            boolean* hasPairKerning
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPairKerning(
                            INT32 characterIndex,
                            INT32 characterCount,
                            boolean hasPairKerning
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetLeadingCharacterSpacing(
                            INT32 characterIndex,
                            FLOAT* leadingSpacing
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetTrailingCharacterSpacing(
                            INT32 characterIndex,
                            FLOAT* trailingSpacing
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetMinimumCharacterAdvance(
                            INT32 characterIndex,
                            FLOAT* minimumAdvance
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetCharacterSpacing(
                            INT32 characterIndex,
                            INT32 characterCount,
                            FLOAT leadingSpacing,
                            FLOAT trailingSpacing,
                            FLOAT minimumAdvance
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_VerticalGlyphOrientation(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_VerticalGlyphOrientation(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasVerticalGlyphOrientation value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_OpticalAlignment(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasOpticalAlignment* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_OpticalAlignment(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasOpticalAlignment value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_LastLineWrapping(
                            boolean* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_LastLineWrapping(
                            boolean value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Device(
                            ABI::Microsoft::Graphics::Canvas::ICanvasDevice** value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasTextLayout = _uuidof(ICanvasTextLayout);
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasTextLayoutFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasTextLayout
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasTextLayoutFactory[] = L"Microsoft.Graphics.Canvas.Text.ICanvasTextLayoutFactory";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    MIDL_INTERFACE("9c1f7179-acd0-4680-93d5-95a6247e8f6b")
                    ICanvasTextLayoutFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            ABI::Microsoft::Graphics::Canvas::ICanvasResourceCreator* resourceCreator,
                            HSTRING textString,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextFormat* textFormat,
                            FLOAT requestedWidth,
                            FLOAT requestedHeight,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextLayout** canvasTextLayout
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasTextLayoutFactory = _uuidof(ICanvasTextLayoutFactory);
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasTextLayoutStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasTextLayout
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasTextLayoutStatics[] = L"Microsoft.Graphics.Canvas.Text.ICanvasTextLayoutStatics";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    MIDL_INTERFACE("7f2b8ffd-6935-4f60-b409-6394a19c5ebc")
                    ICanvasTextLayoutStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetGlyphOrientationTransform(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation glyphOrientation,
                            boolean isSideways,
                            ABI::Windows::Foundation::Numerics::Vector2 position,
                            ABI::Windows::Foundation::Numerics::Matrix3x2* transform
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasTextLayoutStatics = _uuidof(ICanvasTextLayoutStatics);
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasTextRenderer
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasTextRenderer[] = L"Microsoft.Graphics.Canvas.Text.ICanvasTextRenderer";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    MIDL_INTERFACE("9aaeece5-8d09-4a64-b322-af030421b2e4")
                    ICanvasTextRenderer : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE DrawGlyphRun(
                            ABI::Windows::Foundation::Numerics::Vector2 point,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasFontFace* fontFace,
                            FLOAT fontSize,
                            UINT32 glyphsLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyph* glyphs,
                            boolean isSideways,
                            UINT32 bidiLevel,
                            IInspectable* brush,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode measuringMode,
                            HSTRING localeName,
                            HSTRING textString,
                            UINT32 clusterMapIndicesLength,
                            INT32* clusterMapIndices,
                            UINT32 characterIndex,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation glyphOrientation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DrawStrikethrough(
                            ABI::Windows::Foundation::Numerics::Vector2 point,
                            FLOAT strikethroughWidth,
                            FLOAT strikethroughThickness,
                            FLOAT strikethroughOffset,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextDirection textDirection,
                            IInspectable* brush,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode textMeasuringMode,
                            HSTRING localeName,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation glyphOrientation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DrawUnderline(
                            ABI::Windows::Foundation::Numerics::Vector2 point,
                            FLOAT underlineWidth,
                            FLOAT underlineThickness,
                            FLOAT underlineOffset,
                            FLOAT runHeight,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextDirection textDirection,
                            IInspectable* brush,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextMeasuringMode textMeasuringMode,
                            HSTRING localeName,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation glyphOrientation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DrawInlineObject(
                            ABI::Windows::Foundation::Numerics::Vector2 point,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextInlineObject* inlineObject,
                            boolean isSideways,
                            boolean isRightToLeft,
                            IInspectable* brush,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasGlyphOrientation glyphOrientation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_PixelSnappingDisabled(
                            boolean* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Transform(
                            ABI::Windows::Foundation::Numerics::Matrix3x2* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Dpi(
                            FLOAT* value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasTextRenderer = _uuidof(ICanvasTextRenderer);
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasTextRenderingParameters
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasTextRenderingParameters
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasTextRenderingParameters[] = L"Microsoft.Graphics.Canvas.Text.ICanvasTextRenderingParameters";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    MIDL_INTERFACE("b20bf738-edb9-4eec-a12f-b6ae32e8ace6")
                    ICanvasTextRenderingParameters : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_RenderingMode(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_GridFit(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextGridFit* value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasTextRenderingParameters = _uuidof(ICanvasTextRenderingParameters);
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasTextRenderingParametersFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasTextRenderingParameters
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasTextRenderingParametersFactory[] = L"Microsoft.Graphics.Canvas.Text.ICanvasTextRenderingParametersFactory";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    MIDL_INTERFACE("d240ac25-4d23-4964-9d9a-db2fc8af185d")
                    ICanvasTextRenderingParametersFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextRenderingMode textRenderingMode,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTextGridFit gridFit,
                            ABI::Microsoft::Graphics::Canvas::Text::ICanvasTextRenderingParameters** textRenderingParameters
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasTextRenderingParametersFactory = _uuidof(ICanvasTextRenderingParametersFactory);
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasTypography
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasTypography
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasTypography[] = L"Microsoft.Graphics.Canvas.Text.ICanvasTypography";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace Text {
                    MIDL_INTERFACE("f15bc312-447f-44ed-8bec-7e40f4a4dfc8")
                    ICanvasTypography : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE AddFeature(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTypographyFeature feature
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AddFeatureWithNameAndParameter(
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTypographyFeatureName name,
                            UINT32 parameter
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetFeatures(
                            UINT32* featuresLength,
                            ABI::Microsoft::Graphics::Canvas::Text::CanvasTypographyFeature** features
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasTypography = _uuidof(ICanvasTypography);
                } /* Text */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography_INTERFACE_DEFINED__) */

/*
 *
 * Class Microsoft.Graphics.Canvas.Text.CanvasFontFace
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Text.ICanvasFontFace ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasFontFace_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasFontFace_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Text_CanvasFontFace[] = L"Microsoft.Graphics.Canvas.Text.CanvasFontFace";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Text.CanvasFontSet
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Text.ICanvasFontSet ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasFontSet_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasFontSet_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Text_CanvasFontSet[] = L"Microsoft.Graphics.Canvas.Text.CanvasFontSet";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Text.CanvasNumberSubstitution
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Text.ICanvasNumberSubstitution ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasNumberSubstitution_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasNumberSubstitution_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Text_CanvasNumberSubstitution[] = L"Microsoft.Graphics.Canvas.Text.CanvasNumberSubstitution";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Text.CanvasScaledFont
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Text.ICanvasScaledFont ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasScaledFont_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasScaledFont_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Text_CanvasScaledFont[] = L"Microsoft.Graphics.Canvas.Text.CanvasScaledFont";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Text.CanvasTextAnalyzer
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Text.ICanvasTextAnalyzer ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasTextAnalyzer_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasTextAnalyzer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Text_CanvasTextAnalyzer[] = L"Microsoft.Graphics.Canvas.Text.CanvasTextAnalyzer";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Text.CanvasTextFormat
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Text.ICanvasTextFormat ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasTextFormat_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasTextFormat_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Text_CanvasTextFormat[] = L"Microsoft.Graphics.Canvas.Text.CanvasTextFormat";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Text.CanvasTextLayout
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Text.ICanvasTextLayout ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasTextLayout_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasTextLayout_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Text_CanvasTextLayout[] = L"Microsoft.Graphics.Canvas.Text.CanvasTextLayout";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Text.CanvasTextRenderingParameters
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Text.ICanvasTextRenderingParameters ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasTextRenderingParameters_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasTextRenderingParameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Text_CanvasTextRenderingParameters[] = L"Microsoft.Graphics.Canvas.Text.CanvasTextRenderingParameters";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Text.CanvasTypography
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Text.ICanvasTypography ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasTypography_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasTypography_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Text_CanvasTypography[] = L"Microsoft.Graphics.Canvas.Text.CanvasTypography";
#endif

#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if !defined(____FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_INTERFACE_DEFINED__)
#define ____FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace __FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace;

typedef struct __FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFaceVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Current)(__FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace** result);
    HRESULT (STDMETHODCALLTYPE* get_HasCurrent)(__FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* MoveNext)(__FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This,
        UINT32 itemsLength,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace** items,
        UINT32* result);

    END_INTERFACE
} __FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFaceVtbl;

interface __FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace
{
    CONST_VTBL struct __FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFaceVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_get_Current(This, result) \
    ((This)->lpVtbl->get_Current(This, result))

#define __FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_get_HasCurrent(This, result) \
    ((This)->lpVtbl->get_HasCurrent(This, result))

#define __FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_MoveNext(This, result) \
    ((This)->lpVtbl->MoveNext(This, result))

#define __FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_GetMany(This, itemsLength, items, result) \
    ((This)->lpVtbl->GetMany(This, itemsLength, items, result))

#endif /* COBJMACROS */

#endif // ____FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_INTERFACE_DEFINED__

#if !defined(____FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_INTERFACE_DEFINED__)
#define ____FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace __FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace;

typedef struct __FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFaceVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* First)(__FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This,
        __FIIterator_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace** result);

    END_INTERFACE
} __FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFaceVtbl;

interface __FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace
{
    CONST_VTBL struct __FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFaceVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_First(This, result) \
    ((This)->lpVtbl->First(This, result))

#endif /* COBJMACROS */

#endif // ____FIIterable_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_INTERFACE_DEFINED__

#if !defined(____FIIterator_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterator_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterator_1_HSTRING __FIIterator_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_HSTRING;

typedef struct __FIIterator_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIIterator_1_HSTRING* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIIterator_1_HSTRING* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIIterator_1_HSTRING* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIIterator_1_HSTRING* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIIterator_1_HSTRING* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIIterator_1_HSTRING* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Current)(__FIIterator_1_HSTRING* This,
        HSTRING* result);
    HRESULT (STDMETHODCALLTYPE* get_HasCurrent)(__FIIterator_1_HSTRING* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* MoveNext)(__FIIterator_1_HSTRING* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIIterator_1_HSTRING* This,
        UINT32 itemsLength,
        HSTRING* items,
        UINT32* result);

    END_INTERFACE
} __FIIterator_1_HSTRINGVtbl;

interface __FIIterator_1_HSTRING
{
    CONST_VTBL struct __FIIterator_1_HSTRINGVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterator_1_HSTRING_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIIterator_1_HSTRING_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIIterator_1_HSTRING_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIIterator_1_HSTRING_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIIterator_1_HSTRING_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIIterator_1_HSTRING_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIIterator_1_HSTRING_get_Current(This, result) \
    ((This)->lpVtbl->get_Current(This, result))

#define __FIIterator_1_HSTRING_get_HasCurrent(This, result) \
    ((This)->lpVtbl->get_HasCurrent(This, result))

#define __FIIterator_1_HSTRING_MoveNext(This, result) \
    ((This)->lpVtbl->MoveNext(This, result))

#define __FIIterator_1_HSTRING_GetMany(This, itemsLength, items, result) \
    ((This)->lpVtbl->GetMany(This, itemsLength, items, result))

#endif /* COBJMACROS */

#endif // ____FIIterator_1_HSTRING_INTERFACE_DEFINED__

#if !defined(____FIIterable_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterable_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterable_1_HSTRING __FIIterable_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_HSTRING;

typedef struct __FIIterable_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIIterable_1_HSTRING* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIIterable_1_HSTRING* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIIterable_1_HSTRING* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIIterable_1_HSTRING* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIIterable_1_HSTRING* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIIterable_1_HSTRING* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* First)(__FIIterable_1_HSTRING* This,
        __FIIterator_1_HSTRING** result);

    END_INTERFACE
} __FIIterable_1_HSTRINGVtbl;

interface __FIIterable_1_HSTRING
{
    CONST_VTBL struct __FIIterable_1_HSTRINGVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_HSTRING_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIIterable_1_HSTRING_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIIterable_1_HSTRING_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIIterable_1_HSTRING_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIIterable_1_HSTRING_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIIterable_1_HSTRING_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIIterable_1_HSTRING_First(This, result) \
    ((This)->lpVtbl->First(This, result))

#endif /* COBJMACROS */

#endif // ____FIIterable_1_HSTRING_INTERFACE_DEFINED__

typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasCharacterRange __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasCharacterRange;

typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedBidi __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedBidi;

#if !defined(____FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi;

typedef struct __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidiVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Key)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasCharacterRange* result);
    HRESULT (STDMETHODCALLTYPE* get_Value)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedBidi* result);

    END_INTERFACE
} __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidiVtbl;

interface __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi
{
    CONST_VTBL struct __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidiVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_get_Key(This, result) \
    ((This)->lpVtbl->get_Key(This, result))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_get_Value(This, result) \
    ((This)->lpVtbl->get_Value(This, result))

#endif /* COBJMACROS */

#endif // ____FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_INTERFACE_DEFINED__

#if !defined(____FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi;

typedef struct __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidiVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Current)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi** result);
    HRESULT (STDMETHODCALLTYPE* get_HasCurrent)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* MoveNext)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        UINT32 itemsLength,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi** items,
        UINT32* result);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidiVtbl;

interface __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidiVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_get_Current(This, result) \
    ((This)->lpVtbl->get_Current(This, result))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_get_HasCurrent(This, result) \
    ((This)->lpVtbl->get_HasCurrent(This, result))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_MoveNext(This, result) \
    ((This)->lpVtbl->MoveNext(This, result))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_GetMany(This, itemsLength, items, result) \
    ((This)->lpVtbl->GetMany(This, itemsLength, items, result))

#endif /* COBJMACROS */

#endif // ____FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_INTERFACE_DEFINED__

#if !defined(____FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi;

typedef struct __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidiVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* First)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi** result);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidiVtbl;

interface __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidiVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_First(This, result) \
    ((This)->lpVtbl->First(This, result))

#endif /* COBJMACROS */

#endif // ____FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_INTERFACE_DEFINED__

typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedGlyphOrientation __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedGlyphOrientation;

#if !defined(____FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation;

typedef struct __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientationVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Key)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasCharacterRange* result);
    HRESULT (STDMETHODCALLTYPE* get_Value)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedGlyphOrientation* result);

    END_INTERFACE
} __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientationVtbl;

interface __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation
{
    CONST_VTBL struct __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientationVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_get_Key(This, result) \
    ((This)->lpVtbl->get_Key(This, result))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_get_Value(This, result) \
    ((This)->lpVtbl->get_Value(This, result))

#endif /* COBJMACROS */

#endif // ____FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_INTERFACE_DEFINED__

#if !defined(____FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation;

typedef struct __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientationVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Current)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation** result);
    HRESULT (STDMETHODCALLTYPE* get_HasCurrent)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* MoveNext)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        UINT32 itemsLength,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation** items,
        UINT32* result);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientationVtbl;

interface __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientationVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_get_Current(This, result) \
    ((This)->lpVtbl->get_Current(This, result))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_get_HasCurrent(This, result) \
    ((This)->lpVtbl->get_HasCurrent(This, result))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_MoveNext(This, result) \
    ((This)->lpVtbl->MoveNext(This, result))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_GetMany(This, itemsLength, items, result) \
    ((This)->lpVtbl->GetMany(This, itemsLength, items, result))

#endif /* COBJMACROS */

#endif // ____FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_INTERFACE_DEFINED__

#if !defined(____FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation;

typedef struct __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientationVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* First)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation** result);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientationVtbl;

interface __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientationVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_First(This, result) \
    ((This)->lpVtbl->First(This, result))

#endif /* COBJMACROS */

#endif // ____FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_INTERFACE_DEFINED__

typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedScript __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedScript;

#if !defined(____FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript;

typedef struct __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScriptVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Key)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasCharacterRange* result);
    HRESULT (STDMETHODCALLTYPE* get_Value)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedScript* result);

    END_INTERFACE
} __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScriptVtbl;

interface __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript
{
    CONST_VTBL struct __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScriptVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_get_Key(This, result) \
    ((This)->lpVtbl->get_Key(This, result))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_get_Value(This, result) \
    ((This)->lpVtbl->get_Value(This, result))

#endif /* COBJMACROS */

#endif // ____FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_INTERFACE_DEFINED__

#if !defined(____FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript;

typedef struct __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScriptVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Current)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript** result);
    HRESULT (STDMETHODCALLTYPE* get_HasCurrent)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* MoveNext)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        UINT32 itemsLength,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript** items,
        UINT32* result);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScriptVtbl;

interface __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScriptVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_get_Current(This, result) \
    ((This)->lpVtbl->get_Current(This, result))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_get_HasCurrent(This, result) \
    ((This)->lpVtbl->get_HasCurrent(This, result))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_MoveNext(This, result) \
    ((This)->lpVtbl->MoveNext(This, result))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_GetMany(This, itemsLength, items, result) \
    ((This)->lpVtbl->GetMany(This, itemsLength, items, result))

#endif /* COBJMACROS */

#endif // ____FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_INTERFACE_DEFINED__

#if !defined(____FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript;

typedef struct __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScriptVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* First)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript** result);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScriptVtbl;

interface __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScriptVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_First(This, result) \
    ((This)->lpVtbl->First(This, result))

#endif /* COBJMACROS */

#endif // ____FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_INTERFACE_DEFINED__

#if !defined(____FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution;

typedef struct __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitutionVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Key)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasCharacterRange* result);
    HRESULT (STDMETHODCALLTYPE* get_Value)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution** result);

    END_INTERFACE
} __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitutionVtbl;

interface __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution
{
    CONST_VTBL struct __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitutionVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_get_Key(This, result) \
    ((This)->lpVtbl->get_Key(This, result))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_get_Value(This, result) \
    ((This)->lpVtbl->get_Value(This, result))

#endif /* COBJMACROS */

#endif // ____FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_INTERFACE_DEFINED__

#if !defined(____FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution;

typedef struct __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitutionVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Current)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution** result);
    HRESULT (STDMETHODCALLTYPE* get_HasCurrent)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* MoveNext)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        UINT32 itemsLength,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution** items,
        UINT32* result);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitutionVtbl;

interface __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitutionVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_get_Current(This, result) \
    ((This)->lpVtbl->get_Current(This, result))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_get_HasCurrent(This, result) \
    ((This)->lpVtbl->get_HasCurrent(This, result))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_MoveNext(This, result) \
    ((This)->lpVtbl->MoveNext(This, result))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_GetMany(This, itemsLength, items, result) \
    ((This)->lpVtbl->GetMany(This, itemsLength, items, result))

#endif /* COBJMACROS */

#endif // ____FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_INTERFACE_DEFINED__

#if !defined(____FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution;

typedef struct __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitutionVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* First)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution** result);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitutionVtbl;

interface __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitutionVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_First(This, result) \
    ((This)->lpVtbl->First(This, result))

#endif /* COBJMACROS */

#endif // ____FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_INTERFACE_DEFINED__

#if !defined(____FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont;

typedef struct __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFontVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Key)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasCharacterRange* result);
    HRESULT (STDMETHODCALLTYPE* get_Value)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont** result);

    END_INTERFACE
} __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFontVtbl;

interface __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont
{
    CONST_VTBL struct __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFontVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_get_Key(This, result) \
    ((This)->lpVtbl->get_Key(This, result))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_get_Value(This, result) \
    ((This)->lpVtbl->get_Value(This, result))

#endif /* COBJMACROS */

#endif // ____FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_INTERFACE_DEFINED__

#if !defined(____FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont;

typedef struct __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFontVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Current)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont** result);
    HRESULT (STDMETHODCALLTYPE* get_HasCurrent)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* MoveNext)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        UINT32 itemsLength,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont** items,
        UINT32* result);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFontVtbl;

interface __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFontVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_get_Current(This, result) \
    ((This)->lpVtbl->get_Current(This, result))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_get_HasCurrent(This, result) \
    ((This)->lpVtbl->get_HasCurrent(This, result))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_MoveNext(This, result) \
    ((This)->lpVtbl->MoveNext(This, result))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_GetMany(This, itemsLength, items, result) \
    ((This)->lpVtbl->GetMany(This, itemsLength, items, result))

#endif /* COBJMACROS */

#endif // ____FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_INTERFACE_DEFINED__

#if !defined(____FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont;

typedef struct __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFontVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* First)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont** result);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFontVtbl;

interface __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFontVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_First(This, result) \
    ((This)->lpVtbl->First(This, result))

#endif /* COBJMACROS */

#endif // ____FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_INTERFACE_DEFINED__

#if !defined(____FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography;

typedef struct __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypographyVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Key)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasCharacterRange* result);
    HRESULT (STDMETHODCALLTYPE* get_Value)(__FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography** result);

    END_INTERFACE
} __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypographyVtbl;

interface __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography
{
    CONST_VTBL struct __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypographyVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_get_Key(This, result) \
    ((This)->lpVtbl->get_Key(This, result))

#define __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_get_Value(This, result) \
    ((This)->lpVtbl->get_Value(This, result))

#endif /* COBJMACROS */

#endif // ____FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_INTERFACE_DEFINED__

#if !defined(____FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography;

typedef struct __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypographyVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Current)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography** result);
    HRESULT (STDMETHODCALLTYPE* get_HasCurrent)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* MoveNext)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        UINT32 itemsLength,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography** items,
        UINT32* result);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypographyVtbl;

interface __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypographyVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_get_Current(This, result) \
    ((This)->lpVtbl->get_Current(This, result))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_get_HasCurrent(This, result) \
    ((This)->lpVtbl->get_HasCurrent(This, result))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_MoveNext(This, result) \
    ((This)->lpVtbl->MoveNext(This, result))

#define __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_GetMany(This, itemsLength, items, result) \
    ((This)->lpVtbl->GetMany(This, itemsLength, items, result))

#endif /* COBJMACROS */

#endif // ____FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_INTERFACE_DEFINED__

#if !defined(____FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography;

typedef struct __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypographyVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* First)(__FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        __FIIterator_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography** result);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypographyVtbl;

interface __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypographyVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_First(This, result) \
    ((This)->lpVtbl->First(This, result))

#endif /* COBJMACROS */

#endif // ____FIIterable_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_INTERFACE_DEFINED__

#if !defined(____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_HSTRING __FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_HSTRING;

typedef struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIKeyValuePair_2_HSTRING_HSTRING* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIKeyValuePair_2_HSTRING_HSTRING* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIKeyValuePair_2_HSTRING_HSTRING* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIKeyValuePair_2_HSTRING_HSTRING* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIKeyValuePair_2_HSTRING_HSTRING* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIKeyValuePair_2_HSTRING_HSTRING* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Key)(__FIKeyValuePair_2_HSTRING_HSTRING* This,
        HSTRING* result);
    HRESULT (STDMETHODCALLTYPE* get_Value)(__FIKeyValuePair_2_HSTRING_HSTRING* This,
        HSTRING* result);

    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIKeyValuePair_2_HSTRING_HSTRING_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIKeyValuePair_2_HSTRING_HSTRING_get_Key(This, result) \
    ((This)->lpVtbl->get_Key(This, result))

#define __FIKeyValuePair_2_HSTRING_HSTRING_get_Value(This, result) \
    ((This)->lpVtbl->get_Value(This, result))

#endif /* COBJMACROS */

#endif // ____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Current)(__FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING* This,
        __FIKeyValuePair_2_HSTRING_HSTRING** result);
    HRESULT (STDMETHODCALLTYPE* get_HasCurrent)(__FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* MoveNext)(__FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING* This,
        UINT32 itemsLength,
        __FIKeyValuePair_2_HSTRING_HSTRING** items,
        UINT32* result);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_get_Current(This, result) \
    ((This)->lpVtbl->get_Current(This, result))

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_get_HasCurrent(This, result) \
    ((This)->lpVtbl->get_HasCurrent(This, result))

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_MoveNext(This, result) \
    ((This)->lpVtbl->MoveNext(This, result))

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetMany(This, itemsLength, items, result) \
    ((This)->lpVtbl->GetMany(This, itemsLength, items, result))

#endif /* COBJMACROS */

#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;

typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* First)(__FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING* This,
        __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING** result);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_First(This, result) \
    ((This)->lpVtbl->First(This, result))

#endif /* COBJMACROS */

#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_HSTRING __FIMapView_2_HSTRING_HSTRING;

#if !defined(____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_HSTRING __FIMapView_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_HSTRING;

typedef struct __FIMapView_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIMapView_2_HSTRING_HSTRING* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIMapView_2_HSTRING_HSTRING* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIMapView_2_HSTRING_HSTRING* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIMapView_2_HSTRING_HSTRING* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIMapView_2_HSTRING_HSTRING* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIMapView_2_HSTRING_HSTRING* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* Lookup)(__FIMapView_2_HSTRING_HSTRING* This,
        HSTRING key,
        HSTRING* result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__FIMapView_2_HSTRING_HSTRING* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* HasKey)(__FIMapView_2_HSTRING_HSTRING* This,
        HSTRING key,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* Split)(__FIMapView_2_HSTRING_HSTRING* This,
        __FIMapView_2_HSTRING_HSTRING** first,
        __FIMapView_2_HSTRING_HSTRING** second);

    END_INTERFACE
} __FIMapView_2_HSTRING_HSTRINGVtbl;

interface __FIMapView_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMapView_2_HSTRING_HSTRINGVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIMapView_2_HSTRING_HSTRING_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIMapView_2_HSTRING_HSTRING_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIMapView_2_HSTRING_HSTRING_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIMapView_2_HSTRING_HSTRING_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIMapView_2_HSTRING_HSTRING_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIMapView_2_HSTRING_HSTRING_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIMapView_2_HSTRING_HSTRING_Lookup(This, key, result) \
    ((This)->lpVtbl->Lookup(This, key, result))

#define __FIMapView_2_HSTRING_HSTRING_get_Size(This, result) \
    ((This)->lpVtbl->get_Size(This, result))

#define __FIMapView_2_HSTRING_HSTRING_HasKey(This, key, result) \
    ((This)->lpVtbl->HasKey(This, key, result))

#define __FIMapView_2_HSTRING_HSTRING_Split(This, first, second) \
    ((This)->lpVtbl->Split(This, first, second))

#endif /* COBJMACROS */

#endif // ____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__

#if !defined(____FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace __FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace;

typedef struct __FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFaceVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetAt)(__FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This,
        UINT32 index,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace** result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* IndexOf)(__FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* value,
        UINT32* index,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace* This,
        UINT32 startIndex,
        UINT32 itemsLength,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace** items,
        UINT32* result);

    END_INTERFACE
} __FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFaceVtbl;

interface __FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace
{
    CONST_VTBL struct __FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFaceVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_GetAt(This, index, result) \
    ((This)->lpVtbl->GetAt(This, index, result))

#define __FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_get_Size(This, result) \
    ((This)->lpVtbl->get_Size(This, result))

#define __FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_IndexOf(This, value, index, result) \
    ((This)->lpVtbl->IndexOf(This, value, index, result))

#define __FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_GetMany(This, startIndex, itemsLength, items, result) \
    ((This)->lpVtbl->GetMany(This, startIndex, itemsLength, items, result))

#endif /* COBJMACROS */

#endif // ____FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace_INTERFACE_DEFINED__

#if !defined(____FIVectorView_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIVectorView_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_HSTRING __FIVectorView_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_HSTRING;

typedef struct __FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIVectorView_1_HSTRING* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIVectorView_1_HSTRING* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIVectorView_1_HSTRING* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIVectorView_1_HSTRING* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIVectorView_1_HSTRING* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIVectorView_1_HSTRING* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetAt)(__FIVectorView_1_HSTRING* This,
        UINT32 index,
        HSTRING* result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__FIVectorView_1_HSTRING* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* IndexOf)(__FIVectorView_1_HSTRING* This,
        HSTRING value,
        UINT32* index,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIVectorView_1_HSTRING* This,
        UINT32 startIndex,
        UINT32 itemsLength,
        HSTRING* items,
        UINT32* result);

    END_INTERFACE
} __FIVectorView_1_HSTRINGVtbl;

interface __FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIVectorView_1_HSTRINGVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIVectorView_1_HSTRING_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIVectorView_1_HSTRING_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIVectorView_1_HSTRING_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIVectorView_1_HSTRING_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIVectorView_1_HSTRING_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIVectorView_1_HSTRING_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIVectorView_1_HSTRING_GetAt(This, index, result) \
    ((This)->lpVtbl->GetAt(This, index, result))

#define __FIVectorView_1_HSTRING_get_Size(This, result) \
    ((This)->lpVtbl->get_Size(This, result))

#define __FIVectorView_1_HSTRING_IndexOf(This, value, index, result) \
    ((This)->lpVtbl->IndexOf(This, value, index, result))

#define __FIVectorView_1_HSTRING_GetMany(This, startIndex, itemsLength, items, result) \
    ((This)->lpVtbl->GetMany(This, startIndex, itemsLength, items, result))

#endif /* COBJMACROS */

#endif // ____FIVectorView_1_HSTRING_INTERFACE_DEFINED__

#if !defined(____FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_INTERFACE_DEFINED__)
#define ____FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_INTERFACE_DEFINED__

typedef interface __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi;

typedef struct __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidiVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetAt)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        UINT32 index,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi** result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* IndexOf)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* value,
        UINT32* index,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi* This,
        UINT32 startIndex,
        UINT32 itemsLength,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi** items,
        UINT32* result);

    END_INTERFACE
} __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidiVtbl;

interface __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi
{
    CONST_VTBL struct __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidiVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_GetAt(This, index, result) \
    ((This)->lpVtbl->GetAt(This, index, result))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_get_Size(This, result) \
    ((This)->lpVtbl->get_Size(This, result))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_IndexOf(This, value, index, result) \
    ((This)->lpVtbl->IndexOf(This, value, index, result))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_GetMany(This, startIndex, itemsLength, items, result) \
    ((This)->lpVtbl->GetMany(This, startIndex, itemsLength, items, result))

#endif /* COBJMACROS */

#endif // ____FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi_INTERFACE_DEFINED__

#if !defined(____FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_INTERFACE_DEFINED__)
#define ____FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_INTERFACE_DEFINED__

typedef interface __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation;

typedef struct __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientationVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetAt)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        UINT32 index,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation** result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* IndexOf)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* value,
        UINT32* index,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation* This,
        UINT32 startIndex,
        UINT32 itemsLength,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation** items,
        UINT32* result);

    END_INTERFACE
} __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientationVtbl;

interface __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation
{
    CONST_VTBL struct __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientationVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_GetAt(This, index, result) \
    ((This)->lpVtbl->GetAt(This, index, result))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_get_Size(This, result) \
    ((This)->lpVtbl->get_Size(This, result))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_IndexOf(This, value, index, result) \
    ((This)->lpVtbl->IndexOf(This, value, index, result))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_GetMany(This, startIndex, itemsLength, items, result) \
    ((This)->lpVtbl->GetMany(This, startIndex, itemsLength, items, result))

#endif /* COBJMACROS */

#endif // ____FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation_INTERFACE_DEFINED__

#if !defined(____FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_INTERFACE_DEFINED__)
#define ____FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_INTERFACE_DEFINED__

typedef interface __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript;

typedef struct __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScriptVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetAt)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        UINT32 index,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript** result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* IndexOf)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* value,
        UINT32* index,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript* This,
        UINT32 startIndex,
        UINT32 itemsLength,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript** items,
        UINT32* result);

    END_INTERFACE
} __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScriptVtbl;

interface __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript
{
    CONST_VTBL struct __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScriptVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_GetAt(This, index, result) \
    ((This)->lpVtbl->GetAt(This, index, result))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_get_Size(This, result) \
    ((This)->lpVtbl->get_Size(This, result))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_IndexOf(This, value, index, result) \
    ((This)->lpVtbl->IndexOf(This, value, index, result))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_GetMany(This, startIndex, itemsLength, items, result) \
    ((This)->lpVtbl->GetMany(This, startIndex, itemsLength, items, result))

#endif /* COBJMACROS */

#endif // ____FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript_INTERFACE_DEFINED__

#if !defined(____FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_INTERFACE_DEFINED__)
#define ____FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_INTERFACE_DEFINED__

typedef interface __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution;

typedef struct __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitutionVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetAt)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        UINT32 index,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution** result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* IndexOf)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* value,
        UINT32* index,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution* This,
        UINT32 startIndex,
        UINT32 itemsLength,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution** items,
        UINT32* result);

    END_INTERFACE
} __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitutionVtbl;

interface __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution
{
    CONST_VTBL struct __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitutionVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_GetAt(This, index, result) \
    ((This)->lpVtbl->GetAt(This, index, result))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_get_Size(This, result) \
    ((This)->lpVtbl->get_Size(This, result))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_IndexOf(This, value, index, result) \
    ((This)->lpVtbl->IndexOf(This, value, index, result))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_GetMany(This, startIndex, itemsLength, items, result) \
    ((This)->lpVtbl->GetMany(This, startIndex, itemsLength, items, result))

#endif /* COBJMACROS */

#endif // ____FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution_INTERFACE_DEFINED__

#if !defined(____FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_INTERFACE_DEFINED__)
#define ____FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_INTERFACE_DEFINED__

typedef interface __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont;

typedef struct __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFontVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetAt)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        UINT32 index,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont** result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* IndexOf)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* value,
        UINT32* index,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont* This,
        UINT32 startIndex,
        UINT32 itemsLength,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont** items,
        UINT32* result);

    END_INTERFACE
} __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFontVtbl;

interface __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont
{
    CONST_VTBL struct __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFontVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_GetAt(This, index, result) \
    ((This)->lpVtbl->GetAt(This, index, result))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_get_Size(This, result) \
    ((This)->lpVtbl->get_Size(This, result))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_IndexOf(This, value, index, result) \
    ((This)->lpVtbl->IndexOf(This, value, index, result))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_GetMany(This, startIndex, itemsLength, items, result) \
    ((This)->lpVtbl->GetMany(This, startIndex, itemsLength, items, result))

#endif /* COBJMACROS */

#endif // ____FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont_INTERFACE_DEFINED__

#if !defined(____FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_INTERFACE_DEFINED__)
#define ____FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_INTERFACE_DEFINED__

typedef interface __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography;

typedef struct __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypographyVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetAt)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        UINT32 index,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography** result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* IndexOf)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* value,
        UINT32* index,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* This,
        UINT32 startIndex,
        UINT32 itemsLength,
        __FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography** items,
        UINT32* result);

    END_INTERFACE
} __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypographyVtbl;

interface __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography
{
    CONST_VTBL struct __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypographyVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_GetAt(This, index, result) \
    ((This)->lpVtbl->GetAt(This, index, result))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_get_Size(This, result) \
    ((This)->lpVtbl->get_Size(This, result))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_IndexOf(This, value, index, result) \
    ((This)->lpVtbl->IndexOf(This, value, index, result))

#define __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_GetMany(This, startIndex, itemsLength, items, result) \
    ((This)->lpVtbl->GetMany(This, startIndex, itemsLength, items, result))

#endif /* COBJMACROS */

#endif // ____FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography_INTERFACE_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush_FWD_DEFINED__

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAntialiasing __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAntialiasing;

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

typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2;

typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 __x_ABI_CWindows_CFoundation_CNumerics_CVector2;

typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;

typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__

typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;

typedef enum __x_ABI_CWindows_CUI_CText_CFontStretch __x_ABI_CWindows_CUI_CText_CFontStretch;

typedef enum __x_ABI_CWindows_CUI_CText_CFontStyle __x_ABI_CWindows_CUI_CText_CFontStyle;

typedef struct __x_ABI_CWindows_CUI_CText_CFontWeight __x_ABI_CWindows_CUI_CText_CFontWeight;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasClusterProperties __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasClusterProperties;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasDrawTextOptions __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasDrawTextOptions;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasFontFileFormatType __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasFontFileFormatType;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasFontInformation __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasFontInformation;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasFontPropertyIdentifier __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasFontPropertyIdentifier;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasFontSimulations __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasFontSimulations;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphJustification __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphJustification;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphOrientation __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphOrientation;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasHorizontalAlignment __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasHorizontalAlignment;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasLineBreakCondition __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasLineBreakCondition;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasLineSpacingMode __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasLineSpacingMode;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasNumberSubstitutionMethod __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasNumberSubstitutionMethod;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasOpticalAlignment __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasOpticalAlignment;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasScriptShape __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasScriptShape;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextDirection __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextDirection;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextGridFit __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextGridFit;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextMeasuringMode __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextMeasuringMode;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextRenderingMode __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextRenderingMode;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextTrimmingGranularity __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextTrimmingGranularity;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTrimmingSign __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTrimmingSign;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTypographyFeatureName __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTypographyFeatureName;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasVerticalAlignment __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasVerticalAlignment;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasVerticalGlyphOrientation __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasVerticalGlyphOrientation;

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasWordWrapping __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasWordWrapping;

typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedBreakpoint __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedBreakpoint;

typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasClusterMetrics __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasClusterMetrics;

typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasFontProperty __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasFontProperty;

typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyph __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyph;

typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphMetrics __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphMetrics;

typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphShaping __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphShaping;

typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasJustificationOpportunity __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasJustificationOpportunity;

typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasLineMetrics __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasLineMetrics;

typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasScriptProperties __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasScriptProperties;

typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextLayoutRegion __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextLayoutRegion;

typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTypographyFeature __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTypographyFeature;

typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasUnicodeRange __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasUnicodeRange;

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasClusterProperties
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasClusterProperties
{
    CanvasClusterProperties_None = 0,
    CanvasClusterProperties_CanWrapLineAfter = 0x1,
    CanvasClusterProperties_Whitespace = 0x2,
    CanvasClusterProperties_Newline = 0x4,
    CanvasClusterProperties_SoftHyphen = 0x8,
    CanvasClusterProperties_RightToLeft = 0x10,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasDrawTextOptions
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasDrawTextOptions
{
    CanvasDrawTextOptions_Default = 0,
    CanvasDrawTextOptions_NoPixelSnap = 0x1,
    CanvasDrawTextOptions_Clip = 0x2,
    CanvasDrawTextOptions_EnableColorFont = 0x4,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasFontFileFormatType
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasFontFileFormatType
{
    CanvasFontFileFormatType_Cff = 0,
    CanvasFontFileFormatType_TrueType = 1,
    CanvasFontFileFormatType_TrueTypeCollection = 2,
    CanvasFontFileFormatType_Type1 = 3,
    CanvasFontFileFormatType_Vector = 4,
    CanvasFontFileFormatType_Bitmap = 5,
    CanvasFontFileFormatType_Unknown = 6,
    CanvasFontFileFormatType_RawCff = 7,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasFontInformation
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasFontInformation
{
    CanvasFontInformation_None = 0,
    CanvasFontInformation_CopyrightNotice = 1,
    CanvasFontInformation_VersionStrings = 2,
    CanvasFontInformation_Trademark = 3,
    CanvasFontInformation_Manufacturer = 4,
    CanvasFontInformation_Designer = 5,
    CanvasFontInformation_DesignerUrl = 6,
    CanvasFontInformation_Description = 7,
    CanvasFontInformation_FontVendorUrl = 8,
    CanvasFontInformation_LicenseDescription = 9,
    CanvasFontInformation_LicenseInfoUrl = 10,
    CanvasFontInformation_Win32FamilyNames = 11,
    CanvasFontInformation_Win32SubfamilyNames = 12,
    CanvasFontInformation_PreferredFamilyNames = 13,
    CanvasFontInformation_PreferredSubfamilyNames = 14,
    CanvasFontInformation_SampleText = 15,
    CanvasFontInformation_FullName = 16,
    CanvasFontInformation_PostscriptName = 17,
    CanvasFontInformation_PostscriptCidName = 18,
    CanvasFontInformation_WwsFamilyName = 19,
    CanvasFontInformation_DesignScriptLanguageTag = 20,
    CanvasFontInformation_SupportedScriptLanguageTag = 21,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasFontPropertyIdentifier
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasFontPropertyIdentifier
{
    CanvasFontPropertyIdentifier_None = 0,
    CanvasFontPropertyIdentifier_FamilyName = 1,
    CanvasFontPropertyIdentifier_PreferredFamilyName = 2,
    CanvasFontPropertyIdentifier_FaceName = 3,
    CanvasFontPropertyIdentifier_FullName = 4,
    CanvasFontPropertyIdentifier_Win32FamilyName = 5,
    CanvasFontPropertyIdentifier_PostscriptName = 6,
    CanvasFontPropertyIdentifier_DesignScriptLanguageTag = 7,
    CanvasFontPropertyIdentifier_SupportedScriptLanguageTag = 8,
    CanvasFontPropertyIdentifier_SemanticTag = 9,
    CanvasFontPropertyIdentifier_Weight = 10,
    CanvasFontPropertyIdentifier_Stretch = 11,
    CanvasFontPropertyIdentifier_Style = 12,
    CanvasFontPropertyIdentifier_Total = 13,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasFontSimulations
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasFontSimulations
{
    CanvasFontSimulations_None = 0,
    CanvasFontSimulations_Bold = 0x1,
    CanvasFontSimulations_Oblique = 0x2,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasGlyphJustification
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphJustification
{
    CanvasGlyphJustification_None = 0,
    CanvasGlyphJustification_ArabicBlank = 1,
    CanvasGlyphJustification_Character = 2,
    CanvasGlyphJustification_Blank = 4,
    CanvasGlyphJustification_ArabicNormal = 7,
    CanvasGlyphJustification_ArabicKashida = 8,
    CanvasGlyphJustification_ArabicAlef = 9,
    CanvasGlyphJustification_ArabicHa = 10,
    CanvasGlyphJustification_ArabicRa = 11,
    CanvasGlyphJustification_ArabicBa = 12,
    CanvasGlyphJustification_ArabicBara = 13,
    CanvasGlyphJustification_ArabicSeen = 14,
    CanvasGlyphJustification_ArabicSeenM = 15,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasGlyphOrientation
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphOrientation
{
    CanvasGlyphOrientation_Upright = 0,
    CanvasGlyphOrientation_Clockwise90Degrees = 1,
    CanvasGlyphOrientation_Clockwise180Degrees = 2,
    CanvasGlyphOrientation_Clockwise270Degrees = 3,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasHorizontalAlignment
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasHorizontalAlignment
{
    CanvasHorizontalAlignment_Left = 0,
    CanvasHorizontalAlignment_Right = 1,
    CanvasHorizontalAlignment_Center = 2,
    CanvasHorizontalAlignment_Justified = 3,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasLineBreakCondition
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasLineBreakCondition
{
    CanvasLineBreakCondition_Neutral = 0,
    CanvasLineBreakCondition_CanBreak = 1,
    CanvasLineBreakCondition_CannotBreak = 2,
    CanvasLineBreakCondition_MustBreak = 3,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasLineSpacingMode
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasLineSpacingMode
{
    CanvasLineSpacingMode_Default = 0,
    CanvasLineSpacingMode_Uniform = 1,
    CanvasLineSpacingMode_Proportional = 2,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasNumberSubstitutionMethod
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasNumberSubstitutionMethod
{
    CanvasNumberSubstitutionMethod_FromCulture = 0,
    CanvasNumberSubstitutionMethod_Contextual = 1,
    CanvasNumberSubstitutionMethod_Disabled = 2,
    CanvasNumberSubstitutionMethod_National = 3,
    CanvasNumberSubstitutionMethod_Traditional = 4,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasOpticalAlignment
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasOpticalAlignment
{
    CanvasOpticalAlignment_Default = 0,
    CanvasOpticalAlignment_NoSideBearings = 1,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasScriptShape
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasScriptShape
{
    CanvasScriptShape_Default = 0,
    CanvasScriptShape_NoVisual = 1,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasTextAntialiasing
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextAntialiasing
{
    CanvasTextAntialiasing_Auto = 0,
    CanvasTextAntialiasing_ClearType = 1,
    CanvasTextAntialiasing_Grayscale = 2,
    CanvasTextAntialiasing_Aliased = 3,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasTextDirection
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextDirection
{
    CanvasTextDirection_LeftToRightThenTopToBottom = 0,
    CanvasTextDirection_RightToLeftThenTopToBottom = 1,
    CanvasTextDirection_LeftToRightThenBottomToTop = 2,
    CanvasTextDirection_RightToLeftThenBottomToTop = 3,
    CanvasTextDirection_TopToBottomThenLeftToRight = 4,
    CanvasTextDirection_BottomToTopThenLeftToRight = 5,
    CanvasTextDirection_TopToBottomThenRightToLeft = 6,
    CanvasTextDirection_BottomToTopThenRightToLeft = 7,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasTextGridFit
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextGridFit
{
    CanvasTextGridFit_Default = 0,
    CanvasTextGridFit_Disable = 1,
    CanvasTextGridFit_Enable = 2,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasTextMeasuringMode
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextMeasuringMode
{
    CanvasTextMeasuringMode_Natural = 0,
    CanvasTextMeasuringMode_GdiClassic = 1,
    CanvasTextMeasuringMode_GdiNatural = 2,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasTextRenderingMode
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextRenderingMode
{
    CanvasTextRenderingMode_Default = 0,
    CanvasTextRenderingMode_Aliased = 1,
    CanvasTextRenderingMode_GdiClassic = 2,
    CanvasTextRenderingMode_GdiNatural = 3,
    CanvasTextRenderingMode_Natural = 4,
    CanvasTextRenderingMode_NaturalSymmetric = 5,
    CanvasTextRenderingMode_Outline = 6,
    CanvasTextRenderingMode_NaturalSymmetricDownsampled = 7,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasTextTrimmingGranularity
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextTrimmingGranularity
{
    CanvasTextTrimmingGranularity_None = 0,
    CanvasTextTrimmingGranularity_Character = 1,
    CanvasTextTrimmingGranularity_Word = 2,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasTrimmingSign
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTrimmingSign
{
    CanvasTrimmingSign_None = 0,
    CanvasTrimmingSign_Ellipsis = 1,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasTypographyFeatureName
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTypographyFeatureName
{
    CanvasTypographyFeatureName_None = 0,
    CanvasTypographyFeatureName_Default = 1953261156,
    CanvasTypographyFeatureName_VerticalWriting = 1953654134,
    CanvasTypographyFeatureName_VerticalAlternatesAndRotation = 846492278,
    CanvasTypographyFeatureName_AlternativeFractions = 1668441697,
    CanvasTypographyFeatureName_PetiteCapitalsFromCapitals = 1668297315,
    CanvasTypographyFeatureName_SmallCapitalsFromCapitals = 1668493923,
    CanvasTypographyFeatureName_ContextualAlternates = 1953259875,
    CanvasTypographyFeatureName_CaseSensitiveForms = 1702060387,
    CanvasTypographyFeatureName_GlyphCompositionDecomposition = 1886217059,
    CanvasTypographyFeatureName_ContextualLigatures = 1734962275,
    CanvasTypographyFeatureName_CapitalSpacing = 1886613603,
    CanvasTypographyFeatureName_ContextualSwash = 1752658787,
    CanvasTypographyFeatureName_CursivePositioning = 1936880995,
    CanvasTypographyFeatureName_DiscretionaryLigatures = 1734962276,
    CanvasTypographyFeatureName_ExpertForms = 1953527909,
    CanvasTypographyFeatureName_Fractions = 1667330662,
    CanvasTypographyFeatureName_FullWidth = 1684633446,
    CanvasTypographyFeatureName_HalfForms = 1718378856,
    CanvasTypographyFeatureName_HalantForms = 1852596584,
    CanvasTypographyFeatureName_AlternateHalfWidth = 1953259880,
    CanvasTypographyFeatureName_HistoricalForms = 1953720680,
    CanvasTypographyFeatureName_HorizontalKanaAlternates = 1634626408,
    CanvasTypographyFeatureName_HistoricalLigatures = 1734962280,
    CanvasTypographyFeatureName_HalfWidth = 1684633448,
    CanvasTypographyFeatureName_HojoKanjiForms = 1869246312,
    CanvasTypographyFeatureName_Jis04Forms = 875589738,
    CanvasTypographyFeatureName_Jis78Forms = 943157354,
    CanvasTypographyFeatureName_Jis83Forms = 859336810,
    CanvasTypographyFeatureName_Jis90Forms = 809070698,
    CanvasTypographyFeatureName_Kerning = 1852990827,
    CanvasTypographyFeatureName_StandardLigatures = 1634167148,
    CanvasTypographyFeatureName_LiningFigures = 1836412524,
    CanvasTypographyFeatureName_LocalizedForms = 1818455916,
    CanvasTypographyFeatureName_MarkPositioning = 1802658157,
    CanvasTypographyFeatureName_MathematicalGreek = 1802659693,
    CanvasTypographyFeatureName_MarkToMarkPositioning = 1802333037,
    CanvasTypographyFeatureName_AlternateAnnotationForms = 1953259886,
    CanvasTypographyFeatureName_NlcKanjiForms = 1801677934,
    CanvasTypographyFeatureName_OldStyleFigures = 1836412527,
    CanvasTypographyFeatureName_Ordinals = 1852076655,
    CanvasTypographyFeatureName_ProportionalAlternateWidth = 1953259888,
    CanvasTypographyFeatureName_PetiteCapitals = 1885430640,
    CanvasTypographyFeatureName_ProportionalFigures = 1836412528,
    CanvasTypographyFeatureName_ProportionalWidths = 1684633456,
    CanvasTypographyFeatureName_QuarterWidths = 1684633457,
    CanvasTypographyFeatureName_RequiredLigatures = 1734962290,
    CanvasTypographyFeatureName_RubyNotationForms = 2036495730,
    CanvasTypographyFeatureName_StylisticAlternates = 1953259891,
    CanvasTypographyFeatureName_ScientificInferiors = 1718511987,
    CanvasTypographyFeatureName_SmallCapitals = 1885564275,
    CanvasTypographyFeatureName_SimplifiedForms = 1819307379,
    CanvasTypographyFeatureName_StylisticSet1 = 825258867,
    CanvasTypographyFeatureName_StylisticSet2 = 842036083,
    CanvasTypographyFeatureName_StylisticSet3 = 858813299,
    CanvasTypographyFeatureName_StylisticSet4 = 875590515,
    CanvasTypographyFeatureName_StylisticSet5 = 892367731,
    CanvasTypographyFeatureName_StylisticSet6 = 909144947,
    CanvasTypographyFeatureName_StylisticSet7 = 925922163,
    CanvasTypographyFeatureName_StylisticSet8 = 942699379,
    CanvasTypographyFeatureName_StylisticSet9 = 959476595,
    CanvasTypographyFeatureName_StylisticSet10 = 808547187,
    CanvasTypographyFeatureName_StylisticSet11 = 825324403,
    CanvasTypographyFeatureName_StylisticSet12 = 842101619,
    CanvasTypographyFeatureName_StylisticSet13 = 858878835,
    CanvasTypographyFeatureName_StylisticSet14 = 875656051,
    CanvasTypographyFeatureName_StylisticSet15 = 892433267,
    CanvasTypographyFeatureName_StylisticSet16 = 909210483,
    CanvasTypographyFeatureName_StylisticSet17 = 925987699,
    CanvasTypographyFeatureName_StylisticSet18 = 942764915,
    CanvasTypographyFeatureName_StylisticSet19 = 959542131,
    CanvasTypographyFeatureName_StylisticSet20 = 808612723,
    CanvasTypographyFeatureName_Subscript = 1935832435,
    CanvasTypographyFeatureName_Superscript = 1936749939,
    CanvasTypographyFeatureName_Swash = 1752397683,
    CanvasTypographyFeatureName_Titling = 1819568500,
    CanvasTypographyFeatureName_TraditionalNameForms = 1835101812,
    CanvasTypographyFeatureName_TabularFigures = 1836412532,
    CanvasTypographyFeatureName_TraditionalForms = 1684107892,
    CanvasTypographyFeatureName_ThirdWidths = 1684633460,
    CanvasTypographyFeatureName_Unicase = 1667853941,
    CanvasTypographyFeatureName_SlashedZero = 1869768058,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasVerticalAlignment
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasVerticalAlignment
{
    CanvasVerticalAlignment_Top = 0,
    CanvasVerticalAlignment_Bottom = 1,
    CanvasVerticalAlignment_Center = 2,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasVerticalGlyphOrientation
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasVerticalGlyphOrientation
{
    CanvasVerticalGlyphOrientation_Default = 0,
    CanvasVerticalGlyphOrientation_Stacked = 1,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasWordWrapping
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasWordWrapping
{
    CanvasWordWrapping_Wrap = 0,
    CanvasWordWrapping_NoWrap = 1,
    CanvasWordWrapping_EmergencyBreak = 2,
    CanvasWordWrapping_WholeWord = 3,
    CanvasWordWrapping_Character = 4,
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasAnalyzedBidi
 *
 */
struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedBidi
{
    UINT32 ExplicitLevel;
    UINT32 ResolvedLevel;
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasAnalyzedBreakpoint
 *
 */
struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedBreakpoint
{
    enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasLineBreakCondition BreakBefore;
    enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasLineBreakCondition BreakAfter;
    boolean IsWhitespace;
    boolean IsSoftHyphen;
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasAnalyzedGlyphOrientation
 *
 */
struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedGlyphOrientation
{
    enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphOrientation GlyphOrientation;
    UINT32 AdjustedBidiLevel;
    boolean IsSideways;
    boolean IsRightToLeft;
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasAnalyzedScript
 *
 */
struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedScript
{
    INT32 ScriptIdentifier;
    enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasScriptShape Shape;
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasCharacterRange
 *
 */
struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasCharacterRange
{
    INT32 CharacterIndex;
    INT32 CharacterCount;
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasClusterMetrics
 *
 */
struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasClusterMetrics
{
    INT32 CharacterCount;
    FLOAT Width;
    enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasClusterProperties Properties;
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasFontProperty
 *
 */
struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasFontProperty
{
    enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasFontPropertyIdentifier Identifier;
    HSTRING Value;
    HSTRING Locale;
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasGlyph
 *
 */
struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyph
{
    INT32 Index;
    FLOAT Advance;
    FLOAT AdvanceOffset;
    FLOAT AscenderOffset;
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasGlyphMetrics
 *
 */
struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphMetrics
{
    FLOAT LeftSideBearing;
    FLOAT AdvanceWidth;
    FLOAT RightSideBearing;
    FLOAT TopSideBearing;
    FLOAT AdvanceHeight;
    FLOAT BottomSideBearing;
    FLOAT VerticalOrigin;
    struct __x_ABI_CWindows_CFoundation_CRect DrawBounds;
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasGlyphShaping
 *
 */
struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphShaping
{
    enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphJustification Justification;
    boolean IsClusterStart;
    boolean IsDiacritic;
    boolean IsZeroWidthSpace;
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasJustificationOpportunity
 *
 */
struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasJustificationOpportunity
{
    FLOAT ExpansionMinimum;
    FLOAT ExpansionMaximum;
    FLOAT CompressionMaximum;
    BYTE ExpansionPriority;
    BYTE CompressionPriority;
    boolean AllowResidualExpansion;
    boolean AllowResidualCompression;
    boolean ApplyToLeadingEdge;
    boolean ApplyToTrailingEdge;
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasLineMetrics
 *
 */
struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasLineMetrics
{
    INT32 CharacterCount;
    INT32 TrailingWhitespaceCount;
    INT32 TerminalNewlineCount;
    FLOAT Height;
    FLOAT Baseline;
    boolean IsTrimmed;
    FLOAT LeadingWhitespaceBefore;
    FLOAT LeadingWhitespaceAfter;
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasScriptProperties
 *
 */
struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasScriptProperties
{
    HSTRING IsoScriptCode;
    INT32 IsoScriptNumber;
    INT32 ClusterLookahead;
    HSTRING JustificationCharacter;
    boolean RestrictCaretToClusters;
    boolean UsesWordDividers;
    boolean IsDiscreteWriting;
    boolean IsBlockWriting;
    boolean IsDistributedWithinCluster;
    boolean IsConnectedWriting;
    boolean IsCursiveWriting;
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasTextLayoutRegion
 *
 */
struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextLayoutRegion
{
    INT32 CharacterIndex;
    INT32 CharacterCount;
    struct __x_ABI_CWindows_CFoundation_CRect LayoutBounds;
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasTypographyFeature
 *
 */
struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTypographyFeature
{
    enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTypographyFeatureName Name;
    UINT32 Parameter;
};

/*
 *
 * Struct Microsoft.Graphics.Canvas.Text.CanvasUnicodeRange
 *
 */
struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasUnicodeRange
{
    UINT32 First;
    UINT32 Last;
};

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasFontFace
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasFontFace
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasFontFace[] = L"Microsoft.Graphics.Canvas.Text.ICanvasFontFace";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFaceVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetRecommendedRenderingMode)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        FLOAT fontSize,
        FLOAT dpi,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextMeasuringMode measuringMode,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters* renderingParameters,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextRenderingMode* renderingMode);
    HRESULT (STDMETHODCALLTYPE* GetRecommendedRenderingModeWithAllOptions)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        FLOAT fontSize,
        FLOAT dpi,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextMeasuringMode measuringMode,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters* renderingParameters,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform,
        boolean isSideways,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAntialiasing outlineThreshold,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextRenderingMode* renderingMode);
    HRESULT (STDMETHODCALLTYPE* GetRecommendedGridFit)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        FLOAT fontSize,
        FLOAT dpi,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextMeasuringMode measuringMode,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters* renderingParameters,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform,
        boolean isSideways,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CCanvasAntialiasing outlineThreshold,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextGridFit* gridFit);
    HRESULT (STDMETHODCALLTYPE* get_GlyphBox)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        struct __x_ABI_CWindows_CFoundation_CRect* value);
    HRESULT (STDMETHODCALLTYPE* get_SubscriptPosition)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2* value);
    HRESULT (STDMETHODCALLTYPE* get_SubscriptSize)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        struct __x_ABI_CWindows_CFoundation_CSize* value);
    HRESULT (STDMETHODCALLTYPE* get_SuperscriptPosition)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2* value);
    HRESULT (STDMETHODCALLTYPE* get_SuperscriptSize)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        struct __x_ABI_CWindows_CFoundation_CSize* value);
    HRESULT (STDMETHODCALLTYPE* get_HasTypographicMetrics)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_Ascent)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* get_Descent)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* get_LineGap)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* get_CapHeight)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* get_LowercaseLetterHeight)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* get_UnderlinePosition)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* get_UnderlineThickness)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* get_StrikethroughPosition)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* get_StrikethroughThickness)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* get_CaretSlopeRise)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* get_CaretSlopeRun)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* get_CaretOffset)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* get_UnicodeRanges)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        UINT32* valueElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasUnicodeRange** valueElements);
    HRESULT (STDMETHODCALLTYPE* get_IsMonospaced)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* GetVerticalGlyphVariants)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        UINT32 inputElementsLength,
        INT32* inputElements,
        UINT32* outputElementsLength,
        INT32** outputElements);
    HRESULT (STDMETHODCALLTYPE* get_HasVerticalGlyphVariants)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_FileFormatType)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasFontFileFormatType* value);
    HRESULT (STDMETHODCALLTYPE* get_Simulations)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasFontSimulations* value);
    HRESULT (STDMETHODCALLTYPE* get_IsSymbolFont)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_GlyphCount)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        UINT32* value);
    HRESULT (STDMETHODCALLTYPE* GetGlyphIndices)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        UINT32 inputElementsLength,
        UINT32* inputElements,
        UINT32* outputElementsLength,
        INT32** outputElements);
    HRESULT (STDMETHODCALLTYPE* GetGlyphMetrics)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        UINT32 inputElementsLength,
        INT32* inputElements,
        boolean isSideways,
        UINT32* outputElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphMetrics** outputElements);
    HRESULT (STDMETHODCALLTYPE* GetGdiCompatibleGlyphMetrics)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        FLOAT fontSize,
        FLOAT dpi,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform,
        boolean useGdiNatural,
        UINT32 inputElementsLength,
        INT32* inputElements,
        boolean isSideways,
        UINT32* outputElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphMetrics** outputElements);
    HRESULT (STDMETHODCALLTYPE* get_Weight)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        struct __x_ABI_CWindows_CUI_CText_CFontWeight* value);
    HRESULT (STDMETHODCALLTYPE* get_Stretch)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        enum __x_ABI_CWindows_CUI_CText_CFontStretch* value);
    HRESULT (STDMETHODCALLTYPE* get_Style)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        enum __x_ABI_CWindows_CUI_CText_CFontStyle* value);
    HRESULT (STDMETHODCALLTYPE* get_FamilyNames)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        __FIMapView_2_HSTRING_HSTRING** values);
    HRESULT (STDMETHODCALLTYPE* get_FaceNames)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        __FIMapView_2_HSTRING_HSTRING** values);
    HRESULT (STDMETHODCALLTYPE* GetInformationalStrings)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasFontInformation fontInformation,
        __FIMapView_2_HSTRING_HSTRING** values);
    HRESULT (STDMETHODCALLTYPE* HasCharacter)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        UINT32 unicodeValue,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* GetGlyphRunBounds)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* drawingSession,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point,
        FLOAT fontSize,
        UINT32 glyphsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyph* glyphs,
        boolean isSideways,
        UINT32 bidiLevel,
        struct __x_ABI_CWindows_CFoundation_CRect* bounds);
    HRESULT (STDMETHODCALLTYPE* GetGlyphRunBoundsWithMeasuringMode)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDrawingSession* drawingSession,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point,
        FLOAT fontSize,
        UINT32 glyphsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyph* glyphs,
        boolean isSideways,
        UINT32 bidiLevel,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextMeasuringMode measuringMode,
        struct __x_ABI_CWindows_CFoundation_CRect* bounds);
    HRESULT (STDMETHODCALLTYPE* get_Panose)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        UINT32* valueElementsLength,
        BYTE** valueElements);
    HRESULT (STDMETHODCALLTYPE* GetSupportedTypographicFeatureNames)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedScript script,
        UINT32* valueElementsLength,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTypographyFeatureName** valueElements);
    HRESULT (STDMETHODCALLTYPE* GetSupportedTypographicFeatureNamesWithLocale)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedScript script,
        HSTRING locale,
        UINT32* valueElementsLength,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTypographyFeatureName** valueElements);
    HRESULT (STDMETHODCALLTYPE* GetTypographicFeatureGlyphSupport)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedScript script,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTypographyFeatureName typographicFeatureName,
        UINT32 glyphsElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyph* glyphsElements,
        UINT32* valueElementsLength,
        boolean** valueElements);
    HRESULT (STDMETHODCALLTYPE* GetTypographicFeatureGlyphSupportWithLocale)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* This,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedScript script,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTypographyFeatureName typographicFeatureName,
        UINT32 glyphsElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyph* glyphsElements,
        HSTRING locale,
        UINT32* valueElementsLength,
        boolean** valueElements);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFaceVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFaceVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_GetRecommendedRenderingMode(This, fontSize, dpi, measuringMode, renderingParameters, renderingMode) \
    ((This)->lpVtbl->GetRecommendedRenderingMode(This, fontSize, dpi, measuringMode, renderingParameters, renderingMode))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_GetRecommendedRenderingModeWithAllOptions(This, fontSize, dpi, measuringMode, renderingParameters, transform, isSideways, outlineThreshold, renderingMode) \
    ((This)->lpVtbl->GetRecommendedRenderingModeWithAllOptions(This, fontSize, dpi, measuringMode, renderingParameters, transform, isSideways, outlineThreshold, renderingMode))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_GetRecommendedGridFit(This, fontSize, dpi, measuringMode, renderingParameters, transform, isSideways, outlineThreshold, gridFit) \
    ((This)->lpVtbl->GetRecommendedGridFit(This, fontSize, dpi, measuringMode, renderingParameters, transform, isSideways, outlineThreshold, gridFit))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_GlyphBox(This, value) \
    ((This)->lpVtbl->get_GlyphBox(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_SubscriptPosition(This, value) \
    ((This)->lpVtbl->get_SubscriptPosition(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_SubscriptSize(This, value) \
    ((This)->lpVtbl->get_SubscriptSize(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_SuperscriptPosition(This, value) \
    ((This)->lpVtbl->get_SuperscriptPosition(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_SuperscriptSize(This, value) \
    ((This)->lpVtbl->get_SuperscriptSize(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_HasTypographicMetrics(This, value) \
    ((This)->lpVtbl->get_HasTypographicMetrics(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_Ascent(This, value) \
    ((This)->lpVtbl->get_Ascent(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_Descent(This, value) \
    ((This)->lpVtbl->get_Descent(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_LineGap(This, value) \
    ((This)->lpVtbl->get_LineGap(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_CapHeight(This, value) \
    ((This)->lpVtbl->get_CapHeight(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_LowercaseLetterHeight(This, value) \
    ((This)->lpVtbl->get_LowercaseLetterHeight(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_UnderlinePosition(This, value) \
    ((This)->lpVtbl->get_UnderlinePosition(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_UnderlineThickness(This, value) \
    ((This)->lpVtbl->get_UnderlineThickness(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_StrikethroughPosition(This, value) \
    ((This)->lpVtbl->get_StrikethroughPosition(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_StrikethroughThickness(This, value) \
    ((This)->lpVtbl->get_StrikethroughThickness(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_CaretSlopeRise(This, value) \
    ((This)->lpVtbl->get_CaretSlopeRise(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_CaretSlopeRun(This, value) \
    ((This)->lpVtbl->get_CaretSlopeRun(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_CaretOffset(This, value) \
    ((This)->lpVtbl->get_CaretOffset(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_UnicodeRanges(This, valueElementsLength, valueElements) \
    ((This)->lpVtbl->get_UnicodeRanges(This, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_IsMonospaced(This, value) \
    ((This)->lpVtbl->get_IsMonospaced(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_GetVerticalGlyphVariants(This, inputElementsLength, inputElements, outputElementsLength, outputElements) \
    ((This)->lpVtbl->GetVerticalGlyphVariants(This, inputElementsLength, inputElements, outputElementsLength, outputElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_HasVerticalGlyphVariants(This, value) \
    ((This)->lpVtbl->get_HasVerticalGlyphVariants(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_FileFormatType(This, value) \
    ((This)->lpVtbl->get_FileFormatType(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_Simulations(This, value) \
    ((This)->lpVtbl->get_Simulations(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_IsSymbolFont(This, value) \
    ((This)->lpVtbl->get_IsSymbolFont(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_GlyphCount(This, value) \
    ((This)->lpVtbl->get_GlyphCount(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_GetGlyphIndices(This, inputElementsLength, inputElements, outputElementsLength, outputElements) \
    ((This)->lpVtbl->GetGlyphIndices(This, inputElementsLength, inputElements, outputElementsLength, outputElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_GetGlyphMetrics(This, inputElementsLength, inputElements, isSideways, outputElementsLength, outputElements) \
    ((This)->lpVtbl->GetGlyphMetrics(This, inputElementsLength, inputElements, isSideways, outputElementsLength, outputElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_GetGdiCompatibleGlyphMetrics(This, fontSize, dpi, transform, useGdiNatural, inputElementsLength, inputElements, isSideways, outputElementsLength, outputElements) \
    ((This)->lpVtbl->GetGdiCompatibleGlyphMetrics(This, fontSize, dpi, transform, useGdiNatural, inputElementsLength, inputElements, isSideways, outputElementsLength, outputElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_Weight(This, value) \
    ((This)->lpVtbl->get_Weight(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_Stretch(This, value) \
    ((This)->lpVtbl->get_Stretch(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_Style(This, value) \
    ((This)->lpVtbl->get_Style(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_FamilyNames(This, values) \
    ((This)->lpVtbl->get_FamilyNames(This, values))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_FaceNames(This, values) \
    ((This)->lpVtbl->get_FaceNames(This, values))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_GetInformationalStrings(This, fontInformation, values) \
    ((This)->lpVtbl->GetInformationalStrings(This, fontInformation, values))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_HasCharacter(This, unicodeValue, value) \
    ((This)->lpVtbl->HasCharacter(This, unicodeValue, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_GetGlyphRunBounds(This, drawingSession, point, fontSize, glyphsLength, glyphs, isSideways, bidiLevel, bounds) \
    ((This)->lpVtbl->GetGlyphRunBounds(This, drawingSession, point, fontSize, glyphsLength, glyphs, isSideways, bidiLevel, bounds))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_GetGlyphRunBoundsWithMeasuringMode(This, drawingSession, point, fontSize, glyphsLength, glyphs, isSideways, bidiLevel, measuringMode, bounds) \
    ((This)->lpVtbl->GetGlyphRunBoundsWithMeasuringMode(This, drawingSession, point, fontSize, glyphsLength, glyphs, isSideways, bidiLevel, measuringMode, bounds))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_get_Panose(This, valueElementsLength, valueElements) \
    ((This)->lpVtbl->get_Panose(This, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_GetSupportedTypographicFeatureNames(This, script, valueElementsLength, valueElements) \
    ((This)->lpVtbl->GetSupportedTypographicFeatureNames(This, script, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_GetSupportedTypographicFeatureNamesWithLocale(This, script, locale, valueElementsLength, valueElements) \
    ((This)->lpVtbl->GetSupportedTypographicFeatureNamesWithLocale(This, script, locale, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_GetTypographicFeatureGlyphSupport(This, script, typographicFeatureName, glyphsElementsLength, glyphsElements, valueElementsLength, valueElements) \
    ((This)->lpVtbl->GetTypographicFeatureGlyphSupport(This, script, typographicFeatureName, glyphsElementsLength, glyphsElements, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_GetTypographicFeatureGlyphSupportWithLocale(This, script, typographicFeatureName, glyphsElementsLength, glyphsElements, locale, valueElementsLength, valueElements) \
    ((This)->lpVtbl->GetTypographicFeatureGlyphSupportWithLocale(This, script, typographicFeatureName, glyphsElementsLength, glyphsElements, locale, valueElementsLength, valueElements))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasFontSet
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasFontSet
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasFontSet[] = L"Microsoft.Graphics.Canvas.Text.ICanvasFontSet";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Fonts)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet* This,
        __FIVectorView_1_Microsoft__CGraphics__CCanvas__CText__CCanvasFontFace** value);
    HRESULT (STDMETHODCALLTYPE* TryFindFontFace)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* fontFace,
        INT32* index,
        boolean* succeeded);
    HRESULT (STDMETHODCALLTYPE* GetMatchingFontsFromProperties)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet* This,
        UINT32 propertyElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasFontProperty* propertyElements,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet** matchingFonts);
    HRESULT (STDMETHODCALLTYPE* GetMatchingFontsFromWwsFamily)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet* This,
        HSTRING familyName,
        struct __x_ABI_CWindows_CUI_CText_CFontWeight weight,
        enum __x_ABI_CWindows_CUI_CText_CFontStretch stretch,
        enum __x_ABI_CWindows_CUI_CText_CFontStyle style,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet** matchingFonts);
    HRESULT (STDMETHODCALLTYPE* CountFontsMatchingProperty)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet* This,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasFontProperty property,
        UINT32* count);
    HRESULT (STDMETHODCALLTYPE* GetPropertyValuesFromIndex)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet* This,
        UINT32 fontIndex,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasFontPropertyIdentifier propertyIdentifier,
        __FIMapView_2_HSTRING_HSTRING** values);
    HRESULT (STDMETHODCALLTYPE* GetPropertyValuesFromIdentifier)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasFontPropertyIdentifier propertyIdentifier,
        HSTRING preferredLocaleNames,
        UINT32* valueElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasFontProperty** valueElements);
    HRESULT (STDMETHODCALLTYPE* GetPropertyValues)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasFontPropertyIdentifier propertyIdentifier,
        UINT32* valueElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasFontProperty** valueElements);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet_get_Fonts(This, value) \
    ((This)->lpVtbl->get_Fonts(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet_TryFindFontFace(This, fontFace, index, succeeded) \
    ((This)->lpVtbl->TryFindFontFace(This, fontFace, index, succeeded))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet_GetMatchingFontsFromProperties(This, propertyElementsLength, propertyElements, matchingFonts) \
    ((This)->lpVtbl->GetMatchingFontsFromProperties(This, propertyElementsLength, propertyElements, matchingFonts))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet_GetMatchingFontsFromWwsFamily(This, familyName, weight, stretch, style, matchingFonts) \
    ((This)->lpVtbl->GetMatchingFontsFromWwsFamily(This, familyName, weight, stretch, style, matchingFonts))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet_CountFontsMatchingProperty(This, property, count) \
    ((This)->lpVtbl->CountFontsMatchingProperty(This, property, count))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet_GetPropertyValuesFromIndex(This, fontIndex, propertyIdentifier, values) \
    ((This)->lpVtbl->GetPropertyValuesFromIndex(This, fontIndex, propertyIdentifier, values))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet_GetPropertyValuesFromIdentifier(This, propertyIdentifier, preferredLocaleNames, valueElementsLength, valueElements) \
    ((This)->lpVtbl->GetPropertyValuesFromIdentifier(This, propertyIdentifier, preferredLocaleNames, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet_GetPropertyValues(This, propertyIdentifier, valueElementsLength, valueElements) \
    ((This)->lpVtbl->GetPropertyValues(This, propertyIdentifier, valueElementsLength, valueElements))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasFontSetFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasFontSet
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasFontSetFactory[] = L"Microsoft.Graphics.Canvas.Text.ICanvasFontSetFactory";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* Create)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory* This,
        __x_ABI_CWindows_CFoundation_CIUriRuntimeClass* uri,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet** fontSet);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactoryVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory_Create(This, uri, fontSet) \
    ((This)->lpVtbl->Create(This, uri, fontSet))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasFontSetStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasFontSet
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasFontSetStatics[] = L"Microsoft.Graphics.Canvas.Text.ICanvasFontSetStatics";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetSystemFontSet)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet** fontSet);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStaticsVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics_GetSystemFontSet(This, fontSet) \
    ((This)->lpVtbl->GetSystemFontSet(This, fontSet))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSetStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasNumberSubstitution
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasNumberSubstitution
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasNumberSubstitution[] = L"Microsoft.Graphics.Canvas.Text.ICanvasNumberSubstitution";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution* This,
        TrustLevel* trustLevel);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasNumberSubstitutionFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasNumberSubstitution
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasNumberSubstitutionFactory[] = L"Microsoft.Graphics.Canvas.Text.ICanvasNumberSubstitutionFactory";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* Create)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasNumberSubstitutionMethod method,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution** canvasNumberSubstitution);
    HRESULT (STDMETHODCALLTYPE* CreateWithLocaleAndIgnoreOverrides)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasNumberSubstitutionMethod method,
        HSTRING localeName,
        boolean ignoreEnvironmentOverrides,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution** canvasNumberSubstitution);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactoryVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory_Create(This, method, canvasNumberSubstitution) \
    ((This)->lpVtbl->Create(This, method, canvasNumberSubstitution))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory_CreateWithLocaleAndIgnoreOverrides(This, method, localeName, ignoreEnvironmentOverrides, canvasNumberSubstitution) \
    ((This)->lpVtbl->CreateWithLocaleAndIgnoreOverrides(This, method, localeName, ignoreEnvironmentOverrides, canvasNumberSubstitution))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitutionFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasScaledFont
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasScaledFont
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasScaledFont[] = L"Microsoft.Graphics.Canvas.Text.ICanvasScaledFont";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFontVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_FontFace)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace** value);
    HRESULT (STDMETHODCALLTYPE* get_ScaleFactor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont* This,
        FLOAT* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFontVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFontVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont_get_FontFace(This, value) \
    ((This)->lpVtbl->get_FontFace(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont_get_ScaleFactor(This, value) \
    ((This)->lpVtbl->get_ScaleFactor(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasScaledFont_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasTextAnalyzer
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasTextAnalyzer
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzer[] = L"Microsoft.Graphics.Canvas.Text.ICanvasTextAnalyzer";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetFontsUsingSystemFontSet)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* textFormat,
        __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont** values);
    HRESULT (STDMETHODCALLTYPE* GetFonts)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* textFormat,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontSet* fontSet,
        __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasScaledFont** values);
    HRESULT (STDMETHODCALLTYPE* GetBidi)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer* This,
        __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi** values);
    HRESULT (STDMETHODCALLTYPE* GetBidiWithLocale)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer* This,
        HSTRING locale,
        __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedBidi** values);
    HRESULT (STDMETHODCALLTYPE* GetBreakpoints)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer* This,
        UINT32* valueElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedBreakpoint** valueElements);
    HRESULT (STDMETHODCALLTYPE* GetBreakpointsWithLocale)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer* This,
        HSTRING locale,
        UINT32* valueElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedBreakpoint** valueElements);
    HRESULT (STDMETHODCALLTYPE* GetNumberSubstitutions)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer* This,
        __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasNumberSubstitution** values);
    HRESULT (STDMETHODCALLTYPE* GetScript)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer* This,
        __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript** values);
    HRESULT (STDMETHODCALLTYPE* GetScriptWithLocale)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer* This,
        HSTRING locale,
        __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedScript** values);
    HRESULT (STDMETHODCALLTYPE* GetGlyphOrientations)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer* This,
        __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation** values);
    HRESULT (STDMETHODCALLTYPE* GetGlyphOrientationsWithLocale)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer* This,
        HSTRING locale,
        __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasAnalyzedGlyphOrientation** values);
    HRESULT (STDMETHODCALLTYPE* GetScriptProperties)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer* This,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedScript analyzedScript,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasScriptProperties* scriptProperties);
    HRESULT (STDMETHODCALLTYPE* GetGlyphs)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer* This,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasCharacterRange characterRange,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* fontFace,
        FLOAT fontSize,
        boolean isSideways,
        boolean isRightToLeft,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedScript script,
        UINT32* valueElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyph** valueElements);
    HRESULT (STDMETHODCALLTYPE* GetGlyphsWithAllOptions)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer* This,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasCharacterRange characterRange,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* fontFace,
        FLOAT fontSize,
        boolean isSideways,
        boolean isRightToLeft,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedScript script,
        HSTRING locale,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution* numberSubstitution,
        __FIVectorView_1___FIKeyValuePair_2_Microsoft__CGraphics__CCanvas__CText__CCanvasCharacterRange_Microsoft__CGraphics__CCanvas__CText__CCanvasTypography* typographyRanges,
        UINT32* clusterMapIndicesElementsLength,
        INT32** clusterMapIndicesElements,
        UINT32* isShapedAloneGlyphsElementsLength,
        boolean** isShapedAloneGlyphsElements,
        UINT32* glyphShapingResultsElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphShaping** glyphShapingResultsElements,
        UINT32* valueElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyph** valueElements);
    HRESULT (STDMETHODCALLTYPE* GetJustificationOpportunities)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer* This,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasCharacterRange characterRange,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* fontFace,
        FLOAT fontSize,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedScript script,
        UINT32 clusterMapIndicesElementsLength,
        INT32* clusterMapIndicesElements,
        UINT32 glyphShapingResultsElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphShaping* glyphShapingResultsElements,
        UINT32* valueElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasJustificationOpportunity** valueElements);
    HRESULT (STDMETHODCALLTYPE* ApplyJustificationOpportunities)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer* This,
        FLOAT lineWidth,
        UINT32 justificationOpportunitiesElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasJustificationOpportunity* justificationOpportunitiesElements,
        UINT32 sourceGlyphsElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyph* sourceGlyphsElements,
        UINT32* valueElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyph** valueElements);
    HRESULT (STDMETHODCALLTYPE* AddGlyphsAfterJustification)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* fontFace,
        FLOAT fontSize,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedScript script,
        UINT32 clusterMapIndicesElementsLength,
        INT32* clusterMapIndicesElements,
        UINT32 originalGlyphsElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyph* originalGlyphsElements,
        UINT32 justifiedGlyphsElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyph* justifiedGlyphsElements,
        UINT32 glyphShapingResultsElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphShaping* glyphShapingResultsElements,
        UINT32* valueElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyph** valueElements);
    HRESULT (STDMETHODCALLTYPE* AddGlyphsAfterJustificationWithClusterMap)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* fontFace,
        FLOAT fontSize,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasAnalyzedScript script,
        UINT32 clusterMapIndicesElementsLength,
        INT32* clusterMapIndicesElements,
        UINT32 originalGlyphsElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyph* originalGlyphsElements,
        UINT32 justifiedGlyphsElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyph* justifiedGlyphsElements,
        UINT32 glyphShapingResultsElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphShaping* glyphShapingResultsElements,
        UINT32* outputClusterMapIndicesElementsLength,
        INT32** outputClusterMapIndicesElements,
        UINT32* valueElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyph** valueElements);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_GetFontsUsingSystemFontSet(This, textFormat, values) \
    ((This)->lpVtbl->GetFontsUsingSystemFontSet(This, textFormat, values))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_GetFonts(This, textFormat, fontSet, values) \
    ((This)->lpVtbl->GetFonts(This, textFormat, fontSet, values))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_GetBidi(This, values) \
    ((This)->lpVtbl->GetBidi(This, values))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_GetBidiWithLocale(This, locale, values) \
    ((This)->lpVtbl->GetBidiWithLocale(This, locale, values))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_GetBreakpoints(This, valueElementsLength, valueElements) \
    ((This)->lpVtbl->GetBreakpoints(This, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_GetBreakpointsWithLocale(This, locale, valueElementsLength, valueElements) \
    ((This)->lpVtbl->GetBreakpointsWithLocale(This, locale, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_GetNumberSubstitutions(This, values) \
    ((This)->lpVtbl->GetNumberSubstitutions(This, values))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_GetScript(This, values) \
    ((This)->lpVtbl->GetScript(This, values))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_GetScriptWithLocale(This, locale, values) \
    ((This)->lpVtbl->GetScriptWithLocale(This, locale, values))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_GetGlyphOrientations(This, values) \
    ((This)->lpVtbl->GetGlyphOrientations(This, values))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_GetGlyphOrientationsWithLocale(This, locale, values) \
    ((This)->lpVtbl->GetGlyphOrientationsWithLocale(This, locale, values))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_GetScriptProperties(This, analyzedScript, scriptProperties) \
    ((This)->lpVtbl->GetScriptProperties(This, analyzedScript, scriptProperties))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_GetGlyphs(This, characterRange, fontFace, fontSize, isSideways, isRightToLeft, script, valueElementsLength, valueElements) \
    ((This)->lpVtbl->GetGlyphs(This, characterRange, fontFace, fontSize, isSideways, isRightToLeft, script, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_GetGlyphsWithAllOptions(This, characterRange, fontFace, fontSize, isSideways, isRightToLeft, script, locale, numberSubstitution, typographyRanges, clusterMapIndicesElementsLength, clusterMapIndicesElements, isShapedAloneGlyphsElementsLength, isShapedAloneGlyphsElements, glyphShapingResultsElementsLength, glyphShapingResultsElements, valueElementsLength, valueElements) \
    ((This)->lpVtbl->GetGlyphsWithAllOptions(This, characterRange, fontFace, fontSize, isSideways, isRightToLeft, script, locale, numberSubstitution, typographyRanges, clusterMapIndicesElementsLength, clusterMapIndicesElements, isShapedAloneGlyphsElementsLength, isShapedAloneGlyphsElements, glyphShapingResultsElementsLength, glyphShapingResultsElements, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_GetJustificationOpportunities(This, characterRange, fontFace, fontSize, script, clusterMapIndicesElementsLength, clusterMapIndicesElements, glyphShapingResultsElementsLength, glyphShapingResultsElements, valueElementsLength, valueElements) \
    ((This)->lpVtbl->GetJustificationOpportunities(This, characterRange, fontFace, fontSize, script, clusterMapIndicesElementsLength, clusterMapIndicesElements, glyphShapingResultsElementsLength, glyphShapingResultsElements, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_ApplyJustificationOpportunities(This, lineWidth, justificationOpportunitiesElementsLength, justificationOpportunitiesElements, sourceGlyphsElementsLength, sourceGlyphsElements, valueElementsLength, valueElements) \
    ((This)->lpVtbl->ApplyJustificationOpportunities(This, lineWidth, justificationOpportunitiesElementsLength, justificationOpportunitiesElements, sourceGlyphsElementsLength, sourceGlyphsElements, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_AddGlyphsAfterJustification(This, fontFace, fontSize, script, clusterMapIndicesElementsLength, clusterMapIndicesElements, originalGlyphsElementsLength, originalGlyphsElements, justifiedGlyphsElementsLength, justifiedGlyphsElements, glyphShapingResultsElementsLength, glyphShapingResultsElements, valueElementsLength, valueElements) \
    ((This)->lpVtbl->AddGlyphsAfterJustification(This, fontFace, fontSize, script, clusterMapIndicesElementsLength, clusterMapIndicesElements, originalGlyphsElementsLength, originalGlyphsElements, justifiedGlyphsElementsLength, justifiedGlyphsElements, glyphShapingResultsElementsLength, glyphShapingResultsElements, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_AddGlyphsAfterJustificationWithClusterMap(This, fontFace, fontSize, script, clusterMapIndicesElementsLength, clusterMapIndicesElements, originalGlyphsElementsLength, originalGlyphsElements, justifiedGlyphsElementsLength, justifiedGlyphsElements, glyphShapingResultsElementsLength, glyphShapingResultsElements, outputClusterMapIndicesElementsLength, outputClusterMapIndicesElements, valueElementsLength, valueElements) \
    ((This)->lpVtbl->AddGlyphsAfterJustificationWithClusterMap(This, fontFace, fontSize, script, clusterMapIndicesElementsLength, clusterMapIndicesElements, originalGlyphsElementsLength, originalGlyphsElements, justifiedGlyphsElementsLength, justifiedGlyphsElements, glyphShapingResultsElementsLength, glyphShapingResultsElements, outputClusterMapIndicesElementsLength, outputClusterMapIndicesElements, valueElementsLength, valueElements))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasTextAnalyzerFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasTextAnalyzer
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzerFactory[] = L"Microsoft.Graphics.Canvas.Text.ICanvasTextAnalyzerFactory";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* Create)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory* This,
        HSTRING text,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextDirection textDirection,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer** canvasTextAnalyzer);
    HRESULT (STDMETHODCALLTYPE* CreateWithNumberSubstitutionAndVerticalGlyphOrientationAndBidiLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory* This,
        HSTRING text,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextDirection textDirection,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution* numberSubstitution,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasVerticalGlyphOrientation verticalGlyphOrientation,
        UINT32 bidiLevel,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer** canvasTextAnalyzer);
    HRESULT (STDMETHODCALLTYPE* CreateWithOptions)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory* This,
        HSTRING text,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextDirection textDirection,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions* options,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzer** canvasTextAnalyzer);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactoryVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory_Create(This, text, textDirection, canvasTextAnalyzer) \
    ((This)->lpVtbl->Create(This, text, textDirection, canvasTextAnalyzer))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory_CreateWithNumberSubstitutionAndVerticalGlyphOrientationAndBidiLevel(This, text, textDirection, numberSubstitution, verticalGlyphOrientation, bidiLevel, canvasTextAnalyzer) \
    ((This)->lpVtbl->CreateWithNumberSubstitutionAndVerticalGlyphOrientationAndBidiLevel(This, text, textDirection, numberSubstitution, verticalGlyphOrientation, bidiLevel, canvasTextAnalyzer))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory_CreateWithOptions(This, text, textDirection, options, canvasTextAnalyzer) \
    ((This)->lpVtbl->CreateWithOptions(This, text, textDirection, options, canvasTextAnalyzer))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasTextAnalyzerOptions
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasTextAnalyzerOptions[] = L"Microsoft.Graphics.Canvas.Text.ICanvasTextAnalyzerOptions";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptionsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetLocaleName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions* This,
        INT32 characterIndex,
        INT32* characterCount,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* GetNumberSubstitution)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions* This,
        INT32 characterIndex,
        INT32* characterCount,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasNumberSubstitution** value);
    HRESULT (STDMETHODCALLTYPE* GetVerticalGlyphOrientation)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions* This,
        INT32 characterIndex,
        INT32* characterCount,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasVerticalGlyphOrientation* value);
    HRESULT (STDMETHODCALLTYPE* GetBidiLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions* This,
        INT32 characterIndex,
        INT32* characterCount,
        UINT32* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptionsVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptionsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions_GetLocaleName(This, characterIndex, characterCount, value) \
    ((This)->lpVtbl->GetLocaleName(This, characterIndex, characterCount, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions_GetNumberSubstitution(This, characterIndex, characterCount, value) \
    ((This)->lpVtbl->GetNumberSubstitution(This, characterIndex, characterCount, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions_GetVerticalGlyphOrientation(This, characterIndex, characterCount, value) \
    ((This)->lpVtbl->GetVerticalGlyphOrientation(This, characterIndex, characterCount, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions_GetBidiLevel(This, characterIndex, characterCount, value) \
    ((This)->lpVtbl->GetBidiLevel(This, characterIndex, characterCount, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextAnalyzerOptions_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasTextFormat
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasTextFormat
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasTextFormat[] = L"Microsoft.Graphics.Canvas.Text.ICanvasTextFormat";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Direction)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextDirection* value);
    HRESULT (STDMETHODCALLTYPE* put_Direction)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextDirection value);
    HRESULT (STDMETHODCALLTYPE* get_FontFamily)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_FontFamily)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* get_FontSize)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* put_FontSize)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        FLOAT value);
    HRESULT (STDMETHODCALLTYPE* get_FontStretch)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        enum __x_ABI_CWindows_CUI_CText_CFontStretch* value);
    HRESULT (STDMETHODCALLTYPE* put_FontStretch)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        enum __x_ABI_CWindows_CUI_CText_CFontStretch value);
    HRESULT (STDMETHODCALLTYPE* get_FontStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        enum __x_ABI_CWindows_CUI_CText_CFontStyle* value);
    HRESULT (STDMETHODCALLTYPE* put_FontStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        enum __x_ABI_CWindows_CUI_CText_CFontStyle value);
    HRESULT (STDMETHODCALLTYPE* get_FontWeight)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        struct __x_ABI_CWindows_CUI_CText_CFontWeight* value);
    HRESULT (STDMETHODCALLTYPE* put_FontWeight)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        struct __x_ABI_CWindows_CUI_CText_CFontWeight value);
    HRESULT (STDMETHODCALLTYPE* get_IncrementalTabStop)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* put_IncrementalTabStop)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        FLOAT value);
    HRESULT (STDMETHODCALLTYPE* get_LineSpacing)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* put_LineSpacing)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        FLOAT value);
    HRESULT (STDMETHODCALLTYPE* get_LineSpacingBaseline)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* put_LineSpacingBaseline)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        FLOAT value);
    HRESULT (STDMETHODCALLTYPE* get_LocaleName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_LocaleName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* get_VerticalAlignment)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasVerticalAlignment* value);
    HRESULT (STDMETHODCALLTYPE* put_VerticalAlignment)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasVerticalAlignment value);
    HRESULT (STDMETHODCALLTYPE* get_HorizontalAlignment)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasHorizontalAlignment* value);
    HRESULT (STDMETHODCALLTYPE* put_HorizontalAlignment)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasHorizontalAlignment value);
    HRESULT (STDMETHODCALLTYPE* get_TrimmingGranularity)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextTrimmingGranularity* value);
    HRESULT (STDMETHODCALLTYPE* put_TrimmingGranularity)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextTrimmingGranularity value);
    HRESULT (STDMETHODCALLTYPE* get_TrimmingDelimiter)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_TrimmingDelimiter)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* get_TrimmingDelimiterCount)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        INT32* value);
    HRESULT (STDMETHODCALLTYPE* put_TrimmingDelimiterCount)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        INT32 value);
    HRESULT (STDMETHODCALLTYPE* get_WordWrapping)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasWordWrapping* value);
    HRESULT (STDMETHODCALLTYPE* put_WordWrapping)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasWordWrapping value);
    HRESULT (STDMETHODCALLTYPE* get_Options)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasDrawTextOptions* value);
    HRESULT (STDMETHODCALLTYPE* put_Options)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasDrawTextOptions value);
    HRESULT (STDMETHODCALLTYPE* get_VerticalGlyphOrientation)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasVerticalGlyphOrientation* value);
    HRESULT (STDMETHODCALLTYPE* put_VerticalGlyphOrientation)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasVerticalGlyphOrientation value);
    HRESULT (STDMETHODCALLTYPE* get_OpticalAlignment)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasOpticalAlignment* value);
    HRESULT (STDMETHODCALLTYPE* put_OpticalAlignment)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasOpticalAlignment value);
    HRESULT (STDMETHODCALLTYPE* get_LastLineWrapping)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* put_LastLineWrapping)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        boolean value);
    HRESULT (STDMETHODCALLTYPE* get_LineSpacingMode)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasLineSpacingMode* value);
    HRESULT (STDMETHODCALLTYPE* put_LineSpacingMode)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasLineSpacingMode value);
    HRESULT (STDMETHODCALLTYPE* get_TrimmingSign)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTrimmingSign* value);
    HRESULT (STDMETHODCALLTYPE* put_TrimmingSign)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTrimmingSign value);
    HRESULT (STDMETHODCALLTYPE* get_CustomTrimmingSign)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject** value);
    HRESULT (STDMETHODCALLTYPE* put_CustomTrimmingSign)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_get_Direction(This, value) \
    ((This)->lpVtbl->get_Direction(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_put_Direction(This, value) \
    ((This)->lpVtbl->put_Direction(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_get_FontFamily(This, value) \
    ((This)->lpVtbl->get_FontFamily(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_put_FontFamily(This, value) \
    ((This)->lpVtbl->put_FontFamily(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_get_FontSize(This, value) \
    ((This)->lpVtbl->get_FontSize(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_put_FontSize(This, value) \
    ((This)->lpVtbl->put_FontSize(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_get_FontStretch(This, value) \
    ((This)->lpVtbl->get_FontStretch(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_put_FontStretch(This, value) \
    ((This)->lpVtbl->put_FontStretch(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_get_FontStyle(This, value) \
    ((This)->lpVtbl->get_FontStyle(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_put_FontStyle(This, value) \
    ((This)->lpVtbl->put_FontStyle(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_get_FontWeight(This, value) \
    ((This)->lpVtbl->get_FontWeight(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_put_FontWeight(This, value) \
    ((This)->lpVtbl->put_FontWeight(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_get_IncrementalTabStop(This, value) \
    ((This)->lpVtbl->get_IncrementalTabStop(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_put_IncrementalTabStop(This, value) \
    ((This)->lpVtbl->put_IncrementalTabStop(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_get_LineSpacing(This, value) \
    ((This)->lpVtbl->get_LineSpacing(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_put_LineSpacing(This, value) \
    ((This)->lpVtbl->put_LineSpacing(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_get_LineSpacingBaseline(This, value) \
    ((This)->lpVtbl->get_LineSpacingBaseline(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_put_LineSpacingBaseline(This, value) \
    ((This)->lpVtbl->put_LineSpacingBaseline(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_get_LocaleName(This, value) \
    ((This)->lpVtbl->get_LocaleName(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_put_LocaleName(This, value) \
    ((This)->lpVtbl->put_LocaleName(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_get_VerticalAlignment(This, value) \
    ((This)->lpVtbl->get_VerticalAlignment(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_put_VerticalAlignment(This, value) \
    ((This)->lpVtbl->put_VerticalAlignment(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_get_HorizontalAlignment(This, value) \
    ((This)->lpVtbl->get_HorizontalAlignment(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_put_HorizontalAlignment(This, value) \
    ((This)->lpVtbl->put_HorizontalAlignment(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_get_TrimmingGranularity(This, value) \
    ((This)->lpVtbl->get_TrimmingGranularity(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_put_TrimmingGranularity(This, value) \
    ((This)->lpVtbl->put_TrimmingGranularity(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_get_TrimmingDelimiter(This, value) \
    ((This)->lpVtbl->get_TrimmingDelimiter(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_put_TrimmingDelimiter(This, value) \
    ((This)->lpVtbl->put_TrimmingDelimiter(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_get_TrimmingDelimiterCount(This, value) \
    ((This)->lpVtbl->get_TrimmingDelimiterCount(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_put_TrimmingDelimiterCount(This, value) \
    ((This)->lpVtbl->put_TrimmingDelimiterCount(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_get_WordWrapping(This, value) \
    ((This)->lpVtbl->get_WordWrapping(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_put_WordWrapping(This, value) \
    ((This)->lpVtbl->put_WordWrapping(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_get_Options(This, value) \
    ((This)->lpVtbl->get_Options(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_put_Options(This, value) \
    ((This)->lpVtbl->put_Options(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_get_VerticalGlyphOrientation(This, value) \
    ((This)->lpVtbl->get_VerticalGlyphOrientation(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_put_VerticalGlyphOrientation(This, value) \
    ((This)->lpVtbl->put_VerticalGlyphOrientation(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_get_OpticalAlignment(This, value) \
    ((This)->lpVtbl->get_OpticalAlignment(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_put_OpticalAlignment(This, value) \
    ((This)->lpVtbl->put_OpticalAlignment(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_get_LastLineWrapping(This, value) \
    ((This)->lpVtbl->get_LastLineWrapping(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_put_LastLineWrapping(This, value) \
    ((This)->lpVtbl->put_LastLineWrapping(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_get_LineSpacingMode(This, value) \
    ((This)->lpVtbl->get_LineSpacingMode(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_put_LineSpacingMode(This, value) \
    ((This)->lpVtbl->put_LineSpacingMode(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_get_TrimmingSign(This, value) \
    ((This)->lpVtbl->get_TrimmingSign(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_put_TrimmingSign(This, value) \
    ((This)->lpVtbl->put_TrimmingSign(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_get_CustomTrimmingSign(This, value) \
    ((This)->lpVtbl->get_CustomTrimmingSign(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_put_CustomTrimmingSign(This, value) \
    ((This)->lpVtbl->put_CustomTrimmingSign(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasTextFormatStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasTextFormat
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasTextFormatStatics[] = L"Microsoft.Graphics.Canvas.Text.ICanvasTextFormatStatics";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetSystemFontFamilies)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics* This,
        UINT32* valueElementsLength,
        HSTRING** valueElements);
    HRESULT (STDMETHODCALLTYPE* GetSystemFontFamiliesFromLocaleList)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics* This,
        __FIVectorView_1_HSTRING* localeList,
        UINT32* valueElementsLength,
        HSTRING** valueElements);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStaticsVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics_GetSystemFontFamilies(This, valueElementsLength, valueElements) \
    ((This)->lpVtbl->GetSystemFontFamilies(This, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics_GetSystemFontFamiliesFromLocaleList(This, localeList, valueElementsLength, valueElements) \
    ((This)->lpVtbl->GetSystemFontFamiliesFromLocaleList(This, localeList, valueElementsLength, valueElements))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormatStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasTextInlineObject
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasTextInlineObject[] = L"Microsoft.Graphics.Canvas.Text.ICanvasTextInlineObject";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObjectVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* Draw)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer* textRenderer,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point,
        boolean isSideways,
        boolean isRightToLeft,
        IInspectable* brush);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject* This,
        struct __x_ABI_CWindows_CFoundation_CSize* value);
    HRESULT (STDMETHODCALLTYPE* get_Baseline)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* get_SupportsSideways)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_DrawBounds)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject* This,
        struct __x_ABI_CWindows_CFoundation_CRect* bounds);
    HRESULT (STDMETHODCALLTYPE* get_BreakBefore)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasLineBreakCondition* value);
    HRESULT (STDMETHODCALLTYPE* get_BreakAfter)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasLineBreakCondition* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObjectVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObjectVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject_Draw(This, textRenderer, point, isSideways, isRightToLeft, brush) \
    ((This)->lpVtbl->Draw(This, textRenderer, point, isSideways, isRightToLeft, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject_get_Size(This, value) \
    ((This)->lpVtbl->get_Size(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject_get_Baseline(This, value) \
    ((This)->lpVtbl->get_Baseline(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject_get_SupportsSideways(This, value) \
    ((This)->lpVtbl->get_SupportsSideways(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject_get_DrawBounds(This, bounds) \
    ((This)->lpVtbl->get_DrawBounds(This, bounds))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject_get_BreakBefore(This, value) \
    ((This)->lpVtbl->get_BreakBefore(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject_get_BreakAfter(This, value) \
    ((This)->lpVtbl->get_BreakAfter(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasTextLayout
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasTextLayout
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasTextLayout[] = L"Microsoft.Graphics.Canvas.Text.ICanvasTextLayout";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetFormatChangeIndices)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        UINT32* stopsLength,
        INT32** stops);
    HRESULT (STDMETHODCALLTYPE* get_Direction)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextDirection* value);
    HRESULT (STDMETHODCALLTYPE* put_Direction)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextDirection value);
    HRESULT (STDMETHODCALLTYPE* get_DefaultFontFamily)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_DefaultFontSize)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* get_DefaultFontStretch)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        enum __x_ABI_CWindows_CUI_CText_CFontStretch* value);
    HRESULT (STDMETHODCALLTYPE* get_DefaultFontStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        enum __x_ABI_CWindows_CUI_CText_CFontStyle* value);
    HRESULT (STDMETHODCALLTYPE* get_DefaultFontWeight)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        struct __x_ABI_CWindows_CUI_CText_CFontWeight* value);
    HRESULT (STDMETHODCALLTYPE* get_IncrementalTabStop)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* put_IncrementalTabStop)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        FLOAT value);
    HRESULT (STDMETHODCALLTYPE* get_LineSpacing)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* put_LineSpacing)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        FLOAT value);
    HRESULT (STDMETHODCALLTYPE* get_LineSpacingBaseline)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* put_LineSpacingBaseline)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        FLOAT value);
    HRESULT (STDMETHODCALLTYPE* get_DefaultLocaleName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_VerticalAlignment)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasVerticalAlignment* value);
    HRESULT (STDMETHODCALLTYPE* put_VerticalAlignment)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasVerticalAlignment value);
    HRESULT (STDMETHODCALLTYPE* get_HorizontalAlignment)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasHorizontalAlignment* value);
    HRESULT (STDMETHODCALLTYPE* put_HorizontalAlignment)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasHorizontalAlignment value);
    HRESULT (STDMETHODCALLTYPE* get_TrimmingGranularity)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextTrimmingGranularity* value);
    HRESULT (STDMETHODCALLTYPE* put_TrimmingGranularity)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextTrimmingGranularity value);
    HRESULT (STDMETHODCALLTYPE* get_TrimmingDelimiter)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_TrimmingDelimiter)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* get_TrimmingDelimiterCount)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32* value);
    HRESULT (STDMETHODCALLTYPE* put_TrimmingDelimiterCount)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 value);
    HRESULT (STDMETHODCALLTYPE* get_WordWrapping)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasWordWrapping* value);
    HRESULT (STDMETHODCALLTYPE* put_WordWrapping)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasWordWrapping value);
    HRESULT (STDMETHODCALLTYPE* get_Options)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasDrawTextOptions* value);
    HRESULT (STDMETHODCALLTYPE* put_Options)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasDrawTextOptions value);
    HRESULT (STDMETHODCALLTYPE* get_LineSpacingMode)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasLineSpacingMode* value);
    HRESULT (STDMETHODCALLTYPE* put_LineSpacingMode)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasLineSpacingMode value);
    HRESULT (STDMETHODCALLTYPE* get_TrimmingSign)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTrimmingSign* value);
    HRESULT (STDMETHODCALLTYPE* put_TrimmingSign)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTrimmingSign value);
    HRESULT (STDMETHODCALLTYPE* get_CustomTrimmingSign)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject** value);
    HRESULT (STDMETHODCALLTYPE* put_CustomTrimmingSign)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject* value);
    HRESULT (STDMETHODCALLTYPE* get_RequestedSize)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        struct __x_ABI_CWindows_CFoundation_CSize* value);
    HRESULT (STDMETHODCALLTYPE* put_RequestedSize)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        struct __x_ABI_CWindows_CFoundation_CSize value);
    HRESULT (STDMETHODCALLTYPE* GetMinimumLineLength)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* GetBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush** brush);
    HRESULT (STDMETHODCALLTYPE* GetCustomBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        IInspectable** brush);
    HRESULT (STDMETHODCALLTYPE* GetFontFamily)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        HSTRING* fontFamily);
    HRESULT (STDMETHODCALLTYPE* GetFontSize)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        FLOAT* fontSize);
    HRESULT (STDMETHODCALLTYPE* GetFontStretch)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        enum __x_ABI_CWindows_CUI_CText_CFontStretch* fontStretch);
    HRESULT (STDMETHODCALLTYPE* GetFontStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        enum __x_ABI_CWindows_CUI_CText_CFontStyle* fontStyle);
    HRESULT (STDMETHODCALLTYPE* GetFontWeight)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        struct __x_ABI_CWindows_CUI_CText_CFontWeight* fontWeight);
    HRESULT (STDMETHODCALLTYPE* GetLocaleName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        HSTRING* localeName);
    HRESULT (STDMETHODCALLTYPE* GetStrikethrough)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        boolean* hasStrikethrough);
    HRESULT (STDMETHODCALLTYPE* GetUnderline)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        boolean* hasUnderline);
    HRESULT (STDMETHODCALLTYPE* GetInlineObject)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject** inlineObject);
    HRESULT (STDMETHODCALLTYPE* SetColor)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        INT32 characterCount,
        struct __x_ABI_CWindows_CUI_CColor color);
    HRESULT (STDMETHODCALLTYPE* SetBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        INT32 characterCount,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CBrushes_CICanvasBrush* brush);
    HRESULT (STDMETHODCALLTYPE* SetCustomBrush)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        INT32 characterCount,
        IInspectable* brush);
    HRESULT (STDMETHODCALLTYPE* SetFontFamily)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        INT32 characterCount,
        HSTRING fontFamily);
    HRESULT (STDMETHODCALLTYPE* SetFontSize)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        INT32 characterCount,
        FLOAT fontSize);
    HRESULT (STDMETHODCALLTYPE* SetFontStretch)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        INT32 characterCount,
        enum __x_ABI_CWindows_CUI_CText_CFontStretch fontStretch);
    HRESULT (STDMETHODCALLTYPE* SetFontStyle)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        INT32 characterCount,
        enum __x_ABI_CWindows_CUI_CText_CFontStyle fontStyle);
    HRESULT (STDMETHODCALLTYPE* SetFontWeight)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        INT32 characterCount,
        struct __x_ABI_CWindows_CUI_CText_CFontWeight fontWeight);
    HRESULT (STDMETHODCALLTYPE* SetLocaleName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        INT32 characterCount,
        HSTRING name);
    HRESULT (STDMETHODCALLTYPE* SetStrikethrough)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        INT32 characterCount,
        boolean hasStrikethrough);
    HRESULT (STDMETHODCALLTYPE* SetUnderline)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        INT32 characterCount,
        boolean hasUnderline);
    HRESULT (STDMETHODCALLTYPE* SetInlineObject)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        INT32 characterCount,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject* inlineObject);
    HRESULT (STDMETHODCALLTYPE* DrawToTextRenderer)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer* textRenderer,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 position);
    HRESULT (STDMETHODCALLTYPE* DrawToTextRendererWithCoords)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer* textRenderer,
        FLOAT x,
        FLOAT y);
    HRESULT (STDMETHODCALLTYPE* get_LineMetrics)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        UINT32* valueElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasLineMetrics** valueElements);
    HRESULT (STDMETHODCALLTYPE* get_ClusterMetrics)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        UINT32* valueElementsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasClusterMetrics** valueElements);
    HRESULT (STDMETHODCALLTYPE* SetTypography)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        INT32 characterCount,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography* typography);
    HRESULT (STDMETHODCALLTYPE* GetTypography)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography** typography);
    HRESULT (STDMETHODCALLTYPE* get_LayoutBounds)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        struct __x_ABI_CWindows_CFoundation_CRect* bounds);
    HRESULT (STDMETHODCALLTYPE* get_LayoutBoundsIncludingTrailingWhitespace)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        struct __x_ABI_CWindows_CFoundation_CRect* bounds);
    HRESULT (STDMETHODCALLTYPE* get_LineCount)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32* lineCount);
    HRESULT (STDMETHODCALLTYPE* get_MaximumBidiReorderingDepth)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32* depth);
    HRESULT (STDMETHODCALLTYPE* get_DrawBounds)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        struct __x_ABI_CWindows_CFoundation_CRect* bounds);
    HRESULT (STDMETHODCALLTYPE* HitTest)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point,
        boolean* isHit);
    HRESULT (STDMETHODCALLTYPE* HitTestWithCoords)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        FLOAT x,
        FLOAT y,
        boolean* isHit);
    HRESULT (STDMETHODCALLTYPE* HitTestWithDescription)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextLayoutRegion* textLayoutRegion,
        boolean* isHit);
    HRESULT (STDMETHODCALLTYPE* HitTestWithDescriptionAndCoords)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        FLOAT x,
        FLOAT y,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextLayoutRegion* textLayoutRegion,
        boolean* isHit);
    HRESULT (STDMETHODCALLTYPE* HitTestWithDescriptionAndTrailingSide)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextLayoutRegion* textLayoutRegion,
        boolean* trailingSideOfCharacter,
        boolean* isHit);
    HRESULT (STDMETHODCALLTYPE* HitTestWithDescriptionAndCoordsAndTrailingSide)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        FLOAT x,
        FLOAT y,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextLayoutRegion* textLayoutRegion,
        boolean* trailingSideOfCharacter,
        boolean* isHit);
    HRESULT (STDMETHODCALLTYPE* GetCaretPosition)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        boolean trailingSideOfCharacter,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2* location);
    HRESULT (STDMETHODCALLTYPE* GetCaretPositionWithDescription)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        boolean trailingSideOfCharacter,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextLayoutRegion* textLayoutRegion,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2* location);
    HRESULT (STDMETHODCALLTYPE* GetCharacterRegions)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        INT32 characterCount,
        UINT32* hitTestDescriptionsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextLayoutRegion** hitTestDescriptions);
    HRESULT (STDMETHODCALLTYPE* GetPairKerning)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        boolean* hasPairKerning);
    HRESULT (STDMETHODCALLTYPE* SetPairKerning)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        INT32 characterCount,
        boolean hasPairKerning);
    HRESULT (STDMETHODCALLTYPE* GetLeadingCharacterSpacing)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        FLOAT* leadingSpacing);
    HRESULT (STDMETHODCALLTYPE* GetTrailingCharacterSpacing)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        FLOAT* trailingSpacing);
    HRESULT (STDMETHODCALLTYPE* GetMinimumCharacterAdvance)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        FLOAT* minimumAdvance);
    HRESULT (STDMETHODCALLTYPE* SetCharacterSpacing)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        INT32 characterIndex,
        INT32 characterCount,
        FLOAT leadingSpacing,
        FLOAT trailingSpacing,
        FLOAT minimumAdvance);
    HRESULT (STDMETHODCALLTYPE* get_VerticalGlyphOrientation)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasVerticalGlyphOrientation* value);
    HRESULT (STDMETHODCALLTYPE* put_VerticalGlyphOrientation)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasVerticalGlyphOrientation value);
    HRESULT (STDMETHODCALLTYPE* get_OpticalAlignment)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasOpticalAlignment* value);
    HRESULT (STDMETHODCALLTYPE* put_OpticalAlignment)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasOpticalAlignment value);
    HRESULT (STDMETHODCALLTYPE* get_LastLineWrapping)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* put_LastLineWrapping)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        boolean value);
    HRESULT (STDMETHODCALLTYPE* get_Device)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasDevice** value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_GetFormatChangeIndices(This, stopsLength, stops) \
    ((This)->lpVtbl->GetFormatChangeIndices(This, stopsLength, stops))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_Direction(This, value) \
    ((This)->lpVtbl->get_Direction(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_put_Direction(This, value) \
    ((This)->lpVtbl->put_Direction(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_DefaultFontFamily(This, value) \
    ((This)->lpVtbl->get_DefaultFontFamily(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_DefaultFontSize(This, value) \
    ((This)->lpVtbl->get_DefaultFontSize(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_DefaultFontStretch(This, value) \
    ((This)->lpVtbl->get_DefaultFontStretch(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_DefaultFontStyle(This, value) \
    ((This)->lpVtbl->get_DefaultFontStyle(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_DefaultFontWeight(This, value) \
    ((This)->lpVtbl->get_DefaultFontWeight(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_IncrementalTabStop(This, value) \
    ((This)->lpVtbl->get_IncrementalTabStop(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_put_IncrementalTabStop(This, value) \
    ((This)->lpVtbl->put_IncrementalTabStop(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_LineSpacing(This, value) \
    ((This)->lpVtbl->get_LineSpacing(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_put_LineSpacing(This, value) \
    ((This)->lpVtbl->put_LineSpacing(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_LineSpacingBaseline(This, value) \
    ((This)->lpVtbl->get_LineSpacingBaseline(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_put_LineSpacingBaseline(This, value) \
    ((This)->lpVtbl->put_LineSpacingBaseline(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_DefaultLocaleName(This, value) \
    ((This)->lpVtbl->get_DefaultLocaleName(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_VerticalAlignment(This, value) \
    ((This)->lpVtbl->get_VerticalAlignment(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_put_VerticalAlignment(This, value) \
    ((This)->lpVtbl->put_VerticalAlignment(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_HorizontalAlignment(This, value) \
    ((This)->lpVtbl->get_HorizontalAlignment(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_put_HorizontalAlignment(This, value) \
    ((This)->lpVtbl->put_HorizontalAlignment(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_TrimmingGranularity(This, value) \
    ((This)->lpVtbl->get_TrimmingGranularity(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_put_TrimmingGranularity(This, value) \
    ((This)->lpVtbl->put_TrimmingGranularity(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_TrimmingDelimiter(This, value) \
    ((This)->lpVtbl->get_TrimmingDelimiter(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_put_TrimmingDelimiter(This, value) \
    ((This)->lpVtbl->put_TrimmingDelimiter(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_TrimmingDelimiterCount(This, value) \
    ((This)->lpVtbl->get_TrimmingDelimiterCount(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_put_TrimmingDelimiterCount(This, value) \
    ((This)->lpVtbl->put_TrimmingDelimiterCount(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_WordWrapping(This, value) \
    ((This)->lpVtbl->get_WordWrapping(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_put_WordWrapping(This, value) \
    ((This)->lpVtbl->put_WordWrapping(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_Options(This, value) \
    ((This)->lpVtbl->get_Options(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_put_Options(This, value) \
    ((This)->lpVtbl->put_Options(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_LineSpacingMode(This, value) \
    ((This)->lpVtbl->get_LineSpacingMode(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_put_LineSpacingMode(This, value) \
    ((This)->lpVtbl->put_LineSpacingMode(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_TrimmingSign(This, value) \
    ((This)->lpVtbl->get_TrimmingSign(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_put_TrimmingSign(This, value) \
    ((This)->lpVtbl->put_TrimmingSign(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_CustomTrimmingSign(This, value) \
    ((This)->lpVtbl->get_CustomTrimmingSign(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_put_CustomTrimmingSign(This, value) \
    ((This)->lpVtbl->put_CustomTrimmingSign(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_RequestedSize(This, value) \
    ((This)->lpVtbl->get_RequestedSize(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_put_RequestedSize(This, value) \
    ((This)->lpVtbl->put_RequestedSize(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_GetMinimumLineLength(This, value) \
    ((This)->lpVtbl->GetMinimumLineLength(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_GetBrush(This, characterIndex, brush) \
    ((This)->lpVtbl->GetBrush(This, characterIndex, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_GetCustomBrush(This, characterIndex, brush) \
    ((This)->lpVtbl->GetCustomBrush(This, characterIndex, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_GetFontFamily(This, characterIndex, fontFamily) \
    ((This)->lpVtbl->GetFontFamily(This, characterIndex, fontFamily))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_GetFontSize(This, characterIndex, fontSize) \
    ((This)->lpVtbl->GetFontSize(This, characterIndex, fontSize))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_GetFontStretch(This, characterIndex, fontStretch) \
    ((This)->lpVtbl->GetFontStretch(This, characterIndex, fontStretch))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_GetFontStyle(This, characterIndex, fontStyle) \
    ((This)->lpVtbl->GetFontStyle(This, characterIndex, fontStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_GetFontWeight(This, characterIndex, fontWeight) \
    ((This)->lpVtbl->GetFontWeight(This, characterIndex, fontWeight))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_GetLocaleName(This, characterIndex, localeName) \
    ((This)->lpVtbl->GetLocaleName(This, characterIndex, localeName))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_GetStrikethrough(This, characterIndex, hasStrikethrough) \
    ((This)->lpVtbl->GetStrikethrough(This, characterIndex, hasStrikethrough))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_GetUnderline(This, characterIndex, hasUnderline) \
    ((This)->lpVtbl->GetUnderline(This, characterIndex, hasUnderline))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_GetInlineObject(This, characterIndex, inlineObject) \
    ((This)->lpVtbl->GetInlineObject(This, characterIndex, inlineObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_SetColor(This, characterIndex, characterCount, color) \
    ((This)->lpVtbl->SetColor(This, characterIndex, characterCount, color))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_SetBrush(This, characterIndex, characterCount, brush) \
    ((This)->lpVtbl->SetBrush(This, characterIndex, characterCount, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_SetCustomBrush(This, characterIndex, characterCount, brush) \
    ((This)->lpVtbl->SetCustomBrush(This, characterIndex, characterCount, brush))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_SetFontFamily(This, characterIndex, characterCount, fontFamily) \
    ((This)->lpVtbl->SetFontFamily(This, characterIndex, characterCount, fontFamily))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_SetFontSize(This, characterIndex, characterCount, fontSize) \
    ((This)->lpVtbl->SetFontSize(This, characterIndex, characterCount, fontSize))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_SetFontStretch(This, characterIndex, characterCount, fontStretch) \
    ((This)->lpVtbl->SetFontStretch(This, characterIndex, characterCount, fontStretch))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_SetFontStyle(This, characterIndex, characterCount, fontStyle) \
    ((This)->lpVtbl->SetFontStyle(This, characterIndex, characterCount, fontStyle))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_SetFontWeight(This, characterIndex, characterCount, fontWeight) \
    ((This)->lpVtbl->SetFontWeight(This, characterIndex, characterCount, fontWeight))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_SetLocaleName(This, characterIndex, characterCount, name) \
    ((This)->lpVtbl->SetLocaleName(This, characterIndex, characterCount, name))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_SetStrikethrough(This, characterIndex, characterCount, hasStrikethrough) \
    ((This)->lpVtbl->SetStrikethrough(This, characterIndex, characterCount, hasStrikethrough))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_SetUnderline(This, characterIndex, characterCount, hasUnderline) \
    ((This)->lpVtbl->SetUnderline(This, characterIndex, characterCount, hasUnderline))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_SetInlineObject(This, characterIndex, characterCount, inlineObject) \
    ((This)->lpVtbl->SetInlineObject(This, characterIndex, characterCount, inlineObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_DrawToTextRenderer(This, textRenderer, position) \
    ((This)->lpVtbl->DrawToTextRenderer(This, textRenderer, position))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_DrawToTextRendererWithCoords(This, textRenderer, x, y) \
    ((This)->lpVtbl->DrawToTextRendererWithCoords(This, textRenderer, x, y))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_LineMetrics(This, valueElementsLength, valueElements) \
    ((This)->lpVtbl->get_LineMetrics(This, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_ClusterMetrics(This, valueElementsLength, valueElements) \
    ((This)->lpVtbl->get_ClusterMetrics(This, valueElementsLength, valueElements))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_SetTypography(This, characterIndex, characterCount, typography) \
    ((This)->lpVtbl->SetTypography(This, characterIndex, characterCount, typography))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_GetTypography(This, characterIndex, typography) \
    ((This)->lpVtbl->GetTypography(This, characterIndex, typography))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_LayoutBounds(This, bounds) \
    ((This)->lpVtbl->get_LayoutBounds(This, bounds))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_LayoutBoundsIncludingTrailingWhitespace(This, bounds) \
    ((This)->lpVtbl->get_LayoutBoundsIncludingTrailingWhitespace(This, bounds))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_LineCount(This, lineCount) \
    ((This)->lpVtbl->get_LineCount(This, lineCount))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_MaximumBidiReorderingDepth(This, depth) \
    ((This)->lpVtbl->get_MaximumBidiReorderingDepth(This, depth))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_DrawBounds(This, bounds) \
    ((This)->lpVtbl->get_DrawBounds(This, bounds))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_HitTest(This, point, isHit) \
    ((This)->lpVtbl->HitTest(This, point, isHit))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_HitTestWithCoords(This, x, y, isHit) \
    ((This)->lpVtbl->HitTestWithCoords(This, x, y, isHit))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_HitTestWithDescription(This, point, textLayoutRegion, isHit) \
    ((This)->lpVtbl->HitTestWithDescription(This, point, textLayoutRegion, isHit))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_HitTestWithDescriptionAndCoords(This, x, y, textLayoutRegion, isHit) \
    ((This)->lpVtbl->HitTestWithDescriptionAndCoords(This, x, y, textLayoutRegion, isHit))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_HitTestWithDescriptionAndTrailingSide(This, point, textLayoutRegion, trailingSideOfCharacter, isHit) \
    ((This)->lpVtbl->HitTestWithDescriptionAndTrailingSide(This, point, textLayoutRegion, trailingSideOfCharacter, isHit))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_HitTestWithDescriptionAndCoordsAndTrailingSide(This, x, y, textLayoutRegion, trailingSideOfCharacter, isHit) \
    ((This)->lpVtbl->HitTestWithDescriptionAndCoordsAndTrailingSide(This, x, y, textLayoutRegion, trailingSideOfCharacter, isHit))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_GetCaretPosition(This, characterIndex, trailingSideOfCharacter, location) \
    ((This)->lpVtbl->GetCaretPosition(This, characterIndex, trailingSideOfCharacter, location))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_GetCaretPositionWithDescription(This, characterIndex, trailingSideOfCharacter, textLayoutRegion, location) \
    ((This)->lpVtbl->GetCaretPositionWithDescription(This, characterIndex, trailingSideOfCharacter, textLayoutRegion, location))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_GetCharacterRegions(This, characterIndex, characterCount, hitTestDescriptionsLength, hitTestDescriptions) \
    ((This)->lpVtbl->GetCharacterRegions(This, characterIndex, characterCount, hitTestDescriptionsLength, hitTestDescriptions))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_GetPairKerning(This, characterIndex, hasPairKerning) \
    ((This)->lpVtbl->GetPairKerning(This, characterIndex, hasPairKerning))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_SetPairKerning(This, characterIndex, characterCount, hasPairKerning) \
    ((This)->lpVtbl->SetPairKerning(This, characterIndex, characterCount, hasPairKerning))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_GetLeadingCharacterSpacing(This, characterIndex, leadingSpacing) \
    ((This)->lpVtbl->GetLeadingCharacterSpacing(This, characterIndex, leadingSpacing))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_GetTrailingCharacterSpacing(This, characterIndex, trailingSpacing) \
    ((This)->lpVtbl->GetTrailingCharacterSpacing(This, characterIndex, trailingSpacing))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_GetMinimumCharacterAdvance(This, characterIndex, minimumAdvance) \
    ((This)->lpVtbl->GetMinimumCharacterAdvance(This, characterIndex, minimumAdvance))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_SetCharacterSpacing(This, characterIndex, characterCount, leadingSpacing, trailingSpacing, minimumAdvance) \
    ((This)->lpVtbl->SetCharacterSpacing(This, characterIndex, characterCount, leadingSpacing, trailingSpacing, minimumAdvance))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_VerticalGlyphOrientation(This, value) \
    ((This)->lpVtbl->get_VerticalGlyphOrientation(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_put_VerticalGlyphOrientation(This, value) \
    ((This)->lpVtbl->put_VerticalGlyphOrientation(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_OpticalAlignment(This, value) \
    ((This)->lpVtbl->get_OpticalAlignment(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_put_OpticalAlignment(This, value) \
    ((This)->lpVtbl->put_OpticalAlignment(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_LastLineWrapping(This, value) \
    ((This)->lpVtbl->get_LastLineWrapping(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_put_LastLineWrapping(This, value) \
    ((This)->lpVtbl->put_LastLineWrapping(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_get_Device(This, value) \
    ((This)->lpVtbl->get_Device(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasTextLayoutFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasTextLayout
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasTextLayoutFactory[] = L"Microsoft.Graphics.Canvas.Text.ICanvasTextLayoutFactory";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* Create)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory* This,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CICanvasResourceCreator* resourceCreator,
        HSTRING textString,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextFormat* textFormat,
        FLOAT requestedWidth,
        FLOAT requestedHeight,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayout** canvasTextLayout);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactoryVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory_Create(This, resourceCreator, textString, textFormat, requestedWidth, requestedHeight, canvasTextLayout) \
    ((This)->lpVtbl->Create(This, resourceCreator, textString, textFormat, requestedWidth, requestedHeight, canvasTextLayout))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasTextLayoutStatics
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasTextLayout
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasTextLayoutStatics[] = L"Microsoft.Graphics.Canvas.Text.ICanvasTextLayoutStatics";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetGlyphOrientationTransform)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphOrientation glyphOrientation,
        boolean isSideways,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 position,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2* transform);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStaticsVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics_GetGlyphOrientationTransform(This, glyphOrientation, isSideways, position, transform) \
    ((This)->lpVtbl->GetGlyphOrientationTransform(This, glyphOrientation, isSideways, position, transform))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextLayoutStatics_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasTextRenderer
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasTextRenderer[] = L"Microsoft.Graphics.Canvas.Text.ICanvasTextRenderer";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRendererVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* DrawGlyphRun)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasFontFace* fontFace,
        FLOAT fontSize,
        UINT32 glyphsLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyph* glyphs,
        boolean isSideways,
        UINT32 bidiLevel,
        IInspectable* brush,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextMeasuringMode measuringMode,
        HSTRING localeName,
        HSTRING textString,
        UINT32 clusterMapIndicesLength,
        INT32* clusterMapIndices,
        UINT32 characterIndex,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphOrientation glyphOrientation);
    HRESULT (STDMETHODCALLTYPE* DrawStrikethrough)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point,
        FLOAT strikethroughWidth,
        FLOAT strikethroughThickness,
        FLOAT strikethroughOffset,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextDirection textDirection,
        IInspectable* brush,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextMeasuringMode textMeasuringMode,
        HSTRING localeName,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphOrientation glyphOrientation);
    HRESULT (STDMETHODCALLTYPE* DrawUnderline)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point,
        FLOAT underlineWidth,
        FLOAT underlineThickness,
        FLOAT underlineOffset,
        FLOAT runHeight,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextDirection textDirection,
        IInspectable* brush,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextMeasuringMode textMeasuringMode,
        HSTRING localeName,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphOrientation glyphOrientation);
    HRESULT (STDMETHODCALLTYPE* DrawInlineObject)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 point,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextInlineObject* inlineObject,
        boolean isSideways,
        boolean isRightToLeft,
        IInspectable* brush,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasGlyphOrientation glyphOrientation);
    HRESULT (STDMETHODCALLTYPE* get_PixelSnappingDisabled)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_Transform)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2* value);
    HRESULT (STDMETHODCALLTYPE* get_Dpi)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer* This,
        FLOAT* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRendererVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRendererVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer_DrawGlyphRun(This, point, fontFace, fontSize, glyphsLength, glyphs, isSideways, bidiLevel, brush, measuringMode, localeName, textString, clusterMapIndicesLength, clusterMapIndices, characterIndex, glyphOrientation) \
    ((This)->lpVtbl->DrawGlyphRun(This, point, fontFace, fontSize, glyphsLength, glyphs, isSideways, bidiLevel, brush, measuringMode, localeName, textString, clusterMapIndicesLength, clusterMapIndices, characterIndex, glyphOrientation))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer_DrawStrikethrough(This, point, strikethroughWidth, strikethroughThickness, strikethroughOffset, textDirection, brush, textMeasuringMode, localeName, glyphOrientation) \
    ((This)->lpVtbl->DrawStrikethrough(This, point, strikethroughWidth, strikethroughThickness, strikethroughOffset, textDirection, brush, textMeasuringMode, localeName, glyphOrientation))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer_DrawUnderline(This, point, underlineWidth, underlineThickness, underlineOffset, runHeight, textDirection, brush, textMeasuringMode, localeName, glyphOrientation) \
    ((This)->lpVtbl->DrawUnderline(This, point, underlineWidth, underlineThickness, underlineOffset, runHeight, textDirection, brush, textMeasuringMode, localeName, glyphOrientation))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer_DrawInlineObject(This, point, inlineObject, isSideways, isRightToLeft, brush, glyphOrientation) \
    ((This)->lpVtbl->DrawInlineObject(This, point, inlineObject, isSideways, isRightToLeft, brush, glyphOrientation))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer_get_PixelSnappingDisabled(This, value) \
    ((This)->lpVtbl->get_PixelSnappingDisabled(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer_get_Transform(This, value) \
    ((This)->lpVtbl->get_Transform(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer_get_Dpi(This, value) \
    ((This)->lpVtbl->get_Dpi(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderer_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasTextRenderingParameters
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasTextRenderingParameters
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasTextRenderingParameters[] = L"Microsoft.Graphics.Canvas.Text.ICanvasTextRenderingParameters";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_RenderingMode)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextRenderingMode* value);
    HRESULT (STDMETHODCALLTYPE* get_GridFit)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextGridFit* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters_get_RenderingMode(This, value) \
    ((This)->lpVtbl->get_RenderingMode(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters_get_GridFit(This, value) \
    ((This)->lpVtbl->get_GridFit(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasTextRenderingParametersFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasTextRenderingParameters
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasTextRenderingParametersFactory[] = L"Microsoft.Graphics.Canvas.Text.ICanvasTextRenderingParametersFactory";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* Create)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextRenderingMode textRenderingMode,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTextGridFit gridFit,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParameters** textRenderingParameters);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactoryVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory_Create(This, textRenderingMode, gridFit, textRenderingParameters) \
    ((This)->lpVtbl->Create(This, textRenderingMode, gridFit, textRenderingParameters))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTextRenderingParametersFactory_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.Text.ICanvasTypography
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.Text.CanvasTypography
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_Text_ICanvasTypography[] = L"Microsoft.Graphics.Canvas.Text.ICanvasTypography";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypographyVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* AddFeature)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography* This,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTypographyFeature feature);
    HRESULT (STDMETHODCALLTYPE* AddFeatureWithNameAndParameter)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTypographyFeatureName name,
        UINT32 parameter);
    HRESULT (STDMETHODCALLTYPE* GetFeatures)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography* This,
        UINT32* featuresLength,
        struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CCanvasTypographyFeature** features);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypographyVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypographyVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography_AddFeature(This, feature) \
    ((This)->lpVtbl->AddFeature(This, feature))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography_AddFeatureWithNameAndParameter(This, name, parameter) \
    ((This)->lpVtbl->AddFeatureWithNameAndParameter(This, name, parameter))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography_GetFeatures(This, featuresLength, features) \
    ((This)->lpVtbl->GetFeatures(This, featuresLength, features))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CText_CICanvasTypography_INTERFACE_DEFINED__) */

/*
 *
 * Class Microsoft.Graphics.Canvas.Text.CanvasFontFace
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Text.ICanvasFontFace ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasFontFace_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasFontFace_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Text_CanvasFontFace[] = L"Microsoft.Graphics.Canvas.Text.CanvasFontFace";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Text.CanvasFontSet
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Text.ICanvasFontSet ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasFontSet_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasFontSet_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Text_CanvasFontSet[] = L"Microsoft.Graphics.Canvas.Text.CanvasFontSet";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Text.CanvasNumberSubstitution
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Text.ICanvasNumberSubstitution ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasNumberSubstitution_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasNumberSubstitution_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Text_CanvasNumberSubstitution[] = L"Microsoft.Graphics.Canvas.Text.CanvasNumberSubstitution";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Text.CanvasScaledFont
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Text.ICanvasScaledFont ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasScaledFont_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasScaledFont_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Text_CanvasScaledFont[] = L"Microsoft.Graphics.Canvas.Text.CanvasScaledFont";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Text.CanvasTextAnalyzer
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Text.ICanvasTextAnalyzer ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasTextAnalyzer_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasTextAnalyzer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Text_CanvasTextAnalyzer[] = L"Microsoft.Graphics.Canvas.Text.CanvasTextAnalyzer";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Text.CanvasTextFormat
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Text.ICanvasTextFormat ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasTextFormat_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasTextFormat_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Text_CanvasTextFormat[] = L"Microsoft.Graphics.Canvas.Text.CanvasTextFormat";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Text.CanvasTextLayout
 *
 * RuntimeClass can be activated.
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Text.ICanvasTextLayout ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasTextLayout_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasTextLayout_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Text_CanvasTextLayout[] = L"Microsoft.Graphics.Canvas.Text.CanvasTextLayout";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Text.CanvasTextRenderingParameters
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Text.ICanvasTextRenderingParameters ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasTextRenderingParameters_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasTextRenderingParameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Text_CanvasTextRenderingParameters[] = L"Microsoft.Graphics.Canvas.Text.CanvasTextRenderingParameters";
#endif

/*
 *
 * Class Microsoft.Graphics.Canvas.Text.CanvasTypography
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.Text.ICanvasTypography ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasTypography_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_Text_CanvasTypography_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_Text_CanvasTypography[] = L"Microsoft.Graphics.Canvas.Text.CanvasTypography";
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
#endif // __microsoft2Egraphics2Ecanvas2Etext_p_h__

#endif // __microsoft2Egraphics2Ecanvas2Etext_h__
