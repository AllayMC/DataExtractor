#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class DragonFlamingGoal : public ::Goal {
public:
    // prevent constructor by default
    DragonFlamingGoal& operator=(DragonFlamingGoal const &) = delete;
    DragonFlamingGoal(DragonFlamingGoal const &) = delete;
    DragonFlamingGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@DragonFlamingGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@DragonFlamingGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@DragonFlamingGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@DragonFlamingGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@DragonFlamingGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?appendDebugInfo@DragonFlamingGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0DragonFlamingGoal@@QEAA@AEAVMob@@@Z
    MCAPI DragonFlamingGoal(class Mob &);

    // NOLINTEND

};

