#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace CanyonFeatureUtils { struct CanyonConfiguration; }
// clang-format on

class CanyonFeature {
public:
    // prevent constructor by default
    CanyonFeature& operator=(CanyonFeature const &) = delete;
    CanyonFeature(CanyonFeature const &) = delete;
    CanyonFeature() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?carve@CanyonFeature@@MEBA_NAEAVBlockVolume@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVVec3@@4HHHHHHMMV?$span@$$CBM$0?0@gsl@@AEBUWorldGenContext@@@Z
    virtual bool carve(class BlockVolume &, class BiomeSource const &, class Random &, class ChunkPos const &, class Vec3 const &, class Vec3 const &, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, float, float, class gsl::span<float const>, struct WorldGenContext const &) const;

    // vIndex: 2, symbol: ?addFeature@CanyonFeature@@MEAAXAEAVBlockVolume@@AEBVBiomeSource@@AEBUCanyonConfiguration@CanyonFeatureUtils@@AEBVChunkPos@@AEAVRandom@@HHAEBUWorldGenContext@@@Z
    virtual void addFeature(class BlockVolume &, class BiomeSource const &, struct CanyonFeatureUtils::CanyonConfiguration const &, class ChunkPos const &, class Random &, int32_t, int32_t, struct WorldGenContext const &);

    // symbol: ??1CanyonFeature@@UEAA@XZ
    MCVAPI ~CanyonFeature();

    // symbol: ??0CanyonFeature@@QEAA@F@Z
    MCAPI CanyonFeature(int16_t);

    // symbol: ?apply@CanyonFeature@@QEAAXAEAVBlockVolume@@AEBVChunkPos@@AEBVBiomeSource@@AEBUCanyonConfiguration@CanyonFeatureUtils@@AEAVRandom@@IAEBUWorldGenContext@@@Z
    MCAPI void apply(class BlockVolume &, class ChunkPos const &, class BiomeSource const &, struct CanyonFeatureUtils::CanyonConfiguration const &, class Random &, uint32_t, struct WorldGenContext const &);

    // symbol: ?isDiggable@CanyonFeature@@SA_NAEBVBlock@@0@Z
    MCAPI static bool isDiggable(class Block const &, class Block const &);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?addTunnel@CanyonFeature@@IEBAXAEAVBlockVolume@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVVec3@@4MMMHHMAEBUWorldGenContext@@@Z
    MCAPI void addTunnel(class BlockVolume &, class BiomeSource const &, class Random &, class ChunkPos const &, class Vec3 const &, class Vec3 const &, float, float, float, int32_t, int32_t, float, struct WorldGenContext const &) const;

    // NOLINTEND

};

