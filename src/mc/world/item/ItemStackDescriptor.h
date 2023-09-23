#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptorCount.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ItemStackDescriptor : public ::ItemDescriptorCount {
public:
    // prevent constructor by default
    ItemStackDescriptor& operator=(ItemStackDescriptor const &) = delete;
    ItemStackDescriptor(ItemStackDescriptor const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1ItemStackDescriptor@@UEAA@XZ
    MCVAPI ~ItemStackDescriptor();

    // symbol: ??0ItemStackDescriptor@@QEAA@XZ
    MCAPI ItemStackDescriptor();

    // symbol: ??0ItemStackDescriptor@@QEAA@AEBVItem@@HGPEBVCompoundTag@@@Z
    MCAPI ItemStackDescriptor(class Item const &, int, ushort, class CompoundTag const *);

    // symbol: ??4ItemStackDescriptor@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class ItemStackDescriptor & operator=(class ItemStackDescriptor &&);

    // NOLINTEND

};

