#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
// clang-format on

class PlayerRespawnTelemetryData {
public:
    // prevent constructor by default
    PlayerRespawnTelemetryData& operator=(PlayerRespawnTelemetryData const &) = delete;
    PlayerRespawnTelemetryData(PlayerRespawnTelemetryData const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0PlayerRespawnTelemetryData@@QEAA@XZ
    MCAPI PlayerRespawnTelemetryData();

    // symbol: ?WriteEventData@PlayerRespawnTelemetryData@@QEBAXAEAVEvent@Events@Social@@@Z
    MCAPI void WriteEventData(class Social::Events::Event &) const;

    // symbol: ?setChangedDimension@PlayerRespawnTelemetryData@@QEAAX_N@Z
    MCAPI void setChangedDimension(bool);

    // symbol: ?setJumpDistance@PlayerRespawnTelemetryData@@QEAAXN@Z
    MCAPI void setJumpDistance(double);

    // symbol: ?setLongJumpCount@PlayerRespawnTelemetryData@@QEAAXI@Z
    MCAPI void setLongJumpCount(uint32_t);

    // symbol: ?setPositionSourceType@PlayerRespawnTelemetryData@@QEAAXI@Z
    MCAPI void setPositionSourceType(uint32_t);

    // symbol: ?setSearchTime@PlayerRespawnTelemetryData@@QEAAXN@Z
    MCAPI void setSearchTime(double);

    // symbol: ?setShortJumpCount@PlayerRespawnTelemetryData@@QEAAXI@Z
    MCAPI void setShortJumpCount(uint32_t);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mEventName@PlayerRespawnTelemetryData@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const mEventName;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $mEventName() { return mEventName; }

    // NOLINTEND

};

