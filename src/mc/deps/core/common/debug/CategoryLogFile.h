#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/debug/LogChannel.h"

namespace BedrockLog {

struct CategoryLogFile {
public:
    // prevent constructor by default
    CategoryLogFile& operator=(CategoryLogFile const &) = delete;
    CategoryLogFile(CategoryLogFile const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ?AddChannel@CategoryLogFile@BedrockLog@@QEAAXW4LogChannel@2@@Z
    MCAPI void AddChannel(::BedrockLog::LogChannel);

    // symbol: ??0CategoryLogFile@BedrockLog@@QEAA@XZ
    MCAPI CategoryLogFile();

    // symbol: ??1CategoryLogFile@BedrockLog@@QEAA@XZ
    MCAPI ~CategoryLogFile();

    // NOLINTEND

};

};
