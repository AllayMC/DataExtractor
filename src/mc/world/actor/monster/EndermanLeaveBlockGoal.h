#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class EndermanLeaveBlockGoal : public ::Goal {
public:
    // prevent constructor by default
    EndermanLeaveBlockGoal& operator=(EndermanLeaveBlockGoal const &) = delete;
    EndermanLeaveBlockGoal(EndermanLeaveBlockGoal const &) = delete;
    EndermanLeaveBlockGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@EndermanLeaveBlockGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 6, symbol: ?tick@EndermanLeaveBlockGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?appendDebugInfo@EndermanLeaveBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0EndermanLeaveBlockGoal@@QEAA@AEAVEnderMan@@@Z
    MCAPI EndermanLeaveBlockGoal(class EnderMan &);

    // NOLINTEND

};

