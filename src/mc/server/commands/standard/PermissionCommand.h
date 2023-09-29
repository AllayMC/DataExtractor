#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

class PermissionCommand : public ::ServerCommand {
public:
    // prevent constructor by default
    PermissionCommand& operator=(PermissionCommand const &) = delete;
    PermissionCommand(PermissionCommand const &) = delete;
    PermissionCommand() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?collectOptionalArguments@Command@@MEAA_NXZ
    virtual bool collectOptionalArguments();

    // vIndex: 2, symbol: ?execute@PermissionCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;

    // symbol: ?setup@PermissionCommand@@SAXAEAVCommandRegistry@@PEAVPermissionsFile@@@Z
    MCAPI static void setup(class CommandRegistry &, class PermissionsFile *);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?list@PermissionCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void list(class CommandOrigin const &, class CommandOutput &) const;

    // symbol: ?reload@PermissionCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void reload(class CommandOrigin const &, class CommandOutput &) const;

    // symbol: ?set@PermissionCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void set(class CommandOrigin const &, class CommandOutput &) const;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mPermissionsFile@PermissionCommand@@0PEAVPermissionsFile@@EA
    MCAPI static class PermissionsFile * mPermissionsFile;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $mPermissionsFile() { return mPermissionsFile; }

    // NOLINTEND

};

