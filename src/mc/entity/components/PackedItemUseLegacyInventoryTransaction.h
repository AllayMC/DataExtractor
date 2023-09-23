#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PackedItemUseLegacyInventoryTransaction {
public:
    // prevent constructor by default
    PackedItemUseLegacyInventoryTransaction& operator=(PackedItemUseLegacyInventoryTransaction const &) = delete;
    PackedItemUseLegacyInventoryTransaction(PackedItemUseLegacyInventoryTransaction const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0PackedItemUseLegacyInventoryTransaction@@QEAA@XZ
    MCAPI PackedItemUseLegacyInventoryTransaction();

    // symbol: ??0PackedItemUseLegacyInventoryTransaction@@QEAA@$$QEAU0@@Z
    MCAPI PackedItemUseLegacyInventoryTransaction(struct PackedItemUseLegacyInventoryTransaction &&);

    // symbol: ??1PackedItemUseLegacyInventoryTransaction@@QEAA@XZ
    MCAPI ~PackedItemUseLegacyInventoryTransaction();

    // NOLINTEND

};

