#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

class GlideMoveControl : public ::MoveControl {
public:
    // prevent constructor by default
    GlideMoveControl& operator=(GlideMoveControl const &) = delete;
    GlideMoveControl(GlideMoveControl const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?initializeInternal@GlideMoveControl@@UEAAXAEAVMob@@PEAUMoveControlDescription@@@Z
    virtual void initializeInternal(class Mob &, struct MoveControlDescription *);

    // vIndex: 2, symbol: ?tick@GlideMoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@@Z
    virtual void tick(class MoveControlComponent &, class Mob &);

    // symbol: ??0GlideMoveControl@@QEAA@XZ
    MCAPI GlideMoveControl();

    // NOLINTEND

};

