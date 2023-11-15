#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/AddActorBasePacket.h"

class AddActorPacket : public ::AddActorBasePacket {
public:
    // prevent constructor by default
    AddActorPacket& operator=(AddActorPacket const &) = delete;
    AddActorPacket(AddActorPacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@AddActorPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@AddActorPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@AddActorPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 4, symbol: ?read@AvailableActorIdentifiersPacket@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> read(class ReadOnlyBinaryStream &);

    // vIndex: 5, symbol: ?disallowBatching@Packet@@UEBA_NXZ
    virtual bool disallowBatching() const;

    // vIndex: 6, symbol: ?isValid@Packet@@UEBA_NXZ
    virtual bool isValid() const;

    // vIndex: 7, symbol: ?_read@AddActorPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1AddActorPacket@@UEAA@XZ
    MCVAPI ~AddActorPacket();

    // symbol: ??0AddActorPacket@@QEAA@AEAVActor@@@Z
    MCAPI AddActorPacket(class Actor &);

    // symbol: ??0AddActorPacket@@QEAA@XZ
    MCAPI AddActorPacket();

    // NOLINTEND

};

