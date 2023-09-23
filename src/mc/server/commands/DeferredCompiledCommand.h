#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/DeferredCommandBase.h"

class DeferredCompiledCommand : public ::DeferredCommandBase {
public:
    // prevent constructor by default
    DeferredCompiledCommand& operator=(DeferredCompiledCommand const &) = delete;
    DeferredCompiledCommand(DeferredCompiledCommand const &) = delete;
    DeferredCompiledCommand() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?execute@DeferredCompiledCommand@@UEAAXAEAVMinecraftCommands@@@Z
    virtual void execute(class MinecraftCommands &);

    // NOLINTEND

};

