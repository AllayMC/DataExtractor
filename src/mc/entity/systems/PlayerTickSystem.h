#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerTickSystem {
public:
    // prevent constructor by default
    PlayerTickSystem& operator=(PlayerTickSystem const &) = delete;
    PlayerTickSystem(PlayerTickSystem const &) = delete;
    PlayerTickSystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?create@PlayerTickSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo create();

    // symbol: ?createAddMovementTickNeededForCatchupSystem@PlayerTickSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createAddMovementTickNeededForCatchupSystem();

    // symbol: ?onTickAdded@PlayerTickSystem@@SAXAEAUPlayerTickComponent@@_K@Z
    MCAPI static void onTickAdded(struct PlayerTickComponent &, uint64);

    // NOLINTEND

};

