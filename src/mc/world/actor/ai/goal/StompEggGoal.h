#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/StompBlockGoal.h"

class StompEggGoal : public ::StompBlockGoal {
public:
    // prevent constructor by default
    StompEggGoal& operator=(StompEggGoal const &) = delete;
    StompEggGoal(StompEggGoal const &) = delete;
    StompEggGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 7, symbol: ?appendDebugInfo@StompEggGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // vIndex: 18, symbol: ?_createBreakProgressParticles@StompEggGoal@@MEAAXAEAVLevel@@AEAVBlockSource@@VBlockPos@@@Z
    virtual void _createBreakProgressParticles(class Level &, class BlockSource &, class BlockPos);

    // vIndex: 19, symbol: ?_createDestroyParticles@StompEggGoal@@MEAAXAEAVLevel@@AEAVBlockSource@@VBlockPos@@@Z
    virtual void _createDestroyParticles(class Level &, class BlockSource &, class BlockPos);

    // vIndex: 20, symbol: ?_playBreakProgressSound@StompEggGoal@@MEAAXAEAVLevel@@AEAVBlockSource@@VBlockPos@@@Z
    virtual void _playBreakProgressSound(class Level &, class BlockSource &, class BlockPos);

    // vIndex: 21, symbol: ?_playDestroySound@StompEggGoal@@MEAAXAEAVLevel@@AEAVBlockSource@@VBlockPos@@@Z
    virtual void _playDestroySound(class Level &, class BlockSource &, class BlockPos);

    // symbol: ??0StompEggGoal@@QEAA@AEAVMob@@MHHMH@Z
    MCAPI StompEggGoal(class Mob &, float, int, int, float, int);

    // NOLINTEND

};

