#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"

class CraftingContainer : public ::Container {
public:
    // prevent constructor by default
    CraftingContainer& operator=(CraftingContainer const &) = delete;
    CraftingContainer(CraftingContainer const &) = delete;
    CraftingContainer() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?serverInitItemStackIds@CraftingContainer@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    virtual void serverInitItemStackIds(int32_t, int32_t, std::function<void (int32_t, class ItemStack const &)>);

    // vIndex: 5, symbol: ?getItem@CraftingContainer@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const & getItem(int32_t) const;

    // vIndex: 10, symbol: ?setItem@CraftingContainer@@UEAAXHAEBVItemStack@@@Z
    virtual void setItem(int32_t, class ItemStack const &);

    // vIndex: 16, symbol: ?getContainerSize@CraftingContainer@@UEBAHXZ
    virtual int32_t getContainerSize() const;

    // vIndex: 17, symbol: ?getMaxStackSize@CraftingContainer@@UEBAHXZ
    virtual int32_t getMaxStackSize() const;

    // vIndex: 18, symbol: ?startOpen@CraftingContainer@@UEAAXAEAVPlayer@@@Z
    virtual void startOpen(class Player &);

    // vIndex: 19, symbol: ?stopOpen@CraftingContainer@@UEAAXAEAVPlayer@@@Z
    virtual void stopOpen(class Player &);

    // vIndex: 25, symbol: __unk_vfn_25
    virtual void __unk_vfn_25();

    // vIndex: 26, symbol: __unk_vfn_26
    virtual void __unk_vfn_26();

    // vIndex: 27, symbol: ?setContainerChanged@CraftingContainer@@UEAAXH@Z
    virtual void setContainerChanged(int32_t);

    // symbol: ??1CraftingContainer@@UEAA@XZ
    MCVAPI ~CraftingContainer();

    // symbol: ??0CraftingContainer@@QEAA@HH@Z
    MCAPI CraftingContainer(int32_t, int32_t);

    // symbol: ?getItem@CraftingContainer@@QEBAAEBVItemStack@@HH@Z
    MCAPI class ItemStack const & getItem(int32_t, int32_t) const;

    // NOLINTEND

};

