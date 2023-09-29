#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class PlayerVehicleTamedGoal : public ::Goal {
public:
    // prevent constructor by default
    PlayerVehicleTamedGoal& operator=(PlayerVehicleTamedGoal const &) = delete;
    PlayerVehicleTamedGoal(PlayerVehicleTamedGoal const &) = delete;
    PlayerVehicleTamedGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@PlayerVehicleTamedGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@PlayerVehicleTamedGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@PlayerVehicleTamedGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 6, symbol: ?tick@PlayerVehicleTamedGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?appendDebugInfo@PlayerVehicleTamedGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0PlayerVehicleTamedGoal@@QEAA@AEAVMob@@@Z
    MCAPI PlayerVehicleTamedGoal(class Mob &);

    // NOLINTEND

};

