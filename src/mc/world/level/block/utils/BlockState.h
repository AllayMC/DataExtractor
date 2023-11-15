#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockState {
public:
    // BlockState inner types declare
    // clang-format off
    struct StateListNode;
    // clang-format on
    
    // BlockState inner types define
    struct StateListNode {
    public:
        // prevent constructor by default
        StateListNode& operator=(StateListNode const &) = delete;
        StateListNode(StateListNode const &) = delete;
        StateListNode() = delete;
    
    public:
        // NOLINTBEGIN
        // symbol: ??0StateListNode@BlockState@@QEAA@PEAV1@@Z
        MCAPI StateListNode(class BlockState *);
    
        // symbol: ??1StateListNode@BlockState@@QEAA@XZ
        MCAPI ~StateListNode();
    
        // symbol: ?mHead@StateListNode@BlockState@@2PEAU12@EA
        MCAPI static struct BlockState::StateListNode * mHead;
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    BlockState& operator=(BlockState const &) = delete;
    BlockState(BlockState const &) = delete;
    BlockState() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?toNBT@?$BlockStateVariant@E@@UEBAXAEAVCompoundTag@@H@Z
    virtual void toNBT(class CompoundTag &, int32_t) const = 0;

    // vIndex: 2, symbol: ?fromNBT@?$BlockStateVariant@E@@UEBA_NAEBVCompoundTag@@AEAH@Z
    virtual bool fromNBT(class CompoundTag const &, int32_t &) const = 0;

    // symbol: ??1BlockState@@UEAA@XZ
    MCVAPI ~BlockState();

    // symbol: ?forEachState@BlockState@@SAXV?$function@$$A6A_NAEBVBlockState@@@Z@std@@@Z
    MCAPI static void forEachState(std::function<bool (class BlockState const &)>);

    // NOLINTEND

};

