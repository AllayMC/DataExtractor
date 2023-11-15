#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BeaconBlockActor {
public:
    // prevent constructor by default
    BeaconBlockActor& operator=(BeaconBlockActor const &) = delete;
    BeaconBlockActor(BeaconBlockActor const &) = delete;
    BeaconBlockActor() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?_getUpdatePacket@BeaconBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);

    // symbol: ?_onUpdatePacket@BeaconBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);

    // symbol: ?getContainer@BeaconBlockActor@@UEAAPEAVContainer@@XZ
    MCVAPI class Container * getContainer();

    // symbol: ?getContainer@BeaconBlockActor@@UEBAPEBVContainer@@XZ
    MCVAPI class Container const * getContainer() const;

    // symbol: ?getContainerSize@BeaconBlockActor@@UEBAHXZ
    MCVAPI int32_t getContainerSize() const;

    // symbol: ?getItem@BeaconBlockActor@@UEBAAEBVItemStack@@H@Z
    MCVAPI class ItemStack const & getItem(int32_t) const;

    // symbol: ?getMaxStackSize@BeaconBlockActor@@UEBAHXZ
    MCVAPI int32_t getMaxStackSize() const;

    // symbol: ?getName@BeaconBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getName() const;

    // symbol: ?hasAlphaLayer@BeaconBlockActor@@UEBA_NXZ
    MCVAPI bool hasAlphaLayer() const;

    // symbol: ?load@BeaconBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);

    // symbol: ?removeItem@BeaconBlockActor@@UEAAXHH@Z
    MCVAPI void removeItem(int32_t, int32_t);

    // symbol: ?save@BeaconBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    MCVAPI bool save(class CompoundTag &) const;

    // symbol: ?serverInitItemStackIds@BeaconBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCVAPI void serverInitItemStackIds(int32_t, int32_t, std::function<void (int32_t, class ItemStack const &)>);

    // symbol: ?setItem@BeaconBlockActor@@UEAAXHAEBVItemStack@@@Z
    MCVAPI void setItem(int32_t, class ItemStack const &);

    // symbol: ?startOpen@BeaconBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void startOpen(class Player &);

    // symbol: ?stopOpen@BeaconBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void stopOpen(class Player &);

    // symbol: ?tick@BeaconBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void tick(class BlockSource &);

    // symbol: ??0BeaconBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI BeaconBlockActor(class BlockPos const &);

    // symbol: ?checkShapeAndAchievement@BeaconBlockActor@@QEAAXAEAVBlockSource@@@Z
    MCAPI void checkShapeAndAchievement(class BlockSource &);

    // symbol: ?getBeaconData@BeaconBlockActor@@QEAA?AVCompoundTag@@XZ
    MCAPI class CompoundTag getBeaconData();

    // symbol: ?isEffectAvailable@BeaconBlockActor@@QEBA_NH@Z
    MCAPI bool isEffectAvailable(int32_t) const;

    // symbol: ?isSecondaryAvailable@BeaconBlockActor@@QEBA_NXZ
    MCAPI bool isSecondaryAvailable() const;

    // symbol: ?setPrimaryEffect@BeaconBlockActor@@QEAA_NH@Z
    MCAPI bool setPrimaryEffect(int32_t);

    // symbol: ?setSecondaryEffect@BeaconBlockActor@@QEAA_NH@Z
    MCAPI bool setSecondaryEffect(int32_t);

    // symbol: ?isPaymentItem@BeaconBlockActor@@SA_NAEBVItemDescriptor@@@Z
    MCAPI static bool isPaymentItem(class ItemDescriptor const &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_applyEffects@BeaconBlockActor@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _applyEffects(class BlockSource &);

    // symbol: ?_getEffectTier@BeaconBlockActor@@AEBAHH@Z
    MCAPI int32_t _getEffectTier(int32_t) const;

    // symbol: ?_isEffectValid@BeaconBlockActor@@AEBA_NH@Z
    MCAPI bool _isEffectValid(int32_t) const;

    // symbol: ?_isSecondaryEffectValid@BeaconBlockActor@@AEBA_NH@Z
    MCAPI bool _isSecondaryEffectValid(int32_t) const;

    // symbol: ?_saveClientSideState@BeaconBlockActor@@AEBA_NAEAVCompoundTag@@@Z
    MCAPI bool _saveClientSideState(class CompoundTag &) const;

    // NOLINTEND

};

