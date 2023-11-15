#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EquipItemComponent {
public:
    // prevent constructor by default
    EquipItemComponent& operator=(EquipItemComponent const &) = delete;
    EquipItemComponent(EquipItemComponent const &) = delete;
    EquipItemComponent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?onEquipItemPickedUp@EquipItemComponent@@QEAAXVItemStack@@H@Z
    MCAPI void onEquipItemPickedUp(class ItemStack, int32_t);

    // symbol: ??1EquipItemComponent@@QEAA@XZ
    MCAPI ~EquipItemComponent();

    // NOLINTEND

};

