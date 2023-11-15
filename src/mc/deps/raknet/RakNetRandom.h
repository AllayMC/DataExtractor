#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class RakNetRandom {
public:
    // prevent constructor by default
    RakNetRandom& operator=(RakNetRandom const &) = delete;
    RakNetRandom(RakNetRandom const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0RakNetRandom@RakNet@@QEAA@XZ
    MCAPI RakNetRandom();

    // symbol: ?SeedMT@RakNetRandom@RakNet@@QEAAXI@Z
    MCAPI void SeedMT(uint32_t);

    // symbol: ??1RakNetRandom@RakNet@@QEAA@XZ
    MCAPI ~RakNetRandom();

    // NOLINTEND

};

};
