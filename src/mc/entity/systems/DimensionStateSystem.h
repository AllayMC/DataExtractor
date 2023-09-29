#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/DimensionStateComponent.h"

class DimensionStateSystem {
public:
    // prevent constructor by default
    DimensionStateSystem& operator=(DimensionStateSystem const &) = delete;
    DimensionStateSystem(DimensionStateSystem const &) = delete;
    DimensionStateSystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?isDimensionReady@DimensionStateSystem@@SA_NAEBVEntityContext@@@Z
    MCAPI static bool isDimensionReady(class EntityContext const &);

    // symbol: ?setDimensionState@DimensionStateSystem@@SAXAEAVEntityContext@@W4DimensionState@DimensionStateComponent@@@Z
    MCAPI static void setDimensionState(class EntityContext &, ::DimensionStateComponent::DimensionState);

    // NOLINTEND

};

