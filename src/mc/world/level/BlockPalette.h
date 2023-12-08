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
    //����ʵ���麯��, ���������Ѿ�û������ά���麯������
    class Block const & getBlock(uint32_t const &) const;
};

