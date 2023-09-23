#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class PodzolAreaFeature : public ::Feature {
public:
    // prevent constructor by default
    PodzolAreaFeature& operator=(PodzolAreaFeature const &) = delete;
    PodzolAreaFeature(PodzolAreaFeature const &) = delete;
    PodzolAreaFeature() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?place@PodzolAreaFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

    // NOLINTEND

};

