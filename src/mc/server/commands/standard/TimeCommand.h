#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class TimeCommand : public ::Command {
public:
    // prevent constructor by default
    TimeCommand& operator=(TimeCommand const &) = delete;
    TimeCommand(TimeCommand const &) = delete;
    TimeCommand() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?execute@TimeCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;

    // symbol: ?setup@TimeCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry &);

    // NOLINTEND

};

