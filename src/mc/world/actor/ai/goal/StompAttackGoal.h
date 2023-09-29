#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/MeleeAttackGoal.h"

class StompAttackGoal : public ::MeleeAttackGoal {
public:
    // prevent constructor by default
    StompAttackGoal& operator=(StompAttackGoal const &) = delete;
    StompAttackGoal(StompAttackGoal const &) = delete;
    StompAttackGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@StompAttackGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@StompAttackGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@StompAttackGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@StompAttackGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@StompAttackGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?appendDebugInfo@StompAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_attemptAttack@StompAttackGoal@@IEAAXAEAVActor@@@Z
    MCAPI void _attemptAttack(class Actor &);

    // NOLINTEND

};

