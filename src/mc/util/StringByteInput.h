#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BytesDataInput.h"

class StringByteInput : public ::BytesDataInput {
public:
    // prevent constructor by default
    StringByteInput& operator=(StringByteInput const &) = delete;
    StringByteInput(StringByteInput const &) = delete;
    StringByteInput() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?readString@BytesDataInput@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string readString();

    // vIndex: 2, symbol: ?readLongString@BytesDataInput@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string readLongString();

    // vIndex: 3, symbol: ?readFloat@BigEndianStringByteInput@@UEAAMXZ
    virtual float readFloat();

    // vIndex: 4, symbol: ?readDouble@BigEndianStringByteInput@@UEAANXZ
    virtual double readDouble();

    // vIndex: 5, symbol: ?readByte@BytesDataInput@@UEAADXZ
    virtual char readByte();

    // vIndex: 6, symbol: ?readShort@BigEndianStringByteInput@@UEAAFXZ
    virtual int16_t readShort();

    // vIndex: 7, symbol: ?readInt@BigEndianStringByteInput@@UEAAHXZ
    virtual int32_t readInt();

    // vIndex: 8, symbol: ?readLongLong@BigEndianStringByteInput@@UEAA_JXZ
    virtual int64_t readLongLong();

    // vIndex: 9, symbol: ?readBytes@StringByteInput@@UEAA_NPEAX_K@Z
    virtual bool readBytes(void *, uint64_t);

    // vIndex: 10, symbol: ?numBytesLeft@StringByteInput@@UEBA_KXZ
    virtual uint64_t numBytesLeft() const;

    // symbol: ??1StringByteInput@@UEAA@XZ
    MCVAPI ~StringByteInput();

    // NOLINTEND

};

