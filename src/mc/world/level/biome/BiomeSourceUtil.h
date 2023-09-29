#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BiomeSourceUtil {
    // NOLINTBEGIN
    // symbol: ?determineDestinationHeight@BiomeSourceUtil@@YAFAEBVDimension@@VBlockPos@@@Z
    MCAPI short determineDestinationHeight(class Dimension const &, class BlockPos);

    // symbol: ?locateBiome@BiomeSourceUtil@@YA?AV?$optional@VBlockPos@@@std@@AEBV?$function@$$A6A_NAEBVBiome@@@Z@3@AEBVBiomeSource@@AEBVBoundingBox@@I@Z
    MCAPI std::optional<class BlockPos> locateBiome(std::function<bool (class Biome const &)> const &, class BiomeSource const &, class BoundingBox const &, uint);

    // symbol: ?locateBiome@BiomeSourceUtil@@YA?AV?$optional@VBlockPos@@@std@@AEBV?$function@$$A6A_NAEBVBiome@@@Z@3@AEBVBiomeSource@@AEBVBlockPos@@VBoundingBox@@I@Z
    MCAPI std::optional<class BlockPos> locateBiome(std::function<bool (class Biome const &)> const &, class BiomeSource const &, class BlockPos const &, class BoundingBox, uint);

    // symbol: ?locateBiome@BiomeSourceUtil@@YA?AV?$optional@VBlockPos@@@std@@AEBV?$function@$$A6A_NAEBVBiome@@@Z@3@AEBVBiomeSource@@AEBVBlockPos@@2I@Z
    MCAPI std::optional<class BlockPos> locateBiome(std::function<bool (class Biome const &)> const &, class BiomeSource const &, class BlockPos const &, class BlockPos const &, uint);
    // NOLINTEND

};
