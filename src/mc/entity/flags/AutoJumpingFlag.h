#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AutoJumpingFlag {
public:
    // prevent constructor by default
    AutoJumpingFlag& operator=(AutoJumpingFlag const &) = delete;
    AutoJumpingFlag(AutoJumpingFlag const &) = delete;
    AutoJumpingFlag() = delete;

};

