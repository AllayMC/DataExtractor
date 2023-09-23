#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TickDelayBlock {
public:
    // prevent constructor by default
    TickDelayBlock& operator=(TickDelayBlock const &) = delete;
    TickDelayBlock(TickDelayBlock const &) = delete;
    TickDelayBlock() = delete;

};

