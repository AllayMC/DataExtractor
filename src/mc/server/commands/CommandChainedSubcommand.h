#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandChainedSubcommand {
public:
    // prevent constructor by default
    CommandChainedSubcommand& operator=(CommandChainedSubcommand const &) = delete;
    CommandChainedSubcommand(CommandChainedSubcommand const &) = delete;
    CommandChainedSubcommand() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?getCommand@CommandChainedSubcommand@@QEBAPEBVCommand@@XZ
    MCAPI class Command const * getCommand() const;

    // symbol: ?setCommand@CommandChainedSubcommand@@QEAAXV?$unique_ptr@VCommand@@U?$default_delete@VCommand@@@std@@@std@@@Z
    MCAPI void setCommand(std::unique_ptr<class Command>);

    // NOLINTEND

};

