#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/DragonBaseGoal.h"

class DragonChargePlayerGoal : public ::DragonBaseGoal {
public:
    // prevent constructor by default
    DragonChargePlayerGoal& operator=(DragonChargePlayerGoal const &) = delete;
    DragonChargePlayerGoal(DragonChargePlayerGoal const &) = delete;
    DragonChargePlayerGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@DragonChargePlayerGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@DragonChargePlayerGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@DragonChargePlayerGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@DragonChargePlayerGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@DragonChargePlayerGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?appendDebugInfo@DragonChargePlayerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0DragonChargePlayerGoal@@QEAA@AEAVMob@@@Z
    MCAPI DragonChargePlayerGoal(class Mob &);

    // NOLINTEND

};

