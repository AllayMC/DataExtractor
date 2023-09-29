#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/VibrationListenerConfig.h"

class AllayVibrationConfig : public ::VibrationListenerConfig {
public:
    // prevent constructor by default
    AllayVibrationConfig& operator=(AllayVibrationConfig const &) = delete;
    AllayVibrationConfig(AllayVibrationConfig const &) = delete;
    AllayVibrationConfig() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?onSignalReceive@AllayVibrationConfig@@UEAAXAEAVBlockSource@@AEBVBlockPos@@AEBVGameEvent@@PEAVActor@@MI3@Z
    virtual void onSignalReceive(class BlockSource &, class BlockPos const &, class GameEvent const &, class Actor *, float, uint, class Actor *);

    // vIndex: 2, symbol: ?isValidVibration@AllayVibrationConfig@@UEAA_NAEBVGameEvent@@@Z
    virtual bool isValidVibration(class GameEvent const &);

    // vIndex: 3, symbol: ?shouldListen@AllayVibrationConfig@@UEAA_NAEAVBlockSource@@AEBVGameEvent@@AEBUGameEventContext@@@Z
    virtual bool shouldListen(class BlockSource &, class GameEvent const &, struct GameEventContext const &);

    // vIndex: 4, symbol: ?onSerializableDataChanged@VibrationListenerConfig@@UEAAXAEAVBlockSource@@@Z
    virtual void onSerializableDataChanged(class BlockSource &);

    // vIndex: 5, symbol: ?canReceiveOnlyIfAdjacentChunksAreTicking@VibrationListenerConfig@@UEBA_NXZ
    virtual bool canReceiveOnlyIfAdjacentChunksAreTicking() const;

    // symbol: ??0AllayVibrationConfig@@QEAA@AEAVActor@@G@Z
    MCAPI AllayVibrationConfig(class Actor &, ushort);

    // NOLINTEND

};

