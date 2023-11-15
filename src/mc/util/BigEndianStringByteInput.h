#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/StringByteInput.h"

class BigEndianStringByteInput : public ::StringByteInput {
public:
    // prevent constructor by default
    BigEndianStringByteInput& operator=(BigEndianStringByteInput const &) = delete;
    BigEndianStringByteInput(BigEndianStringByteInput const &) = delete;
    BigEndianStringByteInput() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?readFloat@BigEndianStringByteInput@@UEAAMXZ
    virtual float readFloat();

    // vIndex: 4, symbol: ?readDouble@BigEndianStringByteInput@@UEAANXZ
    virtual double readDouble();

    // vIndex: 6, symbol: ?readShort@BigEndianStringByteInput@@UEAAFXZ
    virtual int16_t readShort();

    // vIndex: 7, symbol: ?readInt@BigEndianStringByteInput@@UEAAHXZ
    virtual int32_t readInt();

    // vIndex: 8, symbol: ?readLongLong@BigEndianStringByteInput@@UEAA_JXZ
    virtual int64_t readLongLong();

    // vIndex: 9, symbol: ?readBytes@BigEndianStringByteInput@@UEAA_NPEAX_K@Z
    virtual bool readBytes(void *, uint64_t);

    // vIndex: 11, symbol: ?readBigEndianBytes@BigEndianStringByteInput@@UEAA_NPEAX_K@Z
    virtual bool readBigEndianBytes(void *, uint64_t);

    // symbol: ??1BigEndianStringByteInput@@UEAA@XZ
    MCVAPI ~BigEndianStringByteInput();

    // NOLINTEND

};

