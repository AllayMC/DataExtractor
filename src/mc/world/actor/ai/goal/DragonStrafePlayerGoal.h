#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/DragonBaseGoal.h"

class DragonStrafePlayerGoal : public ::DragonBaseGoal {
public:
    // prevent constructor by default
    DragonStrafePlayerGoal& operator=(DragonStrafePlayerGoal const &) = delete;
    DragonStrafePlayerGoal(DragonStrafePlayerGoal const &) = delete;
    DragonStrafePlayerGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@DragonStrafePlayerGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@DragonStrafePlayerGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@DragonStrafePlayerGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@DragonStrafePlayerGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@DragonStrafePlayerGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?appendDebugInfo@DragonStrafePlayerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0DragonStrafePlayerGoal@@QEAA@AEAVMob@@@Z
    MCAPI DragonStrafePlayerGoal(class Mob &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?findNewTarget@DragonStrafePlayerGoal@@AEAAXXZ
    MCAPI void findNewTarget();

    // symbol: ?navigateToNextPathNode@DragonStrafePlayerGoal@@AEAAXXZ
    MCAPI void navigateToNextPathNode();

    // symbol: ?setTarget@DragonStrafePlayerGoal@@AEAAXPEAVActor@@@Z
    MCAPI void setTarget(class Actor *);

    // NOLINTEND

};

