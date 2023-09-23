#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class IWatchdog {
public:
    // prevent constructor by default
    IWatchdog& operator=(IWatchdog const &) = delete;
    IWatchdog(IWatchdog const &) = delete;
    IWatchdog() = delete;

};

};
