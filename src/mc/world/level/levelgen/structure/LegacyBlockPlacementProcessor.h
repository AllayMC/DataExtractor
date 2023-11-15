#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyBlockPlacementProcessor {
public:
    // prevent constructor by default
    LegacyBlockPlacementProcessor& operator=(LegacyBlockPlacementProcessor const &) = delete;
    LegacyBlockPlacementProcessor(LegacyBlockPlacementProcessor const &) = delete;
    LegacyBlockPlacementProcessor() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0LegacyBlockPlacementProcessor@@QEAA@AEBVLegacyStructureSettings@@@Z
    MCAPI LegacyBlockPlacementProcessor(class LegacyStructureSettings const &);

    // symbol: ?applyBlockRules@LegacyBlockPlacementProcessor@@QEAAPEBVBlock@@AEAVBlockSource@@AEAVBlockPos@@PEBV2@AEBV4@@Z
    MCAPI class Block const * applyBlockRules(class BlockSource &, class BlockPos &, class Block const *, class BlockPos const &);

    // symbol: ?applyGravity@LegacyBlockPlacementProcessor@@QEBAAEAVBlockPos@@AEAVBlockSource@@HAEAV2@@Z
    MCAPI class BlockPos & applyGravity(class BlockSource &, int32_t, class BlockPos &) const;

    // symbol: ??1LegacyBlockPlacementProcessor@@QEAA@XZ
    MCAPI ~LegacyBlockPlacementProcessor();

    // NOLINTEND

};

