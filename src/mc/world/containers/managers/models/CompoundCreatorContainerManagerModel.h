#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class CompoundCreatorContainerManagerModel : public ::ContainerManagerModel {
public:
    // prevent constructor by default
    CompoundCreatorContainerManagerModel& operator=(CompoundCreatorContainerManagerModel const &) = delete;
    CompoundCreatorContainerManagerModel(CompoundCreatorContainerManagerModel const &) = delete;
    CompoundCreatorContainerManagerModel() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 6, symbol: ?getItemCopies@CompoundCreatorContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7, symbol: ?setSlot@CompoundCreatorContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setSlot(int32_t, class ItemStack const &, bool);

    // vIndex: 8, symbol: ?getSlot@CompoundCreatorContainerManagerModel@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const & getSlot(int32_t) const;

    // vIndex: 9, symbol: ?setData@CompoundCreatorContainerManagerModel@@UEAAXHH@Z
    virtual void setData(int32_t, int32_t);

    // vIndex: 10, symbol: ?broadcastChanges@CompoundCreatorContainerManagerModel@@UEAAXXZ
    virtual void broadcastChanges();

    // vIndex: 16, symbol: ?isValid@CompoundCreatorContainerManagerModel@@UEAA_NM@Z
    virtual bool isValid(float);

    // vIndex: 17, symbol: ?_postInit@CompoundCreatorContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??0CompoundCreatorContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI CompoundCreatorContainerManagerModel(::ContainerID, class Player &, class BlockPos const &);

    // NOLINTEND

};

