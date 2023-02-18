
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
#ifndef __microsoft2Ewindows2Ewidgets2Eproviders_h__
#define __microsoft2Ewindows2Ewidgets2Eproviders_h__
#ifndef __microsoft2Ewindows2Ewidgets2Eproviders_p_h__
#define __microsoft2Ewindows2Ewidgets2Eproviders_p_h__


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
#if !defined(MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION)
#define MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION)

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
#include "Microsoft.Windows.Widgets.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                namespace Providers {
                    interface IWidgetActionInvokedArgs;
                } /* Providers */
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs ABI::Microsoft::Windows::Widgets::Providers::IWidgetActionInvokedArgs

#endif // ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                namespace Providers {
                    interface IWidgetContext;
                } /* Providers */
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext ABI::Microsoft::Windows::Widgets::Providers::IWidgetContext

#endif // ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                namespace Providers {
                    interface IWidgetContextChangedArgs;
                } /* Providers */
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs ABI::Microsoft::Windows::Widgets::Providers::IWidgetContextChangedArgs

#endif // ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                namespace Providers {
                    interface IWidgetInfo;
                } /* Providers */
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo ABI::Microsoft::Windows::Widgets::Providers::IWidgetInfo

#endif // ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                namespace Providers {
                    interface IWidgetManager;
                } /* Providers */
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager ABI::Microsoft::Windows::Widgets::Providers::IWidgetManager

#endif // ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                namespace Providers {
                    interface IWidgetManagerStatics;
                } /* Providers */
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics ABI::Microsoft::Windows::Widgets::Providers::IWidgetManagerStatics

#endif // ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                namespace Providers {
                    interface IWidgetProvider;
                } /* Providers */
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider ABI::Microsoft::Windows::Widgets::Providers::IWidgetProvider

#endif // ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                namespace Providers {
                    interface IWidgetUpdateRequestOptions;
                } /* Providers */
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions ABI::Microsoft::Windows::Widgets::Providers::IWidgetUpdateRequestOptions

#endif // ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                namespace Providers {
                    interface IWidgetUpdateRequestOptionsFactory;
                } /* Providers */
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory ABI::Microsoft::Windows::Widgets::Providers::IWidgetUpdateRequestOptionsFactory

#endif // ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                namespace Providers {
                    interface IWidgetUpdateRequestOptionsStatics;
                } /* Providers */
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics ABI::Microsoft::Windows::Widgets::Providers::IWidgetUpdateRequestOptionsStatics

