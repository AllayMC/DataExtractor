#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/level/block/utils/BlockActorType.h"

class FurnaceBlockActor {
public:
    // prevent constructor by default
    FurnaceBlockActor& operator=(FurnaceBlockActor const &) = delete;
    FurnaceBlockActor(FurnaceBlockActor const &) = delete;
    FurnaceBlockActor() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?_getUpdatePacket@FurnaceBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);

    // symbol: ?_onUpdatePacket@FurnaceBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);

    // symbol: ?canPullOutItem@FurnaceBlockActor@@UEBA_NHHAEBVItemStack@@@Z
    MCVAPI bool canPullOutItem(int32_t, int32_t, class ItemStack const &) const;

    // symbol: ?canPushInItem@FurnaceBlockActor@@UEBA_NHHAEBVItemStack@@@Z
    MCVAPI bool canPushInItem(int32_t, int32_t, class ItemStack const &) const;

    // symbol: ?fixupOnLoad@FurnaceBlockActor@@UEAAXAEAVLevelChunk@@@Z
    MCVAPI void fixupOnLoad(class LevelChunk &);

    // symbol: ?getContainer@FurnaceBlockActor@@UEAAPEAVContainer@@XZ
    MCVAPI class Container * getContainer();

    // symbol: ?getContainer@FurnaceBlockActor@@UEBAPEBVContainer@@XZ
    MCVAPI class Container const * getContainer() const;

    // symbol: ?getContainerSize@FurnaceBlockActor@@UEBAHXZ
    MCVAPI int32_t getContainerSize() const;

    // symbol: ?getItem@FurnaceBlockActor@@UEBAAEBVItemStack@@H@Z
    MCVAPI class ItemStack const & getItem(int32_t) const;

    // symbol: ?getMaxStackSize@FurnaceBlockActor@@UEBAHXZ
    MCVAPI int32_t getMaxStackSize() const;

    // symbol: ?getName@FurnaceBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getName() const;

    // symbol: ?load@FurnaceBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);

    // symbol: ?onCustomTagLoadDone@FurnaceBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void onCustomTagLoadDone(class BlockSource &);

    // symbol: ?onMove@FurnaceBlockActor@@UEAAXXZ
    MCVAPI void onMove();

    // symbol: ?onNeighborChanged@FurnaceBlockActor@@UEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCVAPI void onNeighborChanged(class BlockSource &, class BlockPos const &);

    // symbol: ?save@FurnaceBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    MCVAPI bool save(class CompoundTag &) const;

    // symbol: ?serverInitItemStackIds@FurnaceBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCVAPI void serverInitItemStackIds(int32_t, int32_t, std::function<void (int32_t, class ItemStack const &)>);

    // symbol: ?setItem@FurnaceBlockActor@@UEAAXHAEBVItemStack@@@Z
    MCVAPI void setItem(int32_t, class ItemStack const &);

    // symbol: ?startOpen@FurnaceBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void startOpen(class Player &);

    // symbol: ?stopOpen@FurnaceBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void stopOpen(class Player &);

    // symbol: ?tick@FurnaceBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void tick(class BlockSource &);

    // symbol: ??1FurnaceBlockActor@@UEAA@XZ
    MCVAPI ~FurnaceBlockActor();

    // symbol: ??0FurnaceBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI FurnaceBlockActor(class BlockPos const &);

    // symbol: ?checkForAlternativeFuelAchievement@FurnaceBlockActor@@QEAAXAEAVBlockSource@@AEBVItemStack@@@Z
    MCAPI void checkForAlternativeFuelAchievement(class BlockSource &, class ItemStack const &);

    // symbol: ?checkForSmeltEverythingAchievement@FurnaceBlockActor@@QEAAXAEAVBlockSource@@@Z
    MCAPI void checkForSmeltEverythingAchievement(class BlockSource &);

    // symbol: ?getLitDuration@FurnaceBlockActor@@QEBAHXZ
    MCAPI int32_t getLitDuration() const;

    // symbol: ?getLitTime@FurnaceBlockActor@@QEBAHXZ
    MCAPI int32_t getLitTime() const;

    // symbol: ?getStoredXP@FurnaceBlockActor@@QEBAHXZ
    MCAPI int32_t getStoredXP() const;

    // symbol: ?getTickCount@FurnaceBlockActor@@QEBAHXZ
    MCAPI int32_t getTickCount() const;

    // symbol: ?isEmptiedByHopper@FurnaceBlockActor@@QEAA_NAEAVBlockSource@@@Z
    MCAPI bool isEmptiedByHopper(class BlockSource &);

    // symbol: ?onFurnaceBlockRemoved@FurnaceBlockActor@@QEAAXAEAVBlockSource@@@Z
    MCAPI void onFurnaceBlockRemoved(class BlockSource &);

    // symbol: ?setLitDuration@FurnaceBlockActor@@QEAAXH@Z
    MCAPI void setLitDuration(int32_t);

    // symbol: ?setLitTime@FurnaceBlockActor@@QEAAXH@Z
    MCAPI void setLitTime(int32_t);

    // symbol: ?setStoredXP@FurnaceBlockActor@@QEAAXH@Z
    MCAPI void setStoredXP(int32_t);

    // symbol: ?setTickCount@FurnaceBlockActor@@QEAAXH@Z
    MCAPI void setTickCount(int32_t);

    // symbol: ?storeXPRewardForRemovingWithHopper@FurnaceBlockActor@@QEAAXAEBVItemStackBase@@H@Z
    MCAPI void storeXPRewardForRemovingWithHopper(class ItemStackBase const &, int32_t);

    // symbol: ?withdrawStoredXPReward@FurnaceBlockActor@@QEAAHXZ
    MCAPI int32_t withdrawStoredXPReward();

    // symbol: ?getAvailableFuelSetCount@FurnaceBlockActor@@SAHHAEBVItemStackBase@@@Z
    MCAPI static int32_t getAvailableFuelSetCount(int32_t, class ItemStackBase const &);

    // symbol: ?getBurnDuration@FurnaceBlockActor@@SAMAEBVItemStackBase@@M@Z
    MCAPI static float getBurnDuration(class ItemStackBase const &, float);

    // symbol: ?getItemBurnDuration@FurnaceBlockActor@@SAMAEBVItem@@M@Z
    MCAPI static float getItemBurnDuration(class Item const &, float);

    // symbol: ?getXPRewardFromSmeltingItems@FurnaceBlockActor@@SAHAEBVItemStackBase@@H@Z
    MCAPI static int32_t getXPRewardFromSmeltingItems(class ItemStackBase const &, int32_t);

    // symbol: ?isItemAllowedInFuelSlot@FurnaceBlockActor@@SA_NHAEBVItemStackBase@@H@Z
    MCAPI static bool isItemAllowedInFuelSlot(int32_t, class ItemStackBase const &, int32_t);

    // symbol: ?BURN_INTERVAL@FurnaceBlockActor@@2HB
    MCAPI static int32_t const BURN_INTERVAL;

    // symbol: ?DEFAULT_SMELTING_TIME@FurnaceBlockActor@@2MB
    MCAPI static float const DEFAULT_SMELTING_TIME;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0FurnaceBlockActor@@IEAA@W4BlockActorType@@AEBVBlockPos@@AEBVHashedString@@W4LevelSoundEvent@@W4ContainerType@@HAEBVBlock@@5@Z
    MCAPI FurnaceBlockActor(::BlockActorType, class BlockPos const &, class HashedString const &, ::LevelSoundEvent, ::ContainerType, int32_t, class Block const &, class Block const &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_refreshFurnaceBlockLitState@FurnaceBlockActor@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _refreshFurnaceBlockLitState(class BlockSource &);

    // symbol: ?burn@FurnaceBlockActor@@AEAAXAEBVRecipes@@@Z
    MCAPI void burn(class Recipes const &);

    // symbol: ?canBurn@FurnaceBlockActor@@AEAA_NAEBVRecipes@@@Z
    MCAPI bool canBurn(class Recipes const &);

    // symbol: ?_getXPRewardMultiplier@FurnaceBlockActor@@CAMAEBVItemStackBase@@@Z
    MCAPI static float _getXPRewardMultiplier(class ItemStackBase const &);

    // symbol: ?_roundXPReward@FurnaceBlockActor@@CAHM@Z
    MCAPI static int32_t _roundXPReward(float);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?BURN_DURATION_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const BURN_DURATION_KEY;

    // symbol: ?BURN_TIME_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const BURN_TIME_KEY;

    // symbol: ?COOK_TIME_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const COOK_TIME_KEY;

    // symbol: ?CUSTOM_NAME_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const CUSTOM_NAME_KEY;

    // symbol: ?ITEMS_LIST_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const ITEMS_LIST_KEY;

    // symbol: ?LAST_FUEL_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const LAST_FUEL_KEY;

    // symbol: ?SLOT_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const SLOT_KEY;

    // symbol: ?STORED_XP_DEPRECATED_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const STORED_XP_DEPRECATED_KEY;

    // symbol: ?STORED_XP_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const STORED_XP_KEY;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $BURN_DURATION_KEY() { return BURN_DURATION_KEY; }

    inline auto& $BURN_TIME_KEY() { return BURN_TIME_KEY; }

    inline auto& $COOK_TIME_KEY() { return COOK_TIME_KEY; }

    inline auto& $CUSTOM_NAME_KEY() { return CUSTOM_NAME_KEY; }

    inline auto& $ITEMS_LIST_KEY() { return ITEMS_LIST_KEY; }

    inline auto& $LAST_FUEL_KEY() { return LAST_FUEL_KEY; }

    inline auto& $SLOT_KEY() { return SLOT_KEY; }

    inline auto& $STORED_XP_DEPRECATED_KEY() { return STORED_XP_DEPRECATED_KEY; }

    inline auto& $STORED_XP_KEY() { return STORED_XP_KEY; }

    // NOLINTEND

};

