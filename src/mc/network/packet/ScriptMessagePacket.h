#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ScriptMessagePacket : public ::Packet {
public:
    // prevent constructor by default
    ScriptMessagePacket& operator=(ScriptMessagePacket const &) = delete;
    ScriptMessagePacket(ScriptMessagePacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@ScriptMessagePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@ScriptMessagePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@ScriptMessagePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@ScriptMessagePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1ScriptMessagePacket@@UEAA@XZ
    MCVAPI ~ScriptMessagePacket();

    // symbol: ??0ScriptMessagePacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI ScriptMessagePacket(std::string const &, std::string const &);

    // symbol: ??0ScriptMessagePacket@@QEAA@XZ
    MCAPI ScriptMessagePacket();

    // symbol: ?getMessageId@ScriptMessagePacket@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const & getMessageId() const;

    // symbol: ?getMessageValue@ScriptMessagePacket@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const & getMessageValue() const;

    // NOLINTEND

};

