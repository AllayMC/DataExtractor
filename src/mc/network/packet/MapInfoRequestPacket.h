#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class MapInfoRequestPacket : public ::Packet {
public:
    // prevent constructor by default
    MapInfoRequestPacket& operator=(MapInfoRequestPacket const &) = delete;
    MapInfoRequestPacket(MapInfoRequestPacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@MapInfoRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@MapInfoRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@MapInfoRequestPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@MapInfoRequestPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1MapInfoRequestPacket@@UEAA@XZ
    MCVAPI ~MapInfoRequestPacket();

    // symbol: ??0MapInfoRequestPacket@@QEAA@UActorUniqueID@@AEAVMapItemSavedData@@@Z
    MCAPI MapInfoRequestPacket(struct ActorUniqueID, class MapItemSavedData &);

    // symbol: ??0MapInfoRequestPacket@@QEAA@UActorUniqueID@@@Z
    MCAPI MapInfoRequestPacket(struct ActorUniqueID);

    // symbol: ??0MapInfoRequestPacket@@QEAA@XZ
    MCAPI MapInfoRequestPacket();

    // symbol: ?getMapId@MapInfoRequestPacket@@QEBA?AUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID getMapId() const;

    // symbol: ?replaceServerPixels@MapInfoRequestPacket@@QEBA_NAEAVMapItemSavedData@@@Z
    MCAPI bool replaceServerPixels(class MapItemSavedData &) const;

    // NOLINTEND

};

