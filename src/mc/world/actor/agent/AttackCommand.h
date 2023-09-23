#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/Command.h"

// auto generated forward declare list
// clang-format off
namespace AgentCommands { class Command; }
// clang-format on

namespace AgentCommands {

class AttackCommand : public ::AgentCommands::Command {
public:
    // prevent constructor by default
    AttackCommand& operator=(AttackCommand const &) = delete;
    AttackCommand(AttackCommand const &) = delete;
    AttackCommand() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?execute@AttackCommand@AgentCommands@@UEAAXXZ
    virtual void execute();

    // vIndex: 2, symbol: ?isDone@AttackCommand@AgentCommands@@UEAA_NXZ
    virtual bool isDone();

    // NOLINTEND

};

};
