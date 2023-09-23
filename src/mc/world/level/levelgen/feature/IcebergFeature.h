#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class IcebergFeature : public ::Feature {
public:
    // prevent constructor by default
    IcebergFeature& operator=(IcebergFeature const &) = delete;
    IcebergFeature(IcebergFeature const &) = delete;
    IcebergFeature() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?place@IcebergFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isIcebergBlock@IcebergFeature@@AEBA_NAEBVBlock@@@Z
    MCAPI bool _isIcebergBlock(class Block const &) const;

    // symbol: ?carve@IcebergFeature@@AEBAXHHAEBVBlockPos@@AEAVBlockSource@@_NM0HH@Z
    MCAPI void carve(int, int, class BlockPos const &, class BlockSource &, bool, float, class BlockPos const &, int, int) const;

    // symbol: ?generateIcebergBlock@IcebergFeature@@AEBAXAEAVBlockSource@@AEAVRandom@@AEBVBlockPos@@HHHHHH_N3MHAEBVBlock@@@Z
    MCAPI void generateIcebergBlock(class BlockSource &, class Random &, class BlockPos const &, int, int, int, int, int, int, bool, bool, float, int, class Block const &) const;

    // symbol: ?heightDependentRadiusRound@IcebergFeature@@AEBAHAEAVRandom@@HHH@Z
    MCAPI int heightDependentRadiusRound(class Random &, int, int, int) const;

    // symbol: ?setIcebergBlock@IcebergFeature@@AEBAXAEBVBlockPos@@AEAVBlockSource@@AEAVRandom@@HH_N3AEBVBlock@@@Z
    MCAPI void setIcebergBlock(class BlockPos const &, class BlockSource &, class Random &, int, int, bool, bool, class Block const &) const;

    // symbol: ?signedDistanceEllipse@IcebergFeature@@AEBAMHHAEBVBlockPos@@HHM@Z
    MCAPI float signedDistanceEllipse(int, int, class BlockPos const &, int, int, float) const;

    // NOLINTEND

};

