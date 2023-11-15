#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BlockState.h"

class CustomBlockStateVariant : public ::BlockState {
public:
    // prevent constructor by default
    CustomBlockStateVariant& operator=(CustomBlockStateVariant const &) = delete;
    CustomBlockStateVariant(CustomBlockStateVariant const &) = delete;
    CustomBlockStateVariant() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?toNBT@CustomBlockStateVariant@@UEBAXAEAVCompoundTag@@H@Z
    virtual void toNBT(class CompoundTag &, int32_t) const;

    // vIndex: 2, symbol: ?fromNBT@CustomBlockStateVariant@@UEBA_NAEBVCompoundTag@@AEAH@Z
    virtual bool fromNBT(class CompoundTag const &, int32_t &) const;

    // NOLINTEND

};

