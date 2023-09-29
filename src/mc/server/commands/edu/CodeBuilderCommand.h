#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class CodeBuilderCommand : public ::Command {
public:
    // prevent constructor by default
    CodeBuilderCommand& operator=(CodeBuilderCommand const &) = delete;
    CodeBuilderCommand(CodeBuilderCommand const &) = delete;
    CodeBuilderCommand() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?execute@CodeBuilderCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;

    // symbol: ?setup@CodeBuilderCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry &);

    // NOLINTEND

};

