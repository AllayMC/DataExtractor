#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class BasaltColumnsFeature : public ::Feature {
public:
    // prevent constructor by default
    BasaltColumnsFeature& operator=(BasaltColumnsFeature const &) = delete;
    BasaltColumnsFeature(BasaltColumnsFeature const &) = delete;
    BasaltColumnsFeature() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?place@BasaltColumnsFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_findSurface@BasaltColumnsFeature@@AEBA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@VBlockPos@@HH@Z
    MCAPI std::optional<class BlockPos> _findSurface(class BlockSource &, class BlockPos, int32_t, int32_t) const;

    // symbol: ?_placeColumnCluster@BasaltColumnsFeature@@AEBAXAEAVBlockSource@@VBlockPos@@HH@Z
    MCAPI void _placeColumnCluster(class BlockSource &, class BlockPos, int32_t, int32_t) const;

    // NOLINTEND

};

