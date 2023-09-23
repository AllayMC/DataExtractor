#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorTerrainInterlockData {
public:
    // prevent constructor by default
    ActorTerrainInterlockData& operator=(ActorTerrainInterlockData const &) = delete;
    ActorTerrainInterlockData(ActorTerrainInterlockData const &) = delete;
    ActorTerrainInterlockData() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?setCreationTime@ActorTerrainInterlockData@@QEAAXXZ
    MCAPI void setCreationTime();

    // NOLINTEND

};

