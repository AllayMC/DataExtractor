#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/PlayerSleepManager.h"

class ServerPlayerSleepManager : public ::PlayerSleepManager {
public:
    // prevent constructor by default
    ServerPlayerSleepManager& operator=(ServerPlayerSleepManager const &) = delete;
    ServerPlayerSleepManager(ServerPlayerSleepManager const &) = delete;
    ServerPlayerSleepManager() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?updateSleepingPlayerList@ServerPlayerSleepManager@@UEAAXM@Z
    virtual void updateSleepingPlayerList(float);

    // symbol: ??1ServerPlayerSleepManager@@UEAA@XZ
    MCVAPI ~ServerPlayerSleepManager();

    // symbol: ?enoughPlayersDeepSleeping@ServerPlayerSleepManager@@QEBA_NM@Z
    MCAPI bool enoughPlayersDeepSleeping(float) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_awakenAllPlayers@ServerPlayerSleepManager@@AEAAXXZ
    MCAPI void _awakenAllPlayers();

    // symbol: ?_onPlayerDeath@ServerPlayerSleepManager@@AEAAXAEAVPlayer@@@Z
    MCAPI void _onPlayerDeath(class Player &);

    // NOLINTEND

};

