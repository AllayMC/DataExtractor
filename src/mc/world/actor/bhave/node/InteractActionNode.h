#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class InteractActionNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    InteractActionNode& operator=(InteractActionNode const &) = delete;
    InteractActionNode(InteractActionNode const &) = delete;
    InteractActionNode() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?tick@InteractActionNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor &);

    // vIndex: 2, symbol: ?initializeFromDefinition@InteractActionNode@@EEAAXAEAVActor@@@Z
    virtual void initializeFromDefinition(class Actor &);

    // NOLINTEND

};

