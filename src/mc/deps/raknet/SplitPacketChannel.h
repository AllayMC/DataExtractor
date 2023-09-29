#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct SplitPacketChannel {
public:
    // prevent constructor by default
    SplitPacketChannel& operator=(SplitPacketChannel const &) = delete;
    SplitPacketChannel(SplitPacketChannel const &) = delete;
    SplitPacketChannel() = delete;

};

};
