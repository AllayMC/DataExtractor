#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockStateDefinition {
public:
    // prevent constructor by default
    BlockStateDefinition& operator=(BlockStateDefinition const &) = delete;
    BlockStateDefinition(BlockStateDefinition const &) = delete;
    BlockStateDefinition() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??4BlockStateDefinition@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct BlockStateDefinition & operator=(struct BlockStateDefinition &&);

    // symbol: ??1BlockStateDefinition@@QEAA@XZ
    MCAPI ~BlockStateDefinition();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_copy@BlockStateDefinition@@AEAAXAEBU1@@Z
    MCAPI void _copy(struct BlockStateDefinition const &);

    // NOLINTEND

};

