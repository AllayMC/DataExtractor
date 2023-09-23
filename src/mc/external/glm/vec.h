#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glm {

template<int T0, typename T1, int T2>
struct vec {
public:
    // prevent constructor by default
    vec& operator=(vec const &) = delete;
    vec(vec const &) = delete;
    vec() = delete;

};

};
