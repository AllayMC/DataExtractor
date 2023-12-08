#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockPalette {
public:
    // prevent constructor by default
    BlockPalette& operator=(BlockPalette const &) = delete;
    BlockPalette(BlockPalette const &) = delete;
    BlockPalette() = delete;

public:
    //symbol: ?getBlock@BlockPalette@@UEBAAEBVBlock@@AEBI@Z
    //这其实是虚函数, 但是我们已经没有能力维护虚函数表了
    class Block const & getBlock(uint32_t const &) const;
};

