#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockTryDestroyByPlayerEvent {
public:
    // prevent constructor by default
    BlockTryDestroyByPlayerEvent& operator=(BlockTryDestroyByPlayerEvent const &) = delete;
    BlockTryDestroyByPlayerEvent(BlockTryDestroyByPlayerEvent const &) = delete;
    BlockTryDestroyByPlayerEvent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1BlockTryDestroyByPlayerEvent@@QEAA@XZ
    MCAPI ~BlockTryDestroyByPlayerEvent();

    // NOLINTEND

};

