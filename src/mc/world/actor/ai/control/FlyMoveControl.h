#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

class FlyMoveControl : public ::MoveControl {
public:
    // prevent constructor by default
    FlyMoveControl& operator=(FlyMoveControl const &) = delete;
    FlyMoveControl(FlyMoveControl const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?tick@FlyMoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@@Z
    virtual void tick(class MoveControlComponent &, class Mob &);

    // symbol: ??0FlyMoveControl@@QEAA@XZ
    MCAPI FlyMoveControl();

    // NOLINTEND

};

