#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class SetPreviousWalkDistSystem {
public:
    // prevent constructor by default
    SetPreviousWalkDistSystem& operator=(SetPreviousWalkDistSystem const &) = delete;
    SetPreviousWalkDistSystem(SetPreviousWalkDistSystem const &) = delete;
    SetPreviousWalkDistSystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@SetPreviousWalkDistSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tickWalkDistPrevSystem@SetPreviousWalkDistSystem@@CAXV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@UWalkDistComponent@@@@@Z
    MCAPI static void _tickWalkDistPrevSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct WalkDistComponent>);

    // NOLINTEND

};

