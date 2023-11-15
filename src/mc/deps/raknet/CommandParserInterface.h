#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class CommandParserInterface {
public:
    // prevent constructor by default
    CommandParserInterface& operator=(CommandParserInterface const &) = delete;
    CommandParserInterface(CommandParserInterface const &) = delete;
    CommandParserInterface() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?VARIABLE_NUMBER_OF_PARAMETERS@CommandParserInterface@RakNet@@2EB
    MCAPI static uint8_t const VARIABLE_NUMBER_OF_PARAMETERS;

    // NOLINTEND

};

};
