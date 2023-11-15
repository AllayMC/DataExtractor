#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class MoveToLandGoal : public ::BaseMoveToBlockGoal {
public:
    // prevent constructor by default
    MoveToLandGoal& operator=(MoveToLandGoal const &) = delete;
    MoveToLandGoal(MoveToLandGoal const &) = delete;
    MoveToLandGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@MoveToLandGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@MoveToLandGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 7, symbol: ?appendDebugInfo@MoveToLandGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // vIndex: 11, symbol: ?isValidTarget@MoveToLandGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);

    // vIndex: 14, symbol: ?_moveToBlock@MoveToLandGoal@@MEAAXXZ
    virtual void _moveToBlock();

    // symbol: ??0MoveToLandGoal@@QEAA@AEAVMob@@MHHHM@Z
    MCAPI MoveToLandGoal(class Mob &, float, int32_t, int32_t, int32_t, float);

    // NOLINTEND

};

