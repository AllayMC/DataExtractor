#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class LegacySmallMushroomsFeature : public ::Feature {
public:
    // prevent constructor by default
    LegacySmallMushroomsFeature& operator=(LegacySmallMushroomsFeature const &) = delete;
    LegacySmallMushroomsFeature(LegacySmallMushroomsFeature const &) = delete;
    LegacySmallMushroomsFeature() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?place@LegacySmallMushroomsFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

    // symbol: ??0LegacySmallMushroomsFeature@@QEAA@AEBVFeatureRegistry@@@Z
    MCAPI LegacySmallMushroomsFeature(class FeatureRegistry const &);

    // NOLINTEND

};

