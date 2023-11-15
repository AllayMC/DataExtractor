#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"

class BinaryStream : public ::ReadOnlyBinaryStream {
public:
    // prevent constructor by default
    BinaryStream& operator=(BinaryStream const &) = delete;
    BinaryStream(BinaryStream const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1BinaryStream@@UEAA@XZ
    MCVAPI ~BinaryStream();

    // symbol: ??0BinaryStream@@QEAA@XZ
    MCAPI BinaryStream();

    // symbol: ??0BinaryStream@@QEAA@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI BinaryStream(std::string &, bool);

    // symbol: ?getAndReleaseData@BinaryStream@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getAndReleaseData();

    // symbol: ?reset@BinaryStream@@QEAAXXZ
    MCAPI void reset();

    // symbol: ?writeBool@BinaryStream@@QEAAX_N@Z
    MCAPI void writeBool(bool);

    // symbol: ?writeByte@BinaryStream@@QEAAXE@Z
    MCAPI void writeByte(uint8_t);

    // symbol: ?writeDouble@BinaryStream@@QEAAXN@Z
    MCAPI void writeDouble(double);

    // symbol: ?writeFloat@BinaryStream@@QEAAXM@Z
    MCAPI void writeFloat(float);

    // symbol: ?writeSignedBigEndianInt@BinaryStream@@QEAAXH@Z
    MCAPI void writeSignedBigEndianInt(int32_t);

    // symbol: ?writeSignedInt@BinaryStream@@QEAAXH@Z
    MCAPI void writeSignedInt(int32_t);

    // symbol: ?writeSignedInt64@BinaryStream@@QEAAX_J@Z
    MCAPI void writeSignedInt64(int64_t);

    // symbol: ?writeSignedShort@BinaryStream@@QEAAXF@Z
    MCAPI void writeSignedShort(int16_t);

    // symbol: ?writeString@BinaryStream@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI void writeString(std::string_view);

    // symbol: ?writeUnsignedChar@BinaryStream@@QEAAXE@Z
    MCAPI void writeUnsignedChar(uint8_t);

    // symbol: ?writeUnsignedInt@BinaryStream@@QEAAXI@Z
    MCAPI void writeUnsignedInt(uint32_t);

    // symbol: ?writeUnsignedInt64@BinaryStream@@QEAAX_K@Z
    MCAPI void writeUnsignedInt64(uint64_t);

    // symbol: ?writeUnsignedShort@BinaryStream@@QEAAXG@Z
    MCAPI void writeUnsignedShort(uint16_t);

    // symbol: ?writeUnsignedVarInt@BinaryStream@@QEAAXI@Z
    MCAPI void writeUnsignedVarInt(uint32_t);

    // symbol: ?writeUnsignedVarInt64@BinaryStream@@QEAAX_K@Z
    MCAPI void writeUnsignedVarInt64(uint64_t);

    // symbol: ?writeVarInt@BinaryStream@@QEAAXH@Z
    MCAPI void writeVarInt(int32_t);

    // symbol: ?writeVarInt64@BinaryStream@@QEAAX_J@Z
    MCAPI void writeVarInt64(int64_t);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?write@BinaryStream@@AEAAXPEBX_K@Z
    MCAPI void write(void const *, uint64_t);

    // NOLINTEND

};

