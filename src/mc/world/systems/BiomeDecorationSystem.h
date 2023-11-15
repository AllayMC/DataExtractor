#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/GeneratorType.h"

namespace BiomeDecorationSystem {
    // NOLINTBEGIN
    // symbol: ?consolidateDecorationFeatures@BiomeDecorationSystem@@YAXAEAVBiomeRegistry@@@Z
    MCAPI void consolidateDecorationFeatures(class BiomeRegistry &);

    // symbol: ?decorate@BiomeDecorationSystem@@YAXAEAVLevelChunk@@AEAVBlockSource@@AEAVRandom@@AEAV?$vector@PEBVBiome@@V?$allocator@PEBVBiome@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@AEBVIPreliminarySurfaceProvider@@@Z
    MCAPI void decorate(class LevelChunk &, class BlockSource &, class Random &, std::vector<class Biome const *> &, std::string const &, class IPreliminarySurfaceProvider const &);

    // symbol: ?decorateBiome@BiomeDecorationSystem@@YA_NAEAVLevelChunk@@AEAVBlockSource@@AEAVRandom@@V?$span@UBiomeDecorationFeature@@$0?0@gsl@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVBiome@@AEBVIPreliminarySurfaceProvider@@@Z
    MCAPI bool decorateBiome(class LevelChunk &, class BlockSource &, class Random &, class gsl::span<struct BiomeDecorationFeature>, std::string const &, class Biome const *, class IPreliminarySurfaceProvider const &);

    // symbol: ?decorateLargeFeature@BiomeDecorationSystem@@YAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockVolumeTarget@@AEAVRandom@@AEBVChunkPos@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void decorateLargeFeature(class Biome &, class LevelChunk &, class BlockVolumeTarget &, class Random &, class ChunkPos const &, std::string const &);

    // symbol: ?decorateLargeFeature@BiomeDecorationSystem@@YA_NW4GeneratorType@@AEBIAEAVBlockVolumeTarget@@AEAVRandom@@V?$span@UBiomeDecorationFeature@@$0?0@gsl@@AEBVChunkPos@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool decorateLargeFeature(::GeneratorType, uint32_t const &, class BlockVolumeTarget &, class Random &, class gsl::span<struct BiomeDecorationFeature>, class ChunkPos const &, std::string const &);
    // NOLINTEND

};
