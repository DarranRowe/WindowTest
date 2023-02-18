
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
#ifndef __microsoft2Eui2Einput_h__
#define __microsoft2Eui2Einput_h__
#ifndef __microsoft2Eui2Einput_p_h__
#define __microsoft2Eui2Einput_p_h__


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
#if !defined(MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION)
#define MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION 0x10002
#endif // defined(MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0xa0000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)
#define WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION 0x70000
#endif // defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)

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
#include "Microsoft.Foundation.h"
#include "Microsoft.UI.h"
#include "Microsoft.UI.Dispatching.h"
#include "Windows.System.h"
#include "Windows.UI.Core.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface ICrossSlidingEventArgs;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs ABI::Microsoft::UI::Input::ICrossSlidingEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IDraggingEventArgs;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs ABI::Microsoft::UI::Input::IDraggingEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IGestureRecognizer;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer ABI::Microsoft::UI::Input::IGestureRecognizer

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IHoldingEventArgs;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs ABI::Microsoft::UI::Input::IHoldingEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IInputActivationListener;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener ABI::Microsoft::UI::Input::IInputActivationListener

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IInputActivationListenerActivationChangedEventArgs;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs ABI::Microsoft::UI::Input::IInputActivationListenerActivationChangedEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IInputActivationListenerStatics;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics ABI::Microsoft::UI::Input::IInputActivationListenerStatics

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputCursor_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputCursor_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IInputCursor;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCursor ABI::Microsoft::UI::Input::IInputCursor

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputCursor_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IInputCursorFactory;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory ABI::Microsoft::UI::Input::IInputCursorFactory

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IInputCursorStatics;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics ABI::Microsoft::UI::Input::IInputCursorStatics

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IInputCustomCursor;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor ABI::Microsoft::UI::Input::IInputCustomCursor

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IInputCustomCursorFactory;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory ABI::Microsoft::UI::Input::IInputCustomCursorFactory

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IInputDesktopNamedResourceCursor;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor ABI::Microsoft::UI::Input::IInputDesktopNamedResourceCursor

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IInputDesktopNamedResourceCursorStatics;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics ABI::Microsoft::UI::Input::IInputDesktopNamedResourceCursorStatics

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IInputDesktopResourceCursor;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor ABI::Microsoft::UI::Input::IInputDesktopResourceCursor

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IInputDesktopResourceCursorStatics;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics ABI::Microsoft::UI::Input::IInputDesktopResourceCursorStatics

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IInputKeyboardSource;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource ABI::Microsoft::UI::Input::IInputKeyboardSource

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IInputKeyboardSourceStatics;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics ABI::Microsoft::UI::Input::IInputKeyboardSourceStatics

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IInputLightDismissAction;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction ABI::Microsoft::UI::Input::IInputLightDismissAction

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IInputLightDismissActionStatics;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics ABI::Microsoft::UI::Input::IInputLightDismissActionStatics

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IInputLightDismissEventArgs;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs ABI::Microsoft::UI::Input::IInputLightDismissEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputObject_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputObject_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IInputObject;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIInputObject ABI::Microsoft::UI::Input::IInputObject

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputObject_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IInputObjectFactory;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory ABI::Microsoft::UI::Input::IInputObjectFactory

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IInputPointerSource;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource ABI::Microsoft::UI::Input::IInputPointerSource

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IInputSystemCursor;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor ABI::Microsoft::UI::Input::IInputSystemCursor

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IInputSystemCursorStatics;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics ABI::Microsoft::UI::Input::IInputSystemCursorStatics

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IManipulationCompletedEventArgs;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs ABI::Microsoft::UI::Input::IManipulationCompletedEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IManipulationInertiaStartingEventArgs;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs ABI::Microsoft::UI::Input::IManipulationInertiaStartingEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IManipulationStartedEventArgs;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs ABI::Microsoft::UI::Input::IManipulationStartedEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IManipulationUpdatedEventArgs;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs ABI::Microsoft::UI::Input::IManipulationUpdatedEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IMouseWheelParameters;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters ABI::Microsoft::UI::Input::IMouseWheelParameters

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IPointerEventArgs;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs ABI::Microsoft::UI::Input::IPointerEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IPointerPoint;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint ABI::Microsoft::UI::Input::IPointerPoint

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IPointerPointProperties;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties ABI::Microsoft::UI::Input::IPointerPointProperties

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IPointerPointTransform;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform ABI::Microsoft::UI::Input::IPointerPointTransform

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IPointerPredictor;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor ABI::Microsoft::UI::Input::IPointerPredictor

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IPointerPredictorStatics;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics ABI::Microsoft::UI::Input::IPointerPredictorStatics

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface IRightTappedEventArgs;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs ABI::Microsoft::UI::Input::IRightTappedEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                interface ITappedEventArgs;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs ABI::Microsoft::UI::Input::ITappedEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                class PointerPoint;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Microsoft__CUI__CInput__CPointerPoint_USE
#define DEF___FIIterator_1_Microsoft__CUI__CInput__CPointerPoint_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5b63939d-11cf-56c4-b0d0-11df9dc487d1"))
IIterator<ABI::Microsoft::UI::Input::PointerPoint*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::PointerPoint*, ABI::Microsoft::UI::Input::IPointerPoint*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IIterator`1<Microsoft.UI.Input.PointerPoint>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Microsoft::UI::Input::PointerPoint*> __FIIterator_1_Microsoft__CUI__CInput__CPointerPoint_t;
#define __FIIterator_1_Microsoft__CUI__CInput__CPointerPoint ABI::Windows::Foundation::Collections::__FIIterator_1_Microsoft__CUI__CInput__CPointerPoint_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Microsoft__CUI__CInput__CPointerPoint_USE */

#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Microsoft__CUI__CInput__CPointerPoint_USE
#define DEF___FIIterable_1_Microsoft__CUI__CInput__CPointerPoint_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("645acc33-ffce-5ad3-be2b-c49b9c27c35d"))
IIterable<ABI::Microsoft::UI::Input::PointerPoint*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::PointerPoint*, ABI::Microsoft::UI::Input::IPointerPoint*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IIterable`1<Microsoft.UI.Input.PointerPoint>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Microsoft::UI::Input::PointerPoint*> __FIIterable_1_Microsoft__CUI__CInput__CPointerPoint_t;
#define __FIIterable_1_Microsoft__CUI__CInput__CPointerPoint ABI::Windows::Foundation::Collections::__FIIterable_1_Microsoft__CUI__CInput__CPointerPoint_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Microsoft__CUI__CInput__CPointerPoint_USE */

#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint_USE
#define DEF___FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5fbb224b-8430-5086-ab85-e71dfaa84c90"))
IVectorView<ABI::Microsoft::UI::Input::PointerPoint*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::PointerPoint*, ABI::Microsoft::UI::Input::IPointerPoint*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Microsoft.UI.Input.PointerPoint>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Microsoft::UI::Input::PointerPoint*> __FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint_t;
#define __FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint ABI::Windows::Foundation::Collections::__FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint_USE */

