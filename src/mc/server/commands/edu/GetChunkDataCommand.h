#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class GetChunkDataCommand : public ::Command {
public:
    // prevent constructor by default
    GetChunkDataCommand& operator=(GetChunkDataCommand const &) = delete;
    GetChunkDataCommand(GetChunkDataCommand const &) = delete;
    GetChunkDataCommand() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?execute@GetChunkDataCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;

    // symbol: ?setup@GetChunkDataCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry &);

    // NOLINTEND

};

