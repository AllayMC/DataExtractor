#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Random;
// clang-format on

namespace ValueProviders {

class UniformInt {
public:
    // prevent constructor by default
    UniformInt& operator=(UniformInt const &) = delete;
    UniformInt(UniformInt const &) = delete;
    UniformInt() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?generateNext@UniformInt@ValueProviders@@QEBAHAEAVRandom@@@Z
    MCAPI int32_t generateNext(class Random &) const;

    // NOLINTEND

};

};
