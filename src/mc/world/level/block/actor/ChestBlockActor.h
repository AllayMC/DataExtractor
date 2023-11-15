#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/RandomizableBlockActorFillingContainer.h"
#include "mc/world/level/block/utils/BlockActorRendererId.h"
#include "mc/world/level/block/utils/BlockActorType.h"

class ChestBlockActor : public ::RandomizableBlockActorFillingContainer {
public:
    // prevent constructor by default
    ChestBlockActor& operator=(ChestBlockActor const &) = delete;
    ChestBlockActor(ChestBlockActor const &) = delete;
    ChestBlockActor() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?_canOpenThis@ChestBlockActor@@MEBA_NAEAVBlockSource@@@Z
    MCVAPI bool _canOpenThis(class BlockSource &) const;

    // symbol: ?_detectEntityObstruction@ChestBlockActor@@MEBA_NAEAVBlockSource@@@Z
    MCVAPI bool _detectEntityObstruction(class BlockSource &) const;

    // symbol: ?_getUpdatePacket@ChestBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);

    // symbol: ?_onUpdatePacket@ChestBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);

    // symbol: ?addContentChangeListener@ChestBlockActor@@UEAAXPEAVContainerContentChangeListener@@@Z
    MCVAPI void addContentChangeListener(class ContainerContentChangeListener *);

    // symbol: ?canPullOutItem@ChestBlockActor@@UEBA_NHHAEBVItemStack@@@Z
    MCVAPI bool canPullOutItem(int32_t, int32_t, class ItemStack const &) const;

    // symbol: ?canPushInItem@ChestBlockActor@@UEBA_NHHAEBVItemStack@@@Z
    MCVAPI bool canPushInItem(int32_t, int32_t, class ItemStack const &) const;

    // symbol: ?clearCache@ChestBlockActor@@UEAAXXZ
    MCVAPI void clearCache();

    // symbol: ?clearInventory@ChestBlockActor@@UEAAHH@Z
    MCVAPI int32_t clearInventory(int32_t);

    // symbol: ?eraseLootTable@ChestBlockActor@@UEAAXXZ
    MCVAPI void eraseLootTable();

    // symbol: ?getContainer@ChestBlockActor@@UEAAPEAVContainer@@XZ
    MCVAPI class Container * getContainer();

    // symbol: ?getContainer@ChestBlockActor@@UEBAPEBVContainer@@XZ
    MCVAPI class Container const * getContainer() const;

    // symbol: ?getContainerSize@ChestBlockActor@@UEBAHXZ
    MCVAPI int32_t getContainerSize() const;

    // symbol: ?getCrackEntity@ChestBlockActor@@UEAAPEAVBlockActor@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCVAPI class BlockActor * getCrackEntity(class BlockSource &, class BlockPos const &);

    // symbol: ?getDebugText@ChestBlockActor@@UEAAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVBlockPos@@@Z
    MCVAPI void getDebugText(std::vector<std::string> &, class BlockPos const &);

    // symbol: ?getItem@ChestBlockActor@@UEBAAEBVItemStack@@H@Z
    MCVAPI class ItemStack const & getItem(int32_t) const;

    // symbol: ?getMaxStackSize@ChestBlockActor@@UEBAHXZ
    MCVAPI int32_t getMaxStackSize() const;

    // symbol: ?getName@ChestBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getName() const;

    // symbol: ?getObstructionAABB@ChestBlockActor@@MEBA?AVAABB@@XZ
    MCVAPI class AABB getObstructionAABB() const;

    // symbol: ?initializeContainerContents@ChestBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void initializeContainerContents(class BlockSource &);

    // symbol: ?load@ChestBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);

    // symbol: ?loadItems@ChestBlockActor@@UEAAXAEBVCompoundTag@@AEAVLevel@@@Z
    MCVAPI void loadItems(class CompoundTag const &, class Level &);

    // symbol: ?onChanged@ChestBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void onChanged(class BlockSource &);

    // symbol: ?onMove@ChestBlockActor@@UEAAXXZ
    MCVAPI void onMove();

    // symbol: ?onNeighborChanged@ChestBlockActor@@UEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCVAPI void onNeighborChanged(class BlockSource &, class BlockPos const &);

    // symbol: ?onPlace@ChestBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void onPlace(class BlockSource &);

    // symbol: ?onRemoved@ChestBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void onRemoved(class BlockSource &);

    // symbol: ?playCloseSound@ChestBlockActor@@MEAAXAEAVBlockSource@@@Z
    MCVAPI void playCloseSound(class BlockSource &);

    // symbol: ?playOpenSound@ChestBlockActor@@MEAAXAEAVBlockSource@@@Z
    MCVAPI void playOpenSound(class BlockSource &);

    // symbol: ?removeContentChangeListener@ChestBlockActor@@UEAAXPEAVContainerContentChangeListener@@@Z
    MCVAPI void removeContentChangeListener(class ContainerContentChangeListener *);

