#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1>
class OptionalGlobalT {
public:
    // prevent constructor by default
    OptionalGlobalT& operator=(OptionalGlobalT const&);
    OptionalGlobalT(OptionalGlobalT const&);
    OptionalGlobalT();
};
