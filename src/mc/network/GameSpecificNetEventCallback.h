#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameSpecificNetEventCallback {
public:
    // prevent constructor by default
    GameSpecificNetEventCallback& operator=(GameSpecificNetEventCallback const &) = delete;
    GameSpecificNetEventCallback(GameSpecificNetEventCallback const &) = delete;
    GameSpecificNetEventCallback() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?handle@GameSpecificNetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePackClientResponsePacket@@@Z
    virtual void handle(class NetworkIdentifier const &, class ResourcePackClientResponsePacket const &);

    // NOLINTEND

};

