#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class EatCarriedItemGoal : public ::Goal {
public:
    // prevent constructor by default
    EatCarriedItemGoal& operator=(EatCarriedItemGoal const &) = delete;
    EatCarriedItemGoal(EatCarriedItemGoal const &) = delete;
    EatCarriedItemGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@EatCarriedItemGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@EatCarriedItemGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@EatCarriedItemGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@EatCarriedItemGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@EatCarriedItemGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?appendDebugInfo@EatCarriedItemGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0EatCarriedItemGoal@@QEAA@AEAVMob@@H@Z
    MCAPI EatCarriedItemGoal(class Mob &, int32_t);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?CHEW_CHANCE@EatCarriedItemGoal@@0HB
    MCAPI static int32_t const CHEW_CHANCE;

    // symbol: ?EATING_TIME@EatCarriedItemGoal@@0HB
    MCAPI static int32_t const EATING_TIME;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $CHEW_CHANCE() { return CHEW_CHANCE; }

    inline auto& $EATING_TIME() { return EATING_TIME; }

    // NOLINTEND

};

