#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ShareableComponent {
public:
    // prevent constructor by default
    ShareableComponent& operator=(ShareableComponent const &) = delete;
    ShareableComponent(ShareableComponent const &) = delete;
    ShareableComponent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?getCountToPickUp@ShareableComponent@@QEBAHAEBVActor@@AEBVItemActor@@@Z
    MCAPI int getCountToPickUp(class Actor const &, class ItemActor const &) const;

    // symbol: ?getCountToPickUp@ShareableComponent@@QEBAHAEBVActor@@AEBVItemStack@@@Z
    MCAPI int getCountToPickUp(class Actor const &, class ItemStack const &) const;

    // symbol: ?getSlotToSwap@ShareableComponent@@QEBAHAEAVActor@@AEBVItemActor@@@Z
    MCAPI int getSlotToSwap(class Actor &, class ItemActor const &) const;

    // symbol: ?hasSurplus@ShareableComponent@@QEBAHAEAVActor@@AEBVItemStack@@AEAV3@_N@Z
    MCAPI int hasSurplus(class Actor &, class ItemStack const &, class ItemStack &, bool) const;

    // symbol: ?hasSurplus@ShareableComponent@@QEBAHAEAVActor@@AEBVItemStack@@_N@Z
    MCAPI int hasSurplus(class Actor &, class ItemStack const &, bool) const;

    // symbol: ?itemBelongsInInventory@ShareableComponent@@QEBA_NAEAVActor@@AEBVItemStack@@_N@Z
    MCAPI bool itemBelongsInInventory(class Actor &, class ItemStack const &, bool) const;

    // symbol: ?wantsMore@ShareableComponent@@QEBAHAEBVActor@@AEBVItemStack@@@Z
    MCAPI int wantsMore(class Actor const &, class ItemStack const &) const;

    // symbol: ?willPickup@ShareableComponent@@QEBA_NAEAVActor@@AEBVItemStack@@_N2@Z
    MCAPI bool willPickup(class Actor &, class ItemStack const &, bool, bool) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getItemPriority@ShareableComponent@@AEBAHAEBVShareableDefinition@@AEBVItemStack@@@Z
    MCAPI int _getItemPriority(class ShareableDefinition const &, class ItemStack const &) const;

    // symbol: ?_shouldReplaceItem@ShareableComponent@@AEBA_NAEBVItemStack@@0AEBVShareableDefinition@@_N@Z
    MCAPI bool _shouldReplaceItem(class ItemStack const &, class ItemStack const &, class ShareableDefinition const &, bool) const;

    // NOLINTEND

};

