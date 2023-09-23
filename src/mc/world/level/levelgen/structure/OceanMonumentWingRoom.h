#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/OceanMonumentPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class OceanMonumentWingRoom : public ::OceanMonumentPiece {
public:
    // prevent constructor by default
    OceanMonumentWingRoom& operator=(OceanMonumentWingRoom const &) = delete;
    OceanMonumentWingRoom(OceanMonumentWingRoom const &) = delete;
    OceanMonumentWingRoom() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?getType@OceanMonumentWingRoom@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@OceanMonumentWingRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

    // vIndex: 5, symbol: ?postProcessMobsAt@OceanMonumentWingRoom@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);

    // NOLINTEND

};

