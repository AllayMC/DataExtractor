#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ChemistryTableType.h"

class ChemistryTableBlockActor {
public:
    // prevent constructor by default
    ChemistryTableBlockActor& operator=(ChemistryTableBlockActor const &) = delete;
    ChemistryTableBlockActor(ChemistryTableBlockActor const &) = delete;
    ChemistryTableBlockActor() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?getContainer@ChemistryTableBlockActor@@UEAAPEAVContainer@@XZ
    MCVAPI class Container * getContainer();

    // symbol: ?getContainer@ChemistryTableBlockActor@@UEBAPEBVContainer@@XZ
    MCVAPI class Container const * getContainer() const;

    // symbol: ?getContainerSize@ChemistryTableBlockActor@@UEBAHXZ
    MCVAPI int32_t getContainerSize() const;

    // symbol: ?getItem@ChemistryTableBlockActor@@UEBAAEBVItemStack@@H@Z
    MCVAPI class ItemStack const & getItem(int32_t) const;

    // symbol: ?getMaxStackSize@ChemistryTableBlockActor@@UEBAHXZ
    MCVAPI int32_t getMaxStackSize() const;

    // symbol: ?load@ChemistryTableBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);

    // symbol: ?onRemoved@ChemistryTableBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void onRemoved(class BlockSource &);

    // symbol: ?save@ChemistryTableBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    MCVAPI bool save(class CompoundTag &) const;

    // symbol: ?serverInitItemStackIds@ChemistryTableBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCVAPI void serverInitItemStackIds(int32_t, int32_t, std::function<void (int32_t, class ItemStack const &)>);

    // symbol: ?setItem@ChemistryTableBlockActor@@UEAAXHAEBVItemStack@@@Z
    MCVAPI void setItem(int32_t, class ItemStack const &);

    // symbol: ?startOpen@ChemistryTableBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void startOpen(class Player &);

    // symbol: ?stopOpen@ChemistryTableBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void stopOpen(class Player &);

    // symbol: ?tick@ChemistryTableBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void tick(class BlockSource &);

    // symbol: ?isSameType@ChemistryTableBlockActor@@QEBA_NW4ChemistryTableType@@@Z
    MCAPI bool isSameType(::ChemistryTableType) const;

    // symbol: ?playerOpenLabTable@ChemistryTableBlockActor@@QEAAXAEAVPlayer@@@Z
    MCAPI void playerOpenLabTable(class Player &);

    // symbol: ?reset@ChemistryTableBlockActor@@QEAAXAEAVBlockSource@@@Z
    MCAPI void reset(class BlockSource &);

    // symbol: ?serverCombine@ChemistryTableBlockActor@@QEAAXAEAVBlockSource@@AEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@Z
    MCAPI void serverCombine(class BlockSource &, std::vector<class ItemStack> const &);

    // symbol: ?serverLabTablePacket_DEPRECATED@ChemistryTableBlockActor@@QEAAXAEBVLabTablePacket@@AEAVBlockSource@@@Z
    MCAPI void serverLabTablePacket_DEPRECATED(class LabTablePacket const &, class BlockSource &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_createReaction@ChemistryTableBlockActor@@AEAA?AV?$unique_ptr@VLabTableReaction@@U?$default_delete@VLabTableReaction@@@std@@@std@@AEAVRandom@@AEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@3@@Z
    MCAPI std::unique_ptr<class LabTableReaction> _createReaction(class Random &, std::vector<class ItemStack> const &);

    // symbol: ?_popPendingReactionOutput@ChemistryTableBlockActor@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _popPendingReactionOutput(class BlockSource &);

    // symbol: ?_updateType@ChemistryTableBlockActor@@AEAA?AW4ChemistryTableType@@AEAVBlockSource@@@Z
    MCAPI ::ChemistryTableType _updateType(class BlockSource &);

    // NOLINTEND

};

