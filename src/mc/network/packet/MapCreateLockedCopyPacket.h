#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class MapCreateLockedCopyPacket : public ::Packet {
public:
    // prevent constructor by default
    MapCreateLockedCopyPacket& operator=(MapCreateLockedCopyPacket const &) = delete;
    MapCreateLockedCopyPacket(MapCreateLockedCopyPacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@MapCreateLockedCopyPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@MapCreateLockedCopyPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@MapCreateLockedCopyPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@MapCreateLockedCopyPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1MapCreateLockedCopyPacket@@UEAA@XZ
    MCVAPI ~MapCreateLockedCopyPacket();

    // symbol: ??0MapCreateLockedCopyPacket@@QEAA@XZ
    MCAPI MapCreateLockedCopyPacket();

    // symbol: ??0MapCreateLockedCopyPacket@@QEAA@UActorUniqueID@@0@Z
    MCAPI MapCreateLockedCopyPacket(struct ActorUniqueID, struct ActorUniqueID);

    // symbol: ?getNewMapId@MapCreateLockedCopyPacket@@QEBA?AUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID getNewMapId() const;

    // symbol: ?getOriginalMapId@MapCreateLockedCopyPacket@@QEBA?AUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID getOriginalMapId() const;

    // NOLINTEND

};

