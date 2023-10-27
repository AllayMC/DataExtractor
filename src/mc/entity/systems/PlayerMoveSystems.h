#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerMoveSystems {
public:
    // prevent constructor by default
    PlayerMoveSystems& operator=(PlayerMoveSystems const &) = delete;
    PlayerMoveSystems(PlayerMoveSystems const &) = delete;
    PlayerMoveSystems() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?createApplyAutoJumpingToInputSystem@PlayerMoveSystems@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createApplyAutoJumpingToInputSystem();

    // symbol: ?createPlayerPostMoveSystem@PlayerMoveSystems@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createPlayerPostMoveSystem();

    // symbol: ?createPlayerPreMoveSystem@PlayerMoveSystems@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createPlayerPreMoveSystem();

    // NOLINTEND

};

