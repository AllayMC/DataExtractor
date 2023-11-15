#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/SubClientId.h"

class LevelChunkPerformanceTelemetry {
public:
    // prevent constructor by default
    LevelChunkPerformanceTelemetry& operator=(LevelChunkPerformanceTelemetry const &) = delete;
    LevelChunkPerformanceTelemetry(LevelChunkPerformanceTelemetry const &) = delete;
    LevelChunkPerformanceTelemetry() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0LevelChunkPerformanceTelemetry@@QEAA@IAEAVIMinecraftEventing@@_N@Z
    MCAPI LevelChunkPerformanceTelemetry(uint32_t, class IMinecraftEventing &, bool);

    // symbol: ?reset@LevelChunkPerformanceTelemetry@@QEAAXW4SubClientId@@V?$NonOwnerPointer@UChunkPerformanceData@@@Bedrock@@@Z
    MCAPI void reset(::SubClientId, class Bedrock::NonOwnerPointer<struct ChunkPerformanceData>);

    // symbol: ?setPerformanceTelemetryPeriodicCallback@LevelChunkPerformanceTelemetry@@QEAAXV?$function@$$A6AXXZ@std@@@Z
    MCAPI void setPerformanceTelemetryPeriodicCallback(std::function<void (void)>);

    // symbol: ?tick@LevelChunkPerformanceTelemetry@@QEAAXV?$NonOwnerPointer@UChunkPerformanceData@@@Bedrock@@@Z
    MCAPI void tick(class Bedrock::NonOwnerPointer<struct ChunkPerformanceData>);

    // NOLINTEND

};

