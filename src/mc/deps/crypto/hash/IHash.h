#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Hash {

class IHash {
public:
    // prevent constructor by default
    IHash& operator=(IHash const &) = delete;
    IHash(IHash const &) = delete;
    IHash() = delete;

};

};
