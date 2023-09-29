#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/components/IAddActorEntityProxy.h"

class AddActorEntityProxy : public ::IAddActorEntityProxy {
public:
    // prevent constructor by default
    AddActorEntityProxy& operator=(AddActorEntityProxy const &) = delete;
    AddActorEntityProxy(AddActorEntityProxy const &) = delete;
    AddActorEntityProxy() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?initializeActor@AddActorEntityProxy@@UEAAXAEAVActor@@@Z
    virtual void initializeActor(class Actor &);

    // vIndex: 2, symbol: ?reloadActor@AddActorEntityProxy@@UEAAXAEAVActor@@@Z
    virtual void reloadActor(class Actor &);

    // symbol: ??0AddActorEntityProxy@@QEAA@AEAVDimension@@@Z
    MCAPI AddActorEntityProxy(class Dimension &);

    // NOLINTEND

};

