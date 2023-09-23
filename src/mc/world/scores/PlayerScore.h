#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerScore {
public:
    // prevent constructor by default
    PlayerScore& operator=(PlayerScore const &) = delete;
    PlayerScore(PlayerScore const &) = delete;
    PlayerScore() = delete;

};

