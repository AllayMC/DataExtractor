#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/CoordinatorResult.h"
#include "mc/common/wrapper/GameplayHandlerResult.h"
#include "mc/events/MutableServerNetworkGameplayEvent.h"
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptServerNetworkEventHandler {
public:
    // prevent constructor by default
    ScriptServerNetworkEventHandler& operator=(ScriptServerNetworkEventHandler const &) = delete;
    ScriptServerNetworkEventHandler(ScriptServerNetworkEventHandler const &) = delete;
    ScriptServerNetworkEventHandler() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?handleEvent@ScriptServerNetworkEventHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUChatEvent@@@Z
    virtual struct GameplayHandlerResult<::CoordinatorResult> handleEvent(struct ChatEvent &);

    // vIndex: 2, symbol: ?handleEvent@?$Impl@U?$type_list@U?$MutableServerNetworkGameplayEvent@W4CoordinatorResult@@@@@entt@@@?$EventHandlerDispatcher@VServerNetworkEventHandler@@@Details@@MEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAU?$MutableServerNetworkGameplayEvent@W4CoordinatorResult@@@@@Z
    virtual struct GameplayHandlerResult<::CoordinatorResult> handleEvent(struct MutableServerNetworkGameplayEvent<::CoordinatorResult> &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_handleChat@ScriptServerNetworkEventHandler@@AEBA_NAEAUChatEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VIScriptWorldBeforeEvents@ScriptModuleMinecraft@@@4@@Z
    MCAPI bool _handleChat(struct ChatEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>) const;

    // NOLINTEND

};

