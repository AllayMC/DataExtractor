#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/ScatteredFeaturePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class SwamplandHut : public ::ScatteredFeaturePiece {
public:
    // prevent constructor by default
    SwamplandHut& operator=(SwamplandHut const &) = delete;
    SwamplandHut(SwamplandHut const &) = delete;
    SwamplandHut() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?getType@SwamplandHut@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@SwamplandHut@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

    // vIndex: 5, symbol: ?postProcessMobsAt@SwamplandHut@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);

    // vIndex: 12, symbol: ?addHardcodedSpawnAreas@SwamplandHut@@UEBAXAEAVLevelChunk@@@Z
    virtual void addHardcodedSpawnAreas(class LevelChunk &) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?placeCauldron@SwamplandHut@@IEAAXAEAVBlockSource@@AEAVRandom@@HHHAEBVBoundingBox@@@Z
    MCAPI void placeCauldron(class BlockSource &, class Random &, int32_t, int32_t, int32_t, class BoundingBox const &);

    // NOLINTEND

};

