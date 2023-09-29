#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class ShootBowNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    ShootBowNode& operator=(ShootBowNode const &) = delete;
    ShootBowNode(ShootBowNode const &) = delete;
    ShootBowNode() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?tick@ShootBowNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor &);

    // vIndex: 2, symbol: ?initializeFromDefinition@ShootBowNode@@EEAAXAEAVActor@@@Z
    virtual void initializeFromDefinition(class Actor &);

    // NOLINTEND

};

