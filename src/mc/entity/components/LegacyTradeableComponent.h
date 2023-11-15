#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"

class LegacyTradeableComponent {
public:
    // prevent constructor by default
    LegacyTradeableComponent& operator=(LegacyTradeableComponent const &) = delete;
    LegacyTradeableComponent(LegacyTradeableComponent const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ?DecrementMerchantTimer@LegacyTradeableComponent@@QEAAXXZ
    MCAPI void DecrementMerchantTimer();

    // symbol: ?IncrementTradeTier@LegacyTradeableComponent@@QEAAXXZ
    MCAPI void IncrementTradeTier();

    // symbol: ??0LegacyTradeableComponent@@QEAA@XZ
    MCAPI LegacyTradeableComponent();

    // symbol: ?addAdditionalSaveData@LegacyTradeableComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;

    // symbol: ?createDataPacket@LegacyTradeableComponent@@QEAA?AVUpdateTradePacket@@AEAVActor@@W4ContainerID@@@Z
    MCAPI class UpdateTradePacket createDataPacket(class Actor &, ::ContainerID);

    // symbol: ?getAddRecipeOnUpdate@LegacyTradeableComponent@@QEBA_NXZ
    MCAPI bool getAddRecipeOnUpdate() const;

    // symbol: ?getDisplayName@LegacyTradeableComponent@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const & getDisplayName() const;

    // symbol: ?getInteraction@LegacyTradeableComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);

    // symbol: ?getLastPlayerTradeID@LegacyTradeableComponent@@QEBA?BUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID const getLastPlayerTradeID() const;

    // symbol: ?getOffers@LegacyTradeableComponent@@QEAAPEAVMerchantRecipeList@@AEAVActor@@@Z
    MCAPI class MerchantRecipeList * getOffers(class Actor &);

    // symbol: ?getResetLockedOnFirstTrade@LegacyTradeableComponent@@QEBA_NXZ
    MCAPI bool getResetLockedOnFirstTrade() const;

    // symbol: ?getRiches@LegacyTradeableComponent@@QEBAHXZ
    MCAPI int32_t getRiches() const;

    // symbol: ?getTradeTier@LegacyTradeableComponent@@QEBAHXZ
    MCAPI int32_t getTradeTier() const;

    // symbol: ?getUpdateMerchantTimer@LegacyTradeableComponent@@QEBAHXZ
    MCAPI int32_t getUpdateMerchantTimer() const;

    // symbol: ?loadDisplayName@LegacyTradeableComponent@@QEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVActor@@@Z
    MCAPI std::string const & loadDisplayName(class Actor &);

    // symbol: ?loadOffersFromTag@LegacyTradeableComponent@@QEAAXPEBVCompoundTag@@@Z
    MCAPI void loadOffersFromTag(class CompoundTag const *);

    // symbol: ?notifyTrade@LegacyTradeableComponent@@QEAAXAEAVActor@@H@Z
    MCAPI void notifyTrade(class Actor &, int32_t);

    // symbol: ??4LegacyTradeableComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class LegacyTradeableComponent & operator=(class LegacyTradeableComponent &&);

    // symbol: ?readAdditionalSaveData@LegacyTradeableComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);

    // symbol: ?reloadComponent@LegacyTradeableComponent@@QEAAXAEAVActor@@@Z
    MCAPI void reloadComponent(class Actor &);

    // symbol: ?restockAllRecipes@LegacyTradeableComponent@@QEAAXAEAVActor@@@Z
    MCAPI void restockAllRecipes(class Actor &);

    // symbol: ?setAddRecipeOnUpdate@LegacyTradeableComponent@@QEAAX_N@Z
    MCAPI void setAddRecipeOnUpdate(bool);

    // symbol: ?setOffers@LegacyTradeableComponent@@QEAAXAEAVMerchantRecipeList@@@Z
    MCAPI void setOffers(class MerchantRecipeList &);

    // symbol: ?setResetLockedOnFirstTrade@LegacyTradeableComponent@@QEAAX_N@Z
    MCAPI void setResetLockedOnFirstTrade(bool);

    // symbol: ?setRiches@LegacyTradeableComponent@@QEAAXH@Z
    MCAPI void setRiches(int32_t);

    // symbol: ?setTradeTier@LegacyTradeableComponent@@QEAAXH@Z
    MCAPI void setTradeTier(int32_t);

    // symbol: ?shouldConvertTrades@LegacyTradeableComponent@@QEBA_NAEAVActor@@@Z
    MCAPI bool shouldConvertTrades(class Actor &) const;

    // symbol: ?shouldPersistTrades@LegacyTradeableComponent@@QEBA_NAEAVActor@@@Z
    MCAPI bool shouldPersistTrades(class Actor &) const;

    // symbol: ?updateTradeTier@LegacyTradeableComponent@@QEAAXAEAVActor@@@Z
    MCAPI void updateTradeTier(class Actor &);

    // symbol: ??1LegacyTradeableComponent@@QEAA@XZ
    MCAPI ~LegacyTradeableComponent();

    // symbol: ?isUseNewTradeScreen@LegacyTradeableComponent@@SA_NAEBVActor@@@Z
    MCAPI static bool isUseNewTradeScreen(class Actor const &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getTradeTable@LegacyTradeableComponent@@AEAAPEAUTradeTable@@AEAVActor@@@Z
    MCAPI struct TradeTable * _getTradeTable(class Actor &);

    // symbol: ?_rearrangeTradeList@LegacyTradeableComponent@@AEAAXAEAVActor@@AEAV?$vector@UTrade@@V?$allocator@UTrade@@@std@@@std@@_K@Z
    MCAPI void _rearrangeTradeList(class Actor &, std::vector<struct Trade> &, uint64_t);

    // symbol: ?_refreshTrades@LegacyTradeableComponent@@AEAA_NAEAVActor@@@Z
    MCAPI bool _refreshTrades(class Actor &);

    // NOLINTEND

};

