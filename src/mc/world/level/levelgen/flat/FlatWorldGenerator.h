#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/world/level/levelgen/WorldGenerator.h"
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FlatWorldGenerator : public ::WorldGenerator {
public:
    // prevent constructor by default
    FlatWorldGenerator& operator=(FlatWorldGenerator const &) = delete;
    FlatWorldGenerator(FlatWorldGenerator const &) = delete;
    FlatWorldGenerator() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?decorateWorldGenLoadChunk@FlatWorldGenerator@@MEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockVolumeTarget@@AEAVRandom@@AEBVChunkPos@@@Z
    MCVAPI void decorateWorldGenLoadChunk(class Biome &, class LevelChunk &, class BlockVolumeTarget &, class Random &, class ChunkPos const &) const;

    // symbol: ?decorateWorldGenPostProcess@FlatWorldGenerator@@MEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockSource@@AEAVRandom@@@Z
    MCVAPI void decorateWorldGenPostProcess(class Biome &, class LevelChunk &, class BlockSource &, class Random &) const;

    // symbol: ?findNearestStructureFeature@FlatWorldGenerator@@UEAA_NW4StructureFeatureType@@AEBVBlockPos@@AEAV3@_NV?$optional@VHashedString@@@std@@@Z
    MCVAPI bool findNearestStructureFeature(::StructureFeatureType, class BlockPos const &, class BlockPos &, bool, std::optional<class HashedString>);

    // symbol: ?findSpawnPosition@FlatWorldGenerator@@UEBA?AVBlockPos@@XZ
    MCVAPI class BlockPos findSpawnPosition() const;

    // symbol: ?findStructureFeatureTypeAt@FlatWorldGenerator@@UEAA?AW4StructureFeatureType@@AEBVBlockPos@@@Z
    MCVAPI ::StructureFeatureType findStructureFeatureTypeAt(class BlockPos const &);

    // symbol: ?garbageCollectBlueprints@FlatWorldGenerator@@UEAAXV?$buffer_span@VChunkPos@@@@@Z
    MCVAPI void garbageCollectBlueprints(class buffer_span<class ChunkPos>);

    // symbol: ?getBiomeArea@FlatWorldGenerator@@UEBA?AVBiomeArea@@AEBVBoundingBox@@I@Z
    MCVAPI class BiomeArea getBiomeArea(class BoundingBox const &, uint) const;

    // symbol: ?getBiomeSource@FlatWorldGenerator@@UEBAAEBVBiomeSource@@XZ
    MCVAPI class BiomeSource const & getBiomeSource() const;

    // symbol: ?getBlockVolumeDimensions@FlatWorldGenerator@@UEBA?AUBlockVolumeDimensions@WorldGenerator@@XZ
    MCVAPI struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;

    // symbol: ?isStructureFeatureTypeAt@FlatWorldGenerator@@UEBA_NAEBVBlockPos@@W4StructureFeatureType@@@Z
    MCVAPI bool isStructureFeatureTypeAt(class BlockPos const &, ::StructureFeatureType) const;

    // symbol: ?loadChunk@FlatWorldGenerator@@UEAAXAEAVLevelChunk@@_N@Z
    MCVAPI void loadChunk(class LevelChunk &, bool);

    // symbol: ?postProcess@FlatWorldGenerator@@UEAA_NAEAVChunkViewSource@@@Z
    MCVAPI bool postProcess(class ChunkViewSource &);

    // symbol: ?prepareAndComputeHeights@FlatWorldGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@AEAV?$vector@FV?$allocator@F@std@@@std@@_NH@Z
    MCVAPI void prepareAndComputeHeights(class BlockVolume &, class ChunkPos const &, std::vector<short> &, bool, int);

    // symbol: ?prepareHeights@FlatWorldGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@_N@Z
    MCVAPI void prepareHeights(class BlockVolume &, class ChunkPos const &, bool);

    // symbol: ??0FlatWorldGenerator@@QEAA@AEAVDimension@@IAEBVValue@Json@@@Z
    MCAPI FlatWorldGenerator(class Dimension &, uint, class Json::Value const &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_generatePrototypeBlockValues@FlatWorldGenerator@@AEAAXAEBVFlatWorldGeneratorOptions@@F@Z
    MCAPI void _generatePrototypeBlockValues(class FlatWorldGeneratorOptions const &, short);

    // NOLINTEND

};

