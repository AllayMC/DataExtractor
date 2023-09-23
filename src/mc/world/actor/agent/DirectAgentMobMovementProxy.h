#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DirectAgentMobMovementProxy {
public:
    // prevent constructor by default
    DirectAgentMobMovementProxy& operator=(DirectAgentMobMovementProxy const &) = delete;
    DirectAgentMobMovementProxy(DirectAgentMobMovementProxy const &) = delete;
    DirectAgentMobMovementProxy() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?isFlying@DirectAgentMobMovementProxy@@UEBA_NXZ
    MCVAPI bool isFlying() const;

    // NOLINTEND

};

