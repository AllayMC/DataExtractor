#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ResourcePackStackPacket : public ::Packet {
public:
    // prevent constructor by default
    ResourcePackStackPacket& operator=(ResourcePackStackPacket const &) = delete;
    ResourcePackStackPacket(ResourcePackStackPacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@ResourcePackStackPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@ResourcePackStackPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@ResourcePackStackPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@ResourcePackStackPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1ResourcePackStackPacket@@UEAA@XZ
    MCVAPI ~ResourcePackStackPacket();

    // symbol: ??0ResourcePackStackPacket@@QEAA@XZ
    MCAPI ResourcePackStackPacket();

    // symbol: ??0ResourcePackStackPacket@@QEAA@V?$vector@UPackInstanceId@@V?$allocator@UPackInstanceId@@@std@@@std@@0AEBVBaseGameVersion@@_NAEBVExperiments@@@Z
    MCAPI ResourcePackStackPacket(std::vector<struct PackInstanceId>, std::vector<struct PackInstanceId>, class BaseGameVersion const &, bool, class Experiments const &);

    // NOLINTEND

};

