#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class HorseEquipContainerValidation : public ::ContainerValidationBase {
public:
    // prevent constructor by default
    HorseEquipContainerValidation& operator=(HorseEquipContainerValidation const &) = delete;
    HorseEquipContainerValidation(HorseEquipContainerValidation const &) = delete;
    HorseEquipContainerValidation() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int32_t) const;

    // vIndex: 2, symbol: ?isItemAllowedInSlot@HorseEquipContainerValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const &, int32_t, class ItemStackBase const &, int32_t) const;

    // vIndex: 3, symbol: ?getAvailableSetCount@HorseEquipContainerValidation@@UEBAHHAEBVItemStackBase@@@Z
    virtual int32_t getAvailableSetCount(int32_t, class ItemStackBase const &) const;

    // vIndex: 4, symbol: ?isItemAllowedToAdd@HorseEquipContainerValidation@@UEBA_NAEBVItemStack@@@Z
    virtual bool isItemAllowedToAdd(class ItemStack const &) const;

    // vIndex: 5, symbol: ?isItemAllowedToRemove@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVItemStackBase@@@Z
    virtual bool isItemAllowedToRemove(class ContainerScreenContext const &, class ItemStackBase const &) const;

    // vIndex: 6, symbol: ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
    virtual bool canItemMoveToContainer(class ItemStackBase const &) const;

    // vIndex: 7, symbol: ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
    virtual bool canDestroy(class ContainerScreenContext const &) const;

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 9, symbol: ?getContainerSize@HorseEquipContainerValidation@@UEBAHAEBVContainerScreenContext@@AEBVContainer@@@Z
    virtual int32_t getContainerSize(class ContainerScreenContext const &, class Container const &) const;

    // symbol: ??0HorseEquipContainerValidation@@QEAA@AEBVContainerScreenContext@@@Z
    MCAPI HorseEquipContainerValidation(class ContainerScreenContext const &);

    // NOLINTEND

};

