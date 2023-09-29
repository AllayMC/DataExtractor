#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class BookEditPacket : public ::Packet {
public:
    // prevent constructor by default
    BookEditPacket& operator=(BookEditPacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@BookEditPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@BookEditPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@BookEditPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@BookEditPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1BookEditPacket@@UEAA@XZ
    MCVAPI ~BookEditPacket();

    // symbol: ??0BookEditPacket@@QEAA@XZ
    MCAPI BookEditPacket();

    // symbol: ??0BookEditPacket@@QEAA@AEBV0@@Z
    MCAPI BookEditPacket(class BookEditPacket const &);

    // symbol: ?getPage@BookEditPacket@@QEBA?AUPageContent@@XZ
    MCAPI struct PageContent getPage() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_readPage@BookEditPacket@@AEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI class Bedrock::Result<void> _readPage(class ReadOnlyBinaryStream &);

    // symbol: ?_writePage@BookEditPacket@@AEBAXAEAVBinaryStream@@@Z
    MCAPI void _writePage(class BinaryStream &) const;

    // NOLINTEND

};

