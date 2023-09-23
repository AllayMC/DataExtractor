#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class DedicatedWSServerCommand : public ::Command {
public:
    // prevent constructor by default
    DedicatedWSServerCommand& operator=(DedicatedWSServerCommand const &) = delete;
    DedicatedWSServerCommand(DedicatedWSServerCommand const &) = delete;
    DedicatedWSServerCommand() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?execute@DedicatedWSServerCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;

    // symbol: ?setup@DedicatedWSServerCommand@@SAXAEAVCommandRegistry@@AEAVIMinecraftApp@@@Z
    MCAPI static void setup(class CommandRegistry &, class IMinecraftApp &);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mApp@DedicatedWSServerCommand@@0PEAVIMinecraftApp@@EA
    MCAPI static class IMinecraftApp * mApp;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $mApp() { return mApp; }

    // NOLINTEND

};

