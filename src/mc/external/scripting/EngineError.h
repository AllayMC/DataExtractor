#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct EngineError {
public:
    // prevent constructor by default
    EngineError& operator=(EngineError const &) = delete;
    EngineError(EngineError const &) = delete;
    EngineError() = delete;

};

};
