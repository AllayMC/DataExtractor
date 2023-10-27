#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFileWriteAccess {
public:
    // prevent constructor by default
    IFileWriteAccess& operator=(IFileWriteAccess const &) = delete;
    IFileWriteAccess(IFileWriteAccess const &) = delete;
    IFileWriteAccess() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?fwrite@FileSystemFileWriteAccess@FileSystemFileAccess@@UEAA_KPEBX_K1PEAX@Z
    virtual uint64 fwrite(void const *, uint64, uint64, void *) = 0;

    // NOLINTEND

};

