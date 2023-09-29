#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemStackNetResult.h"

class ScreenHandlerBase {
public:
    // prevent constructor by default
    ScreenHandlerBase& operator=(ScreenHandlerBase const &) = delete;
    ScreenHandlerBase(ScreenHandlerBase const &) = delete;
    ScreenHandlerBase() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?handleAction@ScreenHandlerBase@@UEAA?AW4ItemStackNetResult@@AEBVItemStackRequestAction@@@Z
    virtual ::ItemStackNetResult handleAction(class ItemStackRequestAction const &);

    // vIndex: 2, symbol: ?endRequest@ScreenHandlerBase@@UEAA?AW4ItemStackNetResult@@XZ
    virtual ::ItemStackNetResult endRequest();

    // vIndex: 3, symbol: ?endRequestBatch@ScreenHandlerBase@@UEAAXXZ
    virtual void endRequestBatch();

    // vIndex: 4, symbol: ?postRequest@ScreenHandlerBase@@UEAAX_N@Z
    virtual void postRequest(bool);

    // symbol: ??1ScreenHandlerBase@@UEAA@XZ
    MCVAPI ~ScreenHandlerBase();

    // symbol: ??0ScreenHandlerBase@@QEAA@AEAVItemStackRequestActionHandler@@@Z
    MCAPI ScreenHandlerBase(class ItemStackRequestActionHandler &);

    // NOLINTEND

};

