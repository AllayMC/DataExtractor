#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDataOutput.h"

class BytesDataOutput : public ::IDataOutput {
public:
    // prevent constructor by default
    BytesDataOutput& operator=(BytesDataOutput const &) = delete;
    BytesDataOutput(BytesDataOutput const &) = delete;
    BytesDataOutput() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?writeByte@BytesDataOutput@@UEAAXD@Z
    MCVAPI void writeByte(char);

    // symbol: ?writeDouble@BytesDataOutput@@UEAAXN@Z
    MCVAPI void writeDouble(double);

    // symbol: ?writeFloat@BytesDataOutput@@UEAAXM@Z
    MCVAPI void writeFloat(float);

    // symbol: ?writeInt@BytesDataOutput@@UEAAXH@Z
    MCVAPI void writeInt(int32_t);

    // symbol: ?writeLongLong@BytesDataOutput@@UEAAX_J@Z
    MCVAPI void writeLongLong(int64_t);

    // symbol: ?writeLongString@BytesDataOutput@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCVAPI void writeLongString(std::string_view);

    // symbol: ?writeShort@BytesDataOutput@@UEAAXF@Z
    MCVAPI void writeShort(int16_t);

    // symbol: ?writeString@BytesDataOutput@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCVAPI void writeString(std::string_view);

    // NOLINTEND

};

