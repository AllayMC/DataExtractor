#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MovementTickResetTemporaryComponentsSystem {
public:
    // prevent constructor by default
    MovementTickResetTemporaryComponentsSystem& operator=(MovementTickResetTemporaryComponentsSystem const &) = delete;
    MovementTickResetTemporaryComponentsSystem(MovementTickResetTemporaryComponentsSystem const &) = delete;
    MovementTickResetTemporaryComponentsSystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@MovementTickResetTemporaryComponentsSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

};

