#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemGroup {
public:
    // prevent constructor by default
    ItemGroup& operator=(ItemGroup const &) = delete;
    ItemGroup(ItemGroup const &) = delete;
    ItemGroup() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0ItemGroup@@QEAA@AEBVItemInstance@@@Z
    MCAPI ItemGroup(class ItemInstance const &);

    // symbol: ?isEmpty@ItemGroup@@QEBA_NXZ
    MCAPI bool isEmpty() const;

    // symbol: ??1ItemGroup@@QEAA@XZ
    MCAPI ~ItemGroup();

    // NOLINTEND

};

