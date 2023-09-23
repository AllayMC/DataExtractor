#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

class ListCommand : public ::ServerCommand {
public:
    // prevent constructor by default
    ListCommand& operator=(ListCommand const &) = delete;
    ListCommand(ListCommand const &) = delete;
    ListCommand() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?collectOptionalArguments@Command@@MEAA_NXZ
    virtual bool collectOptionalArguments();

    // vIndex: 2, symbol: ?execute@ListCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;

    // symbol: ?setup@ListCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry &);

    // NOLINTEND

};

