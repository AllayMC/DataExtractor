#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SneakTriggerSystem {

struct PlayerStatusTransitions {
public:
    // prevent constructor by default
    PlayerStatusTransitions& operator=(PlayerStatusTransitions const &) = delete;
    PlayerStatusTransitions(PlayerStatusTransitions const &) = delete;
    PlayerStatusTransitions() = delete;

};

};
