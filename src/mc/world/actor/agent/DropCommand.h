#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/Command.h"

// auto generated forward declare list
// clang-format off
namespace AgentCommands { class Command; }
// clang-format on

namespace AgentCommands {

class DropCommand : public ::AgentCommands::Command {
public:
    // prevent constructor by default
    DropCommand& operator=(DropCommand const &) = delete;
    DropCommand(DropCommand const &) = delete;
    DropCommand() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?execute@DropCommand@AgentCommands@@UEAAXXZ
    virtual void execute();

    // vIndex: 2, symbol: ?isDone@DropCommand@AgentCommands@@UEAA_NXZ
    virtual bool isDone();

    // NOLINTEND

};

};
