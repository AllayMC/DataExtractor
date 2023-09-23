#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/IActorManagerProxy.h"

class ServerActorManagerProxy : public ::IActorManagerProxy {
public:
    // prevent constructor by default
    ServerActorManagerProxy& operator=(ServerActorManagerProxy const &) = delete;
    ServerActorManagerProxy(ServerActorManagerProxy const &) = delete;
    ServerActorManagerProxy() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?initializeActor@ServerActorManagerProxy@@UEAAXAEAVActor@@@Z
    virtual void initializeActor(class Actor &);

    // vIndex: 2, symbol: ?validate@ServerActorManagerProxy@@UEAA_NAEBVActor@@@Z
    virtual bool validate(class Actor const &);

    // vIndex: 3, symbol: ?removeActorInLevelChunk@ServerActorManagerProxy@@UEAAXAEBVActor@@@Z
    virtual void removeActorInLevelChunk(class Actor const &);

    // vIndex: 4, symbol: ?deleteActorFromWorldInLevelChunk@ServerActorManagerProxy@@UEAAXAEBVActor@@@Z
    virtual void deleteActorFromWorldInLevelChunk(class Actor const &);

    // NOLINTEND

};

