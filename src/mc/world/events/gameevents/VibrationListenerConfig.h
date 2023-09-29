#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VibrationListenerConfig {
public:
    // prevent constructor by default
    VibrationListenerConfig& operator=(VibrationListenerConfig const &) = delete;
    VibrationListenerConfig(VibrationListenerConfig const &) = delete;
    VibrationListenerConfig() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?canReceiveOnlyIfAdjacentChunksAreTicking@VibrationListenerConfig@@UEBA_NXZ
    MCVAPI bool canReceiveOnlyIfAdjacentChunksAreTicking() const;

    // symbol: ?isValidVibration@VibrationListenerConfig@@UEAA_NAEBVGameEvent@@@Z
    MCVAPI bool isValidVibration(class GameEvent const &);

    // symbol: ?onSerializableDataChanged@VibrationListenerConfig@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void onSerializableDataChanged(class BlockSource &);

    // NOLINTEND

};

