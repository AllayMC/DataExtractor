#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"

class EquippableComponent {
public:
    // prevent constructor by default
    EquippableComponent& operator=(EquippableComponent const &) = delete;
    EquippableComponent(EquippableComponent const &) = delete;
    EquippableComponent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0EquippableComponent@@QEAA@$$QEAV0@@Z
    MCAPI EquippableComponent(class EquippableComponent &&);

    // symbol: ?createDataPacket@EquippableComponent@@QEBA?AVUpdateEquipPacket@@AEAVActor@@W4ContainerID@@@Z
    MCAPI class UpdateEquipPacket createDataPacket(class Actor &, ::ContainerID) const;

    // symbol: ?createTag@EquippableComponent@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEAVActor@@@Z
    MCAPI std::unique_ptr<class CompoundTag> createTag(class Actor &) const;

    // symbol: ?getSlotCount@EquippableComponent@@QEBAHXZ
    MCAPI int32_t getSlotCount() const;

    // symbol: ?hasSlotAllowedItems@EquippableComponent@@QEBA_NH@Z
    MCAPI bool hasSlotAllowedItems(int32_t) const;

    // symbol: ?onItemChanged@EquippableComponent@@QEBA_NAEAVActor@@_KAEBVItemStack@@@Z
    MCAPI bool onItemChanged(class Actor &, uint64_t, class ItemStack const &) const;

    // symbol: ??4EquippableComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class EquippableComponent & operator=(class EquippableComponent &&);

    // symbol: ?tryGetSlotAllowedItems@EquippableComponent@@QEBAPEBV?$vector@VItemDescriptor@@V?$allocator@VItemDescriptor@@@std@@@std@@H@Z
    MCAPI std::vector<class ItemDescriptor> const * tryGetSlotAllowedItems(int32_t) const;

    // symbol: ??1EquippableComponent@@QEAA@XZ
    MCAPI ~EquippableComponent();

    // NOLINTEND

};

