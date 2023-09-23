#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/RandomStrollGoal.h"

class WitherRandomAttackPosGoal : public ::RandomStrollGoal {
public:
    // prevent constructor by default
    WitherRandomAttackPosGoal& operator=(WitherRandomAttackPosGoal const &) = delete;
    WitherRandomAttackPosGoal(WitherRandomAttackPosGoal const &) = delete;
    WitherRandomAttackPosGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@WitherRandomAttackPosGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@WitherRandomAttackPosGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@WitherRandomAttackPosGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@WitherRandomAttackPosGoal@@UEAAXXZ
    virtual void stop();

    // NOLINTEND

};

