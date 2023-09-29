#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandFilePath {
public:
    // prevent constructor by default
    CommandFilePath& operator=(CommandFilePath const &) = delete;
    CommandFilePath(CommandFilePath const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0CommandFilePath@@QEAA@XZ
    MCAPI CommandFilePath();

    // symbol: ??1CommandFilePath@@QEAA@XZ
    MCAPI ~CommandFilePath();

    // NOLINTEND

};

