
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
#ifndef __microsoft2Eui2Examl2Ehosting_h__
#define __microsoft2Eui2Examl2Ehosting_h__
#ifndef __microsoft2Eui2Examl2Ehosting_p_h__
#define __microsoft2Eui2Examl2Ehosting_p_h__


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
#if !defined(MICROSOFT_UI_XAML_WINUICONTRACT_VERSION)
#define MICROSOFT_UI_XAML_WINUICONTRACT_VERSION 0x30000
#endif // defined(MICROSOFT_UI_XAML_WINUICONTRACT_VERSION)

#if !defined(MICROSOFT_UI_XAML_XAMLCONTRACT_VERSION)
#define MICROSOFT_UI_XAML_XAMLCONTRACT_VERSION 0x30000
#endif // defined(MICROSOFT_UI_XAML_XAMLCONTRACT_VERSION)

#if !defined(MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION)
#define MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Microsoft.UI.Composition.h"
#include "Microsoft.UI.Xaml.h"
#include "Microsoft.UI.Xaml.Controls.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IElementCompositionPreview;
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview ABI::Microsoft::UI::Xaml::Hosting::IElementCompositionPreview

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IElementCompositionPreviewStatics;
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics ABI::Microsoft::UI::Xaml::Hosting::IElementCompositionPreviewStatics

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                class CompositionPropertySet;
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                interface ICompositionPropertySet;
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet ABI::Microsoft::UI::Composition::ICompositionPropertySet

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionAnimationBase_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionAnimationBase_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                interface ICompositionAnimationBase;
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CICompositionAnimationBase ABI::Microsoft::UI::Composition::ICompositionAnimationBase

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionAnimationBase_FWD_DEFINED__

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                class Visual;
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CIVisual_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CIVisual_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                interface IVisual;
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CIVisual ABI::Microsoft::UI::Composition::IVisual

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CIVisual_FWD_DEFINED__

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    class ScrollViewer;
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollViewer_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollViewer_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    interface IScrollViewer;
                } /* Controls */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollViewer ABI::Microsoft::UI::Xaml::Controls::IScrollViewer

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollViewer_FWD_DEFINED__

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                class UIElement;
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CIUIElement_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CIUIElement_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                interface IUIElement;
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CXaml_CIUIElement ABI::Microsoft::UI::Xaml::IUIElement

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CIUIElement_FWD_DEFINED__

