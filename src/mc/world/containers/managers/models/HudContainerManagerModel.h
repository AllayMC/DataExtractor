#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class HudContainerManagerModel : public ::ContainerManagerModel {
public:
    // prevent constructor by default
    HudContainerManagerModel& operator=(HudContainerManagerModel const &) = delete;
    HudContainerManagerModel(HudContainerManagerModel const &) = delete;
    HudContainerManagerModel() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 6, symbol: ?getItemCopies@HudContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7, symbol: ?setSlot@HudContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setSlot(int, class ItemStack const &, bool);

    // vIndex: 8, symbol: ?getSlot@HudContainerManagerModel@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const & getSlot(int) const;

    // vIndex: 9, symbol: ?setData@HudContainerManagerModel@@UEAAXHH@Z
    virtual void setData(int, int);

    // vIndex: 10, symbol: ?broadcastChanges@HudContainerManagerModel@@UEAAXXZ
    virtual void broadcastChanges();

    // vIndex: 17, symbol: ?_postInit@HudContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??0HudContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@@Z
    MCAPI HudContainerManagerModel(::ContainerID, class Player &);

    // NOLINTEND

};

