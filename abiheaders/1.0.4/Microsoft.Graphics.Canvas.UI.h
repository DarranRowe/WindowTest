
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
#ifndef __microsoft2Egraphics2Ecanvas2Eui_h__
#define __microsoft2Egraphics2Ecanvas2Eui_h__
#ifndef __microsoft2Egraphics2Ecanvas2Eui_p_h__
#define __microsoft2Egraphics2Ecanvas2Eui_p_h__


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

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
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

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    interface ICanvasCreateResourcesEventArgsFactory;
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory ABI::Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgsFactory

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
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

namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    typedef enum CanvasCreateResourcesReason : int CanvasCreateResourcesReason;
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

/*
 *
 * Struct Microsoft.Graphics.Canvas.UI.CanvasCreateResourcesReason
 *
 */
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    enum CanvasCreateResourcesReason : int
                    {
                        CanvasCreateResourcesReason_FirstTime = 0,
                        CanvasCreateResourcesReason_NewDevice = 1,
                        CanvasCreateResourcesReason_DpiChanged = 2,
                    };
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Interface Microsoft.Graphics.Canvas.UI.ICanvasCreateResourcesEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.UI.CanvasCreateResourcesEventArgs
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_UI_ICanvasCreateResourcesEventArgs[] = L"Microsoft.Graphics.Canvas.UI.ICanvasCreateResourcesEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    MIDL_INTERFACE("edc52108-f6ba-4a09-9fa3-10c97a24e49a")
                    ICanvasCreateResourcesEventArgs : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_Reason(
                            ABI::Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesReason* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TrackAsyncAction(
                            ABI::Windows::Foundation::IAsyncAction* action
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetTrackedAction(
                            ABI::Windows::Foundation::IAsyncAction** action
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasCreateResourcesEventArgs = _uuidof(ICanvasCreateResourcesEventArgs);
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.UI.ICanvasCreateResourcesEventArgsFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.UI.CanvasCreateResourcesEventArgs
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_UI_ICanvasCreateResourcesEventArgsFactory[] = L"Microsoft.Graphics.Canvas.UI.ICanvasCreateResourcesEventArgsFactory";
namespace ABI {
    namespace Microsoft {
        namespace Graphics {
            namespace Canvas {
                namespace UI {
                    MIDL_INTERFACE("3a21c766-0781-4389-bbc3-86b1f5022af1")
                    ICanvasCreateResourcesEventArgsFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            ABI::Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesReason createResourcesReason,
                            ABI::Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgs** CreateResourcesEventArgs
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_ICanvasCreateResourcesEventArgsFactory = _uuidof(ICanvasCreateResourcesEventArgsFactory);
                } /* UI */
            } /* Canvas */
        } /* Graphics */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory_INTERFACE_DEFINED__) */

/*
 *
 * Class Microsoft.Graphics.Canvas.UI.CanvasCreateResourcesEventArgs
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.UI.ICanvasCreateResourcesEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_CanvasCreateResourcesEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_CanvasCreateResourcesEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_UI_CanvasCreateResourcesEventArgs[] = L"Microsoft.Graphics.Canvas.UI.CanvasCreateResourcesEventArgs";
#endif

#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CCanvasCreateResourcesReason __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CCanvasCreateResourcesReason;

/*
 *
 * Struct Microsoft.Graphics.Canvas.UI.CanvasCreateResourcesReason
 *
 */
enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CCanvasCreateResourcesReason
{
    CanvasCreateResourcesReason_FirstTime = 0,
    CanvasCreateResourcesReason_NewDevice = 1,
    CanvasCreateResourcesReason_DpiChanged = 2,
};

/*
 *
 * Interface Microsoft.Graphics.Canvas.UI.ICanvasCreateResourcesEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.UI.CanvasCreateResourcesEventArgs
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_UI_ICanvasCreateResourcesEventArgs[] = L"Microsoft.Graphics.Canvas.UI.ICanvasCreateResourcesEventArgs";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Reason)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CCanvasCreateResourcesReason* value);
    HRESULT (STDMETHODCALLTYPE* TrackAsyncAction)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs* This,
        __x_ABI_CWindows_CFoundation_CIAsyncAction* action);
    HRESULT (STDMETHODCALLTYPE* GetTrackedAction)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs* This,
        __x_ABI_CWindows_CFoundation_CIAsyncAction** action);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_get_Reason(This, value) \
    ((This)->lpVtbl->get_Reason(This, value))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_TrackAsyncAction(This, action) \
    ((This)->lpVtbl->TrackAsyncAction(This, action))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_GetTrackedAction(This, action) \
    ((This)->lpVtbl->GetTrackedAction(This, action))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_INTERFACE_DEFINED__) */

/*
 *
 * Interface Microsoft.Graphics.Canvas.UI.ICanvasCreateResourcesEventArgsFactory
 *
 * Interface is a part of the implementation of type Microsoft.Graphics.Canvas.UI.CanvasCreateResourcesEventArgs
 *
 */
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Graphics_Canvas_UI_ICanvasCreateResourcesEventArgsFactory[] = L"Microsoft.Graphics.Canvas.UI.ICanvasCreateResourcesEventArgsFactory";
typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* Create)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CCanvasCreateResourcesReason createResourcesReason,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs** CreateResourcesEventArgs);

    END_INTERFACE
} __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactoryVtbl;

interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory_Create(This, createResourcesReason, CreateResourcesEventArgs) \
    ((This)->lpVtbl->Create(This, createResourcesReason, CreateResourcesEventArgs))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory_INTERFACE_DEFINED__) */

/*
 *
 * Class Microsoft.Graphics.Canvas.UI.CanvasCreateResourcesEventArgs
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Graphics.Canvas.UI.ICanvasCreateResourcesEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#ifndef RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_CanvasCreateResourcesEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Graphics_Canvas_UI_CanvasCreateResourcesEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Graphics_Canvas_UI_CanvasCreateResourcesEventArgs[] = L"Microsoft.Graphics.Canvas.UI.CanvasCreateResourcesEventArgs";
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
#endif // __microsoft2Egraphics2Ecanvas2Eui_p_h__

#endif // __microsoft2Egraphics2Ecanvas2Eui_h__
