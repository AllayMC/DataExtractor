#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/LabTableReactionType.h"

class LabTableReaction {
public:
    // prevent constructor by default
    LabTableReaction& operator=(LabTableReaction const &) = delete;
    LabTableReaction(LabTableReaction const &) = delete;
    LabTableReaction() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?addComponent@LabTableReaction@@QEAAXV?$unique_ptr@VLabTableReactionComponent@@U?$default_delete@VLabTableReactionComponent@@@std@@@std@@@Z
    MCAPI void addComponent(std::unique_ptr<class LabTableReactionComponent>);

    // symbol: ?addResultItem@LabTableReaction@@QEAAXAEBVItemStack@@@Z
    MCAPI void addResultItem(class ItemStack const &);

    // symbol: ?getReactionId@LabTableReaction@@QEAAHXZ
    MCAPI int32_t getReactionId();

    // symbol: ?getType@LabTableReaction@@QEAA?AW4LabTableReactionType@@XZ
    MCAPI ::LabTableReactionType getType();

    // symbol: ?tick@LabTableReaction@@QEAA_NAEAVBlockSource@@@Z
    MCAPI bool tick(class BlockSource &);

    // symbol: ?createReaction@LabTableReaction@@SA?AV?$unique_ptr@VLabTableReaction@@U?$default_delete@VLabTableReaction@@@std@@@std@@W4LabTableReactionType@@AEBVBlockPos@@_N@Z
    MCAPI static std::unique_ptr<class LabTableReaction> createReaction(::LabTableReactionType, class BlockPos const &, bool);

    // NOLINTEND

};

