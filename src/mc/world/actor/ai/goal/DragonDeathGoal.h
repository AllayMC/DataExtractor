#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class DragonDeathGoal : public ::Goal {
public:
    // prevent constructor by default
    DragonDeathGoal& operator=(DragonDeathGoal const &) = delete;
    DragonDeathGoal(DragonDeathGoal const &) = delete;
    DragonDeathGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@DragonDeathGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@DragonDeathGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@DragonDeathGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@DragonDeathGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@DragonDeathGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?appendDebugInfo@DragonDeathGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0DragonDeathGoal@@QEAA@AEAVEnderDragon@@@Z
    MCAPI DragonDeathGoal(class EnderDragon &);

    // NOLINTEND

};

