#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InMemoryWritableFile {
public:
    // prevent constructor by default
    InMemoryWritableFile& operator=(InMemoryWritableFile const &) = delete;
    InMemoryWritableFile(InMemoryWritableFile const &) = delete;
    InMemoryWritableFile() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?Append@InMemoryWritableFile@@UEAA?AVStatus@leveldb@@AEBVSlice@3@@Z
    virtual class leveldb::Status Append(class leveldb::Slice const &);

    // vIndex: 2, symbol: ?Close@InMemoryWritableFile@@UEAA?AVStatus@leveldb@@XZ
    virtual class leveldb::Status Close();

    // vIndex: 3, symbol: ?Flush@InMemoryWritableFile@@UEAA?AVStatus@leveldb@@XZ
    virtual class leveldb::Status Flush();

    // vIndex: 4, symbol: ?Sync@InMemoryWritableFile@@UEAA?AVStatus@leveldb@@XZ
    virtual class leveldb::Status Sync();

    // symbol: ??0InMemoryWritableFile@@QEAA@V?$shared_ptr@VInMemoryFile@@@std@@@Z
    MCAPI InMemoryWritableFile(std::shared_ptr<class InMemoryFile>);

    // NOLINTEND

};

