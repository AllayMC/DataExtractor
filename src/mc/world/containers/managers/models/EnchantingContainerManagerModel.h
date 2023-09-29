#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class EnchantingContainerManagerModel : public ::ContainerManagerModel {
public:
    // prevent constructor by default
    EnchantingContainerManagerModel& operator=(EnchantingContainerManagerModel const &) = delete;
    EnchantingContainerManagerModel(EnchantingContainerManagerModel const &) = delete;
    EnchantingContainerManagerModel() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 6, symbol: ?getItemCopies@EnchantingContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7, symbol: ?setSlot@EnchantingContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setSlot(int, class ItemStack const &, bool);

    // vIndex: 8, symbol: ?getSlot@EnchantingContainerManagerModel@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const & getSlot(int) const;

    // vIndex: 9, symbol: ?setData@EnchantingContainerManagerModel@@UEAAXHH@Z
    virtual void setData(int, int);

    // vIndex: 10, symbol: ?broadcastChanges@EnchantingContainerManagerModel@@UEAAXXZ
    virtual void broadcastChanges();

    // vIndex: 16, symbol: ?isValid@EnchantingContainerManagerModel@@UEAA_NM@Z
    virtual bool isValid(float);

    // vIndex: 17, symbol: ?_postInit@EnchantingContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??0EnchantingContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI EnchantingContainerManagerModel(::ContainerID, class Player &, class BlockPos const &);

    // symbol: ?getEnchantOptions@EnchantingContainerManagerModel@@QEBAAEBV?$vector@VItemEnchantOption@@V?$allocator@VItemEnchantOption@@@std@@@std@@XZ
    MCAPI std::vector<class ItemEnchantOption> const & getEnchantOptions() const;

    // symbol: ?recalculateOptions@EnchantingContainerManagerModel@@QEAAXXZ
    MCAPI void recalculateOptions();

    // symbol: ?NUM_OPTIONS@EnchantingContainerManagerModel@@2HB
    MCAPI static int const NUM_OPTIONS;

    // NOLINTEND

};

