#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelChunkMetaData {
public:
    // prevent constructor by default
    LevelChunkMetaData& operator=(LevelChunkMetaData const &) = delete;
    LevelChunkMetaData(LevelChunkMetaData const &) = delete;
    LevelChunkMetaData() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1LevelChunkMetaData@@QEAA@XZ
    MCAPI ~LevelChunkMetaData();

    // symbol: ?INVALID_META_DATA@LevelChunkMetaData@@2_KB
    MCAPI static uint64_t const INVALID_META_DATA;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_recomputeHash@LevelChunkMetaData@@IEBAXXZ
    MCAPI void _recomputeHash() const;

    // NOLINTEND

};

