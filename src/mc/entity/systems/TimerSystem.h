#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class TimerSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    TimerSystem& operator=(TimerSystem const &) = delete;
    TimerSystem(TimerSystem const &) = delete;
    TimerSystem() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@TimerSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry &);

    // NOLINTEND

};

