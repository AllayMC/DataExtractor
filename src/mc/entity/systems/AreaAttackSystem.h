#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class AreaAttackSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AreaAttackSystem& operator=(AreaAttackSystem const &) = delete;
    AreaAttackSystem(AreaAttackSystem const &) = delete;
    AreaAttackSystem() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@AreaAttackSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tickComponent@AreaAttackSystem@@CAXAEAVActorOwnerComponent@@AEAVAreaAttackComponent@@@Z
    MCAPI static void _tickComponent(class ActorOwnerComponent &, class AreaAttackComponent &);

    // NOLINTEND

};

