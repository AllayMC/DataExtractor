#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SendPacketsComponent {
public:
    // prevent constructor by default
    SendPacketsComponent& operator=(SendPacketsComponent const &) = delete;
    SendPacketsComponent(SendPacketsComponent const &) = delete;
    SendPacketsComponent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??4SendPacketsComponent@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct SendPacketsComponent & operator=(struct SendPacketsComponent &&);

    // NOLINTEND

};

