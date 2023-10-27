#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerSkinLoadedClientEvent {
public:
    // prevent constructor by default
    PlayerSkinLoadedClientEvent& operator=(PlayerSkinLoadedClientEvent const &) = delete;
    PlayerSkinLoadedClientEvent(PlayerSkinLoadedClientEvent const &) = delete;
    PlayerSkinLoadedClientEvent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1PlayerSkinLoadedClientEvent@@QEAA@XZ
    MCAPI ~PlayerSkinLoadedClientEvent();

    // NOLINTEND

};

