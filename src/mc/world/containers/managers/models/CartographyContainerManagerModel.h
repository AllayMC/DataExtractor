#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class CartographyContainerManagerModel : public ::ContainerManagerModel {
public:
    // prevent constructor by default
    CartographyContainerManagerModel& operator=(CartographyContainerManagerModel const &) = delete;
    CartographyContainerManagerModel(CartographyContainerManagerModel const &) = delete;
    CartographyContainerManagerModel() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 6, symbol: ?getItemCopies@CartographyContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7, symbol: ?setSlot@CartographyContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setSlot(int32_t, class ItemStack const &, bool);

    // vIndex: 8, symbol: ?getSlot@CartographyContainerManagerModel@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const & getSlot(int32_t) const;

    // vIndex: 9, symbol: ?setData@CartographyContainerManagerModel@@UEAAXHH@Z
    virtual void setData(int32_t, int32_t);

    // vIndex: 10, symbol: ?broadcastChanges@CartographyContainerManagerModel@@UEAAXXZ
    virtual void broadcastChanges();

    // vIndex: 16, symbol: ?isValid@CartographyContainerManagerModel@@UEAA_NM@Z
    virtual bool isValid(float);

    // vIndex: 17, symbol: ?_postInit@CartographyContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??0CartographyContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI CartographyContainerManagerModel(::ContainerID, class Player &, class BlockPos const &);

    // NOLINTEND

};

