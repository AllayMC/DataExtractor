#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Hopper {
public:
    // prevent constructor by default
    Hopper& operator=(Hopper const &) = delete;
    Hopper(Hopper const &) = delete;
    Hopper() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0Hopper@@QEAA@H_N@Z
    MCAPI Hopper(int32_t, bool);

    // symbol: ?getCooldownTime@Hopper@@QEBAHXZ
    MCAPI int32_t getCooldownTime() const;

    // symbol: ?isOnCooldown@Hopper@@QEBA_NXZ
    MCAPI bool isOnCooldown() const;

    // symbol: ?setCooldownTime@Hopper@@QEAAXH@Z
    MCAPI void setCooldownTime(int32_t);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_addItem@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEAVItemStack@@HH@Z
    MCAPI bool _addItem(class BlockSource &, class Container &, class ItemStack &, int32_t, int32_t);

    // symbol: ?_getAttachedContainerInBlock@Hopper@@IEAAPEAVContainer@@AEAVBlockSource@@AEBVVec3@@H@Z
    MCAPI class Container * _getAttachedContainerInBlock(class BlockSource &, class Vec3 const &, int32_t);

    // symbol: ?_getAttachedContainers@Hopper@@IEAA?AV?$vector@PEAVContainer@@V?$allocator@PEAVContainer@@@std@@@std@@AEAVBlockSource@@AEBVVec3@@H@Z
    MCAPI std::vector<class Container *> _getAttachedContainers(class BlockSource &, class Vec3 const &, int32_t);

    // symbol: ?_getContainerInBlock@Hopper@@IEAAPEAVContainer@@AEAVBlockSource@@AEBVVec3@@@Z
    MCAPI class Container * _getContainerInBlock(class BlockSource &, class Vec3 const &);

    // symbol: ?_getContainersAt@Hopper@@IEAA?AV?$vector@PEAVContainer@@V?$allocator@PEAVContainer@@@std@@@std@@AEAVBlockSource@@AEBVVec3@@@Z
    MCAPI std::vector<class Container *> _getContainersAt(class BlockSource &, class Vec3 const &);

    // symbol: ?_getSourceContainers@Hopper@@IEAA?AV?$vector@PEAVContainer@@V?$allocator@PEAVContainer@@@std@@@std@@AEAVBlockSource@@AEBVVec3@@@Z
    MCAPI std::vector<class Container *> _getSourceContainers(class BlockSource &, class Vec3 const &);

    // symbol: ?_isEmptyContainer@Hopper@@IEAA_NAEAVContainer@@H@Z
    MCAPI bool _isEmptyContainer(class Container &, int32_t);

    // symbol: ?_isFullContainer@Hopper@@IEAA_NAEAVContainer@@H@Z
    MCAPI bool _isFullContainer(class Container &, int32_t);

    // symbol: ?_pushOutItems@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@H@Z
    MCAPI bool _pushOutItems(class BlockSource &, class Container &, class Vec3 const &, int32_t);

    // symbol: ?_tryMoveItems@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@H_N@Z
    MCAPI bool _tryMoveItems(class BlockSource &, class Container &, class Vec3 const &, int32_t, bool);

    // symbol: ?_tryPullInItemsFromAboveContainer@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@@Z
    MCAPI bool _tryPullInItemsFromAboveContainer(class BlockSource &, class Container &, class Vec3 const &);

    // symbol: ?_tryPushToComposter@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@VBlockPos@@H@Z
    MCAPI bool _tryPushToComposter(class BlockSource &, class Container &, class BlockPos, int32_t);

    // symbol: ?_tryTakeInItemFromSlot@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@1HH@Z
    MCAPI bool _tryTakeInItemFromSlot(class BlockSource &, class Container &, class Container &, int32_t, int32_t);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tryAddItemsFromPos@Hopper@@AEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@@Z
    MCAPI bool _tryAddItemsFromPos(class BlockSource &, class Container &, class Vec3 const &);

    // NOLINTEND

};