/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IElementCompositionPreview
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.ElementCompositionPreview
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IElementCompositionPreview[] = L"Microsoft.UI.Xaml.Hosting.IElementCompositionPreview";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    MIDL_INTERFACE("c8ad1ef4-a93f-5a25-85bd-7c498d9856d3")
                    IElementCompositionPreview : public IInspectable
                    {
                    public:
                    };

                    extern MIDL_CONST_ID IID& IID_IElementCompositionPreview = _uuidof(IElementCompositionPreview);
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IElementCompositionPreviewStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.ElementCompositionPreview
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IElementCompositionPreviewStatics[] = L"Microsoft.UI.Xaml.Hosting.IElementCompositionPreviewStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    MIDL_INTERFACE("84da5a6c-0cfa-532b-9b15-ccd986374342")
                    IElementCompositionPreviewStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetElementVisual(
                            ABI::Microsoft::UI::Xaml::IUIElement* element,
                            ABI::Microsoft::UI::Composition::IVisual** result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetElementChildVisual(
                            ABI::Microsoft::UI::Xaml::IUIElement* element,
                            ABI::Microsoft::UI::Composition::IVisual** result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetElementChildVisual(
                            ABI::Microsoft::UI::Xaml::IUIElement* element,
                            ABI::Microsoft::UI::Composition::IVisual* visual
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetScrollViewerManipulationPropertySet(
                            ABI::Microsoft::UI::Xaml::Controls::IScrollViewer* scrollViewer,
                            ABI::Microsoft::UI::Composition::ICompositionPropertySet** result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetImplicitShowAnimation(
                            ABI::Microsoft::UI::Xaml::IUIElement* element,
                            ABI::Microsoft::UI::Composition::ICompositionAnimationBase* animation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetImplicitHideAnimation(
                            ABI::Microsoft::UI::Xaml::IUIElement* element,
                            ABI::Microsoft::UI::Composition::ICompositionAnimationBase* animation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetIsTranslationEnabled(
                            ABI::Microsoft::UI::Xaml::IUIElement* element,
                            boolean value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetPointerPositionPropertySet(
                            ABI::Microsoft::UI::Xaml::IUIElement* targetElement,
                            ABI::Microsoft::UI::Composition::ICompositionPropertySet** result
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_IElementCompositionPreviewStatics = _uuidof(IElementCompositionPreviewStatics);
                } /* Hosting */
            } /* Xaml */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Xaml.Hosting.ElementCompositionPreview
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Hosting.IElementCompositionPreviewStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Hosting.IElementCompositionPreview ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_ElementCompositionPreview_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_ElementCompositionPreview_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Hosting_ElementCompositionPreview[] = L"Microsoft.UI.Xaml.Hosting.ElementCompositionPreview";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet __x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionAnimationBase_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionAnimationBase_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CICompositionAnimationBase __x_ABI_CMicrosoft_CUI_CComposition_CICompositionAnimationBase;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionAnimationBase_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CIVisual_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CIVisual_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CIVisual __x_ABI_CMicrosoft_CUI_CComposition_CIVisual;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CIVisual_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollViewer_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollViewer_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollViewer __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollViewer;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollViewer_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CXaml_CIUIElement_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CXaml_CIUIElement_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CXaml_CIUIElement __x_ABI_CMicrosoft_CUI_CXaml_CIUIElement;

#endif // ____x_ABI_CMicrosoft_CUI_CXaml_CIUIElement_FWD_DEFINED__

/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IElementCompositionPreview
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.ElementCompositionPreview
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IElementCompositionPreview[] = L"Microsoft.UI.Xaml.Hosting.IElementCompositionPreview";
typedef struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview* This,
        TrustLevel* trustLevel);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewVtbl;

interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreview_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Xaml.Hosting.IElementCompositionPreviewStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Xaml.Hosting.ElementCompositionPreview
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Xaml_Hosting_IElementCompositionPreviewStatics[] = L"Microsoft.UI.Xaml.Hosting.IElementCompositionPreviewStatics";
typedef struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetElementVisual)(__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics* This,
        __x_ABI_CMicrosoft_CUI_CXaml_CIUIElement* element,
        __x_ABI_CMicrosoft_CUI_CComposition_CIVisual** result);
    HRESULT (STDMETHODCALLTYPE* GetElementChildVisual)(__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics* This,
        __x_ABI_CMicrosoft_CUI_CXaml_CIUIElement* element,
        __x_ABI_CMicrosoft_CUI_CComposition_CIVisual** result);
    HRESULT (STDMETHODCALLTYPE* SetElementChildVisual)(__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics* This,
        __x_ABI_CMicrosoft_CUI_CXaml_CIUIElement* element,
        __x_ABI_CMicrosoft_CUI_CComposition_CIVisual* visual);
    HRESULT (STDMETHODCALLTYPE* GetScrollViewerManipulationPropertySet)(__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics* This,
        __x_ABI_CMicrosoft_CUI_CXaml_CControls_CIScrollViewer* scrollViewer,
        __x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet** result);
    HRESULT (STDMETHODCALLTYPE* SetImplicitShowAnimation)(__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics* This,
        __x_ABI_CMicrosoft_CUI_CXaml_CIUIElement* element,
        __x_ABI_CMicrosoft_CUI_CComposition_CICompositionAnimationBase* animation);
    HRESULT (STDMETHODCALLTYPE* SetImplicitHideAnimation)(__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics* This,
        __x_ABI_CMicrosoft_CUI_CXaml_CIUIElement* element,
        __x_ABI_CMicrosoft_CUI_CComposition_CICompositionAnimationBase* animation);
    HRESULT (STDMETHODCALLTYPE* SetIsTranslationEnabled)(__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics* This,
        __x_ABI_CMicrosoft_CUI_CXaml_CIUIElement* element,
        boolean value);
    HRESULT (STDMETHODCALLTYPE* GetPointerPositionPropertySet)(__x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics* This,
        __x_ABI_CMicrosoft_CUI_CXaml_CIUIElement* targetElement,
        __x_ABI_CMicrosoft_CUI_CComposition_CICompositionPropertySet** result);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_GetElementVisual(This, element, result) \
    ((This)->lpVtbl->GetElementVisual(This, element, result))

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_GetElementChildVisual(This, element, result) \
    ((This)->lpVtbl->GetElementChildVisual(This, element, result))

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_SetElementChildVisual(This, element, visual) \
    ((This)->lpVtbl->SetElementChildVisual(This, element, visual))

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_GetScrollViewerManipulationPropertySet(This, scrollViewer, result) \
    ((This)->lpVtbl->GetScrollViewerManipulationPropertySet(This, scrollViewer, result))

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_SetImplicitShowAnimation(This, element, animation) \
    ((This)->lpVtbl->SetImplicitShowAnimation(This, element, animation))

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_SetImplicitHideAnimation(This, element, animation) \
    ((This)->lpVtbl->SetImplicitHideAnimation(This, element, animation))

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_SetIsTranslationEnabled(This, element, value) \
    ((This)->lpVtbl->SetIsTranslationEnabled(This, element, value))

#define __x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_GetPointerPositionPropertySet(This, targetElement, result) \
    ((This)->lpVtbl->GetPointerPositionPropertySet(This, targetElement, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Xaml.Hosting.ElementCompositionPreview
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Xaml.Hosting.IElementCompositionPreviewStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Xaml.Hosting.IElementCompositionPreview ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_ElementCompositionPreview_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Xaml_Hosting_ElementCompositionPreview_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Xaml_Hosting_ElementCompositionPreview[] = L"Microsoft.UI.Xaml.Hosting.ElementCompositionPreview";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __microsoft2Eui2Examl2Ehosting_p_h__

#endif // __microsoft2Eui2Examl2Ehosting_h__
