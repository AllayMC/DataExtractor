#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"

class UpdateTradePacket : public ::Packet {
public:
    // prevent constructor by default
    UpdateTradePacket& operator=(UpdateTradePacket const &) = delete;
    UpdateTradePacket(UpdateTradePacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@UpdateTradePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@UpdateTradePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@UpdateTradePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@UpdateTradePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1UpdateTradePacket@@UEAA@XZ
    MCVAPI ~UpdateTradePacket();

    // symbol: ??0UpdateTradePacket@@QEAA@XZ
    MCAPI UpdateTradePacket();

    // symbol: ??0UpdateTradePacket@@QEAA@W4ContainerID@@W4ContainerType@@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAVCompoundTag@@AEBUActorUniqueID@@4H_N5@Z
    MCAPI UpdateTradePacket(::ContainerID, ::ContainerType, int32_t, std::string const &, class CompoundTag &&, struct ActorUniqueID const &, struct ActorUniqueID const &, int32_t, bool, bool);

    // NOLINTEND

};

