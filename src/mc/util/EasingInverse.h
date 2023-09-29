#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EasingInverse {
public:
    // prevent constructor by default
    EasingInverse& operator=(EasingInverse const &) = delete;
    EasingInverse(EasingInverse const &) = delete;
    EasingInverse() = delete;

private:
    // NOLINTBEGIN
    // symbol: ?mEasingFuncs@EasingInverse@@0V?$vector@V?$function@$$A6AMMMM@Z@std@@V?$allocator@V?$function@$$A6AMMMM@Z@std@@@2@@std@@A
    MCAPI static std::vector<std::function<float (float, float, float)>> mEasingFuncs;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $mEasingFuncs() { return mEasingFuncs; }

    // NOLINTEND

};

