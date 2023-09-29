#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/DispenserBlockActor.h"

class DropperBlockActor : public ::DispenserBlockActor {
public:
    // prevent constructor by default
    DropperBlockActor& operator=(DropperBlockActor const &) = delete;
    DropperBlockActor(DropperBlockActor const &) = delete;
    DropperBlockActor() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?_getUpdatePacket@DropperBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);

    // symbol: ?_onUpdatePacket@DropperBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);

    // symbol: ?getName@DropperBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getName() const;

    // symbol: ??0DropperBlockActor@@QEAA@VBlockPos@@@Z
    MCAPI DropperBlockActor(class BlockPos);

    // symbol: ?pushOutItems@DropperBlockActor@@QEAA_NAEAVBlockSource@@@Z
    MCAPI bool pushOutItems(class BlockSource &);

    // symbol: ?addItemsToContainerAndDepleteStack@DropperBlockActor@@SA_NAEAVContainer@@AEAVItemStack@@HH@Z
    MCAPI static bool addItemsToContainerAndDepleteStack(class Container &, class ItemStack &, int, int);

    // symbol: ?getContainerAt@DropperBlockActor@@SAPEAVContainer@@AEAVBlockSource@@AEBVVec3@@@Z
    MCAPI static class Container * getContainerAt(class BlockSource &, class Vec3 const &);

    // NOLINTEND

};

