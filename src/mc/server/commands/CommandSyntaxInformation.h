#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CommandSyntaxInformation {
public:
    // prevent constructor by default
    CommandSyntaxInformation& operator=(CommandSyntaxInformation const &) = delete;
    CommandSyntaxInformation(CommandSyntaxInformation const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0CommandSyntaxInformation@@QEAA@XZ
    MCAPI CommandSyntaxInformation();

    // symbol: ??1CommandSyntaxInformation@@QEAA@XZ
    MCAPI ~CommandSyntaxInformation();

    // NOLINTEND

};

