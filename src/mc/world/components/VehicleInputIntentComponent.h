#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VehicleInputIntentComponent {
public:
    // prevent constructor by default
    VehicleInputIntentComponent& operator=(VehicleInputIntentComponent const &) = delete;
    VehicleInputIntentComponent(VehicleInputIntentComponent const &) = delete;
    VehicleInputIntentComponent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0VehicleInputIntentComponent@@QEAA@$$QEAU0@@Z
    MCAPI VehicleInputIntentComponent(struct VehicleInputIntentComponent &&);

    // symbol: ??4VehicleInputIntentComponent@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct VehicleInputIntentComponent & operator=(struct VehicleInputIntentComponent &&);

    // NOLINTEND

};

