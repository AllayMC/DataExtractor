#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockEventDispatcher {
public:
    // prevent constructor by default
    BlockEventDispatcher& operator=(BlockEventDispatcher const &) = delete;
    BlockEventDispatcher(BlockEventDispatcher const &) = delete;
    BlockEventDispatcher() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?dispatchEvent@BlockEventDispatcher@@QEAAXAEBVBlockPos@@IAEBVBlock@@1PEAVActor@@@Z
    MCAPI void dispatchEvent(class BlockPos const &, uint32_t, class Block const &, class Block const &, class Actor *);

    // symbol: ?registerListener@BlockEventDispatcher@@QEAA?AVBlockEventDispatcherToken@@AEBVVec3@@MV?$function@$$A6AXAEBVBlockPos@@IAEBVBlock@@PEAVActor@@@Z@std@@@Z
    MCAPI class BlockEventDispatcherToken registerListener(class Vec3 const &, float, std::function<void (class BlockPos const &, uint32_t, class Block const &, class Actor *)>);

    // symbol: ?updatePosition@BlockEventDispatcher@@QEAAXHAEBVVec3@@@Z
    MCAPI void updatePosition(int32_t, class Vec3 const &);

    // NOLINTEND

};

