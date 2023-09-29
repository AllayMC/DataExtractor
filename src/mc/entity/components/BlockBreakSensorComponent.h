#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockBreakSensorComponent {
public:
    // prevent constructor by default
    BlockBreakSensorComponent& operator=(BlockBreakSensorComponent const &) = delete;
    BlockBreakSensorComponent(BlockBreakSensorComponent const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0BlockBreakSensorComponent@@QEAA@XZ
    MCAPI BlockBreakSensorComponent();

    // symbol: ??0BlockBreakSensorComponent@@QEAA@$$QEAV0@@Z
    MCAPI BlockBreakSensorComponent(class BlockBreakSensorComponent &&);

    // symbol: ?initialize@BlockBreakSensorComponent@@QEAAXAEAVActor@@@Z
    MCAPI void initialize(class Actor &);

    // symbol: ??4BlockBreakSensorComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class BlockBreakSensorComponent & operator=(class BlockBreakSensorComponent &&);

    // symbol: ?updateSensorPos@BlockBreakSensorComponent@@QEAAXAEBVVec3@@@Z
    MCAPI void updateSensorPos(class Vec3 const &);

    // symbol: ??1BlockBreakSensorComponent@@QEAA@XZ
    MCAPI ~BlockBreakSensorComponent();

    // NOLINTEND

};

