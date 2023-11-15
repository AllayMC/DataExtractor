#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/DripstoneThickness.h"

// auto generated forward declare list
// clang-format off
namespace DripstoneUtils { struct PointedDripstoneBasePos; }
// clang-format on

namespace DripstoneUtils {
    // NOLINTBEGIN
    // symbol: ?buildBaseToTipColumn@DripstoneUtils@@YAXAEAVIBlockWorldGenAPI@@AEBVBlockPos@@EH_N@Z
    MCAPI void buildBaseToTipColumn(class IBlockWorldGenAPI &, class BlockPos const &, uint8_t, int32_t, bool);

    // symbol: ?canBeAdjacentToWater@DripstoneUtils@@YA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
    MCAPI bool canBeAdjacentToWater(class IBlockWorldGenAPI &, class BlockPos const &);

    // symbol: ?canPlacePool@DripstoneUtils@@YA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
    MCAPI bool canPlacePool(class IBlockWorldGenAPI &, class BlockPos const &);

    // symbol: ?getPlacementBlock@DripstoneUtils@@YAAEBVBlock@@EAEBW4DripstoneThickness@@@Z
    MCAPI class Block const & getPlacementBlock(uint8_t, ::DripstoneThickness const &);

    // symbol: ?getPointedDripstoneBasePos@DripstoneUtils@@YA?AV?$optional@UPointedDripstoneBasePos@DripstoneUtils@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@@Z
    MCAPI std::optional<struct DripstoneUtils::PointedDripstoneBasePos> getPointedDripstoneBasePos(class IBlockWorldGenAPI &, class BlockPos const &, class Random &);

    // symbol: ?isDripstoneBaseOrLava@DripstoneUtils@@YA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
    MCAPI bool isDripstoneBaseOrLava(class IBlockWorldGenAPI const &, class BlockPos const &);

    // symbol: ?isEmptyOrWater@DripstoneUtils@@YA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
    MCAPI bool isEmptyOrWater(class IBlockWorldGenAPI const &, class BlockPos const &);

    // symbol: ?isEmptyOrWaterOrLava@DripstoneUtils@@YA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
    MCAPI bool isEmptyOrWaterOrLava(class IBlockWorldGenAPI const &, class BlockPos const &);

    // symbol: ?isLava@DripstoneUtils@@YA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
    MCAPI bool isLava(class IBlockWorldGenAPI const &, class BlockPos const &);

    // symbol: ?placeDripstoneBlockIfPossible@DripstoneUtils@@YA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@@Z
    MCAPI bool placeDripstoneBlockIfPossible(class IBlockWorldGenAPI &, class BlockPos const &);

    // symbol: ?replaceableByDripstone@DripstoneUtils@@YA_NAEBVBlockLegacy@@@Z
    MCAPI bool replaceableByDripstone(class BlockLegacy const &);
    // NOLINTEND

};
