#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkTickRangeManager {
public:
    // prevent constructor by default
    ChunkTickRangeManager& operator=(ChunkTickRangeManager const &) = delete;
    ChunkTickRangeManager(ChunkTickRangeManager const &) = delete;
    ChunkTickRangeManager() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0ChunkTickRangeManager@@QEAA@II@Z
    MCAPI ChunkTickRangeManager(uint32_t, uint32_t);

    // symbol: ?getAdjustedChunkTickRange@ChunkTickRangeManager@@QEAAIAEBVLevelSettings@@@Z
    MCAPI uint32_t getAdjustedChunkTickRange(class LevelSettings const &);

    // symbol: ?isChunkInTickRange@ChunkTickRangeManager@@QEBA_NAEBVChunkPos@@AEBVDimension@@_NMHH@Z
    MCAPI bool isChunkInTickRange(class ChunkPos const &, class Dimension const &, bool, float, int32_t, int32_t) const;

    // symbol: ?isChunkInTickRange@ChunkTickRangeManager@@QEBA_NAEBVLevelChunk@@V?$optional@H@std@@@Z
    MCAPI bool isChunkInTickRange(class LevelChunk const &, std::optional<int32_t>) const;

    // symbol: ?setChunkTickRange@ChunkTickRangeManager@@QEAAXI@Z
    MCAPI void setChunkTickRange(uint32_t);

    // NOLINTEND

};

