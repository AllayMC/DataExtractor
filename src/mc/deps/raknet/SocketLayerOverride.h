#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class SocketLayerOverride {
public:
    // prevent constructor by default
    SocketLayerOverride& operator=(SocketLayerOverride const &) = delete;
    SocketLayerOverride(SocketLayerOverride const &) = delete;
    SocketLayerOverride() = delete;

};

};
