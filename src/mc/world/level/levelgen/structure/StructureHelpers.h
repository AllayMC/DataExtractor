#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureHelpers {
public:
    // prevent constructor by default
    StructureHelpers& operator=(StructureHelpers const &) = delete;
    StructureHelpers(StructureHelpers const &) = delete;
    StructureHelpers() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?createChest@StructureHelpers@@SA_NAEAVStructurePiece@@AEAVBlockSource@@AEBVBoundingBox@@AEAVRandom@@HHHEAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static bool createChest(class StructurePiece &, class BlockSource &, class BoundingBox const &, class Random &, int32_t, int32_t, int32_t, uint8_t, std::string const &);

    // symbol: ?createDispenser@StructureHelpers@@SA_NAEAVStructurePiece@@AEAVBlockSource@@AEBVBoundingBox@@AEAVRandom@@HHHHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static bool createDispenser(class StructurePiece &, class BlockSource &, class BoundingBox const &, class Random &, int32_t, int32_t, int32_t, int32_t, std::string const &);

    // symbol: ?createMinecartChest@StructureHelpers@@SA_NAEAVStructurePiece@@AEAVBlockSource@@AEBVBoundingBox@@AEAVRandom@@HHHHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static bool createMinecartChest(class StructurePiece &, class BlockSource &, class BoundingBox const &, class Random &, int32_t, int32_t, int32_t, int32_t, std::string const &);

    // symbol: ?fillColumnDown@StructureHelpers@@SAXAEAVStructurePiece@@AEAVBlockSource@@AEBVBlock@@HHHAEBVBoundingBox@@@Z
    MCAPI static void fillColumnDown(class StructurePiece &, class BlockSource &, class Block const &, int32_t, int32_t, int32_t, class BoundingBox const &);

    // symbol: ?getTorchRotation@StructureHelpers@@SAHHG@Z
    MCAPI static int32_t getTorchRotation(int32_t, uint16_t);

    // NOLINTEND

};

