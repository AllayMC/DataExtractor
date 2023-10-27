#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovementPackets {
public:
    // prevent constructor by default
    MovementPackets& operator=(MovementPackets const &) = delete;
    MovementPackets(MovementPackets const &) = delete;
    MovementPackets() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?isReadyToSimulate@MovementPackets@@QEBA_NXZ
    MCAPI bool isReadyToSimulate() const;

    // NOLINTEND

};

