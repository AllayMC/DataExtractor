#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class SimpleTreeTrunk {
public:
    // prevent constructor by default
    SimpleTreeTrunk& operator=(SimpleTreeTrunk const &) = delete;
    SimpleTreeTrunk(SimpleTreeTrunk const &) = delete;
    SimpleTreeTrunk() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?placeTrunk@SimpleTreeTrunk@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@HAEAVRenderParams@@AEBUTreeParams@TreeHelper@@PEBVITreeCanopy@@@Z
    virtual std::optional<class BlockPos> placeTrunk(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, int32_t, class RenderParams &, struct TreeHelper::TreeParams const &, class ITreeCanopy const *) const;

    // vIndex: 2, symbol: ?getTreeHeight@SimpleTreeTrunk@@UEBAHAEAVRandom@@@Z
    virtual int32_t getTreeHeight(class Random &) const;

    // NOLINTEND

};

