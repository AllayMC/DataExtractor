#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/SculkBehavior.h"

class SculkBlockBehavior : public ::SculkBehavior {
public:
    // prevent constructor by default
    SculkBlockBehavior& operator=(SculkBlockBehavior const &) = delete;
    SculkBlockBehavior(SculkBlockBehavior const &) = delete;
    SculkBlockBehavior() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?updateDecayDelay@SculkBlockBehavior@@UEBAHH@Z
    virtual int32_t updateDecayDelay(int32_t) const;

    // vIndex: 1, symbol: ?updateFacingData@SculkBlockBehavior@@UEBAHHAEBVBlock@@@Z
    virtual int32_t updateFacingData(int32_t, class Block const &) const;

    // vIndex: 2, symbol: ?canChangeBlockOnSpread@SculkBlockBehavior@@UEBA_NXZ
    virtual bool canChangeBlockOnSpread() const;

    // vIndex: 3, symbol: ?attemptSpreadVeins@SculkBlockBehavior@@UEBA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEBVBlock@@HAEAVSculkSpreader@@@Z
    virtual bool attemptSpreadVeins(class IBlockWorldGenAPI &, class BlockPos const &, class Block const &, int32_t, class SculkSpreader &) const;

    // vIndex: 4, symbol: ?attemptUseCharge@SculkBlockBehavior@@UEBAHAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@2HHAEAVRandom@@AEAVSculkSpreader@@_N@Z
    virtual int32_t attemptUseCharge(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, class BlockPos const &, int32_t, int32_t, class Random &, class SculkSpreader &, bool) const;

    // vIndex: 5, symbol: ?onDischarged@SculkBlockBehavior@@UEBAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onDischarged(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_placeGrowthAt@SculkBlockBehavior@@CAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@AEAVSculkSpreader@@@Z
    MCAPI static void _placeGrowthAt(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, class Random &, class SculkSpreader &);

    // NOLINTEND

};

