#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BytesDataInput.h"

class RakDataInput : public ::BytesDataInput {
public:
    // prevent constructor by default
    RakDataInput& operator=(RakDataInput const &) = delete;
    RakDataInput(RakDataInput const &) = delete;
    RakDataInput() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?readString@BytesDataInput@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string readString();

    // vIndex: 2, symbol: ?readLongString@BytesDataInput@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string readLongString();

    // vIndex: 3, symbol: ?readFloat@BytesDataInput@@UEAAMXZ
    virtual float readFloat();

    // vIndex: 4, symbol: ?readDouble@BytesDataInput@@UEAANXZ
    virtual double readDouble();

    // vIndex: 5, symbol: ?readByte@BytesDataInput@@UEAADXZ
    virtual char readByte();

    // vIndex: 6, symbol: ?readShort@BytesDataInput@@UEAAFXZ
    virtual short readShort();

    // vIndex: 7, symbol: ?readInt@BytesDataInput@@UEAAHXZ
    virtual int readInt();

    // vIndex: 8, symbol: ?readLongLong@BytesDataInput@@UEAA_JXZ
    virtual int64 readLongLong();

    // vIndex: 9, symbol: ?readBytes@RakDataInput@@UEAA_NPEAX_K@Z
    virtual bool readBytes(void *, uint64);

    // vIndex: 10, symbol: ?numBytesLeft@RakDataInput@@UEBA_KXZ
    virtual uint64 numBytesLeft() const;

    // symbol: ??1RakDataInput@@UEAA@XZ
    MCVAPI ~RakDataInput();

    // NOLINTEND

};

