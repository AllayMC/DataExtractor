#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class StorageItemComponent : public ::ItemComponent {
public:
    // prevent constructor by default
    StorageItemComponent& operator=(StorageItemComponent const &) = delete;
    StorageItemComponent(StorageItemComponent const &) = delete;
    StorageItemComponent() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ?calculateAddableCount@StorageItemComponent@@QEBAIAEBVItemStack@@AEBVItemStackBase@@@Z
    MCAPI uint32_t calculateAddableCount(class ItemStack const &, class ItemStackBase const &) const;

    // symbol: ?tryAddItemStack@StorageItemComponent@@QEBA_NAEAVItemStack@@0@Z
    MCAPI bool tryAddItemStack(class ItemStack &, class ItemStack &) const;

    // symbol: ?tryGenerateUserData@StorageItemComponent@@QEBAXAEAVItemStack@@@Z
    MCAPI void tryGenerateUserData(class ItemStack &) const;

    // symbol: ?tryRemoveItemStack@StorageItemComponent@@QEBA?AVItemStack@@AEAV2@@Z
    MCAPI class ItemStack tryRemoveItemStack(class ItemStack &) const;

    // symbol: ?tryRemoveOneFromItemStack@StorageItemComponent@@QEBA?AVItemStack@@AEAV2@@Z
    MCAPI class ItemStack tryRemoveOneFromItemStack(class ItemStack &) const;

    // symbol: ?getIdentifier@StorageItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const & getIdentifier();

    // symbol: ?DEFAULT_MAX_CARRY_WEIGHT@StorageItemComponent@@2IB
    MCAPI static uint32_t const DEFAULT_MAX_CARRY_WEIGHT;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_calculateAddableCountForBasicStorage@StorageItemComponent@@AEBAIAEBVItemStack@@AEBVItemStackBase@@@Z
    MCAPI uint32_t _calculateAddableCountForBasicStorage(class ItemStack const &, class ItemStackBase const &) const;

    // symbol: ?_getItemListSize@StorageItemComponent@@AEBAIAEAVItemStack@@@Z
    MCAPI uint32_t _getItemListSize(class ItemStack &) const;

    // symbol: ?_getPerItemCost@StorageItemComponent@@AEBAIAEBVItemStack@@AEBVItemStackBase@@@Z
    MCAPI uint32_t _getPerItemCost(class ItemStack const &, class ItemStackBase const &) const;

    // symbol: ?_storeItemInNewOrExistingSlot@StorageItemComponent@@AEBAXAEAVItemStack@@0I@Z
    MCAPI void _storeItemInNewOrExistingSlot(class ItemStack &, class ItemStack &, uint32_t) const;

    // symbol: ?_updateRemainingWeight@StorageItemComponent@@AEBAXAEAVItemStack@@AEBV2@H@Z
    MCAPI void _updateRemainingWeight(class ItemStack &, class ItemStack const &, int32_t) const;

    // NOLINTEND

};