    // symbol: ?save@ChestBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    MCVAPI bool save(class CompoundTag &) const;

    // symbol: ?saveItemInstanceData@ChestBlockActor@@UEAA_NAEAVCompoundTag@@@Z
    MCVAPI bool saveItemInstanceData(class CompoundTag &);

    // symbol: ?saveItems@ChestBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    MCVAPI bool saveItems(class CompoundTag &) const;

    // symbol: ?serverInitItemStackIds@ChestBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCVAPI void serverInitItemStackIds(int32_t, int32_t, std::function<void (int32_t, class ItemStack const &)>);

    // symbol: ?setContainerChanged@ChestBlockActor@@UEAAXH@Z
    MCVAPI void setContainerChanged(int32_t);

    // symbol: ?setItem@ChestBlockActor@@UEAAXHAEBVItemStack@@@Z
    MCVAPI void setItem(int32_t, class ItemStack const &);

    // symbol: ?setItemWithForceBalance@ChestBlockActor@@UEAAXHAEBVItemStack@@_N@Z
    MCVAPI void setItemWithForceBalance(int32_t, class ItemStack const &, bool);

    // symbol: ?startOpen@ChestBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void startOpen(class Player &);

    // symbol: ?stopOpen@ChestBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void stopOpen(class Player &);

    // symbol: ?tick@ChestBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void tick(class BlockSource &);

    // symbol: ?triggerEvent@ChestBlockActor@@UEAAXHH@Z
    MCVAPI void triggerEvent(int32_t, int32_t);

    // symbol: ??1ChestBlockActor@@UEAA@XZ
    MCVAPI ~ChestBlockActor();

    // symbol: ??0ChestBlockActor@@QEAA@W4BlockActorType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockActorRendererId@@AEBVBlockPos@@_N@Z
    MCAPI ChestBlockActor(::BlockActorType, std::string const &, ::BlockActorRendererId, class BlockPos const &, bool);

    // symbol: ?canOpen@ChestBlockActor@@QEBA_NAEAVBlockSource@@@Z
    MCAPI bool canOpen(class BlockSource &) const;

    // symbol: ?canPairWith@ChestBlockActor@@QEAA_NPEAVBlockActor@@AEAVBlockSource@@@Z
    MCAPI bool canPairWith(class BlockActor *, class BlockSource &);

    // symbol: ?forceCloseChest@ChestBlockActor@@QEAAXAEAVBlockSource@@@Z
    MCAPI void forceCloseChest(class BlockSource &);

    // symbol: ?getOpenCount@ChestBlockActor@@QEBAHXZ
    MCAPI int32_t getOpenCount() const;

    // symbol: ?getOpenness@ChestBlockActor@@QEBAMXZ
    MCAPI float getOpenness() const;

    // symbol: ?getPairedChestPosition@ChestBlockActor@@QEAAAEBVBlockPos@@XZ
    MCAPI class BlockPos const & getPairedChestPosition();

    // symbol: ?isFindable@ChestBlockActor@@QEBA_NXZ
    MCAPI bool isFindable() const;

    // symbol: ?isLargeChest@ChestBlockActor@@QEBA_NXZ
    MCAPI bool isLargeChest() const;

    // symbol: ?onMove@ChestBlockActor@@QEAAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    MCAPI void onMove(class BlockSource &, class BlockPos const &, class BlockPos const &);

    // symbol: ?openBy@ChestBlockActor@@QEAAXAEAVPlayer@@@Z
    MCAPI void openBy(class Player &);

    // symbol: ?pairWith@ChestBlockActor@@QEAAXPEAV1@_N@Z
    MCAPI void pairWith(class ChestBlockActor *, bool);

    // symbol: ?setFindable@ChestBlockActor@@QEAAX_N@Z
    MCAPI void setFindable(bool);

    // symbol: ?unpair@ChestBlockActor@@QEAAXAEAVBlockSource@@@Z
    MCAPI void unpair(class BlockSource &);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_getCenter@ChestBlockActor@@IEAAXAEAM00@Z
    MCAPI void _getCenter(float &, float &, float &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_closeChest@ChestBlockActor@@AEAAXAEAVBlockSource@@PEAVPlayer@@@Z
    MCAPI void _closeChest(class BlockSource &, class Player *);

    // symbol: ?_saveClientSideState@ChestBlockActor@@AEBA_NAEAVCompoundTag@@@Z
    MCAPI bool _saveClientSideState(class CompoundTag &) const;

    // symbol: ?_tryToPairWith@ChestBlockActor@@AEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _tryToPairWith(class BlockSource &, class BlockPos const &);

    // symbol: ?_unpair@ChestBlockActor@@AEAAXXZ
    MCAPI void _unpair();

    // NOLINTEND

};

