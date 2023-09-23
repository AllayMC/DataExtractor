#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class LocateCommand : public ::Command {
public:
    // prevent constructor by default
    LocateCommand& operator=(LocateCommand const &) = delete;
    LocateCommand(LocateCommand const &) = delete;
    LocateCommand() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?execute@LocateCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;

    // symbol: ?setup@LocateCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_executeLocateBiome@LocateCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void _executeLocateBiome(class CommandOrigin const &, class CommandOutput &) const;

    // symbol: ?_executeLocateStructure@LocateCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void _executeLocateStructure(class CommandOrigin const &, class CommandOutput &) const;

    // NOLINTEND

};

