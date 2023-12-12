#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/BlockSource.h"

class Dimension {
public:
    char padding[1592];//0x638

public:
    // symbol: ?getHeight@Dimension@@QEBAFXZ
    MCAPI short getHeight() const;

    // symbol: ?getBlockSourceFromMainChunkSource@Dimension@@QEBAAEAVBlockSource@@XZ
    MCAPI class BlockSource& getBlockSourceFromMainChunkSource() const;

    // vIndex: 5, symbol: ?init@Dimension@@UEAAXXZ
    virtual void init();
};