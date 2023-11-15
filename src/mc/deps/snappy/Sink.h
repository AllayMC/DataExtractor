#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace snappy {

class Sink {
public:
    // prevent constructor by default
    Sink& operator=(Sink const &) = delete;
    Sink(Sink const &) = delete;
    Sink() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0() = 0;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?GetAppendBuffer@Sink@snappy@@UEAAPEAD_KPEAD@Z
    virtual char * GetAppendBuffer(uint64_t, char *);

    // vIndex: 3, symbol: ?AppendAndTakeOwnership@Sink@snappy@@UEAAXPEAD_KP6AXPEAXPEBD1@Z2@Z
    virtual void AppendAndTakeOwnership(char *, uint64_t, void (__cdecl *)(void *, char const *, uint64_t), void *);

    // vIndex: 4, symbol: ?GetAppendBufferVariable@Sink@snappy@@UEAAPEAD_K0PEAD0PEA_K@Z
    virtual char * GetAppendBufferVariable(uint64_t, uint64_t, char *, uint64_t, uint64_t *);

    // symbol: ??1Sink@snappy@@UEAA@XZ
    MCVAPI ~Sink();

    // NOLINTEND

};

};
