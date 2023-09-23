#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

class GenericMoveControl : public ::MoveControl {
public:
    // prevent constructor by default
    GenericMoveControl& operator=(GenericMoveControl const &) = delete;
    GenericMoveControl(GenericMoveControl const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?initializeInternal@GenericMoveControl@@UEAAXAEAVMob@@PEAUMoveControlDescription@@@Z
    virtual void initializeInternal(class Mob &, struct MoveControlDescription *);

    // vIndex: 2, symbol: ?tick@GenericMoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@@Z
    virtual void tick(class MoveControlComponent &, class Mob &);

    // symbol: ??0GenericMoveControl@@QEAA@XZ
    MCAPI GenericMoveControl();

    // NOLINTEND

};

