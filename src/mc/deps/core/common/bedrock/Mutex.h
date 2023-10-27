#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class Mutex {
public:
    // prevent constructor by default
    Mutex& operator=(Mutex const &) = delete;
    Mutex(Mutex const &) = delete;
    Mutex() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1Mutex@Threading@Bedrock@@QEAA@XZ
    MCAPI ~Mutex();

    // NOLINTEND

};

};
