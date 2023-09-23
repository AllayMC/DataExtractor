#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

class IGameTestHelperProvider {
public:
    // prevent constructor by default
    IGameTestHelperProvider& operator=(IGameTestHelperProvider const &) = delete;
    IGameTestHelperProvider(IGameTestHelperProvider const &) = delete;
    IGameTestHelperProvider() = delete;

};

};
