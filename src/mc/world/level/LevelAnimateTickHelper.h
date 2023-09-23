#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelAnimateTickHelper {
public:
    // prevent constructor by default
    LevelAnimateTickHelper& operator=(LevelAnimateTickHelper const &) = delete;
    LevelAnimateTickHelper(LevelAnimateTickHelper const &) = delete;
    LevelAnimateTickHelper() = delete;

private:
    // NOLINTBEGIN
    // symbol: ?MIN_TIME_LIMITED_JAVA_PARITY_VERSION@LevelAnimateTickHelper@@0VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const MIN_TIME_LIMITED_JAVA_PARITY_VERSION;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $MIN_TIME_LIMITED_JAVA_PARITY_VERSION() { return MIN_TIME_LIMITED_JAVA_PARITY_VERSION; }

    // NOLINTEND

};

