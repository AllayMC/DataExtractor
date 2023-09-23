#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SetActorLinkPacketSystem {
public:
    // prevent constructor by default
    SetActorLinkPacketSystem& operator=(SetActorLinkPacketSystem const &) = delete;
    SetActorLinkPacketSystem(SetActorLinkPacketSystem const &) = delete;
    SetActorLinkPacketSystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?createPassengerSystem@SetActorLinkPacketSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createPassengerSystem();

    // symbol: ?createVehicleSystem@SetActorLinkPacketSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createVehicleSystem();

    // NOLINTEND

};

