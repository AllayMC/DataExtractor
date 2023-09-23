#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScoreInfoRef {
public:
    // prevent constructor by default
    ScoreInfoRef& operator=(ScoreInfoRef const &) = delete;
    ScoreInfoRef(ScoreInfoRef const &) = delete;
    ScoreInfoRef() = delete;

};

