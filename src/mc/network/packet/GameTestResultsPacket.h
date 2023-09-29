#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class GameTestResultsPacket : public ::Packet {
public:
    // prevent constructor by default
    GameTestResultsPacket& operator=(GameTestResultsPacket const &) = delete;
    GameTestResultsPacket(GameTestResultsPacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@GameTestResultsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@GameTestResultsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@GameTestResultsPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@GameTestResultsPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1GameTestResultsPacket@@UEAA@XZ
    MCVAPI ~GameTestResultsPacket();

    // symbol: ??0GameTestResultsPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_N@Z
    MCAPI GameTestResultsPacket(std::string const &, std::string const &, bool);

    // symbol: ??0GameTestResultsPacket@@QEAA@XZ
    MCAPI GameTestResultsPacket();

    // NOLINTEND

};