#endif // ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                typedef enum WidgetSize : int WidgetSize;
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            typedef struct DateTime DateTime;
        } /* Foundation */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                namespace Providers {
                    class WidgetActionInvokedArgs;
                } /* Providers */
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                namespace Providers {
                    class WidgetContext;
                } /* Providers */
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                namespace Providers {
                    class WidgetContextChangedArgs;
                } /* Providers */
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                namespace Providers {
                    class WidgetInfo;
                } /* Providers */
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                namespace Providers {
                    class WidgetManager;
                } /* Providers */
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                namespace Providers {
                    class WidgetUpdateRequestOptions;
                } /* Providers */
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Interface Microsoft.Windows.Widgets.Providers.IWidgetActionInvokedArgs
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.Windows.Widgets.Providers.WidgetActionInvokedArgs
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Windows_Widgets_Providers_IWidgetActionInvokedArgs[] = L"Microsoft.Windows.Widgets.Providers.IWidgetActionInvokedArgs";
namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                namespace Providers {
                    MIDL_INTERFACE("c593cc57-04b9-52ca-88ad-46fea21ea340")
                    IWidgetActionInvokedArgs : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_WidgetContext(
                            ABI::Microsoft::Windows::Widgets::Providers::IWidgetContext** value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Verb(
                            HSTRING* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Data(
                            HSTRING* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_CustomState(
                            HSTRING* value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_IWidgetActionInvokedArgs = _uuidof(IWidgetActionInvokedArgs);
                } /* Providers */
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.Windows.Widgets.Providers.IWidgetContext
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.Windows.Widgets.Providers.WidgetContext
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Windows_Widgets_Providers_IWidgetContext[] = L"Microsoft.Windows.Widgets.Providers.IWidgetContext";
namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                namespace Providers {
                    MIDL_INTERFACE("903c518b-40bc-5bc6-88f7-af9d81c0cdc1")
                    IWidgetContext : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_Id(
                            HSTRING* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_DefinitionId(
                            HSTRING* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Size(
                            ABI::Microsoft::Windows::Widgets::WidgetSize* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_IsActive(
                            boolean* value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_IWidgetContext = _uuidof(IWidgetContext);
                } /* Providers */
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext;
#endif /* !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext_INTERFACE_DEFINED__) */
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.Windows.Widgets.Providers.IWidgetContextChangedArgs
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.Windows.Widgets.Providers.WidgetContextChangedArgs
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Windows_Widgets_Providers_IWidgetContextChangedArgs[] = L"Microsoft.Windows.Widgets.Providers.IWidgetContextChangedArgs";
namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                namespace Providers {
                    MIDL_INTERFACE("2c226d54-2252-576b-a197-370b28d25c2f")
                    IWidgetContextChangedArgs : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_WidgetContext(
                            ABI::Microsoft::Windows::Widgets::Providers::IWidgetContext** value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_IWidgetContextChangedArgs = _uuidof(IWidgetContextChangedArgs);
                } /* Providers */
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.Windows.Widgets.Providers.IWidgetInfo
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.Windows.Widgets.Providers.WidgetInfo
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Windows_Widgets_Providers_IWidgetInfo[] = L"Microsoft.Windows.Widgets.Providers.IWidgetInfo";
namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                namespace Providers {
                    MIDL_INTERFACE("cea11f42-a020-5db5-89e2-b7dece4ae5cb")
                    IWidgetInfo : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_WidgetContext(
                            ABI::Microsoft::Windows::Widgets::Providers::IWidgetContext** value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Template(
                            HSTRING* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Data(
                            HSTRING* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_CustomState(
                            HSTRING* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_LastUpdateTime(
                            ABI::Windows::Foundation::DateTime* value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_IWidgetInfo = _uuidof(IWidgetInfo);
                } /* Providers */
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo;
#endif /* !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo_INTERFACE_DEFINED__) */
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.Windows.Widgets.Providers.IWidgetManager
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Windows_Widgets_Providers_IWidgetManager[] = L"Microsoft.Windows.Widgets.Providers.IWidgetManager";
namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                namespace Providers {
                    MIDL_INTERFACE("71cb10c0-671e-48e3-b995-207940397123")
                    IWidgetManager : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE UpdateWidget(
                            ABI::Microsoft::Windows::Widgets::Providers::IWidgetUpdateRequestOptions* widgetUpdateRequestOptions
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetWidgetIds(
                            UINT32* resultLength,
                            HSTRING** result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetWidgetInfo(
                            HSTRING widgetId,
                            ABI::Microsoft::Windows::Widgets::Providers::IWidgetInfo** result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetWidgetInfos(
                            UINT32* resultLength,
                            ABI::Microsoft::Windows::Widgets::Providers::IWidgetInfo*** result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DeleteWidget(
                            HSTRING widgetId
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_IWidgetManager = _uuidof(IWidgetManager);
                } /* Providers */
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager;
#endif /* !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager_INTERFACE_DEFINED__) */
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.Windows.Widgets.Providers.IWidgetManagerStatics
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.Windows.Widgets.Providers.WidgetManager
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Windows_Widgets_Providers_IWidgetManagerStatics[] = L"Microsoft.Windows.Widgets.Providers.IWidgetManagerStatics";
namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                namespace Providers {
                    MIDL_INTERFACE("7f233b06-28e5-5e2b-8c04-a4fa747c28c7")
                    IWidgetManagerStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetDefault(
                            ABI::Microsoft::Windows::Widgets::Providers::IWidgetManager** result
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_IWidgetManagerStatics = _uuidof(IWidgetManagerStatics);
                } /* Providers */
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.Windows.Widgets.Providers.IWidgetProvider
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Windows_Widgets_Providers_IWidgetProvider[] = L"Microsoft.Windows.Widgets.Providers.IWidgetProvider";
namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                namespace Providers {
                    MIDL_INTERFACE("5c5774cc-72a0-452d-b9ed-075c0dd25eed")
                    IWidgetProvider : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateWidget(
                            ABI::Microsoft::Windows::Widgets::Providers::IWidgetContext* widgetContext
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DeleteWidget(
                            HSTRING widgetId,
                            HSTRING customState
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE OnActionInvoked(
                            ABI::Microsoft::Windows::Widgets::Providers::IWidgetActionInvokedArgs* actionInvokedArgs
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE OnWidgetContextChanged(
                            ABI::Microsoft::Windows::Widgets::Providers::IWidgetContextChangedArgs* contextChangedArgs
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Activate(
                            ABI::Microsoft::Windows::Widgets::Providers::IWidgetContext* widgetContext
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Deactivate(
                            HSTRING widgetId
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_IWidgetProvider = _uuidof(IWidgetProvider);
                } /* Providers */
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider;
#endif /* !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider_INTERFACE_DEFINED__) */
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.Windows.Widgets.Providers.IWidgetUpdateRequestOptions
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.Windows.Widgets.Providers.WidgetUpdateRequestOptions
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Windows_Widgets_Providers_IWidgetUpdateRequestOptions[] = L"Microsoft.Windows.Widgets.Providers.IWidgetUpdateRequestOptions";
namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                namespace Providers {
                    MIDL_INTERFACE("b09ca8f7-7424-5687-baaf-7dd6fa639672")
                    IWidgetUpdateRequestOptions : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_WidgetId(
                            HSTRING* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Template(
                            HSTRING* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_Template(
                            HSTRING value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Data(
                            HSTRING* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_Data(
                            HSTRING value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_CustomState(
                            HSTRING* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_CustomState(
                            HSTRING value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_IWidgetUpdateRequestOptions = _uuidof(IWidgetUpdateRequestOptions);
                } /* Providers */
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions;
#endif /* !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions_INTERFACE_DEFINED__) */
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.Windows.Widgets.Providers.IWidgetUpdateRequestOptionsFactory
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.Windows.Widgets.Providers.WidgetUpdateRequestOptions
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Windows_Widgets_Providers_IWidgetUpdateRequestOptionsFactory[] = L"Microsoft.Windows.Widgets.Providers.IWidgetUpdateRequestOptionsFactory";
namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                namespace Providers {
                    MIDL_INTERFACE("e0e00af8-1d10-57a8-9419-3f568e854daa")
                    IWidgetUpdateRequestOptionsFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            HSTRING widgetId,
                            ABI::Microsoft::Windows::Widgets::Providers::IWidgetUpdateRequestOptions** value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_IWidgetUpdateRequestOptionsFactory = _uuidof(IWidgetUpdateRequestOptionsFactory);
                } /* Providers */
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory_INTERFACE_DEFINED__) */
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.Windows.Widgets.Providers.IWidgetUpdateRequestOptionsStatics
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.Windows.Widgets.Providers.WidgetUpdateRequestOptions
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Windows_Widgets_Providers_IWidgetUpdateRequestOptionsStatics[] = L"Microsoft.Windows.Widgets.Providers.IWidgetUpdateRequestOptionsStatics";
namespace ABI {
    namespace Microsoft {
        namespace Windows {
            namespace Widgets {
                namespace Providers {
                    MIDL_INTERFACE("4645b5e3-d332-5d11-82f0-3607e5df6018")
                    IWidgetUpdateRequestOptionsStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_UnsetValue(
                            HSTRING* value
                            ) = 0;
                    };

                    extern MIDL_CONST_ID IID& IID_IWidgetUpdateRequestOptionsStatics = _uuidof(IWidgetUpdateRequestOptionsStatics);
                } /* Providers */
            } /* Widgets */
        } /* Windows */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.Windows.Widgets.Providers.WidgetActionInvokedArgs
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.Windows.Widgets.Providers.IWidgetActionInvokedArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_Windows_Widgets_Providers_WidgetActionInvokedArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Windows_Widgets_Providers_WidgetActionInvokedArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Windows_Widgets_Providers_WidgetActionInvokedArgs[] = L"Microsoft.Windows.Widgets.Providers.WidgetActionInvokedArgs";
#endif
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.Windows.Widgets.Providers.WidgetContext
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.Windows.Widgets.Providers.IWidgetContext ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_Windows_Widgets_Providers_WidgetContext_DEFINED
#define RUNTIMECLASS_Microsoft_Windows_Widgets_Providers_WidgetContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Windows_Widgets_Providers_WidgetContext[] = L"Microsoft.Windows.Widgets.Providers.WidgetContext";
#endif
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.Windows.Widgets.Providers.WidgetContextChangedArgs
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.Windows.Widgets.Providers.IWidgetContextChangedArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_Windows_Widgets_Providers_WidgetContextChangedArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Windows_Widgets_Providers_WidgetContextChangedArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Windows_Widgets_Providers_WidgetContextChangedArgs[] = L"Microsoft.Windows.Widgets.Providers.WidgetContextChangedArgs";
#endif
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.Windows.Widgets.Providers.WidgetInfo
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.Windows.Widgets.Providers.IWidgetInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_Windows_Widgets_Providers_WidgetInfo_DEFINED
#define RUNTIMECLASS_Microsoft_Windows_Widgets_Providers_WidgetInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Windows_Widgets_Providers_WidgetInfo[] = L"Microsoft.Windows.Widgets.Providers.WidgetInfo";
#endif
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.Windows.Widgets.Providers.WidgetManager
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.Windows.Widgets.Providers.IWidgetManagerStatics interface starting with version 1.0 of the Microsoft.Windows.Widgets.WidgetContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.Windows.Widgets.Providers.IWidgetManager ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_Windows_Widgets_Providers_WidgetManager_DEFINED
#define RUNTIMECLASS_Microsoft_Windows_Widgets_Providers_WidgetManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Windows_Widgets_Providers_WidgetManager[] = L"Microsoft.Windows.Widgets.Providers.WidgetManager";
#endif
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.Windows.Widgets.Providers.WidgetUpdateRequestOptions
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Microsoft.Windows.Widgets.Providers.IWidgetUpdateRequestOptionsFactory interface starting with version 1.0 of the Microsoft.Windows.Widgets.WidgetContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.Windows.Widgets.Providers.IWidgetUpdateRequestOptionsStatics interface starting with version 1.0 of the Microsoft.Windows.Widgets.WidgetContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.Windows.Widgets.Providers.IWidgetUpdateRequestOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_Windows_Widgets_Providers_WidgetUpdateRequestOptions_DEFINED
#define RUNTIMECLASS_Microsoft_Windows_Widgets_Providers_WidgetUpdateRequestOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Windows_Widgets_Providers_WidgetUpdateRequestOptions[] = L"Microsoft.Windows.Widgets.Providers.WidgetUpdateRequestOptions";
#endif
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs;

#endif // ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext;

#endif // ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs;

#endif // ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo;

#endif // ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager;

#endif // ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics;

#endif // ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider;

#endif // ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions;

#endif // ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory;

#endif // ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics;

#endif // ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

typedef enum __x_ABI_CMicrosoft_CWindows_CWidgets_CWidgetSize __x_ABI_CMicrosoft_CWindows_CWidgets_CWidgetSize;

typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

/*
 *
 * Interface Microsoft.Windows.Widgets.Providers.IWidgetActionInvokedArgs
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.Windows.Widgets.Providers.WidgetActionInvokedArgs
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Windows_Widgets_Providers_IWidgetActionInvokedArgs[] = L"Microsoft.Windows.Widgets.Providers.IWidgetActionInvokedArgs";
typedef struct __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_WidgetContext)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs* This,
        __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext** value);
    HRESULT (STDMETHODCALLTYPE* get_Verb)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_Data)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_CustomState)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs* This,
        HSTRING* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgsVtbl;

interface __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs_get_WidgetContext(This, value) \
    ((This)->lpVtbl->get_WidgetContext(This, value))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs_get_Verb(This, value) \
    ((This)->lpVtbl->get_Verb(This, value))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs_get_Data(This, value) \
    ((This)->lpVtbl->get_Data(This, value))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs_get_CustomState(This, value) \
    ((This)->lpVtbl->get_CustomState(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.Windows.Widgets.Providers.IWidgetContext
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.Windows.Widgets.Providers.WidgetContext
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Windows_Widgets_Providers_IWidgetContext[] = L"Microsoft.Windows.Widgets.Providers.IWidgetContext";
typedef struct __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Id)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_DefinitionId)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext* This,
        enum __x_ABI_CMicrosoft_CWindows_CWidgets_CWidgetSize* value);
    HRESULT (STDMETHODCALLTYPE* get_IsActive)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext* This,
        boolean* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextVtbl;

interface __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext_get_Id(This, value) \
    ((This)->lpVtbl->get_Id(This, value))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext_get_DefinitionId(This, value) \
    ((This)->lpVtbl->get_DefinitionId(This, value))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext_get_Size(This, value) \
    ((This)->lpVtbl->get_Size(This, value))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext_get_IsActive(This, value) \
    ((This)->lpVtbl->get_IsActive(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext;
#endif /* !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext_INTERFACE_DEFINED__) */
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.Windows.Widgets.Providers.IWidgetContextChangedArgs
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.Windows.Widgets.Providers.WidgetContextChangedArgs
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Windows_Widgets_Providers_IWidgetContextChangedArgs[] = L"Microsoft.Windows.Widgets.Providers.IWidgetContextChangedArgs";
typedef struct __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_WidgetContext)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs* This,
        __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext** value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgsVtbl;

interface __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs_get_WidgetContext(This, value) \
    ((This)->lpVtbl->get_WidgetContext(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.Windows.Widgets.Providers.IWidgetInfo
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.Windows.Widgets.Providers.WidgetInfo
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Windows_Widgets_Providers_IWidgetInfo[] = L"Microsoft.Windows.Widgets.Providers.IWidgetInfo";
typedef struct __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_WidgetContext)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo* This,
        __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext** value);
    HRESULT (STDMETHODCALLTYPE* get_Template)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_Data)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_CustomState)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_LastUpdateTime)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo* This,
        struct __x_ABI_CWindows_CFoundation_CDateTime* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfoVtbl;

interface __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo_get_WidgetContext(This, value) \
    ((This)->lpVtbl->get_WidgetContext(This, value))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo_get_Template(This, value) \
    ((This)->lpVtbl->get_Template(This, value))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo_get_Data(This, value) \
    ((This)->lpVtbl->get_Data(This, value))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo_get_CustomState(This, value) \
    ((This)->lpVtbl->get_CustomState(This, value))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo_get_LastUpdateTime(This, value) \
    ((This)->lpVtbl->get_LastUpdateTime(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo;
#endif /* !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo_INTERFACE_DEFINED__) */
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.Windows.Widgets.Providers.IWidgetManager
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Windows_Widgets_Providers_IWidgetManager[] = L"Microsoft.Windows.Widgets.Providers.IWidgetManager";
typedef struct __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* UpdateWidget)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager* This,
        __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions* widgetUpdateRequestOptions);
    HRESULT (STDMETHODCALLTYPE* GetWidgetIds)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager* This,
        UINT32* resultLength,
        HSTRING** result);
    HRESULT (STDMETHODCALLTYPE* GetWidgetInfo)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager* This,
        HSTRING widgetId,
        __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo** result);
    HRESULT (STDMETHODCALLTYPE* GetWidgetInfos)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager* This,
        UINT32* resultLength,
        __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetInfo*** result);
    HRESULT (STDMETHODCALLTYPE* DeleteWidget)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager* This,
        HSTRING widgetId);

    END_INTERFACE
} __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerVtbl;

interface __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager_UpdateWidget(This, widgetUpdateRequestOptions) \
    ((This)->lpVtbl->UpdateWidget(This, widgetUpdateRequestOptions))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager_GetWidgetIds(This, resultLength, result) \
    ((This)->lpVtbl->GetWidgetIds(This, resultLength, result))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager_GetWidgetInfo(This, widgetId, result) \
    ((This)->lpVtbl->GetWidgetInfo(This, widgetId, result))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager_GetWidgetInfos(This, resultLength, result) \
    ((This)->lpVtbl->GetWidgetInfos(This, resultLength, result))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager_DeleteWidget(This, widgetId) \
    ((This)->lpVtbl->DeleteWidget(This, widgetId))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager;
#endif /* !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager_INTERFACE_DEFINED__) */
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.Windows.Widgets.Providers.IWidgetManagerStatics
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.Windows.Widgets.Providers.WidgetManager
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Windows_Widgets_Providers_IWidgetManagerStatics[] = L"Microsoft.Windows.Widgets.Providers.IWidgetManagerStatics";
typedef struct __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetDefault)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics* This,
        __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManager** result);

    END_INTERFACE
} __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStaticsVtbl;

interface __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics_GetDefault(This, result) \
    ((This)->lpVtbl->GetDefault(This, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetManagerStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.Windows.Widgets.Providers.IWidgetProvider
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Windows_Widgets_Providers_IWidgetProvider[] = L"Microsoft.Windows.Widgets.Providers.IWidgetProvider";
typedef struct __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProviderVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateWidget)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider* This,
        __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext* widgetContext);
    HRESULT (STDMETHODCALLTYPE* DeleteWidget)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider* This,
        HSTRING widgetId,
        HSTRING customState);
    HRESULT (STDMETHODCALLTYPE* OnActionInvoked)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider* This,
        __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetActionInvokedArgs* actionInvokedArgs);
    HRESULT (STDMETHODCALLTYPE* OnWidgetContextChanged)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider* This,
        __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContextChangedArgs* contextChangedArgs);
    HRESULT (STDMETHODCALLTYPE* Activate)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider* This,
        __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetContext* widgetContext);
    HRESULT (STDMETHODCALLTYPE* Deactivate)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider* This,
        HSTRING widgetId);

    END_INTERFACE
} __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProviderVtbl;

interface __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProviderVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider_CreateWidget(This, widgetContext) \
    ((This)->lpVtbl->CreateWidget(This, widgetContext))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider_DeleteWidget(This, widgetId, customState) \
    ((This)->lpVtbl->DeleteWidget(This, widgetId, customState))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider_OnActionInvoked(This, actionInvokedArgs) \
    ((This)->lpVtbl->OnActionInvoked(This, actionInvokedArgs))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider_OnWidgetContextChanged(This, contextChangedArgs) \
    ((This)->lpVtbl->OnWidgetContextChanged(This, contextChangedArgs))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider_Activate(This, widgetContext) \
    ((This)->lpVtbl->Activate(This, widgetContext))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider_Deactivate(This, widgetId) \
    ((This)->lpVtbl->Deactivate(This, widgetId))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider;
#endif /* !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetProvider_INTERFACE_DEFINED__) */
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.Windows.Widgets.Providers.IWidgetUpdateRequestOptions
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.Windows.Widgets.Providers.WidgetUpdateRequestOptions
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Windows_Widgets_Providers_IWidgetUpdateRequestOptions[] = L"Microsoft.Windows.Widgets.Providers.IWidgetUpdateRequestOptions";
typedef struct __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_WidgetId)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_Template)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_Template)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* get_Data)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_Data)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* get_CustomState)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_CustomState)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions* This,
        HSTRING value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsVtbl;

interface __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions_get_WidgetId(This, value) \
    ((This)->lpVtbl->get_WidgetId(This, value))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions_get_Template(This, value) \
    ((This)->lpVtbl->get_Template(This, value))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions_put_Template(This, value) \
    ((This)->lpVtbl->put_Template(This, value))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions_get_Data(This, value) \
    ((This)->lpVtbl->get_Data(This, value))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions_put_Data(This, value) \
    ((This)->lpVtbl->put_Data(This, value))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions_get_CustomState(This, value) \
    ((This)->lpVtbl->get_CustomState(This, value))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions_put_CustomState(This, value) \
    ((This)->lpVtbl->put_CustomState(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions;
#endif /* !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions_INTERFACE_DEFINED__) */
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.Windows.Widgets.Providers.IWidgetUpdateRequestOptionsFactory
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.Windows.Widgets.Providers.WidgetUpdateRequestOptions
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Windows_Widgets_Providers_IWidgetUpdateRequestOptionsFactory[] = L"Microsoft.Windows.Widgets.Providers.IWidgetUpdateRequestOptionsFactory";
typedef struct __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateInstance)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory* This,
        HSTRING widgetId,
        __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptions** value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactoryVtbl;

interface __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory_CreateInstance(This, widgetId, value) \
    ((This)->lpVtbl->CreateInstance(This, widgetId, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsFactory_INTERFACE_DEFINED__) */
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.Windows.Widgets.Providers.IWidgetUpdateRequestOptionsStatics
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.Windows.Widgets.Providers.WidgetUpdateRequestOptions
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Windows_Widgets_Providers_IWidgetUpdateRequestOptionsStatics[] = L"Microsoft.Windows.Widgets.Providers.IWidgetUpdateRequestOptionsStatics";
typedef struct __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_UnsetValue)(__x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics* This,
        HSTRING* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStaticsVtbl;

interface __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics_get_UnsetValue(This, value) \
    ((This)->lpVtbl->get_UnsetValue(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CWindows_CWidgets_CProviders_CIWidgetUpdateRequestOptionsStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.Windows.Widgets.Providers.WidgetActionInvokedArgs
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.Windows.Widgets.Providers.IWidgetActionInvokedArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_Windows_Widgets_Providers_WidgetActionInvokedArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Windows_Widgets_Providers_WidgetActionInvokedArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Windows_Widgets_Providers_WidgetActionInvokedArgs[] = L"Microsoft.Windows.Widgets.Providers.WidgetActionInvokedArgs";
#endif
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.Windows.Widgets.Providers.WidgetContext
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.Windows.Widgets.Providers.IWidgetContext ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_Windows_Widgets_Providers_WidgetContext_DEFINED
#define RUNTIMECLASS_Microsoft_Windows_Widgets_Providers_WidgetContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Windows_Widgets_Providers_WidgetContext[] = L"Microsoft.Windows.Widgets.Providers.WidgetContext";
#endif
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.Windows.Widgets.Providers.WidgetContextChangedArgs
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.Windows.Widgets.Providers.IWidgetContextChangedArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_Windows_Widgets_Providers_WidgetContextChangedArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Windows_Widgets_Providers_WidgetContextChangedArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Windows_Widgets_Providers_WidgetContextChangedArgs[] = L"Microsoft.Windows.Widgets.Providers.WidgetContextChangedArgs";
#endif
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.Windows.Widgets.Providers.WidgetInfo
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.Windows.Widgets.Providers.IWidgetInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_Windows_Widgets_Providers_WidgetInfo_DEFINED
#define RUNTIMECLASS_Microsoft_Windows_Widgets_Providers_WidgetInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Windows_Widgets_Providers_WidgetInfo[] = L"Microsoft.Windows.Widgets.Providers.WidgetInfo";
#endif
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.Windows.Widgets.Providers.WidgetManager
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.Windows.Widgets.Providers.IWidgetManagerStatics interface starting with version 1.0 of the Microsoft.Windows.Widgets.WidgetContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.Windows.Widgets.Providers.IWidgetManager ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_Windows_Widgets_Providers_WidgetManager_DEFINED
#define RUNTIMECLASS_Microsoft_Windows_Widgets_Providers_WidgetManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Windows_Widgets_Providers_WidgetManager[] = L"Microsoft.Windows.Widgets.Providers.WidgetManager";
#endif
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.Windows.Widgets.Providers.WidgetUpdateRequestOptions
 *
 * Introduced to Microsoft.Windows.Widgets.WidgetContract in version 1.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Microsoft.Windows.Widgets.Providers.IWidgetUpdateRequestOptionsFactory interface starting with version 1.0 of the Microsoft.Windows.Widgets.WidgetContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.Windows.Widgets.Providers.IWidgetUpdateRequestOptionsStatics interface starting with version 1.0 of the Microsoft.Windows.Widgets.WidgetContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.Windows.Widgets.Providers.IWidgetUpdateRequestOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_Windows_Widgets_Providers_WidgetUpdateRequestOptions_DEFINED
#define RUNTIMECLASS_Microsoft_Windows_Widgets_Providers_WidgetUpdateRequestOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Windows_Widgets_Providers_WidgetUpdateRequestOptions[] = L"Microsoft.Windows.Widgets.Providers.WidgetUpdateRequestOptions";
#endif
#endif // MICROSOFT_WINDOWS_WIDGETS_WIDGETCONTRACT_VERSION >= 0x10000

#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __microsoft2Ewindows2Ewidgets2Eproviders_p_h__

#endif // __microsoft2Ewindows2Ewidgets2Eproviders_h__
