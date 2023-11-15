#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BrewingStandBlockActor {
public:
    // prevent constructor by default
    BrewingStandBlockActor& operator=(BrewingStandBlockActor const &) = delete;
    BrewingStandBlockActor(BrewingStandBlockActor const &) = delete;
    BrewingStandBlockActor() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?canPullOutItem@BrewingStandBlockActor@@UEBA_NHHAEBVItemStack@@@Z
    MCVAPI bool canPullOutItem(int32_t, int32_t, class ItemStack const &) const;

    // symbol: ?canPushInItem@BrewingStandBlockActor@@UEBA_NHHAEBVItemStack@@@Z
    MCVAPI bool canPushInItem(int32_t, int32_t, class ItemStack const &) const;

    // symbol: ?getContainer@BrewingStandBlockActor@@UEAAPEAVContainer@@XZ
    MCVAPI class Container * getContainer();

    // symbol: ?getContainer@BrewingStandBlockActor@@UEBAPEBVContainer@@XZ
    MCVAPI class Container const * getContainer() const;

    // symbol: ?getContainerSize@BrewingStandBlockActor@@UEBAHXZ
    MCVAPI int32_t getContainerSize() const;

    // symbol: ?getItem@BrewingStandBlockActor@@UEBAAEBVItemStack@@H@Z
    MCVAPI class ItemStack const & getItem(int32_t) const;

    // symbol: ?getMaxStackSize@BrewingStandBlockActor@@UEBAHXZ
    MCVAPI int32_t getMaxStackSize() const;

    // symbol: ?getName@BrewingStandBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getName() const;

    // symbol: ?load@BrewingStandBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);

    // symbol: ?onChanged@BrewingStandBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void onChanged(class BlockSource &);

    // symbol: ?onMove@BrewingStandBlockActor@@UEAAXXZ
    MCVAPI void onMove();

    // symbol: ?save@BrewingStandBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    MCVAPI bool save(class CompoundTag &) const;

    // symbol: ?serverInitItemStackIds@BrewingStandBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCVAPI void serverInitItemStackIds(int32_t, int32_t, std::function<void (int32_t, class ItemStack const &)>);

    // symbol: ?setContainerChanged@BrewingStandBlockActor@@UEAAXH@Z
    MCVAPI void setContainerChanged(int32_t);

    // symbol: ?setItem@BrewingStandBlockActor@@UEAAXHAEBVItemStack@@@Z
    MCVAPI void setItem(int32_t, class ItemStack const &);

    // symbol: ?startOpen@BrewingStandBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void startOpen(class Player &);

    // symbol: ?stopOpen@BrewingStandBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void stopOpen(class Player &);

    // symbol: ?tick@BrewingStandBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void tick(class BlockSource &);

    // symbol: ?brew@BrewingStandBlockActor@@QEAAXXZ
    MCAPI void brew();

    // symbol: ?getBrewTime@BrewingStandBlockActor@@QEBAHXZ
    MCAPI int32_t getBrewTime() const;

    // symbol: ?getFuelAmount@BrewingStandBlockActor@@QEBAHXZ
    MCAPI int32_t getFuelAmount() const;

    // symbol: ?getFuelTotal@BrewingStandBlockActor@@QEBAHXZ
    MCAPI int32_t getFuelTotal() const;

    // symbol: ?setBrewTime@BrewingStandBlockActor@@QEAAXH@Z
    MCAPI void setBrewTime(int32_t);

    // symbol: ?setFuelAmount@BrewingStandBlockActor@@QEAAXH@Z
    MCAPI void setFuelAmount(int32_t);

    // symbol: ?setFuelTotal@BrewingStandBlockActor@@QEAAXH@Z
    MCAPI void setFuelTotal(int32_t);

    // symbol: ?isFuel@BrewingStandBlockActor@@SA_NAEBVItemDescriptor@@@Z
    MCAPI static bool isFuel(class ItemDescriptor const &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?canBrew@BrewingStandBlockActor@@AEAA_NXZ
    MCAPI bool canBrew();

    // NOLINTEND

};

