#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobRemovePassengerSystem {
public:
    // prevent constructor by default
    MobRemovePassengerSystem& operator=(MobRemovePassengerSystem const &) = delete;
    MobRemovePassengerSystem(MobRemovePassengerSystem const &) = delete;
    MobRemovePassengerSystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@MobRemovePassengerSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

};

