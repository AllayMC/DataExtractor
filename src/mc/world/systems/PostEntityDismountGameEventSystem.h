#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PostEntityDismountGameEventSystem {
public:
    // prevent constructor by default
    PostEntityDismountGameEventSystem& operator=(PostEntityDismountGameEventSystem const &) = delete;
    PostEntityDismountGameEventSystem(PostEntityDismountGameEventSystem const &) = delete;
    PostEntityDismountGameEventSystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@PostEntityDismountGameEventSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

};

