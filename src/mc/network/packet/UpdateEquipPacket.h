#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"

class UpdateEquipPacket : public ::Packet {
public:
    // prevent constructor by default
    UpdateEquipPacket& operator=(UpdateEquipPacket const &) = delete;
    UpdateEquipPacket(UpdateEquipPacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@UpdateEquipPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@UpdateEquipPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@UpdateEquipPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@UpdateEquipPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1UpdateEquipPacket@@UEAA@XZ
    MCVAPI ~UpdateEquipPacket();

    // symbol: ??0UpdateEquipPacket@@QEAA@XZ
    MCAPI UpdateEquipPacket();

    // symbol: ??0UpdateEquipPacket@@QEAA@W4ContainerID@@W4ContainerType@@H$$QEAVCompoundTag@@AEBUActorUniqueID@@@Z
    MCAPI UpdateEquipPacket(::ContainerID, ::ContainerType, int32_t, class CompoundTag &&, struct ActorUniqueID const &);

    // NOLINTEND

};

