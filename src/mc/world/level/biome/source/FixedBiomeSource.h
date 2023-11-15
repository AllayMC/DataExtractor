#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v1/BiomeSource.h"

class FixedBiomeSource : public ::BiomeSource {
public:
    // prevent constructor by default
    FixedBiomeSource& operator=(FixedBiomeSource const &) = delete;
    FixedBiomeSource(FixedBiomeSource const &) = delete;
    FixedBiomeSource() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?fillBiomes@FixedBiomeSource@@UEBAXAEAVLevelChunk@@AEBVChunkLocalNoiseCache@@@Z
    virtual void fillBiomes(class LevelChunk &, class ChunkLocalNoiseCache const &) const;

    // vIndex: 2, symbol: ?getBiomeArea@FixedBiomeSource@@UEBA?AVBiomeArea@@AEBVBoundingBox@@I@Z
    virtual class BiomeArea getBiomeArea(class BoundingBox const &, uint32_t) const;

    // vIndex: 3, symbol: ?getBiomeArea@FixedBiomeSource@@UEBA?AVBiomeArea@@AEBVBoundingBox@@IAEBUGetBiomeOptions@@@Z
    virtual class BiomeArea getBiomeArea(class BoundingBox const &, uint32_t, struct GetBiomeOptions const &) const;

    // vIndex: 4, symbol: ?containsOnly@FixedBiomeSource@@UEBA_NHHHHV?$span@$$CB_K$0?0@gsl@@@Z
    virtual bool containsOnly(int32_t, int32_t, int32_t, int32_t, class gsl::span<uint64_t const>) const;

    // symbol: ?getBiome@FixedBiomeSource@@UEBAPEBVBiome@@AEBVBlockPos@@@Z
    MCVAPI class Biome const * getBiome(class BlockPos const &) const;

    // symbol: ?getBiome@FixedBiomeSource@@UEBAPEBVBiome@@AEBUGetBiomeOptions@@@Z
    MCVAPI class Biome const * getBiome(struct GetBiomeOptions const &) const;

    // symbol: ?getBiome@FixedBiomeSource@@UEBAPEBVBiome@@HHH@Z
    MCVAPI class Biome const * getBiome(int32_t, int32_t, int32_t) const;

    // symbol: ??0FixedBiomeSource@@QEAA@AEBVBiome@@@Z
    MCAPI FixedBiomeSource(class Biome const &);

    // NOLINTEND

};

