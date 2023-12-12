#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/Compressibility.h"
#include "mc/network/IPacketHandlerDispatcher.h"
#include "mc/network/NetworkPeer.h"
#include "mc/common/PacketPriority.h"
#include "mc/common/Result.h"
#include "mc/common/MinecraftPacketIds.h"
#include "mc/common/SubClientId.h"

class BinaryStream;
class ReadOnlyBinaryStream;

class Packet {
public:
    static const bool                SHARE_WITH_HANDLER = false;                                     // constant
    PacketPriority                   mPriority = PacketPriority::Medium;                    // this+0x8
    NetworkPeer::Reliability         mReliability = NetworkPeer::Reliability::ReliableOrdered; // this+0xC
    SubClientId                      mClientSubId = SubClientId::PrimaryClient;                // this+0x10
    bool                             mIsHandled = false;                                     // this+0x11
    NetworkPeer::PacketRecvTimepoint mReceiveTimepoint;                                              // this+0x18
    IPacketHandlerDispatcher const*  mHandler = nullptr;                                        // this+0x20
    Compressibility                  mCompressible = Compressibility::Compressible;                  // this+0x28

    [[nodiscard]] constexpr explicit Packet(
        PacketPriority           priority = PacketPriority::Medium,
        NetworkPeer::Reliability reliability = NetworkPeer::Reliability::ReliableOrdered,
        SubClientId              clientSubId = SubClientId::PrimaryClient,
        bool                     compress = true
    )
        : mPriority(priority),
        mReliability(reliability),
        mClientSubId(clientSubId),
        mCompressible(compress ? Compressibility::Compressible : Compressibility::Incompressible) {}

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Packet@@UEAA@XZ
    virtual ~Packet();

    // vIndex: 1, symbol: ?getId@ActorEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const = 0;

    // vIndex: 2, symbol:
    // ?getName@ActorEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const = 0;

    // vIndex: 3, symbol: ?write@ActorEventPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const = 0;

    // vIndex: 4, symbol: ?read@Packet@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream&);

    // vIndex: 5, symbol: ?disallowBatching@Packet@@UEBA_NXZ
    virtual bool disallowBatching() const;

    // vIndex: 6, symbol: ?isValid@Packet@@UEBA_NXZ
    virtual bool isValid() const;

    // vIndex: 7, symbol:
    // ?_read@ActorEventPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&) = 0;

    // symbol: ?handle@Packet@@QEAAXAEBVNetworkIdentifier@@AEAVNetEventCallback@@AEAV?$shared_ptr@VPacket@@@std@@@Z
    MCAPI void handle(class NetworkIdentifier const&, class NetEventCallback&, std::shared_ptr<class Packet>&);

    // symbol:
    // ?readNoHeader@Packet@@QEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@AEBW4SubClientId@@@Z
    MCAPI class Bedrock::Result<void> readNoHeader(class ReadOnlyBinaryStream&, ::SubClientId const&);

    // symbol: ?writeWithHeader@Packet@@QEBAXW4SubClientId@@AEAVBinaryStream@@@Z
    MCAPI void writeWithHeader(::SubClientId, class BinaryStream&) const;

    // NOLINTEND
};