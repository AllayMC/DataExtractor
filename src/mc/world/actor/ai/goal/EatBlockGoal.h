#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class EatBlockGoal : public ::Goal {
public:
    // prevent constructor by default
    EatBlockGoal& operator=(EatBlockGoal const &) = delete;
    EatBlockGoal(EatBlockGoal const &) = delete;
    EatBlockGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@EatBlockGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@EatBlockGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@EatBlockGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@EatBlockGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@EatBlockGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?appendDebugInfo@EatBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0EatBlockGoal@@QEAA@AEAVMob@@@Z
    MCAPI EatBlockGoal(class Mob &);

    // symbol: ?getEatSuccessChance@EatBlockGoal@@QEBAMAEAVActor@@@Z
    MCAPI float getEatSuccessChance(class Actor &) const;

    // NOLINTEND

};

