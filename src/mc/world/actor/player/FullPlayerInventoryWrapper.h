#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"

class FullPlayerInventoryWrapper {
public:
    // prevent constructor by default
    FullPlayerInventoryWrapper& operator=(FullPlayerInventoryWrapper const &) = delete;
    FullPlayerInventoryWrapper(FullPlayerInventoryWrapper const &) = delete;
    FullPlayerInventoryWrapper() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0FullPlayerInventoryWrapper@@QEAA@AEAVPlayerInventory@@AEAVSimpleContainer@@1PEAVInventoryTransactionManager@@PEAVPlayer@@@Z
    MCAPI FullPlayerInventoryWrapper(class PlayerInventory &, class SimpleContainer &, class SimpleContainer &, class InventoryTransactionManager *, class Player *);

    // symbol: ?clearAllItems@FullPlayerInventoryWrapper@@QEAAHXZ
    MCAPI int clearAllItems();

    // symbol: ?getItemCount@FullPlayerInventoryWrapper@@QEAAHV?$function@$$A6A_NAEBVItemStack@@@Z@std@@@Z
    MCAPI int getItemCount(std::function<bool (class ItemStack const &)>);

    // symbol: ?removeResource@FullPlayerInventoryWrapper@@QEAAHAEBVItemStack@@V?$function@$$A6A_NAEBVItemStack@@@Z@std@@_NH@Z
    MCAPI int removeResource(class ItemStack const &, std::function<bool (class ItemStack const &)>, bool, int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_clearSimpleContainerItem@FullPlayerInventoryWrapper@@AEAAHAEAVSimpleContainer@@W4ContainerID@@H@Z
    MCAPI int _clearSimpleContainerItem(class SimpleContainer &, ::ContainerID, int);

    // symbol: ?_getSimpleContainerItemCount@FullPlayerInventoryWrapper@@AEAAHAEAVSimpleContainer@@HV?$function@$$A6A_NAEBVItemStack@@@Z@std@@@Z
    MCAPI int _getSimpleContainerItemCount(class SimpleContainer &, int, std::function<bool (class ItemStack const &)>);

    // symbol: ?_removeCursorItem@FullPlayerInventoryWrapper@@AEAAHAEBVItemStack@@_NH@Z
    MCAPI int _removeCursorItem(class ItemStack const &, bool, int);

    // symbol: ?_removeSimpleContainerItem@FullPlayerInventoryWrapper@@AEAAHAEAVSimpleContainer@@W4ContainerID@@HAEBVItemStack@@_NH@Z
    MCAPI int _removeSimpleContainerItem(class SimpleContainer &, ::ContainerID, int, class ItemStack const &, bool, int);

    // symbol: ?_sendCursorSlotPacket@FullPlayerInventoryWrapper@@AEBAXXZ
    MCAPI void _sendCursorSlotPacket() const;

    // NOLINTEND

};

