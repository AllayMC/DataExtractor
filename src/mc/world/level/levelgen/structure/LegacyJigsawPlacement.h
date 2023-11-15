#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AdjustmentEffect.h"
#include "mc/enums/Rotation.h"

class LegacyJigsawPlacement {
public:
    // prevent constructor by default
    LegacyJigsawPlacement& operator=(LegacyJigsawPlacement const &) = delete;
    LegacyJigsawPlacement(LegacyJigsawPlacement const &) = delete;
    LegacyJigsawPlacement() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0LegacyJigsawPlacement@@QEAA@HV?$function@$$A6A?AV?$unique_ptr@VPoolElementStructurePiece@@U?$default_delete@VPoolElementStructurePiece@@@std@@@std@@AEBVStructurePoolElement@@AEBVBlockPos@@AEBW4Rotation@@HAEAUJigsawJunction@@AEBVBoundingBox@@1@Z@std@@@Z
    MCAPI LegacyJigsawPlacement(int32_t, std::function<std::unique_ptr<class PoolElementStructurePiece> (class StructurePoolElement const &, class BlockPos const &, ::Rotation const &, int32_t, struct JigsawJunction &, class BoundingBox const &, class BlockPos const &)>);

    // symbol: ?addPieces@LegacyJigsawPlacement@@QEAAXAEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEBVStructurePoolElement@@AEAVRandom@@AEBVBlockPos@@AEBW4Rotation@@AEBVJigsawStructureRegistry@@AEAVDimension@@@Z
    MCAPI void addPieces(std::vector<std::unique_ptr<class StructurePiece>> &, class StructurePoolElement const &, class Random &, class BlockPos const &, ::Rotation const &, class JigsawStructureRegistry const &, class Dimension &);

    // symbol: ??1LegacyJigsawPlacement@@QEAA@XZ
    MCAPI ~LegacyJigsawPlacement();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addPiece@LegacyJigsawPlacement@@AEAAXAEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEBVPoolElementStructurePiece@@AEAVRandom@@AEBVBlockPos@@AEBW4Rotation@@AEBVJigsawStructureRegistry@@AEAVDimension@@AEAVBlockVolume@@3@Z
    MCAPI void _addPiece(std::vector<std::unique_ptr<class StructurePiece>> &, class PoolElementStructurePiece const &, class Random &, class BlockPos const &, ::Rotation const &, class JigsawStructureRegistry const &, class Dimension &, class BlockVolume &, class BlockPos const &);

    // symbol: ?_tryPlacingPiece@LegacyJigsawPlacement@@AEAA_NAEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEBVPoolElementStructurePiece@@AEAVRandom@@AEBVJigsawBlockInfo@@AEBVBoundingBox@@AEAV?$vector@VBoundingBox@@V?$allocator@VBoundingBox@@@std@@@3@AEBVBlockPos@@PEBVStructureTemplatePool@@AEBVJigsawStructureRegistry@@AEAVDimension@@AEAVBlockVolume@@6@Z
    MCAPI bool _tryPlacingPiece(std::vector<std::unique_ptr<class StructurePiece>> &, class PoolElementStructurePiece const &, class Random &, class JigsawBlockInfo const &, class BoundingBox const &, std::vector<class BoundingBox> &, class BlockPos const &, class StructureTemplatePool const *, class JigsawStructureRegistry const &, class Dimension &, class BlockVolume &, class BlockPos const &);

    // symbol: ?_setTerrainAdjustment@LegacyJigsawPlacement@@CA?AV?$shared_ptr@_N@std@@W4AdjustmentEffect@@AEBVBoundingBox@@AEBUJigsawJunction@@AEAVDimension@@@Z
    MCAPI static std::shared_ptr<bool> _setTerrainAdjustment(::AdjustmentEffect, class BoundingBox const &, struct JigsawJunction const &, class Dimension &);

    // NOLINTEND

};