#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Microsoft__CUI__CInput__CPointerPoint_USE
#define DEF___FIVector_1_Microsoft__CUI__CInput__CPointerPoint_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8220cf33-5d76-5607-bb7d-b7cd07d27f33"))
IVector<ABI::Microsoft::UI::Input::PointerPoint*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::PointerPoint*, ABI::Microsoft::UI::Input::IPointerPoint*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.Collections.IVector`1<Microsoft.UI.Input.PointerPoint>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Microsoft::UI::Input::PointerPoint*> __FIVector_1_Microsoft__CUI__CInput__CPointerPoint_t;
#define __FIVector_1_Microsoft__CUI__CInput__CPointerPoint ABI::Windows::Foundation::Collections::__FIVector_1_Microsoft__CUI__CInput__CPointerPoint_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Microsoft__CUI__CInput__CPointerPoint_USE */

#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                class GestureRecognizer;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                class CrossSlidingEventArgs;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CCrossSlidingEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CCrossSlidingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2c68b524-bff5-5b9e-ab2d-9b1cac2d3876"))
ITypedEventHandler<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::CrossSlidingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::IGestureRecognizer*>, ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::CrossSlidingEventArgs*, ABI::Microsoft::UI::Input::ICrossSlidingEventArgs*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.GestureRecognizer, Microsoft.UI.Input.CrossSlidingEventArgs>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::CrossSlidingEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CCrossSlidingEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CCrossSlidingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CCrossSlidingEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CCrossSlidingEventArgs_USE */

#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                class DraggingEventArgs;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CDraggingEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CDraggingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7fc18fed-898b-58cf-9996-2baa40e7dd3d"))
ITypedEventHandler<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::DraggingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::IGestureRecognizer*>, ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::DraggingEventArgs*, ABI::Microsoft::UI::Input::IDraggingEventArgs*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.GestureRecognizer, Microsoft.UI.Input.DraggingEventArgs>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::DraggingEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CDraggingEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CDraggingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CDraggingEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CDraggingEventArgs_USE */

#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                class HoldingEventArgs;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CHoldingEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CHoldingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("41508cc9-7826-58f9-a6e9-63be531e95d3"))
ITypedEventHandler<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::HoldingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::IGestureRecognizer*>, ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::HoldingEventArgs*, ABI::Microsoft::UI::Input::IHoldingEventArgs*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.GestureRecognizer, Microsoft.UI.Input.HoldingEventArgs>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::HoldingEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CHoldingEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CHoldingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CHoldingEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CHoldingEventArgs_USE */

#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                class ManipulationCompletedEventArgs;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationCompletedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationCompletedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("14bbef09-d8fd-56a9-ab2f-01dbf0187593"))
ITypedEventHandler<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::ManipulationCompletedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::IGestureRecognizer*>, ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::ManipulationCompletedEventArgs*, ABI::Microsoft::UI::Input::IManipulationCompletedEventArgs*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.GestureRecognizer, Microsoft.UI.Input.ManipulationCompletedEventArgs>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::ManipulationCompletedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationCompletedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationCompletedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationCompletedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationCompletedEventArgs_USE */

#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                class ManipulationInertiaStartingEventArgs;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationInertiaStartingEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationInertiaStartingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5e7f485a-4248-574a-aee5-62ff0cf2d881"))
ITypedEventHandler<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::ManipulationInertiaStartingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::IGestureRecognizer*>, ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::ManipulationInertiaStartingEventArgs*, ABI::Microsoft::UI::Input::IManipulationInertiaStartingEventArgs*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.GestureRecognizer, Microsoft.UI.Input.ManipulationInertiaStartingEventArgs>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::ManipulationInertiaStartingEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationInertiaStartingEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationInertiaStartingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationInertiaStartingEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationInertiaStartingEventArgs_USE */

#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                class ManipulationStartedEventArgs;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationStartedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationStartedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("44900647-40d5-5897-8957-310e220da555"))
ITypedEventHandler<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::ManipulationStartedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::IGestureRecognizer*>, ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::ManipulationStartedEventArgs*, ABI::Microsoft::UI::Input::IManipulationStartedEventArgs*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.GestureRecognizer, Microsoft.UI.Input.ManipulationStartedEventArgs>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::ManipulationStartedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationStartedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationStartedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationStartedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationStartedEventArgs_USE */

#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                class ManipulationUpdatedEventArgs;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationUpdatedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationUpdatedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("dd71c5ac-5ae1-5069-877a-ace37b5a4720"))
ITypedEventHandler<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::ManipulationUpdatedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::IGestureRecognizer*>, ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::ManipulationUpdatedEventArgs*, ABI::Microsoft::UI::Input::IManipulationUpdatedEventArgs*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.GestureRecognizer, Microsoft.UI.Input.ManipulationUpdatedEventArgs>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::ManipulationUpdatedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationUpdatedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationUpdatedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationUpdatedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationUpdatedEventArgs_USE */

#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                class RightTappedEventArgs;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CRightTappedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CRightTappedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("71b4ad41-872a-5afd-9332-704311f261b5"))
ITypedEventHandler<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::RightTappedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::IGestureRecognizer*>, ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::RightTappedEventArgs*, ABI::Microsoft::UI::Input::IRightTappedEventArgs*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.GestureRecognizer, Microsoft.UI.Input.RightTappedEventArgs>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::RightTappedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CRightTappedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CRightTappedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CRightTappedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CRightTappedEventArgs_USE */

#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                class TappedEventArgs;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CTappedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CTappedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("43cfd88f-74b1-570b-a71c-d78e6815cf0a"))
ITypedEventHandler<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::TappedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::IGestureRecognizer*>, ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::TappedEventArgs*, ABI::Microsoft::UI::Input::ITappedEventArgs*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.GestureRecognizer, Microsoft.UI.Input.TappedEventArgs>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::GestureRecognizer*, ABI::Microsoft::UI::Input::TappedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CTappedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CTappedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CTappedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CTappedEventArgs_USE */

#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                class InputActivationListener;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                class InputActivationListenerActivationChangedEventArgs;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("25b49081-1922-5447-b90f-cd4f9b03161b"))
ITypedEventHandler<ABI::Microsoft::UI::Input::InputActivationListener*, ABI::Microsoft::UI::Input::InputActivationListenerActivationChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::InputActivationListener*, ABI::Microsoft::UI::Input::IInputActivationListener*>, ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::InputActivationListenerActivationChangedEventArgs*, ABI::Microsoft::UI::Input::IInputActivationListenerActivationChangedEventArgs*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.InputActivationListener, Microsoft.UI.Input.InputActivationListenerActivationChangedEventArgs>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::InputActivationListener*, ABI::Microsoft::UI::Input::InputActivationListenerActivationChangedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs_USE */

#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                class InputLightDismissAction;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                class InputLightDismissEventArgs;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CInputLightDismissAction_Microsoft__CUI__CInput__CInputLightDismissEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CInputLightDismissAction_Microsoft__CUI__CInput__CInputLightDismissEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("91cb240d-f32c-5efb-8090-5ab5f1733d21"))
ITypedEventHandler<ABI::Microsoft::UI::Input::InputLightDismissAction*, ABI::Microsoft::UI::Input::InputLightDismissEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::InputLightDismissAction*, ABI::Microsoft::UI::Input::IInputLightDismissAction*>, ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::InputLightDismissEventArgs*, ABI::Microsoft::UI::Input::IInputLightDismissEventArgs*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.InputLightDismissAction, Microsoft.UI.Input.InputLightDismissEventArgs>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::InputLightDismissAction*, ABI::Microsoft::UI::Input::InputLightDismissEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputLightDismissAction_Microsoft__CUI__CInput__CInputLightDismissEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputLightDismissAction_Microsoft__CUI__CInput__CInputLightDismissEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CInputLightDismissAction_Microsoft__CUI__CInput__CInputLightDismissEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CInputLightDismissAction_Microsoft__CUI__CInput__CInputLightDismissEventArgs_USE */

#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                class InputPointerSource;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                class PointerEventArgs;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("040480be-4741-587d-9888-8694414a2650"))
ITypedEventHandler<ABI::Microsoft::UI::Input::InputPointerSource*, ABI::Microsoft::UI::Input::PointerEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::InputPointerSource*, ABI::Microsoft::UI::Input::IInputPointerSource*>, ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::Input::PointerEventArgs*, ABI::Microsoft::UI::Input::IPointerEventArgs*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.Input.InputPointerSource, Microsoft.UI.Input.PointerEventArgs>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::Input::InputPointerSource*, ABI::Microsoft::UI::Input::PointerEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs_USE */

#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Dispatching {
                class DispatcherQueue;
            } /* Dispatching */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CDispatching_CIDispatcherQueue_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CDispatching_CIDispatcherQueue_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Dispatching {
                interface IDispatcherQueue;
            } /* Dispatching */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CDispatching_CIDispatcherQueue ABI::Microsoft::UI::Dispatching::IDispatcherQueue

#endif // ____x_ABI_CMicrosoft_CUI_CDispatching_CIDispatcherQueue_FWD_DEFINED__

namespace ABI {
    namespace Microsoft {
        namespace UI {
            typedef struct WindowId WindowId;
        } /* UI */
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
            typedef struct Point Point;
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
            typedef struct TimeSpan TimeSpan;
        } /* Foundation */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            typedef enum VirtualKey : int VirtualKey;
        } /* System */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            typedef enum VirtualKeyModifiers : unsigned int VirtualKeyModifiers;
        } /* System */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class CoreCursor;
            } /* Core */
        } /* UI */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreCursor_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreCursor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreCursor;
            } /* Core */
        } /* UI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreCursor ABI::Windows::UI::Core::ICoreCursor

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreCursor_FWD_DEFINED__

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                typedef enum CoreVirtualKeyStates : unsigned int CoreVirtualKeyStates;
            } /* Core */
        } /* UI */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                typedef enum CrossSlidingState : int CrossSlidingState;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                typedef enum DraggingState : int DraggingState;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                typedef enum GestureSettings : unsigned int GestureSettings;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                typedef enum HoldingState : int HoldingState;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                typedef enum InputActivationState : int InputActivationState;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                typedef enum InputPointerSourceDeviceKinds : unsigned int InputPointerSourceDeviceKinds;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                typedef enum InputSystemCursorShape : int InputSystemCursorShape;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                typedef enum PointerDeviceType : int PointerDeviceType;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                typedef enum PointerUpdateKind : int PointerUpdateKind;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                typedef struct CrossSlideThresholds CrossSlideThresholds;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                typedef struct ManipulationDelta ManipulationDelta;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                typedef struct ManipulationVelocities ManipulationVelocities;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                class InputCursor;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                class InputDesktopNamedResourceCursor;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                class InputDesktopResourceCursor;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                class InputSystemCursor;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                class MouseWheelParameters;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                class PointerPointProperties;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                class PointerPredictor;
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

/*
 *
 * Struct Microsoft.UI.Input.CrossSlidingState
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                enum CrossSlidingState : int
                {
                    CrossSlidingState_Started = 0,
                    CrossSlidingState_Dragging = 1,
                    CrossSlidingState_Selecting = 2,
                    CrossSlidingState_SelectSpeedBumping = 3,
                    CrossSlidingState_SpeedBumping = 4,
                    CrossSlidingState_Rearranging = 5,
                    CrossSlidingState_Completed = 6,
                };
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Struct Microsoft.UI.Input.DraggingState
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                enum DraggingState : int
                {
                    DraggingState_Started = 0,
                    DraggingState_Continuing = 1,
                    DraggingState_Completed = 2,
                };
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Struct Microsoft.UI.Input.GestureSettings
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                enum GestureSettings : unsigned int
                {
                    GestureSettings_None = 0,
                    GestureSettings_Tap = 0x1,
                    GestureSettings_DoubleTap = 0x2,
                    GestureSettings_Hold = 0x4,
                    GestureSettings_HoldWithMouse = 0x8,
                    GestureSettings_RightTap = 0x10,
                    GestureSettings_Drag = 0x20,
                    GestureSettings_ManipulationTranslateX = 0x40,
                    GestureSettings_ManipulationTranslateY = 0x80,
                    GestureSettings_ManipulationTranslateRailsX = 0x100,
                    GestureSettings_ManipulationTranslateRailsY = 0x200,
                    GestureSettings_ManipulationRotate = 0x400,
                    GestureSettings_ManipulationScale = 0x800,
                    GestureSettings_ManipulationTranslateInertia = 0x1000,
                    GestureSettings_ManipulationRotateInertia = 0x2000,
                    GestureSettings_ManipulationScaleInertia = 0x4000,
                    GestureSettings_CrossSlide = 0x8000,
                    GestureSettings_ManipulationMultipleFingerPanning = 0x10000,
                };

                DEFINE_ENUM_FLAG_OPERATORS(GestureSettings)
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Struct Microsoft.UI.Input.HoldingState
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                enum HoldingState : int
                {
                    HoldingState_Started = 0,
                    HoldingState_Completed = 1,
                    HoldingState_Canceled = 2,
                };
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Struct Microsoft.UI.Input.InputActivationState
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.1
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                enum InputActivationState : int
                {
                    InputActivationState_None = 0,
                    InputActivationState_Deactivated = 1,
                    InputActivationState_Activated = 2,
                };
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

/*
 *
 * Struct Microsoft.UI.Input.InputPointerSourceDeviceKinds
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                enum InputPointerSourceDeviceKinds : unsigned int
                {
                    InputPointerSourceDeviceKinds_None = 0,
                    InputPointerSourceDeviceKinds_Touch = 0x1,
                    InputPointerSourceDeviceKinds_Pen = 0x2,
                    InputPointerSourceDeviceKinds_Mouse = 0x4,
                };

                DEFINE_ENUM_FLAG_OPERATORS(InputPointerSourceDeviceKinds)
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Struct Microsoft.UI.Input.InputSystemCursorShape
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                enum InputSystemCursorShape : int
                {
                    InputSystemCursorShape_Arrow = 0,
                    InputSystemCursorShape_Cross = 1,
                    InputSystemCursorShape_Hand = 3,
                    InputSystemCursorShape_Help = 4,
                    InputSystemCursorShape_IBeam = 5,
                    InputSystemCursorShape_SizeAll = 6,
                    InputSystemCursorShape_SizeNortheastSouthwest = 7,
                    InputSystemCursorShape_SizeNorthSouth = 8,
                    InputSystemCursorShape_SizeNorthwestSoutheast = 9,
                    InputSystemCursorShape_SizeWestEast = 10,
                    InputSystemCursorShape_UniversalNo = 11,
                    InputSystemCursorShape_UpArrow = 12,
                    InputSystemCursorShape_Wait = 13,
                    InputSystemCursorShape_Pin = 14,
                    InputSystemCursorShape_Person = 15,
                    InputSystemCursorShape_AppStarting = 16,
                };
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Struct Microsoft.UI.Input.PointerDeviceType
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                enum PointerDeviceType : int
                {
                    PointerDeviceType_Touch = 0,
                    PointerDeviceType_Pen = 1,
                    PointerDeviceType_Mouse = 2,
                    PointerDeviceType_Touchpad = 3,
                };
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Struct Microsoft.UI.Input.PointerUpdateKind
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                enum PointerUpdateKind : int
                {
                    PointerUpdateKind_Other = 0,
                    PointerUpdateKind_LeftButtonPressed = 1,
                    PointerUpdateKind_LeftButtonReleased = 2,
                    PointerUpdateKind_RightButtonPressed = 3,
                    PointerUpdateKind_RightButtonReleased = 4,
                    PointerUpdateKind_MiddleButtonPressed = 5,
                    PointerUpdateKind_MiddleButtonReleased = 6,
                    PointerUpdateKind_XButton1Pressed = 7,
                    PointerUpdateKind_XButton1Released = 8,
                    PointerUpdateKind_XButton2Pressed = 9,
                    PointerUpdateKind_XButton2Released = 10,
                };
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Struct Microsoft.UI.Input.CrossSlideThresholds
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                struct CrossSlideThresholds
                {
                    FLOAT SelectionStart;
                    FLOAT SpeedBumpStart;
                    FLOAT SpeedBumpEnd;
                    FLOAT RearrangeStart;
                };
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Struct Microsoft.UI.Input.ManipulationDelta
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                struct ManipulationDelta
                {
                    ABI::Windows::Foundation::Point Translation;
                    FLOAT Scale;
                    FLOAT Rotation;
                    FLOAT Expansion;
                };
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Struct Microsoft.UI.Input.ManipulationVelocities
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                struct ManipulationVelocities
                {
                    ABI::Windows::Foundation::Point Linear;
                    FLOAT Angular;
                    FLOAT Expansion;
                };
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.ICrossSlidingEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.CrossSlidingEventArgs
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_ICrossSlidingEventArgs[] = L"Microsoft.UI.Input.ICrossSlidingEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("7679641f-ba9f-543c-a7c8-6229a98f89ef")
                ICrossSlidingEventArgs : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_CrossSlidingState(
                        ABI::Microsoft::UI::Input::CrossSlidingState* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                        ABI::Microsoft::UI::Input::PointerDeviceType* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Position(
                        ABI::Windows::Foundation::Point* value
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_ICrossSlidingEventArgs = _uuidof(ICrossSlidingEventArgs);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IDraggingEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.DraggingEventArgs
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IDraggingEventArgs[] = L"Microsoft.UI.Input.IDraggingEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("3efb1b75-3d3b-550e-963d-0828ca76128a")
                IDraggingEventArgs : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_DraggingState(
                        ABI::Microsoft::UI::Input::DraggingState* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                        ABI::Microsoft::UI::Input::PointerDeviceType* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Position(
                        ABI::Windows::Foundation::Point* value
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IDraggingEventArgs = _uuidof(IDraggingEventArgs);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IGestureRecognizer
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.GestureRecognizer
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IGestureRecognizer[] = L"Microsoft.UI.Input.IGestureRecognizer";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("cda89afc-6bd0-595c-ba37-545fce5bf016")
                IGestureRecognizer : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_AutoProcessInertia(
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_AutoProcessInertia(
                        boolean value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_CrossSlideExact(
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_CrossSlideExact(
                        boolean value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_CrossSlideHorizontally(
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_CrossSlideHorizontally(
                        boolean value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_CrossSlideThresholds(
                        ABI::Microsoft::UI::Input::CrossSlideThresholds* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_CrossSlideThresholds(
                        ABI::Microsoft::UI::Input::CrossSlideThresholds value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_GestureSettings(
                        ABI::Microsoft::UI::Input::GestureSettings* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_GestureSettings(
                        ABI::Microsoft::UI::Input::GestureSettings value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_IsActive(
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_IsInertial(
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_PivotCenter(
                        ABI::Windows::Foundation::Point* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_PivotCenter(
                        ABI::Windows::Foundation::Point value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_PivotRadius(
                        FLOAT* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_PivotRadius(
                        FLOAT value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_InertiaExpansionDeceleration(
                        FLOAT* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_InertiaExpansionDeceleration(
                        FLOAT value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_InertiaExpansion(
                        FLOAT* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_InertiaExpansion(
                        FLOAT value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_InertiaRotationAngle(
                        FLOAT* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_InertiaRotationAngle(
                        FLOAT value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_InertiaRotationDeceleration(
                        FLOAT* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_InertiaRotationDeceleration(
                        FLOAT value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_InertiaTranslationDeceleration(
                        FLOAT* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_InertiaTranslationDeceleration(
                        FLOAT value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_InertiaTranslationDisplacement(
                        FLOAT* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_InertiaTranslationDisplacement(
                        FLOAT value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_ManipulationExact(
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_ManipulationExact(
                        boolean value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_MouseWheelParameters(
                        ABI::Microsoft::UI::Input::IMouseWheelParameters** value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_ShowGestureFeedback(
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_ShowGestureFeedback(
                        boolean value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CanBeDoubleTap(
                        ABI::Microsoft::UI::Input::IPointerPoint* value,
                        boolean* result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CompleteGesture(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ProcessDownEvent(
                        ABI::Microsoft::UI::Input::IPointerPoint* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ProcessMoveEvents(
                        __FIVector_1_Microsoft__CUI__CInput__CPointerPoint* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ProcessMouseWheelEvent(
                        ABI::Microsoft::UI::Input::IPointerPoint* value,
                        boolean isShiftKeyDown,
                        boolean isControlKeyDown
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ProcessInertia(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ProcessUpEvent(
                        ABI::Microsoft::UI::Input::IPointerPoint* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_Tapped(
                        __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CTappedEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_Tapped(
                        EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_RightTapped(
                        __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CRightTappedEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_RightTapped(
                        EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_Holding(
                        __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CHoldingEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_Holding(
                        EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_Dragging(
                        __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CDraggingEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_Dragging(
                        EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_ManipulationStarted(
                        __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationStartedEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_ManipulationStarted(
                        EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_ManipulationUpdated(
                        __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationUpdatedEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_ManipulationUpdated(
                        EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_ManipulationInertiaStarting(
                        __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationInertiaStartingEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_ManipulationInertiaStarting(
                        EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_ManipulationCompleted(
                        __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationCompletedEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_ManipulationCompleted(
                        EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_CrossSliding(
                        __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CCrossSlidingEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_CrossSliding(
                        EventRegistrationToken token
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IGestureRecognizer = _uuidof(IGestureRecognizer);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IHoldingEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.HoldingEventArgs
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IHoldingEventArgs[] = L"Microsoft.UI.Input.IHoldingEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("8e449e85-d223-533c-b0b2-bf7c6d10c2db")
                IHoldingEventArgs : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_HoldingState(
                        ABI::Microsoft::UI::Input::HoldingState* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                        ABI::Microsoft::UI::Input::PointerDeviceType* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Position(
                        ABI::Windows::Foundation::Point* value
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IHoldingEventArgs = _uuidof(IHoldingEventArgs);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputActivationListener
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.1
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputActivationListener
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputActivationListener[] = L"Microsoft.UI.Input.IInputActivationListener";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("3b818627-6ce7-5e0d-a0f5-6684fd1aec78")
                IInputActivationListener : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_State(
                        ABI::Microsoft::UI::Input::InputActivationState* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_InputActivationChanged(
                        __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_InputActivationChanged(
                        EventRegistrationToken token
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IInputActivationListener = _uuidof(IInputActivationListener);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

/*
 *
 * Interface Microsoft.UI.Input.IInputActivationListenerActivationChangedEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.1
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputActivationListenerActivationChangedEventArgs
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputActivationListenerActivationChangedEventArgs[] = L"Microsoft.UI.Input.IInputActivationListenerActivationChangedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("7978526b-00b6-5303-8f7d-55bef36da786")
                IInputActivationListenerActivationChangedEventArgs : public IInspectable
                {
                public:
                };

                extern MIDL_CONST_ID IID& IID_IInputActivationListenerActivationChangedEventArgs = _uuidof(IInputActivationListenerActivationChangedEventArgs);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

/*
 *
 * Interface Microsoft.UI.Input.IInputActivationListenerStatics
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.1
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputActivationListener
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputActivationListenerStatics[] = L"Microsoft.UI.Input.IInputActivationListenerStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("c4249843-f053-5c99-9d51-720ade94224d")
                IInputActivationListenerStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE GetForWindowId(
                        ABI::Microsoft::UI::WindowId windowId,
                        ABI::Microsoft::UI::Input::IInputActivationListener** result
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IInputActivationListenerStatics = _uuidof(IInputActivationListenerStatics);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

/*
 *
 * Interface Microsoft.UI.Input.IInputCursor
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputCursor
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputCursor_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputCursor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputCursor[] = L"Microsoft.UI.Input.IInputCursor";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("359b15f9-19c2-5714-8432-75176826406b")
                IInputCursor : public IInspectable
                {
                public:
                };

                extern MIDL_CONST_ID IID& IID_IInputCursor = _uuidof(IInputCursor);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputCursor;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputCursor_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputCursorFactory
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputCursor
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputCursorFactory[] = L"Microsoft.UI.Input.IInputCursorFactory";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("2f47647b-4be0-53e9-be7e-c38d5459db6b")
                IInputCursorFactory : public IInspectable
                {
                public:
                };

                extern MIDL_CONST_ID IID& IID_IInputCursorFactory = _uuidof(IInputCursorFactory);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputCursorStatics
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.1
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputCursor
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputCursorStatics[] = L"Microsoft.UI.Input.IInputCursorStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("92f6a552-099f-55fb-8c31-e450284c9643")
                IInputCursorStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE CreateFromCoreCursor(
                        ABI::Windows::UI::Core::ICoreCursor* cursor,
                        ABI::Microsoft::UI::Input::IInputCursor** result
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IInputCursorStatics = _uuidof(IInputCursorStatics);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

/*
 *
 * Interface Microsoft.UI.Input.IInputCustomCursor
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.1
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputCustomCursor
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputCustomCursor[] = L"Microsoft.UI.Input.IInputCustomCursor";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("5486f042-7e1a-5dc8-8041-e47b609a5ba1")
                IInputCustomCursor : public IInspectable
                {
                public:
                };

                extern MIDL_CONST_ID IID& IID_IInputCustomCursor = _uuidof(IInputCustomCursor);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

/*
 *
 * Interface Microsoft.UI.Input.IInputCustomCursorFactory
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.1
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputCustomCursor
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputCustomCursorFactory[] = L"Microsoft.UI.Input.IInputCustomCursorFactory";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("6f402882-66e0-57d3-89d0-aa5e2ff917bc")
                IInputCustomCursorFactory : public IInspectable
                {
                public:
                };

                extern MIDL_CONST_ID IID& IID_IInputCustomCursorFactory = _uuidof(IInputCustomCursorFactory);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

/*
 *
 * Interface Microsoft.UI.Input.IInputDesktopNamedResourceCursor
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.1
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputDesktopNamedResourceCursor
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputDesktopNamedResourceCursor[] = L"Microsoft.UI.Input.IInputDesktopNamedResourceCursor";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("f40ea93b-0ed7-5b3a-bfe2-14e2b5ad88a3")
                IInputDesktopNamedResourceCursor : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_ModuleName(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_ResourceName(
                        HSTRING* value
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IInputDesktopNamedResourceCursor = _uuidof(IInputDesktopNamedResourceCursor);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

/*
 *
 * Interface Microsoft.UI.Input.IInputDesktopNamedResourceCursorStatics
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.1
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputDesktopNamedResourceCursor
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputDesktopNamedResourceCursorStatics[] = L"Microsoft.UI.Input.IInputDesktopNamedResourceCursorStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("e8b6d5aa-898b-5e69-b01f-383a0943e3e4")
                IInputDesktopNamedResourceCursorStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        HSTRING resourceName,
                        ABI::Microsoft::UI::Input::IInputDesktopNamedResourceCursor** result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromModule(
                        HSTRING moduleName,
                        HSTRING resourceName,
                        ABI::Microsoft::UI::Input::IInputDesktopNamedResourceCursor** result
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IInputDesktopNamedResourceCursorStatics = _uuidof(IInputDesktopNamedResourceCursorStatics);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

/*
 *
 * Interface Microsoft.UI.Input.IInputDesktopResourceCursor
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputDesktopResourceCursor
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputDesktopResourceCursor[] = L"Microsoft.UI.Input.IInputDesktopResourceCursor";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("1df2777f-7c90-58fc-a7a3-d5736c6510fd")
                IInputDesktopResourceCursor : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_ModuleName(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_ResourceId(
                        UINT32* value
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IInputDesktopResourceCursor = _uuidof(IInputDesktopResourceCursor);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputDesktopResourceCursorStatics
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputDesktopResourceCursor
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputDesktopResourceCursorStatics[] = L"Microsoft.UI.Input.IInputDesktopResourceCursorStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("f440dc37-a0b6-56eb-bcec-b024f2233d47")
                IInputDesktopResourceCursorStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        UINT32 resourceId,
                        ABI::Microsoft::UI::Input::IInputDesktopResourceCursor** result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromModule(
                        HSTRING moduleName,
                        UINT32 resourceId,
                        ABI::Microsoft::UI::Input::IInputDesktopResourceCursor** result
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IInputDesktopResourceCursorStatics = _uuidof(IInputDesktopResourceCursorStatics);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputKeyboardSource
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputKeyboardSource
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputKeyboardSource[] = L"Microsoft.UI.Input.IInputKeyboardSource";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("ed61b906-16ad-5df7-a550-5e6f7d2229f7")
                IInputKeyboardSource : public IInspectable
                {
                public:
                };

                extern MIDL_CONST_ID IID& IID_IInputKeyboardSource = _uuidof(IInputKeyboardSource);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputKeyboardSourceStatics
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputKeyboardSource
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputKeyboardSourceStatics[] = L"Microsoft.UI.Input.IInputKeyboardSourceStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("f4e1563d-8c2e-5bcd-b784-47adeaa3cd7e")
                IInputKeyboardSourceStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE GetKeyStateForCurrentThread(
                        ABI::Windows::System::VirtualKey virtualKey,
                        ABI::Windows::UI::Core::CoreVirtualKeyStates* result
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IInputKeyboardSourceStatics = _uuidof(IInputKeyboardSourceStatics);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputLightDismissAction
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputLightDismissAction
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputLightDismissAction[] = L"Microsoft.UI.Input.IInputLightDismissAction";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("e8a39502-a860-502f-8c10-3646d43aecf1")
                IInputLightDismissAction : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE add_Dismissed(
                        __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputLightDismissAction_Microsoft__CUI__CInput__CInputLightDismissEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_Dismissed(
                        EventRegistrationToken token
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IInputLightDismissAction = _uuidof(IInputLightDismissAction);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputLightDismissActionStatics
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputLightDismissAction
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputLightDismissActionStatics[] = L"Microsoft.UI.Input.IInputLightDismissActionStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("ed9b8def-6496-5169-984d-d44b4e690623")
                IInputLightDismissActionStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE GetForWindowId(
                        ABI::Microsoft::UI::WindowId windowId,
                        ABI::Microsoft::UI::Input::IInputLightDismissAction** result
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IInputLightDismissActionStatics = _uuidof(IInputLightDismissActionStatics);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputLightDismissEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputLightDismissEventArgs
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputLightDismissEventArgs[] = L"Microsoft.UI.Input.IInputLightDismissEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("078660ee-07ca-5808-b982-e6e899cf098c")
                IInputLightDismissEventArgs : public IInspectable
                {
                public:
                };

                extern MIDL_CONST_ID IID& IID_IInputLightDismissEventArgs = _uuidof(IInputLightDismissEventArgs);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputObject
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputObject
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputObject_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputObject_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputObject[] = L"Microsoft.UI.Input.IInputObject";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("42edbc88-d386-544d-b1b8-68617fe68282")
                IInputObject : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_DispatcherQueue(
                        ABI::Microsoft::UI::Dispatching::IDispatcherQueue** value
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IInputObject = _uuidof(IInputObject);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputObject;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputObject_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputObjectFactory
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputObject
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputObjectFactory[] = L"Microsoft.UI.Input.IInputObjectFactory";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("f7786bc2-b0b8-5961-9a57-ae199d452106")
                IInputObjectFactory : public IInspectable
                {
                public:
                };

                extern MIDL_CONST_ID IID& IID_IInputObjectFactory = _uuidof(IInputObjectFactory);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputPointerSource
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputPointerSource
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputPointerSource[] = L"Microsoft.UI.Input.IInputPointerSource";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("6a6c2764-c3f4-5be5-8447-c9a98766c240")
                IInputPointerSource : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_Cursor(
                        ABI::Microsoft::UI::Input::IInputCursor** value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_Cursor(
                        ABI::Microsoft::UI::Input::IInputCursor* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_DeviceKinds(
                        ABI::Microsoft::UI::Input::InputPointerSourceDeviceKinds* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_PointerCaptureLost(
                        __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_PointerCaptureLost(
                        EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_PointerEntered(
                        __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_PointerEntered(
                        EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_PointerExited(
                        __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_PointerExited(
                        EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_PointerMoved(
                        __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_PointerMoved(
                        EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_PointerPressed(
                        __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_PointerPressed(
                        EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_PointerReleased(
                        __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_PointerReleased(
                        EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_PointerRoutedAway(
                        __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_PointerRoutedAway(
                        EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_PointerRoutedReleased(
                        __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_PointerRoutedReleased(
                        EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_PointerRoutedTo(
                        __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_PointerRoutedTo(
                        EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_PointerWheelChanged(
                        __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_PointerWheelChanged(
                        EventRegistrationToken token
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IInputPointerSource = _uuidof(IInputPointerSource);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputSystemCursor
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputSystemCursor
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputSystemCursor[] = L"Microsoft.UI.Input.IInputSystemCursor";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("59f538e7-c500-59ab-8b54-0bc6100fd49e")
                IInputSystemCursor : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_CursorShape(
                        ABI::Microsoft::UI::Input::InputSystemCursorShape* value
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IInputSystemCursor = _uuidof(IInputSystemCursor);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputSystemCursorStatics
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputSystemCursor
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputSystemCursorStatics[] = L"Microsoft.UI.Input.IInputSystemCursorStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("d3860bb6-698a-5814-aedd-c2fa8bba5a02")
                IInputSystemCursorStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        ABI::Microsoft::UI::Input::InputSystemCursorShape type,
                        ABI::Microsoft::UI::Input::IInputSystemCursor** result
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IInputSystemCursorStatics = _uuidof(IInputSystemCursorStatics);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IManipulationCompletedEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.ManipulationCompletedEventArgs
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IManipulationCompletedEventArgs[] = L"Microsoft.UI.Input.IManipulationCompletedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("0e0249d4-46e4-5559-aee3-fa45ce2a7f56")
                IManipulationCompletedEventArgs : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_Cumulative(
                        ABI::Microsoft::UI::Input::ManipulationDelta* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                        ABI::Microsoft::UI::Input::PointerDeviceType* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Position(
                        ABI::Windows::Foundation::Point* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Velocities(
                        ABI::Microsoft::UI::Input::ManipulationVelocities* value
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IManipulationCompletedEventArgs = _uuidof(IManipulationCompletedEventArgs);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IManipulationInertiaStartingEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.ManipulationInertiaStartingEventArgs
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IManipulationInertiaStartingEventArgs[] = L"Microsoft.UI.Input.IManipulationInertiaStartingEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("acf9ef71-6e15-56ab-9260-f0d3ce5f66e8")
                IManipulationInertiaStartingEventArgs : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_Cumulative(
                        ABI::Microsoft::UI::Input::ManipulationDelta* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Delta(
                        ABI::Microsoft::UI::Input::ManipulationDelta* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                        ABI::Microsoft::UI::Input::PointerDeviceType* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Position(
                        ABI::Windows::Foundation::Point* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Velocities(
                        ABI::Microsoft::UI::Input::ManipulationVelocities* value
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IManipulationInertiaStartingEventArgs = _uuidof(IManipulationInertiaStartingEventArgs);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IManipulationStartedEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.ManipulationStartedEventArgs
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IManipulationStartedEventArgs[] = L"Microsoft.UI.Input.IManipulationStartedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("4a616613-eef1-5f1b-a768-0775478d49d4")
                IManipulationStartedEventArgs : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_Cumulative(
                        ABI::Microsoft::UI::Input::ManipulationDelta* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                        ABI::Microsoft::UI::Input::PointerDeviceType* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Position(
                        ABI::Windows::Foundation::Point* value
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IManipulationStartedEventArgs = _uuidof(IManipulationStartedEventArgs);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IManipulationUpdatedEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.ManipulationUpdatedEventArgs
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IManipulationUpdatedEventArgs[] = L"Microsoft.UI.Input.IManipulationUpdatedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("406e1961-0c98-5fc0-b3d8-116492ef0053")
                IManipulationUpdatedEventArgs : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_Cumulative(
                        ABI::Microsoft::UI::Input::ManipulationDelta* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Delta(
                        ABI::Microsoft::UI::Input::ManipulationDelta* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                        ABI::Microsoft::UI::Input::PointerDeviceType* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Position(
                        ABI::Windows::Foundation::Point* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Velocities(
                        ABI::Microsoft::UI::Input::ManipulationVelocities* value
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IManipulationUpdatedEventArgs = _uuidof(IManipulationUpdatedEventArgs);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IMouseWheelParameters
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.MouseWheelParameters
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IMouseWheelParameters[] = L"Microsoft.UI.Input.IMouseWheelParameters";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("6d98be40-1d56-51d1-aa0d-f325439cd009")
                IMouseWheelParameters : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_CharTranslation(
                        ABI::Windows::Foundation::Point* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_CharTranslation(
                        ABI::Windows::Foundation::Point value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_DeltaScale(
                        FLOAT* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_DeltaScale(
                        FLOAT value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_DeltaRotationAngle(
                        FLOAT* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_DeltaRotationAngle(
                        FLOAT value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_PageTranslation(
                        ABI::Windows::Foundation::Point* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_PageTranslation(
                        ABI::Windows::Foundation::Point value
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IMouseWheelParameters = _uuidof(IMouseWheelParameters);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IPointerEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.PointerEventArgs
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IPointerEventArgs[] = L"Microsoft.UI.Input.IPointerEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("865b188c-2ed5-5df8-829f-ac0701d5c51a")
                IPointerEventArgs : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_CurrentPoint(
                        ABI::Microsoft::UI::Input::IPointerPoint** value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Handled(
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_Handled(
                        boolean value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_KeyModifiers(
                        ABI::Windows::System::VirtualKeyModifiers* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetIntermediatePoints(
                        __FIVector_1_Microsoft__CUI__CInput__CPointerPoint** result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetIntermediateTransformedPoints(
                        ABI::Microsoft::UI::Input::IPointerPointTransform* transform,
                        __FIVector_1_Microsoft__CUI__CInput__CPointerPoint** result
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IPointerEventArgs = _uuidof(IPointerEventArgs);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IPointerPoint
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.PointerPoint
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IPointerPoint[] = L"Microsoft.UI.Input.IPointerPoint";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("0d430ee6-252c-59a4-b2a2-d44264dc6a40")
                IPointerPoint : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_FrameId(
                        UINT32* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_IsInContact(
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                        ABI::Microsoft::UI::Input::PointerDeviceType* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_PointerId(
                        UINT32* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Position(
                        ABI::Windows::Foundation::Point* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Properties(
                        ABI::Microsoft::UI::Input::IPointerPointProperties** value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Timestamp(
                        UINT64* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetTransformedPoint(
                        ABI::Microsoft::UI::Input::IPointerPointTransform* transform,
                        ABI::Microsoft::UI::Input::IPointerPoint** result
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IPointerPoint = _uuidof(IPointerPoint);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IPointerPointProperties
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.PointerPointProperties
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IPointerPointProperties[] = L"Microsoft.UI.Input.IPointerPointProperties";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("d760ed77-4b10-57a5-b3cc-d9bf3413e996")
                IPointerPointProperties : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_ContactRect(
                        ABI::Windows::Foundation::Rect* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_IsBarrelButtonPressed(
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_IsCanceled(
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_IsEraser(
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_IsHorizontalMouseWheel(
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_IsInRange(
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_IsInverted(
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_IsLeftButtonPressed(
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_IsMiddleButtonPressed(
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_IsPrimary(
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_IsRightButtonPressed(
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_IsXButton1Pressed(
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_IsXButton2Pressed(
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_MouseWheelDelta(
                        INT32* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Orientation(
                        FLOAT* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_PointerUpdateKind(
                        ABI::Microsoft::UI::Input::PointerUpdateKind* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Pressure(
                        FLOAT* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_TouchConfidence(
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Twist(
                        FLOAT* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_XTilt(
                        FLOAT* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_YTilt(
                        FLOAT* value
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IPointerPointProperties = _uuidof(IPointerPointProperties);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IPointerPointTransform
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IPointerPointTransform[] = L"Microsoft.UI.Input.IPointerPointTransform";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("db4791bc-994d-54c7-92ef-66ea1de9b43c")
                IPointerPointTransform : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_Inverse(
                        ABI::Microsoft::UI::Input::IPointerPointTransform** value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryTransform(
                        ABI::Windows::Foundation::Point inPoint,
                        ABI::Windows::Foundation::Point* outPoint,
                        boolean* result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryTransformBounds(
                        ABI::Windows::Foundation::Rect inRect,
                        ABI::Windows::Foundation::Rect* outRect,
                        boolean* result
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IPointerPointTransform = _uuidof(IPointerPointTransform);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IPointerPredictor
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.PointerPredictor
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IPointerPredictor[] = L"Microsoft.UI.Input.IPointerPredictor";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("12c100ec-2100-565f-a60c-f1187f438828")
                IPointerPredictor : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_PredictionTime(
                        ABI::Windows::Foundation::TimeSpan* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_PredictionTime(
                        ABI::Windows::Foundation::TimeSpan value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetPredictedPoints(
                        ABI::Microsoft::UI::Input::IPointerPoint* point,
                        UINT32* resultLength,
                        ABI::Microsoft::UI::Input::IPointerPoint*** result
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IPointerPredictor = _uuidof(IPointerPredictor);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IPointerPredictorStatics
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.PointerPredictor
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IPointerPredictorStatics[] = L"Microsoft.UI.Input.IPointerPredictorStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("78a8ef30-3e5c-55cd-8f85-65ac09b1a987")
                IPointerPredictorStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE CreateForInputPointerSource(
                        ABI::Microsoft::UI::Input::IInputPointerSource* inputPointerSource,
                        ABI::Microsoft::UI::Input::IPointerPredictor** result
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IPointerPredictorStatics = _uuidof(IPointerPredictorStatics);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IRightTappedEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.RightTappedEventArgs
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IRightTappedEventArgs[] = L"Microsoft.UI.Input.IRightTappedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("8ff73b39-887e-50a4-8500-77953039dcb4")
                IRightTappedEventArgs : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                        ABI::Microsoft::UI::Input::PointerDeviceType* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Position(
                        ABI::Windows::Foundation::Point* value
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_IRightTappedEventArgs = _uuidof(IRightTappedEventArgs);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.ITappedEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.TappedEventArgs
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_ITappedEventArgs[] = L"Microsoft.UI.Input.ITappedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Input {
                MIDL_INTERFACE("c3a01bb5-6076-5e0f-871a-9d94a6a8f82b")
                ITappedEventArgs : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                        ABI::Microsoft::UI::Input::PointerDeviceType* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Position(
                        ABI::Windows::Foundation::Point* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_TapCount(
                        UINT32* value
                        ) = 0;
                };

                extern MIDL_CONST_ID IID& IID_ITappedEventArgs = _uuidof(ITappedEventArgs);
            } /* Input */
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.CrossSlidingEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.ICrossSlidingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_CrossSlidingEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_CrossSlidingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_CrossSlidingEventArgs[] = L"Microsoft.UI.Input.CrossSlidingEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.DraggingEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IDraggingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_DraggingEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_DraggingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_DraggingEventArgs[] = L"Microsoft.UI.Input.DraggingEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.GestureRecognizer
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Microsoft.Foundation.WindowsAppSDKContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IGestureRecognizer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_GestureRecognizer_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_GestureRecognizer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_GestureRecognizer[] = L"Microsoft.UI.Input.GestureRecognizer";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.HoldingEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IHoldingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_HoldingEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_HoldingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_HoldingEventArgs[] = L"Microsoft.UI.Input.HoldingEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.InputActivationListener
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.1
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IInputActivationListenerStatics interface starting with version 1.1 of the Microsoft.Foundation.WindowsAppSDKContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputActivationListener ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputActivationListener_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputActivationListener_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputActivationListener[] = L"Microsoft.UI.Input.InputActivationListener";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

/*
 *
 * Class Microsoft.UI.Input.InputActivationListenerActivationChangedEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.1
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputActivationListenerActivationChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputActivationListenerActivationChangedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputActivationListenerActivationChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputActivationListenerActivationChangedEventArgs[] = L"Microsoft.UI.Input.InputActivationListenerActivationChangedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

/*
 *
 * Class Microsoft.UI.Input.InputCursor
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IInputCursorStatics interface starting with version 1.1 of the Microsoft.Foundation.WindowsAppSDKContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputCursor ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputCursor_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputCursor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputCursor[] = L"Microsoft.UI.Input.InputCursor";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.InputCustomCursor
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.1
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputCustomCursor ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputCustomCursor_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputCustomCursor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputCustomCursor[] = L"Microsoft.UI.Input.InputCustomCursor";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

/*
 *
 * Class Microsoft.UI.Input.InputDesktopNamedResourceCursor
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.1
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IInputDesktopNamedResourceCursorStatics interface starting with version 1.1 of the Microsoft.Foundation.WindowsAppSDKContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputDesktopNamedResourceCursor ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputDesktopNamedResourceCursor_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputDesktopNamedResourceCursor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputDesktopNamedResourceCursor[] = L"Microsoft.UI.Input.InputDesktopNamedResourceCursor";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

/*
 *
 * Class Microsoft.UI.Input.InputDesktopResourceCursor
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IInputDesktopResourceCursorStatics interface starting with version 1.0 of the Microsoft.Foundation.WindowsAppSDKContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputDesktopResourceCursor ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputDesktopResourceCursor_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputDesktopResourceCursor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputDesktopResourceCursor[] = L"Microsoft.UI.Input.InputDesktopResourceCursor";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.InputKeyboardSource
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IInputKeyboardSourceStatics interface starting with version 1.0 of the Microsoft.Foundation.WindowsAppSDKContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputKeyboardSource ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputKeyboardSource_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputKeyboardSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputKeyboardSource[] = L"Microsoft.UI.Input.InputKeyboardSource";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.InputLightDismissAction
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IInputLightDismissActionStatics interface starting with version 1.0 of the Microsoft.Foundation.WindowsAppSDKContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputLightDismissAction ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputLightDismissAction_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputLightDismissAction_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputLightDismissAction[] = L"Microsoft.UI.Input.InputLightDismissAction";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.InputLightDismissEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputLightDismissEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputLightDismissEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputLightDismissEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputLightDismissEventArgs[] = L"Microsoft.UI.Input.InputLightDismissEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.InputObject
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputObject ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputObject_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputObject_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputObject[] = L"Microsoft.UI.Input.InputObject";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.InputPointerSource
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputPointerSource ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputPointerSource_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputPointerSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputPointerSource[] = L"Microsoft.UI.Input.InputPointerSource";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.InputSystemCursor
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IInputSystemCursorStatics interface starting with version 1.0 of the Microsoft.Foundation.WindowsAppSDKContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputSystemCursor ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputSystemCursor_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputSystemCursor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputSystemCursor[] = L"Microsoft.UI.Input.InputSystemCursor";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.ManipulationCompletedEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IManipulationCompletedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_ManipulationCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_ManipulationCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_ManipulationCompletedEventArgs[] = L"Microsoft.UI.Input.ManipulationCompletedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.ManipulationInertiaStartingEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IManipulationInertiaStartingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_ManipulationInertiaStartingEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_ManipulationInertiaStartingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_ManipulationInertiaStartingEventArgs[] = L"Microsoft.UI.Input.ManipulationInertiaStartingEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.ManipulationStartedEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IManipulationStartedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_ManipulationStartedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_ManipulationStartedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_ManipulationStartedEventArgs[] = L"Microsoft.UI.Input.ManipulationStartedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.ManipulationUpdatedEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IManipulationUpdatedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_ManipulationUpdatedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_ManipulationUpdatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_ManipulationUpdatedEventArgs[] = L"Microsoft.UI.Input.ManipulationUpdatedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.MouseWheelParameters
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IMouseWheelParameters ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_MouseWheelParameters_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_MouseWheelParameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_MouseWheelParameters[] = L"Microsoft.UI.Input.MouseWheelParameters";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.PointerEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IPointerEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_PointerEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_PointerEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_PointerEventArgs[] = L"Microsoft.UI.Input.PointerEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.PointerPoint
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IPointerPoint ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_PointerPoint_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_PointerPoint_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_PointerPoint[] = L"Microsoft.UI.Input.PointerPoint";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.PointerPointProperties
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IPointerPointProperties ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_PointerPointProperties_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_PointerPointProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_PointerPointProperties[] = L"Microsoft.UI.Input.PointerPointProperties";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.PointerPredictor
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IPointerPredictorStatics interface starting with version 1.0 of the Microsoft.Foundation.WindowsAppSDKContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IPointerPredictor ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_PointerPredictor_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_PointerPredictor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_PointerPredictor[] = L"Microsoft.UI.Input.PointerPredictor";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.RightTappedEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IRightTappedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_RightTappedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_RightTappedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_RightTappedEventArgs[] = L"Microsoft.UI.Input.RightTappedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.TappedEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.ITappedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_TappedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_TappedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_TappedEventArgs[] = L"Microsoft.UI.Input.TappedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs __x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs __x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs __x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputCursor_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputCursor_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIInputCursor __x_ABI_CMicrosoft_CUI_CInput_CIInputCursor;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputCursor_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor __x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory __x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputObject_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputObject_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIInputObject __x_ABI_CMicrosoft_CUI_CInput_CIInputObject;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputObject_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory __x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs __x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs __x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs __x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs __x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters __x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs __x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs __x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs __x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Microsoft__CUI__CInput__CPointerPoint_INTERFACE_DEFINED__)
#define ____FIIterator_1_Microsoft__CUI__CInput__CPointerPoint_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Microsoft__CUI__CInput__CPointerPoint __FIIterator_1_Microsoft__CUI__CInput__CPointerPoint;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Microsoft__CUI__CInput__CPointerPoint;

typedef struct __FIIterator_1_Microsoft__CUI__CInput__CPointerPointVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIIterator_1_Microsoft__CUI__CInput__CPointerPoint* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIIterator_1_Microsoft__CUI__CInput__CPointerPoint* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIIterator_1_Microsoft__CUI__CInput__CPointerPoint* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIIterator_1_Microsoft__CUI__CInput__CPointerPoint* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIIterator_1_Microsoft__CUI__CInput__CPointerPoint* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIIterator_1_Microsoft__CUI__CInput__CPointerPoint* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Current)(__FIIterator_1_Microsoft__CUI__CInput__CPointerPoint* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint** result);
    HRESULT (STDMETHODCALLTYPE* get_HasCurrent)(__FIIterator_1_Microsoft__CUI__CInput__CPointerPoint* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* MoveNext)(__FIIterator_1_Microsoft__CUI__CInput__CPointerPoint* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIIterator_1_Microsoft__CUI__CInput__CPointerPoint* This,
        UINT32 itemsLength,
        __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint** items,
        UINT32* result);

    END_INTERFACE
} __FIIterator_1_Microsoft__CUI__CInput__CPointerPointVtbl;

interface __FIIterator_1_Microsoft__CUI__CInput__CPointerPoint
{
    CONST_VTBL struct __FIIterator_1_Microsoft__CUI__CInput__CPointerPointVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterator_1_Microsoft__CUI__CInput__CPointerPoint_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIIterator_1_Microsoft__CUI__CInput__CPointerPoint_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIIterator_1_Microsoft__CUI__CInput__CPointerPoint_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIIterator_1_Microsoft__CUI__CInput__CPointerPoint_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIIterator_1_Microsoft__CUI__CInput__CPointerPoint_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIIterator_1_Microsoft__CUI__CInput__CPointerPoint_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIIterator_1_Microsoft__CUI__CInput__CPointerPoint_get_Current(This, result) \
    ((This)->lpVtbl->get_Current(This, result))

#define __FIIterator_1_Microsoft__CUI__CInput__CPointerPoint_get_HasCurrent(This, result) \
    ((This)->lpVtbl->get_HasCurrent(This, result))

#define __FIIterator_1_Microsoft__CUI__CInput__CPointerPoint_MoveNext(This, result) \
    ((This)->lpVtbl->MoveNext(This, result))

#define __FIIterator_1_Microsoft__CUI__CInput__CPointerPoint_GetMany(This, itemsLength, items, result) \
    ((This)->lpVtbl->GetMany(This, itemsLength, items, result))

#endif /* COBJMACROS */

#endif // ____FIIterator_1_Microsoft__CUI__CInput__CPointerPoint_INTERFACE_DEFINED__
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Microsoft__CUI__CInput__CPointerPoint_INTERFACE_DEFINED__)
#define ____FIIterable_1_Microsoft__CUI__CInput__CPointerPoint_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Microsoft__CUI__CInput__CPointerPoint __FIIterable_1_Microsoft__CUI__CInput__CPointerPoint;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Microsoft__CUI__CInput__CPointerPoint;

typedef struct __FIIterable_1_Microsoft__CUI__CInput__CPointerPointVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIIterable_1_Microsoft__CUI__CInput__CPointerPoint* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIIterable_1_Microsoft__CUI__CInput__CPointerPoint* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIIterable_1_Microsoft__CUI__CInput__CPointerPoint* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIIterable_1_Microsoft__CUI__CInput__CPointerPoint* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIIterable_1_Microsoft__CUI__CInput__CPointerPoint* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIIterable_1_Microsoft__CUI__CInput__CPointerPoint* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* First)(__FIIterable_1_Microsoft__CUI__CInput__CPointerPoint* This,
        __FIIterator_1_Microsoft__CUI__CInput__CPointerPoint** result);

    END_INTERFACE
} __FIIterable_1_Microsoft__CUI__CInput__CPointerPointVtbl;

interface __FIIterable_1_Microsoft__CUI__CInput__CPointerPoint
{
    CONST_VTBL struct __FIIterable_1_Microsoft__CUI__CInput__CPointerPointVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Microsoft__CUI__CInput__CPointerPoint_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIIterable_1_Microsoft__CUI__CInput__CPointerPoint_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIIterable_1_Microsoft__CUI__CInput__CPointerPoint_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIIterable_1_Microsoft__CUI__CInput__CPointerPoint_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIIterable_1_Microsoft__CUI__CInput__CPointerPoint_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIIterable_1_Microsoft__CUI__CInput__CPointerPoint_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIIterable_1_Microsoft__CUI__CInput__CPointerPoint_First(This, result) \
    ((This)->lpVtbl->First(This, result))

#endif /* COBJMACROS */

#endif // ____FIIterable_1_Microsoft__CUI__CInput__CPointerPoint_INTERFACE_DEFINED__
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint __FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint;

typedef struct __FIVectorView_1_Microsoft__CUI__CInput__CPointerPointVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetAt)(__FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint* This,
        UINT32 index,
        __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint** result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* IndexOf)(__FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint* value,
        UINT32* index,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint* This,
        UINT32 startIndex,
        UINT32 itemsLength,
        __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint** items,
        UINT32* result);

    END_INTERFACE
} __FIVectorView_1_Microsoft__CUI__CInput__CPointerPointVtbl;

interface __FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint
{
    CONST_VTBL struct __FIVectorView_1_Microsoft__CUI__CInput__CPointerPointVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint_GetAt(This, index, result) \
    ((This)->lpVtbl->GetAt(This, index, result))

#define __FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint_get_Size(This, result) \
    ((This)->lpVtbl->get_Size(This, result))

#define __FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint_IndexOf(This, value, index, result) \
    ((This)->lpVtbl->IndexOf(This, value, index, result))

#define __FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint_GetMany(This, startIndex, itemsLength, items, result) \
    ((This)->lpVtbl->GetMany(This, startIndex, itemsLength, items, result))

#endif /* COBJMACROS */

#endif // ____FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint_INTERFACE_DEFINED__
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Microsoft__CUI__CInput__CPointerPoint_INTERFACE_DEFINED__)
#define ____FIVector_1_Microsoft__CUI__CInput__CPointerPoint_INTERFACE_DEFINED__

typedef interface __FIVector_1_Microsoft__CUI__CInput__CPointerPoint __FIVector_1_Microsoft__CUI__CInput__CPointerPoint;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Microsoft__CUI__CInput__CPointerPoint;

typedef struct __FIVector_1_Microsoft__CUI__CInput__CPointerPointVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIVector_1_Microsoft__CUI__CInput__CPointerPoint* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIVector_1_Microsoft__CUI__CInput__CPointerPoint* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIVector_1_Microsoft__CUI__CInput__CPointerPoint* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIVector_1_Microsoft__CUI__CInput__CPointerPoint* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIVector_1_Microsoft__CUI__CInput__CPointerPoint* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIVector_1_Microsoft__CUI__CInput__CPointerPoint* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetAt)(__FIVector_1_Microsoft__CUI__CInput__CPointerPoint* This,
        UINT32 index,
        __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint** result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__FIVector_1_Microsoft__CUI__CInput__CPointerPoint* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* GetView)(__FIVector_1_Microsoft__CUI__CInput__CPointerPoint* This,
        __FIVectorView_1_Microsoft__CUI__CInput__CPointerPoint** result);
    HRESULT (STDMETHODCALLTYPE* IndexOf)(__FIVector_1_Microsoft__CUI__CInput__CPointerPoint* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint* value,
        UINT32* index,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* SetAt)(__FIVector_1_Microsoft__CUI__CInput__CPointerPoint* This,
        UINT32 index,
        __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint* value);
    HRESULT (STDMETHODCALLTYPE* InsertAt)(__FIVector_1_Microsoft__CUI__CInput__CPointerPoint* This,
        UINT32 index,
        __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint* value);
    HRESULT (STDMETHODCALLTYPE* RemoveAt)(__FIVector_1_Microsoft__CUI__CInput__CPointerPoint* This,
        UINT32 index);
    HRESULT (STDMETHODCALLTYPE* Append)(__FIVector_1_Microsoft__CUI__CInput__CPointerPoint* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint* value);
    HRESULT (STDMETHODCALLTYPE* RemoveAtEnd)(__FIVector_1_Microsoft__CUI__CInput__CPointerPoint* This);
    HRESULT (STDMETHODCALLTYPE* Clear)(__FIVector_1_Microsoft__CUI__CInput__CPointerPoint* This);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIVector_1_Microsoft__CUI__CInput__CPointerPoint* This,
        UINT32 startIndex,
        UINT32 itemsLength,
        __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint** items,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* ReplaceAll)(__FIVector_1_Microsoft__CUI__CInput__CPointerPoint* This,
        UINT32 itemsLength,
        __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint** items);

    END_INTERFACE
} __FIVector_1_Microsoft__CUI__CInput__CPointerPointVtbl;

interface __FIVector_1_Microsoft__CUI__CInput__CPointerPoint
{
    CONST_VTBL struct __FIVector_1_Microsoft__CUI__CInput__CPointerPointVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIVector_1_Microsoft__CUI__CInput__CPointerPoint_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIVector_1_Microsoft__CUI__CInput__CPointerPoint_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIVector_1_Microsoft__CUI__CInput__CPointerPoint_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIVector_1_Microsoft__CUI__CInput__CPointerPoint_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __FIVector_1_Microsoft__CUI__CInput__CPointerPoint_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __FIVector_1_Microsoft__CUI__CInput__CPointerPoint_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __FIVector_1_Microsoft__CUI__CInput__CPointerPoint_GetAt(This, index, result) \
    ((This)->lpVtbl->GetAt(This, index, result))

#define __FIVector_1_Microsoft__CUI__CInput__CPointerPoint_get_Size(This, result) \
    ((This)->lpVtbl->get_Size(This, result))

#define __FIVector_1_Microsoft__CUI__CInput__CPointerPoint_GetView(This, result) \
    ((This)->lpVtbl->GetView(This, result))

#define __FIVector_1_Microsoft__CUI__CInput__CPointerPoint_IndexOf(This, value, index, result) \
    ((This)->lpVtbl->IndexOf(This, value, index, result))

#define __FIVector_1_Microsoft__CUI__CInput__CPointerPoint_SetAt(This, index, value) \
    ((This)->lpVtbl->SetAt(This, index, value))

#define __FIVector_1_Microsoft__CUI__CInput__CPointerPoint_InsertAt(This, index, value) \
    ((This)->lpVtbl->InsertAt(This, index, value))

#define __FIVector_1_Microsoft__CUI__CInput__CPointerPoint_RemoveAt(This, index) \
    ((This)->lpVtbl->RemoveAt(This, index))

#define __FIVector_1_Microsoft__CUI__CInput__CPointerPoint_Append(This, value) \
    ((This)->lpVtbl->Append(This, value))

#define __FIVector_1_Microsoft__CUI__CInput__CPointerPoint_RemoveAtEnd(This) \
    ((This)->lpVtbl->RemoveAtEnd(This))

#define __FIVector_1_Microsoft__CUI__CInput__CPointerPoint_Clear(This) \
    ((This)->lpVtbl->Clear(This))

#define __FIVector_1_Microsoft__CUI__CInput__CPointerPoint_GetMany(This, startIndex, itemsLength, items, result) \
    ((This)->lpVtbl->GetMany(This, startIndex, itemsLength, items, result))

#define __FIVector_1_Microsoft__CUI__CInput__CPointerPoint_ReplaceAll(This, itemsLength, items) \
    ((This)->lpVtbl->ReplaceAll(This, itemsLength, items))

#endif /* COBJMACROS */

#endif // ____FIVector_1_Microsoft__CUI__CInput__CPointerPoint_INTERFACE_DEFINED__
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CCrossSlidingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CCrossSlidingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CCrossSlidingEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CCrossSlidingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CCrossSlidingEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CCrossSlidingEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CCrossSlidingEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CCrossSlidingEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CCrossSlidingEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CCrossSlidingEventArgs* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* sender,
        __x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs* args);

    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CCrossSlidingEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CCrossSlidingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CCrossSlidingEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CCrossSlidingEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CCrossSlidingEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CCrossSlidingEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CCrossSlidingEventArgs_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CCrossSlidingEventArgs_INTERFACE_DEFINED__
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CDraggingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CDraggingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CDraggingEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CDraggingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CDraggingEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CDraggingEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CDraggingEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CDraggingEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CDraggingEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CDraggingEventArgs* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* sender,
        __x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs* args);

    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CDraggingEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CDraggingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CDraggingEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CDraggingEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CDraggingEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CDraggingEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CDraggingEventArgs_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CDraggingEventArgs_INTERFACE_DEFINED__
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CHoldingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CHoldingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CHoldingEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CHoldingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CHoldingEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CHoldingEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CHoldingEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CHoldingEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CHoldingEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CHoldingEventArgs* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* sender,
        __x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs* args);

    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CHoldingEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CHoldingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CHoldingEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CHoldingEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CHoldingEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CHoldingEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CHoldingEventArgs_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CHoldingEventArgs_INTERFACE_DEFINED__
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationCompletedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationCompletedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationCompletedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationCompletedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationCompletedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationCompletedEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationCompletedEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationCompletedEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationCompletedEventArgs* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* sender,
        __x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs* args);

    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationCompletedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationCompletedEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationCompletedEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationCompletedEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationCompletedEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationCompletedEventArgs_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationCompletedEventArgs_INTERFACE_DEFINED__
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationInertiaStartingEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationInertiaStartingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationInertiaStartingEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationInertiaStartingEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationInertiaStartingEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationInertiaStartingEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationInertiaStartingEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationInertiaStartingEventArgs* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* sender,
        __x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs* args);

    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationInertiaStartingEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationInertiaStartingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationInertiaStartingEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationInertiaStartingEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationInertiaStartingEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationInertiaStartingEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationInertiaStartingEventArgs_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationStartedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationStartedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationStartedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationStartedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationStartedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationStartedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationStartedEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationStartedEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationStartedEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationStartedEventArgs* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* sender,
        __x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs* args);

    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationStartedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationStartedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationStartedEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationStartedEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationStartedEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationStartedEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationStartedEventArgs_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationStartedEventArgs_INTERFACE_DEFINED__
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationUpdatedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationUpdatedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationUpdatedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationUpdatedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationUpdatedEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationUpdatedEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationUpdatedEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationUpdatedEventArgs* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* sender,
        __x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs* args);

    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationUpdatedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationUpdatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationUpdatedEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationUpdatedEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationUpdatedEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationUpdatedEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationUpdatedEventArgs_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationUpdatedEventArgs_INTERFACE_DEFINED__
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CRightTappedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CRightTappedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CRightTappedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CRightTappedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CRightTappedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CRightTappedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CRightTappedEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CRightTappedEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CRightTappedEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CRightTappedEventArgs* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* sender,
        __x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs* args);

    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CRightTappedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CRightTappedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CRightTappedEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CRightTappedEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CRightTappedEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CRightTappedEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CRightTappedEventArgs_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CRightTappedEventArgs_INTERFACE_DEFINED__
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CTappedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CTappedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CTappedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CTappedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CTappedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CTappedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CTappedEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CTappedEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CTappedEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CTappedEventArgs* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* sender,
        __x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs* args);

    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CTappedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CTappedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CTappedEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CTappedEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CTappedEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CTappedEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CTappedEventArgs_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CTappedEventArgs_INTERFACE_DEFINED__
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener* sender,
        __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs* args);

    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CInputLightDismissAction_Microsoft__CUI__CInput__CInputLightDismissEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CInputLightDismissAction_Microsoft__CUI__CInput__CInputLightDismissEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputLightDismissAction_Microsoft__CUI__CInput__CInputLightDismissEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputLightDismissAction_Microsoft__CUI__CInput__CInputLightDismissEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CInputLightDismissAction_Microsoft__CUI__CInput__CInputLightDismissEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputLightDismissAction_Microsoft__CUI__CInput__CInputLightDismissEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CInputLightDismissAction_Microsoft__CUI__CInput__CInputLightDismissEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CInputLightDismissAction_Microsoft__CUI__CInput__CInputLightDismissEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CInputLightDismissAction_Microsoft__CUI__CInput__CInputLightDismissEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CInputLightDismissAction_Microsoft__CUI__CInput__CInputLightDismissEventArgs* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction* sender,
        __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs* args);

    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputLightDismissAction_Microsoft__CUI__CInput__CInputLightDismissEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputLightDismissAction_Microsoft__CUI__CInput__CInputLightDismissEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputLightDismissAction_Microsoft__CUI__CInput__CInputLightDismissEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputLightDismissAction_Microsoft__CUI__CInput__CInputLightDismissEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputLightDismissAction_Microsoft__CUI__CInput__CInputLightDismissEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputLightDismissAction_Microsoft__CUI__CInput__CInputLightDismissEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputLightDismissAction_Microsoft__CUI__CInput__CInputLightDismissEventArgs_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CInputLightDismissAction_Microsoft__CUI__CInput__CInputLightDismissEventArgs_INTERFACE_DEFINED__
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* sender,
        __x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs* args);

    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs_INTERFACE_DEFINED__
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CMicrosoft_CUI_CDispatching_CIDispatcherQueue_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CDispatching_CIDispatcherQueue_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CDispatching_CIDispatcherQueue __x_ABI_CMicrosoft_CUI_CDispatching_CIDispatcherQueue;

#endif // ____x_ABI_CMicrosoft_CUI_CDispatching_CIDispatcherQueue_FWD_DEFINED__

typedef struct __x_ABI_CMicrosoft_CUI_CWindowId __x_ABI_CMicrosoft_CUI_CWindowId;

#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__

typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;

typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;

typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;

typedef enum __x_ABI_CWindows_CSystem_CVirtualKey __x_ABI_CWindows_CSystem_CVirtualKey;

typedef enum __x_ABI_CWindows_CSystem_CVirtualKeyModifiers __x_ABI_CWindows_CSystem_CVirtualKeyModifiers;

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreCursor_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreCursor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreCursor __x_ABI_CWindows_CUI_CCore_CICoreCursor;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreCursor_FWD_DEFINED__

typedef enum __x_ABI_CWindows_CUI_CCore_CCoreVirtualKeyStates __x_ABI_CWindows_CUI_CCore_CCoreVirtualKeyStates;

typedef enum __x_ABI_CMicrosoft_CUI_CInput_CCrossSlidingState __x_ABI_CMicrosoft_CUI_CInput_CCrossSlidingState;

typedef enum __x_ABI_CMicrosoft_CUI_CInput_CDraggingState __x_ABI_CMicrosoft_CUI_CInput_CDraggingState;

typedef enum __x_ABI_CMicrosoft_CUI_CInput_CGestureSettings __x_ABI_CMicrosoft_CUI_CInput_CGestureSettings;

typedef enum __x_ABI_CMicrosoft_CUI_CInput_CHoldingState __x_ABI_CMicrosoft_CUI_CInput_CHoldingState;

typedef enum __x_ABI_CMicrosoft_CUI_CInput_CInputActivationState __x_ABI_CMicrosoft_CUI_CInput_CInputActivationState;

typedef enum __x_ABI_CMicrosoft_CUI_CInput_CInputPointerSourceDeviceKinds __x_ABI_CMicrosoft_CUI_CInput_CInputPointerSourceDeviceKinds;

typedef enum __x_ABI_CMicrosoft_CUI_CInput_CInputSystemCursorShape __x_ABI_CMicrosoft_CUI_CInput_CInputSystemCursorShape;

typedef enum __x_ABI_CMicrosoft_CUI_CInput_CPointerDeviceType __x_ABI_CMicrosoft_CUI_CInput_CPointerDeviceType;

typedef enum __x_ABI_CMicrosoft_CUI_CInput_CPointerUpdateKind __x_ABI_CMicrosoft_CUI_CInput_CPointerUpdateKind;

typedef struct __x_ABI_CMicrosoft_CUI_CInput_CCrossSlideThresholds __x_ABI_CMicrosoft_CUI_CInput_CCrossSlideThresholds;

typedef struct __x_ABI_CMicrosoft_CUI_CInput_CManipulationDelta __x_ABI_CMicrosoft_CUI_CInput_CManipulationDelta;

typedef struct __x_ABI_CMicrosoft_CUI_CInput_CManipulationVelocities __x_ABI_CMicrosoft_CUI_CInput_CManipulationVelocities;

/*
 *
 * Struct Microsoft.UI.Input.CrossSlidingState
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
enum __x_ABI_CMicrosoft_CUI_CInput_CCrossSlidingState
{
    CrossSlidingState_Started = 0,
    CrossSlidingState_Dragging = 1,
    CrossSlidingState_Selecting = 2,
    CrossSlidingState_SelectSpeedBumping = 3,
    CrossSlidingState_SpeedBumping = 4,
    CrossSlidingState_Rearranging = 5,
    CrossSlidingState_Completed = 6,
};
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Struct Microsoft.UI.Input.DraggingState
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
enum __x_ABI_CMicrosoft_CUI_CInput_CDraggingState
{
    DraggingState_Started = 0,
    DraggingState_Continuing = 1,
    DraggingState_Completed = 2,
};
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Struct Microsoft.UI.Input.GestureSettings
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
enum __x_ABI_CMicrosoft_CUI_CInput_CGestureSettings
{
    GestureSettings_None = 0,
    GestureSettings_Tap = 0x1,
    GestureSettings_DoubleTap = 0x2,
    GestureSettings_Hold = 0x4,
    GestureSettings_HoldWithMouse = 0x8,
    GestureSettings_RightTap = 0x10,
    GestureSettings_Drag = 0x20,
    GestureSettings_ManipulationTranslateX = 0x40,
    GestureSettings_ManipulationTranslateY = 0x80,
    GestureSettings_ManipulationTranslateRailsX = 0x100,
    GestureSettings_ManipulationTranslateRailsY = 0x200,
    GestureSettings_ManipulationRotate = 0x400,
    GestureSettings_ManipulationScale = 0x800,
    GestureSettings_ManipulationTranslateInertia = 0x1000,
    GestureSettings_ManipulationRotateInertia = 0x2000,
    GestureSettings_ManipulationScaleInertia = 0x4000,
    GestureSettings_CrossSlide = 0x8000,
    GestureSettings_ManipulationMultipleFingerPanning = 0x10000,
};
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Struct Microsoft.UI.Input.HoldingState
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
enum __x_ABI_CMicrosoft_CUI_CInput_CHoldingState
{
    HoldingState_Started = 0,
    HoldingState_Completed = 1,
    HoldingState_Canceled = 2,
};
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Struct Microsoft.UI.Input.InputActivationState
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.1
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
enum __x_ABI_CMicrosoft_CUI_CInput_CInputActivationState
{
    InputActivationState_None = 0,
    InputActivationState_Deactivated = 1,
    InputActivationState_Activated = 2,
};
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

/*
 *
 * Struct Microsoft.UI.Input.InputPointerSourceDeviceKinds
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
enum __x_ABI_CMicrosoft_CUI_CInput_CInputPointerSourceDeviceKinds
{
    InputPointerSourceDeviceKinds_None = 0,
    InputPointerSourceDeviceKinds_Touch = 0x1,
    InputPointerSourceDeviceKinds_Pen = 0x2,
    InputPointerSourceDeviceKinds_Mouse = 0x4,
};
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Struct Microsoft.UI.Input.InputSystemCursorShape
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
enum __x_ABI_CMicrosoft_CUI_CInput_CInputSystemCursorShape
{
    InputSystemCursorShape_Arrow = 0,
    InputSystemCursorShape_Cross = 1,
    InputSystemCursorShape_Hand = 3,
    InputSystemCursorShape_Help = 4,
    InputSystemCursorShape_IBeam = 5,
    InputSystemCursorShape_SizeAll = 6,
    InputSystemCursorShape_SizeNortheastSouthwest = 7,
    InputSystemCursorShape_SizeNorthSouth = 8,
    InputSystemCursorShape_SizeNorthwestSoutheast = 9,
    InputSystemCursorShape_SizeWestEast = 10,
    InputSystemCursorShape_UniversalNo = 11,
    InputSystemCursorShape_UpArrow = 12,
    InputSystemCursorShape_Wait = 13,
    InputSystemCursorShape_Pin = 14,
    InputSystemCursorShape_Person = 15,
    InputSystemCursorShape_AppStarting = 16,
};
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Struct Microsoft.UI.Input.PointerDeviceType
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
enum __x_ABI_CMicrosoft_CUI_CInput_CPointerDeviceType
{
    PointerDeviceType_Touch = 0,
    PointerDeviceType_Pen = 1,
    PointerDeviceType_Mouse = 2,
    PointerDeviceType_Touchpad = 3,
};
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Struct Microsoft.UI.Input.PointerUpdateKind
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
enum __x_ABI_CMicrosoft_CUI_CInput_CPointerUpdateKind
{
    PointerUpdateKind_Other = 0,
    PointerUpdateKind_LeftButtonPressed = 1,
    PointerUpdateKind_LeftButtonReleased = 2,
    PointerUpdateKind_RightButtonPressed = 3,
    PointerUpdateKind_RightButtonReleased = 4,
    PointerUpdateKind_MiddleButtonPressed = 5,
    PointerUpdateKind_MiddleButtonReleased = 6,
    PointerUpdateKind_XButton1Pressed = 7,
    PointerUpdateKind_XButton1Released = 8,
    PointerUpdateKind_XButton2Pressed = 9,
    PointerUpdateKind_XButton2Released = 10,
};
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Struct Microsoft.UI.Input.CrossSlideThresholds
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
struct __x_ABI_CMicrosoft_CUI_CInput_CCrossSlideThresholds
{
    FLOAT SelectionStart;
    FLOAT SpeedBumpStart;
    FLOAT SpeedBumpEnd;
    FLOAT RearrangeStart;
};
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Struct Microsoft.UI.Input.ManipulationDelta
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
struct __x_ABI_CMicrosoft_CUI_CInput_CManipulationDelta
{
    struct __x_ABI_CWindows_CFoundation_CPoint Translation;
    FLOAT Scale;
    FLOAT Rotation;
    FLOAT Expansion;
};
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Struct Microsoft.UI.Input.ManipulationVelocities
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
struct __x_ABI_CMicrosoft_CUI_CInput_CManipulationVelocities
{
    struct __x_ABI_CWindows_CFoundation_CPoint Linear;
    FLOAT Angular;
    FLOAT Expansion;
};
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.ICrossSlidingEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.CrossSlidingEventArgs
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_ICrossSlidingEventArgs[] = L"Microsoft.UI.Input.ICrossSlidingEventArgs";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_CrossSlidingState)(__x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs* This,
        enum __x_ABI_CMicrosoft_CUI_CInput_CCrossSlidingState* value);
    HRESULT (STDMETHODCALLTYPE* get_PointerDeviceType)(__x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs* This,
        enum __x_ABI_CMicrosoft_CUI_CInput_CPointerDeviceType* value);
    HRESULT (STDMETHODCALLTYPE* get_Position)(__x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs* This,
        struct __x_ABI_CWindows_CFoundation_CPoint* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs_get_CrossSlidingState(This, value) \
    ((This)->lpVtbl->get_CrossSlidingState(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs_get_PointerDeviceType(This, value) \
    ((This)->lpVtbl->get_PointerDeviceType(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs_get_Position(This, value) \
    ((This)->lpVtbl->get_Position(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CICrossSlidingEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IDraggingEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.DraggingEventArgs
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IDraggingEventArgs[] = L"Microsoft.UI.Input.IDraggingEventArgs";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_DraggingState)(__x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs* This,
        enum __x_ABI_CMicrosoft_CUI_CInput_CDraggingState* value);
    HRESULT (STDMETHODCALLTYPE* get_PointerDeviceType)(__x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs* This,
        enum __x_ABI_CMicrosoft_CUI_CInput_CPointerDeviceType* value);
    HRESULT (STDMETHODCALLTYPE* get_Position)(__x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs* This,
        struct __x_ABI_CWindows_CFoundation_CPoint* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs_get_DraggingState(This, value) \
    ((This)->lpVtbl->get_DraggingState(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs_get_PointerDeviceType(This, value) \
    ((This)->lpVtbl->get_PointerDeviceType(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs_get_Position(This, value) \
    ((This)->lpVtbl->get_Position(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIDraggingEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IGestureRecognizer
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.GestureRecognizer
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IGestureRecognizer[] = L"Microsoft.UI.Input.IGestureRecognizer";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizerVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_AutoProcessInertia)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* put_AutoProcessInertia)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        boolean value);
    HRESULT (STDMETHODCALLTYPE* get_CrossSlideExact)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* put_CrossSlideExact)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        boolean value);
    HRESULT (STDMETHODCALLTYPE* get_CrossSlideHorizontally)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* put_CrossSlideHorizontally)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        boolean value);
    HRESULT (STDMETHODCALLTYPE* get_CrossSlideThresholds)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        struct __x_ABI_CMicrosoft_CUI_CInput_CCrossSlideThresholds* value);
    HRESULT (STDMETHODCALLTYPE* put_CrossSlideThresholds)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        struct __x_ABI_CMicrosoft_CUI_CInput_CCrossSlideThresholds value);
    HRESULT (STDMETHODCALLTYPE* get_GestureSettings)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        enum __x_ABI_CMicrosoft_CUI_CInput_CGestureSettings* value);
    HRESULT (STDMETHODCALLTYPE* put_GestureSettings)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        enum __x_ABI_CMicrosoft_CUI_CInput_CGestureSettings value);
    HRESULT (STDMETHODCALLTYPE* get_IsActive)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_IsInertial)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_PivotCenter)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        struct __x_ABI_CWindows_CFoundation_CPoint* value);
    HRESULT (STDMETHODCALLTYPE* put_PivotCenter)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        struct __x_ABI_CWindows_CFoundation_CPoint value);
    HRESULT (STDMETHODCALLTYPE* get_PivotRadius)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* put_PivotRadius)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        FLOAT value);
    HRESULT (STDMETHODCALLTYPE* get_InertiaExpansionDeceleration)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* put_InertiaExpansionDeceleration)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        FLOAT value);
    HRESULT (STDMETHODCALLTYPE* get_InertiaExpansion)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* put_InertiaExpansion)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        FLOAT value);
    HRESULT (STDMETHODCALLTYPE* get_InertiaRotationAngle)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* put_InertiaRotationAngle)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        FLOAT value);
    HRESULT (STDMETHODCALLTYPE* get_InertiaRotationDeceleration)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* put_InertiaRotationDeceleration)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        FLOAT value);
    HRESULT (STDMETHODCALLTYPE* get_InertiaTranslationDeceleration)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* put_InertiaTranslationDeceleration)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        FLOAT value);
    HRESULT (STDMETHODCALLTYPE* get_InertiaTranslationDisplacement)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* put_InertiaTranslationDisplacement)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        FLOAT value);
    HRESULT (STDMETHODCALLTYPE* get_ManipulationExact)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* put_ManipulationExact)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        boolean value);
    HRESULT (STDMETHODCALLTYPE* get_MouseWheelParameters)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters** value);
    HRESULT (STDMETHODCALLTYPE* get_ShowGestureFeedback)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* put_ShowGestureFeedback)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        boolean value);
    HRESULT (STDMETHODCALLTYPE* CanBeDoubleTap)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint* value,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* CompleteGesture)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This);
    HRESULT (STDMETHODCALLTYPE* ProcessDownEvent)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint* value);
    HRESULT (STDMETHODCALLTYPE* ProcessMoveEvents)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        __FIVector_1_Microsoft__CUI__CInput__CPointerPoint* value);
    HRESULT (STDMETHODCALLTYPE* ProcessMouseWheelEvent)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint* value,
        boolean isShiftKeyDown,
        boolean isControlKeyDown);
    HRESULT (STDMETHODCALLTYPE* ProcessInertia)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This);
    HRESULT (STDMETHODCALLTYPE* ProcessUpEvent)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint* value);
    HRESULT (STDMETHODCALLTYPE* add_Tapped)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CTappedEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_Tapped)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_RightTapped)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CRightTappedEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_RightTapped)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_Holding)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CHoldingEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_Holding)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_Dragging)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CDraggingEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_Dragging)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_ManipulationStarted)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationStartedEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_ManipulationStarted)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_ManipulationUpdated)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationUpdatedEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_ManipulationUpdated)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_ManipulationInertiaStarting)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationInertiaStartingEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_ManipulationInertiaStarting)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_ManipulationCompleted)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CManipulationCompletedEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_ManipulationCompleted)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_CrossSliding)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        __FITypedEventHandler_2_Microsoft__CUI__CInput__CGestureRecognizer_Microsoft__CUI__CInput__CCrossSlidingEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_CrossSliding)(__x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer* This,
        EventRegistrationToken token);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizerVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizerVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_get_AutoProcessInertia(This, value) \
    ((This)->lpVtbl->get_AutoProcessInertia(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_put_AutoProcessInertia(This, value) \
    ((This)->lpVtbl->put_AutoProcessInertia(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_get_CrossSlideExact(This, value) \
    ((This)->lpVtbl->get_CrossSlideExact(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_put_CrossSlideExact(This, value) \
    ((This)->lpVtbl->put_CrossSlideExact(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_get_CrossSlideHorizontally(This, value) \
    ((This)->lpVtbl->get_CrossSlideHorizontally(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_put_CrossSlideHorizontally(This, value) \
    ((This)->lpVtbl->put_CrossSlideHorizontally(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_get_CrossSlideThresholds(This, value) \
    ((This)->lpVtbl->get_CrossSlideThresholds(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_put_CrossSlideThresholds(This, value) \
    ((This)->lpVtbl->put_CrossSlideThresholds(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_get_GestureSettings(This, value) \
    ((This)->lpVtbl->get_GestureSettings(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_put_GestureSettings(This, value) \
    ((This)->lpVtbl->put_GestureSettings(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_get_IsActive(This, value) \
    ((This)->lpVtbl->get_IsActive(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_get_IsInertial(This, value) \
    ((This)->lpVtbl->get_IsInertial(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_get_PivotCenter(This, value) \
    ((This)->lpVtbl->get_PivotCenter(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_put_PivotCenter(This, value) \
    ((This)->lpVtbl->put_PivotCenter(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_get_PivotRadius(This, value) \
    ((This)->lpVtbl->get_PivotRadius(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_put_PivotRadius(This, value) \
    ((This)->lpVtbl->put_PivotRadius(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_get_InertiaExpansionDeceleration(This, value) \
    ((This)->lpVtbl->get_InertiaExpansionDeceleration(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_put_InertiaExpansionDeceleration(This, value) \
    ((This)->lpVtbl->put_InertiaExpansionDeceleration(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_get_InertiaExpansion(This, value) \
    ((This)->lpVtbl->get_InertiaExpansion(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_put_InertiaExpansion(This, value) \
    ((This)->lpVtbl->put_InertiaExpansion(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_get_InertiaRotationAngle(This, value) \
    ((This)->lpVtbl->get_InertiaRotationAngle(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_put_InertiaRotationAngle(This, value) \
    ((This)->lpVtbl->put_InertiaRotationAngle(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_get_InertiaRotationDeceleration(This, value) \
    ((This)->lpVtbl->get_InertiaRotationDeceleration(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_put_InertiaRotationDeceleration(This, value) \
    ((This)->lpVtbl->put_InertiaRotationDeceleration(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_get_InertiaTranslationDeceleration(This, value) \
    ((This)->lpVtbl->get_InertiaTranslationDeceleration(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_put_InertiaTranslationDeceleration(This, value) \
    ((This)->lpVtbl->put_InertiaTranslationDeceleration(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_get_InertiaTranslationDisplacement(This, value) \
    ((This)->lpVtbl->get_InertiaTranslationDisplacement(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_put_InertiaTranslationDisplacement(This, value) \
    ((This)->lpVtbl->put_InertiaTranslationDisplacement(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_get_ManipulationExact(This, value) \
    ((This)->lpVtbl->get_ManipulationExact(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_put_ManipulationExact(This, value) \
    ((This)->lpVtbl->put_ManipulationExact(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_get_MouseWheelParameters(This, value) \
    ((This)->lpVtbl->get_MouseWheelParameters(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_get_ShowGestureFeedback(This, value) \
    ((This)->lpVtbl->get_ShowGestureFeedback(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_put_ShowGestureFeedback(This, value) \
    ((This)->lpVtbl->put_ShowGestureFeedback(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_CanBeDoubleTap(This, value, result) \
    ((This)->lpVtbl->CanBeDoubleTap(This, value, result))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_CompleteGesture(This) \
    ((This)->lpVtbl->CompleteGesture(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_ProcessDownEvent(This, value) \
    ((This)->lpVtbl->ProcessDownEvent(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_ProcessMoveEvents(This, value) \
    ((This)->lpVtbl->ProcessMoveEvents(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_ProcessMouseWheelEvent(This, value, isShiftKeyDown, isControlKeyDown) \
    ((This)->lpVtbl->ProcessMouseWheelEvent(This, value, isShiftKeyDown, isControlKeyDown))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_ProcessInertia(This) \
    ((This)->lpVtbl->ProcessInertia(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_ProcessUpEvent(This, value) \
    ((This)->lpVtbl->ProcessUpEvent(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_add_Tapped(This, handler, token) \
    ((This)->lpVtbl->add_Tapped(This, handler, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_remove_Tapped(This, token) \
    ((This)->lpVtbl->remove_Tapped(This, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_add_RightTapped(This, handler, token) \
    ((This)->lpVtbl->add_RightTapped(This, handler, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_remove_RightTapped(This, token) \
    ((This)->lpVtbl->remove_RightTapped(This, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_add_Holding(This, handler, token) \
    ((This)->lpVtbl->add_Holding(This, handler, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_remove_Holding(This, token) \
    ((This)->lpVtbl->remove_Holding(This, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_add_Dragging(This, handler, token) \
    ((This)->lpVtbl->add_Dragging(This, handler, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_remove_Dragging(This, token) \
    ((This)->lpVtbl->remove_Dragging(This, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_add_ManipulationStarted(This, handler, token) \
    ((This)->lpVtbl->add_ManipulationStarted(This, handler, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_remove_ManipulationStarted(This, token) \
    ((This)->lpVtbl->remove_ManipulationStarted(This, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_add_ManipulationUpdated(This, handler, token) \
    ((This)->lpVtbl->add_ManipulationUpdated(This, handler, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_remove_ManipulationUpdated(This, token) \
    ((This)->lpVtbl->remove_ManipulationUpdated(This, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_add_ManipulationInertiaStarting(This, handler, token) \
    ((This)->lpVtbl->add_ManipulationInertiaStarting(This, handler, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_remove_ManipulationInertiaStarting(This, token) \
    ((This)->lpVtbl->remove_ManipulationInertiaStarting(This, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_add_ManipulationCompleted(This, handler, token) \
    ((This)->lpVtbl->add_ManipulationCompleted(This, handler, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_remove_ManipulationCompleted(This, token) \
    ((This)->lpVtbl->remove_ManipulationCompleted(This, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_add_CrossSliding(This, handler, token) \
    ((This)->lpVtbl->add_CrossSliding(This, handler, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_remove_CrossSliding(This, token) \
    ((This)->lpVtbl->remove_CrossSliding(This, token))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIGestureRecognizer_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IHoldingEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.HoldingEventArgs
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IHoldingEventArgs[] = L"Microsoft.UI.Input.IHoldingEventArgs";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_HoldingState)(__x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs* This,
        enum __x_ABI_CMicrosoft_CUI_CInput_CHoldingState* value);
    HRESULT (STDMETHODCALLTYPE* get_PointerDeviceType)(__x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs* This,
        enum __x_ABI_CMicrosoft_CUI_CInput_CPointerDeviceType* value);
    HRESULT (STDMETHODCALLTYPE* get_Position)(__x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs* This,
        struct __x_ABI_CWindows_CFoundation_CPoint* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs_get_HoldingState(This, value) \
    ((This)->lpVtbl->get_HoldingState(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs_get_PointerDeviceType(This, value) \
    ((This)->lpVtbl->get_PointerDeviceType(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs_get_Position(This, value) \
    ((This)->lpVtbl->get_Position(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIHoldingEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputActivationListener
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.1
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputActivationListener
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputActivationListener[] = L"Microsoft.UI.Input.IInputActivationListener";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_State)(__x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener* This,
        enum __x_ABI_CMicrosoft_CUI_CInput_CInputActivationState* value);
    HRESULT (STDMETHODCALLTYPE* add_InputActivationChanged)(__x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener* This,
        __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputActivationListener_Microsoft__CUI__CInput__CInputActivationListenerActivationChangedEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_InputActivationChanged)(__x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener* This,
        EventRegistrationToken token);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener_get_State(This, value) \
    ((This)->lpVtbl->get_State(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener_add_InputActivationChanged(This, handler, token) \
    ((This)->lpVtbl->add_InputActivationChanged(This, handler, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener_remove_InputActivationChanged(This, token) \
    ((This)->lpVtbl->remove_InputActivationChanged(This, token))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

/*
 *
 * Interface Microsoft.UI.Input.IInputActivationListenerActivationChangedEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.1
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputActivationListenerActivationChangedEventArgs
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputActivationListenerActivationChangedEventArgs[] = L"Microsoft.UI.Input.IInputActivationListenerActivationChangedEventArgs";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs* This,
        TrustLevel* trustLevel);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

/*
 *
 * Interface Microsoft.UI.Input.IInputActivationListenerStatics
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.1
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputActivationListener
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputActivationListenerStatics[] = L"Microsoft.UI.Input.IInputActivationListenerStatics";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetForWindowId)(__x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics* This,
        struct __x_ABI_CMicrosoft_CUI_CWindowId windowId,
        __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListener** result);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics_GetForWindowId(This, windowId, result) \
    ((This)->lpVtbl->GetForWindowId(This, windowId, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputActivationListenerStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

/*
 *
 * Interface Microsoft.UI.Input.IInputCursor
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputCursor
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputCursor_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputCursor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputCursor[] = L"Microsoft.UI.Input.IInputCursor";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCursor* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCursor* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCursor* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCursor* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCursor* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCursor* This,
        TrustLevel* trustLevel);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIInputCursor
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCursor_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCursor_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCursor_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCursor_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCursor_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCursor_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputCursor;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputCursor_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputCursorFactory
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputCursor
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputCursorFactory[] = L"Microsoft.UI.Input.IInputCursorFactory";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory* This,
        TrustLevel* trustLevel);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactoryVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputCursorFactory_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputCursorStatics
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.1
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputCursor
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputCursorStatics[] = L"Microsoft.UI.Input.IInputCursorStatics";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateFromCoreCursor)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics* This,
        __x_ABI_CWindows_CUI_CCore_CICoreCursor* cursor,
        __x_ABI_CMicrosoft_CUI_CInput_CIInputCursor** result);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics_CreateFromCoreCursor(This, cursor, result) \
    ((This)->lpVtbl->CreateFromCoreCursor(This, cursor, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputCursorStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

/*
 *
 * Interface Microsoft.UI.Input.IInputCustomCursor
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.1
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputCustomCursor
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputCustomCursor[] = L"Microsoft.UI.Input.IInputCustomCursor";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor* This,
        TrustLevel* trustLevel);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursor_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

/*
 *
 * Interface Microsoft.UI.Input.IInputCustomCursorFactory
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.1
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputCustomCursor
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputCustomCursorFactory[] = L"Microsoft.UI.Input.IInputCustomCursorFactory";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory* This,
        TrustLevel* trustLevel);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactoryVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputCustomCursorFactory_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

/*
 *
 * Interface Microsoft.UI.Input.IInputDesktopNamedResourceCursor
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.1
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputDesktopNamedResourceCursor
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputDesktopNamedResourceCursor[] = L"Microsoft.UI.Input.IInputDesktopNamedResourceCursor";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_ModuleName)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_ResourceName)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor* This,
        HSTRING* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor_get_ModuleName(This, value) \
    ((This)->lpVtbl->get_ModuleName(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor_get_ResourceName(This, value) \
    ((This)->lpVtbl->get_ResourceName(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

/*
 *
 * Interface Microsoft.UI.Input.IInputDesktopNamedResourceCursorStatics
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.1
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputDesktopNamedResourceCursor
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputDesktopNamedResourceCursorStatics[] = L"Microsoft.UI.Input.IInputDesktopNamedResourceCursorStatics";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* Create)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics* This,
        HSTRING resourceName,
        __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor** result);
    HRESULT (STDMETHODCALLTYPE* CreateFromModule)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics* This,
        HSTRING moduleName,
        HSTRING resourceName,
        __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursor** result);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics_Create(This, resourceName, result) \
    ((This)->lpVtbl->Create(This, resourceName, result))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics_CreateFromModule(This, moduleName, resourceName, result) \
    ((This)->lpVtbl->CreateFromModule(This, moduleName, resourceName, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopNamedResourceCursorStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

/*
 *
 * Interface Microsoft.UI.Input.IInputDesktopResourceCursor
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputDesktopResourceCursor
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputDesktopResourceCursor[] = L"Microsoft.UI.Input.IInputDesktopResourceCursor";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_ModuleName)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_ResourceId)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor* This,
        UINT32* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor_get_ModuleName(This, value) \
    ((This)->lpVtbl->get_ModuleName(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor_get_ResourceId(This, value) \
    ((This)->lpVtbl->get_ResourceId(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputDesktopResourceCursorStatics
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputDesktopResourceCursor
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputDesktopResourceCursorStatics[] = L"Microsoft.UI.Input.IInputDesktopResourceCursorStatics";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* Create)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics* This,
        UINT32 resourceId,
        __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor** result);
    HRESULT (STDMETHODCALLTYPE* CreateFromModule)(__x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics* This,
        HSTRING moduleName,
        UINT32 resourceId,
        __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursor** result);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics_Create(This, resourceId, result) \
    ((This)->lpVtbl->Create(This, resourceId, result))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics_CreateFromModule(This, moduleName, resourceId, result) \
    ((This)->lpVtbl->CreateFromModule(This, moduleName, resourceId, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputDesktopResourceCursorStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputKeyboardSource
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputKeyboardSource
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputKeyboardSource[] = L"Microsoft.UI.Input.IInputKeyboardSource";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource* This,
        TrustLevel* trustLevel);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSource_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputKeyboardSourceStatics
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputKeyboardSource
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputKeyboardSourceStatics[] = L"Microsoft.UI.Input.IInputKeyboardSourceStatics";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetKeyStateForCurrentThread)(__x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics* This,
        enum __x_ABI_CWindows_CSystem_CVirtualKey virtualKey,
        enum __x_ABI_CWindows_CUI_CCore_CCoreVirtualKeyStates* result);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics_GetKeyStateForCurrentThread(This, virtualKey, result) \
    ((This)->lpVtbl->GetKeyStateForCurrentThread(This, virtualKey, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputKeyboardSourceStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputLightDismissAction
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputLightDismissAction
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputLightDismissAction[] = L"Microsoft.UI.Input.IInputLightDismissAction";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* add_Dismissed)(__x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction* This,
        __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputLightDismissAction_Microsoft__CUI__CInput__CInputLightDismissEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_Dismissed)(__x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction* This,
        EventRegistrationToken token);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction_add_Dismissed(This, handler, token) \
    ((This)->lpVtbl->add_Dismissed(This, handler, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction_remove_Dismissed(This, token) \
    ((This)->lpVtbl->remove_Dismissed(This, token))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputLightDismissActionStatics
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputLightDismissAction
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputLightDismissActionStatics[] = L"Microsoft.UI.Input.IInputLightDismissActionStatics";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetForWindowId)(__x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics* This,
        struct __x_ABI_CMicrosoft_CUI_CWindowId windowId,
        __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissAction** result);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics_GetForWindowId(This, windowId, result) \
    ((This)->lpVtbl->GetForWindowId(This, windowId, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissActionStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputLightDismissEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputLightDismissEventArgs
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputLightDismissEventArgs[] = L"Microsoft.UI.Input.IInputLightDismissEventArgs";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs* This,
        TrustLevel* trustLevel);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputLightDismissEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputObject
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputObject
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputObject_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputObject_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputObject[] = L"Microsoft.UI.Input.IInputObject";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIInputObjectVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIInputObject* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIInputObject* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIInputObject* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIInputObject* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIInputObject* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIInputObject* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_DispatcherQueue)(__x_ABI_CMicrosoft_CUI_CInput_CIInputObject* This,
        __x_ABI_CMicrosoft_CUI_CDispatching_CIDispatcherQueue** value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIInputObjectVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIInputObject
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIInputObjectVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputObject_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputObject_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputObject_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputObject_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputObject_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputObject_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputObject_get_DispatcherQueue(This, value) \
    ((This)->lpVtbl->get_DispatcherQueue(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputObject;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputObject_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputObjectFactory
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputObject
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputObjectFactory[] = L"Microsoft.UI.Input.IInputObjectFactory";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory* This,
        TrustLevel* trustLevel);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactoryVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputObjectFactory_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputPointerSource
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputPointerSource
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputPointerSource[] = L"Microsoft.UI.Input.IInputPointerSource";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSourceVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Cursor)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIInputCursor** value);
    HRESULT (STDMETHODCALLTYPE* put_Cursor)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIInputCursor* value);
    HRESULT (STDMETHODCALLTYPE* get_DeviceKinds)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        enum __x_ABI_CMicrosoft_CUI_CInput_CInputPointerSourceDeviceKinds* value);
    HRESULT (STDMETHODCALLTYPE* add_PointerCaptureLost)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_PointerCaptureLost)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_PointerEntered)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_PointerEntered)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_PointerExited)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_PointerExited)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_PointerMoved)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_PointerMoved)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_PointerPressed)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_PointerPressed)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_PointerReleased)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_PointerReleased)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_PointerRoutedAway)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_PointerRoutedAway)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_PointerRoutedReleased)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_PointerRoutedReleased)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_PointerRoutedTo)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_PointerRoutedTo)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_PointerWheelChanged)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        __FITypedEventHandler_2_Microsoft__CUI__CInput__CInputPointerSource_Microsoft__CUI__CInput__CPointerEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_PointerWheelChanged)(__x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* This,
        EventRegistrationToken token);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSourceVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSourceVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_get_Cursor(This, value) \
    ((This)->lpVtbl->get_Cursor(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_put_Cursor(This, value) \
    ((This)->lpVtbl->put_Cursor(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_get_DeviceKinds(This, value) \
    ((This)->lpVtbl->get_DeviceKinds(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_add_PointerCaptureLost(This, handler, token) \
    ((This)->lpVtbl->add_PointerCaptureLost(This, handler, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_remove_PointerCaptureLost(This, token) \
    ((This)->lpVtbl->remove_PointerCaptureLost(This, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_add_PointerEntered(This, handler, token) \
    ((This)->lpVtbl->add_PointerEntered(This, handler, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_remove_PointerEntered(This, token) \
    ((This)->lpVtbl->remove_PointerEntered(This, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_add_PointerExited(This, handler, token) \
    ((This)->lpVtbl->add_PointerExited(This, handler, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_remove_PointerExited(This, token) \
    ((This)->lpVtbl->remove_PointerExited(This, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_add_PointerMoved(This, handler, token) \
    ((This)->lpVtbl->add_PointerMoved(This, handler, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_remove_PointerMoved(This, token) \
    ((This)->lpVtbl->remove_PointerMoved(This, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_add_PointerPressed(This, handler, token) \
    ((This)->lpVtbl->add_PointerPressed(This, handler, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_remove_PointerPressed(This, token) \
    ((This)->lpVtbl->remove_PointerPressed(This, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_add_PointerReleased(This, handler, token) \
    ((This)->lpVtbl->add_PointerReleased(This, handler, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_remove_PointerReleased(This, token) \
    ((This)->lpVtbl->remove_PointerReleased(This, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_add_PointerRoutedAway(This, handler, token) \
    ((This)->lpVtbl->add_PointerRoutedAway(This, handler, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_remove_PointerRoutedAway(This, token) \
    ((This)->lpVtbl->remove_PointerRoutedAway(This, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_add_PointerRoutedReleased(This, handler, token) \
    ((This)->lpVtbl->add_PointerRoutedReleased(This, handler, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_remove_PointerRoutedReleased(This, token) \
    ((This)->lpVtbl->remove_PointerRoutedReleased(This, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_add_PointerRoutedTo(This, handler, token) \
    ((This)->lpVtbl->add_PointerRoutedTo(This, handler, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_remove_PointerRoutedTo(This, token) \
    ((This)->lpVtbl->remove_PointerRoutedTo(This, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_add_PointerWheelChanged(This, handler, token) \
    ((This)->lpVtbl->add_PointerWheelChanged(This, handler, token))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_remove_PointerWheelChanged(This, token) \
    ((This)->lpVtbl->remove_PointerWheelChanged(This, token))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputSystemCursor
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputSystemCursor
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputSystemCursor[] = L"Microsoft.UI.Input.IInputSystemCursor";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_CursorShape)(__x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor* This,
        enum __x_ABI_CMicrosoft_CUI_CInput_CInputSystemCursorShape* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor_get_CursorShape(This, value) \
    ((This)->lpVtbl->get_CursorShape(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IInputSystemCursorStatics
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.InputSystemCursor
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IInputSystemCursorStatics[] = L"Microsoft.UI.Input.IInputSystemCursorStatics";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* Create)(__x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics* This,
        enum __x_ABI_CMicrosoft_CUI_CInput_CInputSystemCursorShape type,
        __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursor** result);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics_Create(This, type, result) \
    ((This)->lpVtbl->Create(This, type, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIInputSystemCursorStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IManipulationCompletedEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.ManipulationCompletedEventArgs
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IManipulationCompletedEventArgs[] = L"Microsoft.UI.Input.IManipulationCompletedEventArgs";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Cumulative)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs* This,
        struct __x_ABI_CMicrosoft_CUI_CInput_CManipulationDelta* value);
    HRESULT (STDMETHODCALLTYPE* get_PointerDeviceType)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs* This,
        enum __x_ABI_CMicrosoft_CUI_CInput_CPointerDeviceType* value);
    HRESULT (STDMETHODCALLTYPE* get_Position)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs* This,
        struct __x_ABI_CWindows_CFoundation_CPoint* value);
    HRESULT (STDMETHODCALLTYPE* get_Velocities)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs* This,
        struct __x_ABI_CMicrosoft_CUI_CInput_CManipulationVelocities* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs_get_Cumulative(This, value) \
    ((This)->lpVtbl->get_Cumulative(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs_get_PointerDeviceType(This, value) \
    ((This)->lpVtbl->get_PointerDeviceType(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs_get_Position(This, value) \
    ((This)->lpVtbl->get_Position(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs_get_Velocities(This, value) \
    ((This)->lpVtbl->get_Velocities(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIManipulationCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IManipulationInertiaStartingEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.ManipulationInertiaStartingEventArgs
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IManipulationInertiaStartingEventArgs[] = L"Microsoft.UI.Input.IManipulationInertiaStartingEventArgs";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Cumulative)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs* This,
        struct __x_ABI_CMicrosoft_CUI_CInput_CManipulationDelta* value);
    HRESULT (STDMETHODCALLTYPE* get_Delta)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs* This,
        struct __x_ABI_CMicrosoft_CUI_CInput_CManipulationDelta* value);
    HRESULT (STDMETHODCALLTYPE* get_PointerDeviceType)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs* This,
        enum __x_ABI_CMicrosoft_CUI_CInput_CPointerDeviceType* value);
    HRESULT (STDMETHODCALLTYPE* get_Position)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs* This,
        struct __x_ABI_CWindows_CFoundation_CPoint* value);
    HRESULT (STDMETHODCALLTYPE* get_Velocities)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs* This,
        struct __x_ABI_CMicrosoft_CUI_CInput_CManipulationVelocities* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs_get_Cumulative(This, value) \
    ((This)->lpVtbl->get_Cumulative(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs_get_Delta(This, value) \
    ((This)->lpVtbl->get_Delta(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs_get_PointerDeviceType(This, value) \
    ((This)->lpVtbl->get_PointerDeviceType(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs_get_Position(This, value) \
    ((This)->lpVtbl->get_Position(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs_get_Velocities(This, value) \
    ((This)->lpVtbl->get_Velocities(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIManipulationInertiaStartingEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IManipulationStartedEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.ManipulationStartedEventArgs
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IManipulationStartedEventArgs[] = L"Microsoft.UI.Input.IManipulationStartedEventArgs";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Cumulative)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs* This,
        struct __x_ABI_CMicrosoft_CUI_CInput_CManipulationDelta* value);
    HRESULT (STDMETHODCALLTYPE* get_PointerDeviceType)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs* This,
        enum __x_ABI_CMicrosoft_CUI_CInput_CPointerDeviceType* value);
    HRESULT (STDMETHODCALLTYPE* get_Position)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs* This,
        struct __x_ABI_CWindows_CFoundation_CPoint* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs_get_Cumulative(This, value) \
    ((This)->lpVtbl->get_Cumulative(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs_get_PointerDeviceType(This, value) \
    ((This)->lpVtbl->get_PointerDeviceType(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs_get_Position(This, value) \
    ((This)->lpVtbl->get_Position(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIManipulationStartedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IManipulationUpdatedEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.ManipulationUpdatedEventArgs
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IManipulationUpdatedEventArgs[] = L"Microsoft.UI.Input.IManipulationUpdatedEventArgs";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Cumulative)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs* This,
        struct __x_ABI_CMicrosoft_CUI_CInput_CManipulationDelta* value);
    HRESULT (STDMETHODCALLTYPE* get_Delta)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs* This,
        struct __x_ABI_CMicrosoft_CUI_CInput_CManipulationDelta* value);
    HRESULT (STDMETHODCALLTYPE* get_PointerDeviceType)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs* This,
        enum __x_ABI_CMicrosoft_CUI_CInput_CPointerDeviceType* value);
    HRESULT (STDMETHODCALLTYPE* get_Position)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs* This,
        struct __x_ABI_CWindows_CFoundation_CPoint* value);
    HRESULT (STDMETHODCALLTYPE* get_Velocities)(__x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs* This,
        struct __x_ABI_CMicrosoft_CUI_CInput_CManipulationVelocities* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs_get_Cumulative(This, value) \
    ((This)->lpVtbl->get_Cumulative(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs_get_Delta(This, value) \
    ((This)->lpVtbl->get_Delta(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs_get_PointerDeviceType(This, value) \
    ((This)->lpVtbl->get_PointerDeviceType(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs_get_Position(This, value) \
    ((This)->lpVtbl->get_Position(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs_get_Velocities(This, value) \
    ((This)->lpVtbl->get_Velocities(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIManipulationUpdatedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IMouseWheelParameters
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.MouseWheelParameters
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IMouseWheelParameters[] = L"Microsoft.UI.Input.IMouseWheelParameters";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParametersVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_CharTranslation)(__x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters* This,
        struct __x_ABI_CWindows_CFoundation_CPoint* value);
    HRESULT (STDMETHODCALLTYPE* put_CharTranslation)(__x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters* This,
        struct __x_ABI_CWindows_CFoundation_CPoint value);
    HRESULT (STDMETHODCALLTYPE* get_DeltaScale)(__x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* put_DeltaScale)(__x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters* This,
        FLOAT value);
    HRESULT (STDMETHODCALLTYPE* get_DeltaRotationAngle)(__x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* put_DeltaRotationAngle)(__x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters* This,
        FLOAT value);
    HRESULT (STDMETHODCALLTYPE* get_PageTranslation)(__x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters* This,
        struct __x_ABI_CWindows_CFoundation_CPoint* value);
    HRESULT (STDMETHODCALLTYPE* put_PageTranslation)(__x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters* This,
        struct __x_ABI_CWindows_CFoundation_CPoint value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParametersVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParametersVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters_get_CharTranslation(This, value) \
    ((This)->lpVtbl->get_CharTranslation(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters_put_CharTranslation(This, value) \
    ((This)->lpVtbl->put_CharTranslation(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters_get_DeltaScale(This, value) \
    ((This)->lpVtbl->get_DeltaScale(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters_put_DeltaScale(This, value) \
    ((This)->lpVtbl->put_DeltaScale(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters_get_DeltaRotationAngle(This, value) \
    ((This)->lpVtbl->get_DeltaRotationAngle(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters_put_DeltaRotationAngle(This, value) \
    ((This)->lpVtbl->put_DeltaRotationAngle(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters_get_PageTranslation(This, value) \
    ((This)->lpVtbl->get_PageTranslation(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters_put_PageTranslation(This, value) \
    ((This)->lpVtbl->put_PageTranslation(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIMouseWheelParameters_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IPointerEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.PointerEventArgs
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IPointerEventArgs[] = L"Microsoft.UI.Input.IPointerEventArgs";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_CurrentPoint)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint** value);
    HRESULT (STDMETHODCALLTYPE* get_Handled)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* put_Handled)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs* This,
        boolean value);
    HRESULT (STDMETHODCALLTYPE* get_KeyModifiers)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs* This,
        enum __x_ABI_CWindows_CSystem_CVirtualKeyModifiers* value);
    HRESULT (STDMETHODCALLTYPE* GetIntermediatePoints)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs* This,
        __FIVector_1_Microsoft__CUI__CInput__CPointerPoint** result);
    HRESULT (STDMETHODCALLTYPE* GetIntermediateTransformedPoints)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform* transform,
        __FIVector_1_Microsoft__CUI__CInput__CPointerPoint** result);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs_get_CurrentPoint(This, value) \
    ((This)->lpVtbl->get_CurrentPoint(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs_get_Handled(This, value) \
    ((This)->lpVtbl->get_Handled(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs_put_Handled(This, value) \
    ((This)->lpVtbl->put_Handled(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs_get_KeyModifiers(This, value) \
    ((This)->lpVtbl->get_KeyModifiers(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs_GetIntermediatePoints(This, result) \
    ((This)->lpVtbl->GetIntermediatePoints(This, result))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs_GetIntermediateTransformedPoints(This, transform, result) \
    ((This)->lpVtbl->GetIntermediateTransformedPoints(This, transform, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIPointerEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IPointerPoint
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.PointerPoint
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IPointerPoint[] = L"Microsoft.UI.Input.IPointerPoint";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_FrameId)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint* This,
        UINT32* value);
    HRESULT (STDMETHODCALLTYPE* get_IsInContact)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_PointerDeviceType)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint* This,
        enum __x_ABI_CMicrosoft_CUI_CInput_CPointerDeviceType* value);
    HRESULT (STDMETHODCALLTYPE* get_PointerId)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint* This,
        UINT32* value);
    HRESULT (STDMETHODCALLTYPE* get_Position)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint* This,
        struct __x_ABI_CWindows_CFoundation_CPoint* value);
    HRESULT (STDMETHODCALLTYPE* get_Properties)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties** value);
    HRESULT (STDMETHODCALLTYPE* get_Timestamp)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint* This,
        UINT64* value);
    HRESULT (STDMETHODCALLTYPE* GetTransformedPoint)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform* transform,
        __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint** result);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint_get_FrameId(This, value) \
    ((This)->lpVtbl->get_FrameId(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint_get_IsInContact(This, value) \
    ((This)->lpVtbl->get_IsInContact(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint_get_PointerDeviceType(This, value) \
    ((This)->lpVtbl->get_PointerDeviceType(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint_get_PointerId(This, value) \
    ((This)->lpVtbl->get_PointerId(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint_get_Position(This, value) \
    ((This)->lpVtbl->get_Position(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint_get_Properties(This, value) \
    ((This)->lpVtbl->get_Properties(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint_get_Timestamp(This, value) \
    ((This)->lpVtbl->get_Timestamp(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint_GetTransformedPoint(This, transform, result) \
    ((This)->lpVtbl->GetTransformedPoint(This, transform, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IPointerPointProperties
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.PointerPointProperties
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IPointerPointProperties[] = L"Microsoft.UI.Input.IPointerPointProperties";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointPropertiesVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_ContactRect)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This,
        struct __x_ABI_CWindows_CFoundation_CRect* value);
    HRESULT (STDMETHODCALLTYPE* get_IsBarrelButtonPressed)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_IsCanceled)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_IsEraser)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_IsHorizontalMouseWheel)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_IsInRange)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_IsInverted)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_IsLeftButtonPressed)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_IsMiddleButtonPressed)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_IsPrimary)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_IsRightButtonPressed)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_IsXButton1Pressed)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_IsXButton2Pressed)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_MouseWheelDelta)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This,
        INT32* value);
    HRESULT (STDMETHODCALLTYPE* get_Orientation)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* get_PointerUpdateKind)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This,
        enum __x_ABI_CMicrosoft_CUI_CInput_CPointerUpdateKind* value);
    HRESULT (STDMETHODCALLTYPE* get_Pressure)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* get_TouchConfidence)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_Twist)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* get_XTilt)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* get_YTilt)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties* This,
        FLOAT* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointPropertiesVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointPropertiesVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_get_ContactRect(This, value) \
    ((This)->lpVtbl->get_ContactRect(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_get_IsBarrelButtonPressed(This, value) \
    ((This)->lpVtbl->get_IsBarrelButtonPressed(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_get_IsCanceled(This, value) \
    ((This)->lpVtbl->get_IsCanceled(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_get_IsEraser(This, value) \
    ((This)->lpVtbl->get_IsEraser(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_get_IsHorizontalMouseWheel(This, value) \
    ((This)->lpVtbl->get_IsHorizontalMouseWheel(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_get_IsInRange(This, value) \
    ((This)->lpVtbl->get_IsInRange(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_get_IsInverted(This, value) \
    ((This)->lpVtbl->get_IsInverted(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_get_IsLeftButtonPressed(This, value) \
    ((This)->lpVtbl->get_IsLeftButtonPressed(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_get_IsMiddleButtonPressed(This, value) \
    ((This)->lpVtbl->get_IsMiddleButtonPressed(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_get_IsPrimary(This, value) \
    ((This)->lpVtbl->get_IsPrimary(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_get_IsRightButtonPressed(This, value) \
    ((This)->lpVtbl->get_IsRightButtonPressed(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_get_IsXButton1Pressed(This, value) \
    ((This)->lpVtbl->get_IsXButton1Pressed(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_get_IsXButton2Pressed(This, value) \
    ((This)->lpVtbl->get_IsXButton2Pressed(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_get_MouseWheelDelta(This, value) \
    ((This)->lpVtbl->get_MouseWheelDelta(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_get_Orientation(This, value) \
    ((This)->lpVtbl->get_Orientation(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_get_PointerUpdateKind(This, value) \
    ((This)->lpVtbl->get_PointerUpdateKind(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_get_Pressure(This, value) \
    ((This)->lpVtbl->get_Pressure(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_get_TouchConfidence(This, value) \
    ((This)->lpVtbl->get_TouchConfidence(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_get_Twist(This, value) \
    ((This)->lpVtbl->get_Twist(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_get_XTilt(This, value) \
    ((This)->lpVtbl->get_XTilt(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_get_YTilt(This, value) \
    ((This)->lpVtbl->get_YTilt(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIPointerPointProperties_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IPointerPointTransform
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IPointerPointTransform[] = L"Microsoft.UI.Input.IPointerPointTransform";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransformVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Inverse)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform** value);
    HRESULT (STDMETHODCALLTYPE* TryTransform)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform* This,
        struct __x_ABI_CWindows_CFoundation_CPoint inPoint,
        struct __x_ABI_CWindows_CFoundation_CPoint* outPoint,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* TryTransformBounds)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform* This,
        struct __x_ABI_CWindows_CFoundation_CRect inRect,
        struct __x_ABI_CWindows_CFoundation_CRect* outRect,
        boolean* result);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransformVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransformVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform_get_Inverse(This, value) \
    ((This)->lpVtbl->get_Inverse(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform_TryTransform(This, inPoint, outPoint, result) \
    ((This)->lpVtbl->TryTransform(This, inPoint, outPoint, result))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform_TryTransformBounds(This, inRect, outRect, result) \
    ((This)->lpVtbl->TryTransformBounds(This, inRect, outRect, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIPointerPointTransform_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IPointerPredictor
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.PointerPredictor
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IPointerPredictor[] = L"Microsoft.UI.Input.IPointerPredictor";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_PredictionTime)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor* This,
        struct __x_ABI_CWindows_CFoundation_CTimeSpan* value);
    HRESULT (STDMETHODCALLTYPE* put_PredictionTime)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor* This,
        struct __x_ABI_CWindows_CFoundation_CTimeSpan value);
    HRESULT (STDMETHODCALLTYPE* GetPredictedPoints)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint* point,
        UINT32* resultLength,
        __x_ABI_CMicrosoft_CUI_CInput_CIPointerPoint*** result);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor_get_PredictionTime(This, value) \
    ((This)->lpVtbl->get_PredictionTime(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor_put_PredictionTime(This, value) \
    ((This)->lpVtbl->put_PredictionTime(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor_GetPredictedPoints(This, point, resultLength, result) \
    ((This)->lpVtbl->GetPredictedPoints(This, point, resultLength, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IPointerPredictorStatics
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.PointerPredictor
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IPointerPredictorStatics[] = L"Microsoft.UI.Input.IPointerPredictorStatics";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateForInputPointerSource)(__x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics* This,
        __x_ABI_CMicrosoft_CUI_CInput_CIInputPointerSource* inputPointerSource,
        __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictor** result);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics_CreateForInputPointerSource(This, inputPointerSource, result) \
    ((This)->lpVtbl->CreateForInputPointerSource(This, inputPointerSource, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIPointerPredictorStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.IRightTappedEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.RightTappedEventArgs
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_IRightTappedEventArgs[] = L"Microsoft.UI.Input.IRightTappedEventArgs";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_PointerDeviceType)(__x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs* This,
        enum __x_ABI_CMicrosoft_CUI_CInput_CPointerDeviceType* value);
    HRESULT (STDMETHODCALLTYPE* get_Position)(__x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs* This,
        struct __x_ABI_CWindows_CFoundation_CPoint* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs_get_PointerDeviceType(This, value) \
    ((This)->lpVtbl->get_PointerDeviceType(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs_get_Position(This, value) \
    ((This)->lpVtbl->get_Position(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CIRightTappedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Microsoft.UI.Input.ITappedEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Interface is a part of the implementation of type Microsoft.UI.Input.TappedEventArgs
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_Input_ITappedEventArgs[] = L"Microsoft.UI.Input.ITappedEventArgs";
typedef struct __x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_PointerDeviceType)(__x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs* This,
        enum __x_ABI_CMicrosoft_CUI_CInput_CPointerDeviceType* value);
    HRESULT (STDMETHODCALLTYPE* get_Position)(__x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs* This,
        struct __x_ABI_CWindows_CFoundation_CPoint* value);
    HRESULT (STDMETHODCALLTYPE* get_TapCount)(__x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs* This,
        UINT32* value);

    END_INTERFACE
} __x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs_get_PointerDeviceType(This, value) \
    ((This)->lpVtbl->get_PointerDeviceType(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs_get_Position(This, value) \
    ((This)->lpVtbl->get_Position(This, value))

#define __x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs_get_TapCount(This, value) \
    ((This)->lpVtbl->get_TapCount(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CInput_CITappedEventArgs_INTERFACE_DEFINED__) */
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.CrossSlidingEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.ICrossSlidingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_CrossSlidingEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_CrossSlidingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_CrossSlidingEventArgs[] = L"Microsoft.UI.Input.CrossSlidingEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.DraggingEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IDraggingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_DraggingEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_DraggingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_DraggingEventArgs[] = L"Microsoft.UI.Input.DraggingEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.GestureRecognizer
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Microsoft.Foundation.WindowsAppSDKContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IGestureRecognizer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_GestureRecognizer_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_GestureRecognizer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_GestureRecognizer[] = L"Microsoft.UI.Input.GestureRecognizer";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.HoldingEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IHoldingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_HoldingEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_HoldingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_HoldingEventArgs[] = L"Microsoft.UI.Input.HoldingEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.InputActivationListener
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.1
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IInputActivationListenerStatics interface starting with version 1.1 of the Microsoft.Foundation.WindowsAppSDKContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputActivationListener ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputActivationListener_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputActivationListener_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputActivationListener[] = L"Microsoft.UI.Input.InputActivationListener";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

/*
 *
 * Class Microsoft.UI.Input.InputActivationListenerActivationChangedEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.1
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputActivationListenerActivationChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputActivationListenerActivationChangedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputActivationListenerActivationChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputActivationListenerActivationChangedEventArgs[] = L"Microsoft.UI.Input.InputActivationListenerActivationChangedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

/*
 *
 * Class Microsoft.UI.Input.InputCursor
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IInputCursorStatics interface starting with version 1.1 of the Microsoft.Foundation.WindowsAppSDKContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputCursor ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputCursor_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputCursor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputCursor[] = L"Microsoft.UI.Input.InputCursor";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.InputCustomCursor
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.1
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputCustomCursor ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputCustomCursor_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputCustomCursor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputCustomCursor[] = L"Microsoft.UI.Input.InputCustomCursor";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

/*
 *
 * Class Microsoft.UI.Input.InputDesktopNamedResourceCursor
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.1
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IInputDesktopNamedResourceCursorStatics interface starting with version 1.1 of the Microsoft.Foundation.WindowsAppSDKContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputDesktopNamedResourceCursor ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001
#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputDesktopNamedResourceCursor_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputDesktopNamedResourceCursor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputDesktopNamedResourceCursor[] = L"Microsoft.UI.Input.InputDesktopNamedResourceCursor";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10001

/*
 *
 * Class Microsoft.UI.Input.InputDesktopResourceCursor
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IInputDesktopResourceCursorStatics interface starting with version 1.0 of the Microsoft.Foundation.WindowsAppSDKContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputDesktopResourceCursor ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputDesktopResourceCursor_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputDesktopResourceCursor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputDesktopResourceCursor[] = L"Microsoft.UI.Input.InputDesktopResourceCursor";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.InputKeyboardSource
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IInputKeyboardSourceStatics interface starting with version 1.0 of the Microsoft.Foundation.WindowsAppSDKContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputKeyboardSource ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputKeyboardSource_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputKeyboardSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputKeyboardSource[] = L"Microsoft.UI.Input.InputKeyboardSource";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.InputLightDismissAction
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IInputLightDismissActionStatics interface starting with version 1.0 of the Microsoft.Foundation.WindowsAppSDKContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputLightDismissAction ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputLightDismissAction_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputLightDismissAction_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputLightDismissAction[] = L"Microsoft.UI.Input.InputLightDismissAction";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.InputLightDismissEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputLightDismissEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputLightDismissEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputLightDismissEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputLightDismissEventArgs[] = L"Microsoft.UI.Input.InputLightDismissEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.InputObject
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputObject ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputObject_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputObject_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputObject[] = L"Microsoft.UI.Input.InputObject";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.InputPointerSource
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputPointerSource ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputPointerSource_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputPointerSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputPointerSource[] = L"Microsoft.UI.Input.InputPointerSource";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.InputSystemCursor
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IInputSystemCursorStatics interface starting with version 1.0 of the Microsoft.Foundation.WindowsAppSDKContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IInputSystemCursor ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_InputSystemCursor_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_InputSystemCursor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_InputSystemCursor[] = L"Microsoft.UI.Input.InputSystemCursor";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.ManipulationCompletedEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IManipulationCompletedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_ManipulationCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_ManipulationCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_ManipulationCompletedEventArgs[] = L"Microsoft.UI.Input.ManipulationCompletedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.ManipulationInertiaStartingEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IManipulationInertiaStartingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_ManipulationInertiaStartingEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_ManipulationInertiaStartingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_ManipulationInertiaStartingEventArgs[] = L"Microsoft.UI.Input.ManipulationInertiaStartingEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.ManipulationStartedEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IManipulationStartedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_ManipulationStartedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_ManipulationStartedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_ManipulationStartedEventArgs[] = L"Microsoft.UI.Input.ManipulationStartedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.ManipulationUpdatedEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IManipulationUpdatedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_ManipulationUpdatedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_ManipulationUpdatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_ManipulationUpdatedEventArgs[] = L"Microsoft.UI.Input.ManipulationUpdatedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.MouseWheelParameters
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IMouseWheelParameters ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_MouseWheelParameters_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_MouseWheelParameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_MouseWheelParameters[] = L"Microsoft.UI.Input.MouseWheelParameters";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.PointerEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IPointerEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_PointerEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_PointerEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_PointerEventArgs[] = L"Microsoft.UI.Input.PointerEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.PointerPoint
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IPointerPoint ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_PointerPoint_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_PointerPoint_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_PointerPoint[] = L"Microsoft.UI.Input.PointerPoint";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.PointerPointProperties
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IPointerPointProperties ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_PointerPointProperties_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_PointerPointProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_PointerPointProperties[] = L"Microsoft.UI.Input.PointerPointProperties";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.PointerPredictor
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.Input.IPointerPredictorStatics interface starting with version 1.0 of the Microsoft.Foundation.WindowsAppSDKContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IPointerPredictor ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_PointerPredictor_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_PointerPredictor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_PointerPredictor[] = L"Microsoft.UI.Input.PointerPredictor";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.RightTappedEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.IRightTappedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_RightTappedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_RightTappedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_RightTappedEventArgs[] = L"Microsoft.UI.Input.RightTappedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Microsoft.UI.Input.TappedEventArgs
 *
 * Introduced to Microsoft.Foundation.WindowsAppSDKContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.Input.ITappedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Microsoft_UI_Input_TappedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Input_TappedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Input_TappedEventArgs[] = L"Microsoft.UI.Input.TappedEventArgs";
#endif
#endif // MICROSOFT_FOUNDATION_WINDOWSAPPSDKCONTRACT_VERSION >= 0x10000

#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __microsoft2Eui2Einput_p_h__

#endif // __microsoft2Eui2Einput_h__
