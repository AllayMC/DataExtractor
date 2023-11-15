#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelSoundEventUtils {
public:
    // prevent constructor by default
    LevelSoundEventUtils& operator=(LevelSoundEventUtils const &) = delete;
    LevelSoundEventUtils(LevelSoundEventUtils const &) = delete;
    LevelSoundEventUtils() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?serializePercentageToData@LevelSoundEventUtils@@SAHM@Z
    MCAPI static int32_t serializePercentageToData(float);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?MAX_INT_REPRESENTABLE_AS_FLOAT@LevelSoundEventUtils@@0HB
    MCAPI static int32_t const MAX_INT_REPRESENTABLE_AS_FLOAT;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $MAX_INT_REPRESENTABLE_AS_FLOAT() { return MAX_INT_REPRESENTABLE_AS_FLOAT; }

    // NOLINTEND

};

