#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

namespace Core {

class FlatFileManifestInfo {
public:
    // prevent constructor by default
    FlatFileManifestInfo& operator=(FlatFileManifestInfo const &) = delete;
    FlatFileManifestInfo(FlatFileManifestInfo const &) = delete;
    FlatFileManifestInfo() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?readFromStream@FlatFileManifestInfo@Core@@QEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI class Bedrock::Result<void> readFromStream(class ReadOnlyBinaryStream &);

    // symbol: ??1FlatFileManifestInfo@Core@@QEAA@XZ
    MCAPI ~FlatFileManifestInfo();

    // NOLINTEND

};

};
