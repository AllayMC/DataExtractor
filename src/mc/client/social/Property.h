#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class Property {
public:
    // prevent constructor by default
    Property& operator=(Property const &) = delete;
    Property(Property const &) = delete;
    Property() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1Property@Events@Social@@QEAA@XZ
    MCAPI ~Property();

    // NOLINTEND

};

};
