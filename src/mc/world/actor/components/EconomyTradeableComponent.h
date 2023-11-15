#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"

class EconomyTradeableComponent {
public:
    // prevent constructor by default
    EconomyTradeableComponent& operator=(EconomyTradeableComponent const &) = delete;
    EconomyTradeableComponent(EconomyTradeableComponent const &) = delete;
    EconomyTradeableComponent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0EconomyTradeableComponent@@QEAA@AEAVActor@@@Z
    MCAPI EconomyTradeableComponent(class Actor &);

    // symbol: ?addAdditionalSaveData@EconomyTradeableComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;

    // symbol: ?createDataPacket@EconomyTradeableComponent@@QEAA?AVUpdateTradePacket@@W4ContainerID@@@Z
    MCAPI class UpdateTradePacket createDataPacket(::ContainerID);

    // symbol: ?fixVillagerTierToMatchTradeList@EconomyTradeableComponent@@QEAAXPEAVMerchantRecipeList@@@Z
    MCAPI void fixVillagerTierToMatchTradeList(class MerchantRecipeList *);

    // symbol: ?getCurrentCuredDiscount@EconomyTradeableComponent@@QEBA?AUIntRange@@XZ
    MCAPI struct IntRange getCurrentCuredDiscount() const;

    // symbol: ?getCurrentNearbyCuredDiscount@EconomyTradeableComponent@@QEBAHXZ
    MCAPI int32_t getCurrentNearbyCuredDiscount() const;

    // symbol: ?getCurrentTradeExp@EconomyTradeableComponent@@QEBAIXZ
    MCAPI uint32_t getCurrentTradeExp() const;

    // symbol: ?getDisplayName@EconomyTradeableComponent@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const & getDisplayName() const;

    // symbol: ?getInteraction@EconomyTradeableComponent@@QEAA_NAEAVPlayer@@AEAVActorInteraction@@@Z
    MCAPI bool getInteraction(class Player &, class ActorInteraction &);

    // symbol: ?getOffers@EconomyTradeableComponent@@QEAAPEAVMerchantRecipeList@@XZ
    MCAPI class MerchantRecipeList * getOffers();

    // symbol: ?getRiches@EconomyTradeableComponent@@QEBAHXZ
    MCAPI int32_t getRiches() const;

    // symbol: ?getTradeTier@EconomyTradeableComponent@@QEBAIXZ
    MCAPI uint32_t getTradeTier() const;

    // symbol: ?hasSupplyRemaining@EconomyTradeableComponent@@QEBA_NXZ
    MCAPI bool hasSupplyRemaining() const;

    // symbol: ?initFromDefinition@EconomyTradeableComponent@@QEAAXXZ
    MCAPI void initFromDefinition();

    // symbol: ?loadDisplayName@EconomyTradeableComponent@@QEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const & loadDisplayName();

    // symbol: ?loadOffersFromTag@EconomyTradeableComponent@@QEAAXPEBVCompoundTag@@@Z
    MCAPI void loadOffersFromTag(class CompoundTag const *);

    // symbol: ?matchExpAndTier@EconomyTradeableComponent@@QEAAXXZ
    MCAPI void matchExpAndTier();

    // symbol: ?newServerAiStep@EconomyTradeableComponent@@QEAAXXZ
    MCAPI void newServerAiStep();

    // symbol: ?notifyTrade@EconomyTradeableComponent@@QEAAXH@Z
    MCAPI void notifyTrade(int32_t);

    // symbol: ?readAdditionalSaveData@EconomyTradeableComponent@@QEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);

    // symbol: ?reloadComponent@EconomyTradeableComponent@@QEAAXXZ
    MCAPI void reloadComponent();

    // symbol: ?resupplyTrades@EconomyTradeableComponent@@QEAAXXZ
    MCAPI void resupplyTrades();

    // symbol: ?setNearbyCuredDiscount@EconomyTradeableComponent@@QEAAXH@Z
    MCAPI void setNearbyCuredDiscount(int32_t);

    // symbol: ?setOffers@EconomyTradeableComponent@@QEAAXAEAVMerchantRecipeList@@@Z
    MCAPI void setOffers(class MerchantRecipeList &);

    // symbol: ?setRiches@EconomyTradeableComponent@@QEAAXH@Z
    MCAPI void setRiches(int32_t);

    // symbol: ?shouldConvertTrades@EconomyTradeableComponent@@QEBA_NXZ
    MCAPI bool shouldConvertTrades() const;

    // symbol: ?shouldPersistTrades@EconomyTradeableComponent@@QEBA_NXZ
    MCAPI bool shouldPersistTrades() const;

    // symbol: ?showTradeScreen@EconomyTradeableComponent@@QEAA_NXZ
    MCAPI bool showTradeScreen();

    // symbol: ?tickDiscountDegradationTimer@EconomyTradeableComponent@@QEAAXUTick@@@Z
    MCAPI void tickDiscountDegradationTimer(struct Tick);

    // symbol: ?tryIncrementCuredDiscount@EconomyTradeableComponent@@QEAAXXZ
    MCAPI void tryIncrementCuredDiscount();

    // symbol: ?tryIncrementNearbyCuredDiscount@EconomyTradeableComponent@@QEAAXXZ
    MCAPI void tryIncrementNearbyCuredDiscount();

    // symbol: ?tryToTransferOldOffers@EconomyTradeableComponent@@QEAAXPEAVMerchantRecipeList@@@Z
    MCAPI void tryToTransferOldOffers(class MerchantRecipeList *);

    // symbol: ?isUseNewTradeScreen@EconomyTradeableComponent@@SA_NAEBVActor@@@Z
    MCAPI static bool isUseNewTradeScreen(class Actor const &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_generateTrades@EconomyTradeableComponent@@AEAA_NXZ
    MCAPI bool _generateTrades();

    // symbol: ?_getTradeTable@EconomyTradeableComponent@@AEAAPEAUTradeTable@@XZ
    MCAPI struct TradeTable * _getTradeTable();

    // symbol: ?_getTradeTierFromCurrentExp@EconomyTradeableComponent@@AEBAIXZ
    MCAPI uint32_t _getTradeTierFromCurrentExp() const;

    // symbol: ?_rearrangeTradeList@EconomyTradeableComponent@@AEAAXAEAV?$vector@UTrade@@V?$allocator@UTrade@@@std@@@std@@_K@Z
    MCAPI void _rearrangeTradeList(std::vector<struct Trade> &, uint64_t);

    // symbol: ?_setMaxTradeTier@EconomyTradeableComponent@@AEAAXH@Z
    MCAPI void _setMaxTradeTier(int32_t);

    // symbol: ?_setTradeTier@EconomyTradeableComponent@@AEAAXH@Z
    MCAPI void _setTradeTier(int32_t);

    // NOLINTEND

};

