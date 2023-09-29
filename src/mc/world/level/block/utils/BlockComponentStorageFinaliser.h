#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockComponentStorageFinaliser {
public:
    // prevent constructor by default
    BlockComponentStorageFinaliser& operator=(BlockComponentStorageFinaliser const &) = delete;
    BlockComponentStorageFinaliser(BlockComponentStorageFinaliser const &) = delete;
    BlockComponentStorageFinaliser() = delete;

    // private:
    // NOLINTBEGIN
    // symbol: ?_checkForCollisionComponentBoxDuplication@BlockComponentStorageFinaliser@@AEAAXAEAVBlock@@@Z
    MCAPI void _checkForCollisionComponentBoxDuplication(class Block &);

    // symbol: ?_checkForSelectionBoxComponentDuplication@BlockComponentStorageFinaliser@@AEAAXAEAVBlock@@@Z
    MCAPI void _checkForSelectionBoxComponentDuplication(class Block &);

    // symbol: ?_finalizeCollisionBoxComponent@BlockComponentStorageFinaliser@@AEAAXAEAVBlock@@@Z
    MCAPI void _finalizeCollisionBoxComponent(class Block &);

    // symbol: ?_finalizeSelectionBoxComponent@BlockComponentStorageFinaliser@@AEAAXAEAVBlock@@@Z
    MCAPI void _finalizeSelectionBoxComponent(class Block &);

    // symbol: ?addRemainingComponents@BlockComponentStorageFinaliser@@AEAAXAEAVBlock@@@Z
    MCAPI void addRemainingComponents(class Block &);

    // symbol: ?finalizeComponentData@BlockComponentStorageFinaliser@@AEAAXAEAVBlock@@@Z
    MCAPI void finalizeComponentData(class Block &);

    // NOLINTEND

};

