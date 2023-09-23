#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ActorEventListener.h"
#include "mc/world/events/EventResult.h"

class CombatRegenerationListener : public ::ActorEventListener {
public:
    // prevent constructor by default
    CombatRegenerationListener& operator=(CombatRegenerationListener const &) = delete;
    CombatRegenerationListener(CombatRegenerationListener const &) = delete;
    CombatRegenerationListener() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?onEvent@CombatRegenerationListener@@UEAA?AW4EventResult@@AEBUActorNotificationEvent@@@Z
    virtual ::EventResult onEvent(struct ActorNotificationEvent const &);

    // NOLINTEND

};

