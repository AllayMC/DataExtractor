#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IndexSet {
public:
    // prevent constructor by default
    IndexSet& operator=(IndexSet const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0IndexSet@@QEAA@$$QEAV0@@Z
    MCAPI IndexSet(class IndexSet &&);

    // symbol: ??0IndexSet@@QEAA@AEBV0@@Z
    MCAPI IndexSet(class IndexSet const &);

    // symbol: ??0IndexSet@@QEAA@XZ
    MCAPI IndexSet();

    // symbol: ?contains@IndexSet@@QEBA_N_K@Z
    MCAPI bool contains(uint64) const;

    // symbol: ?getPacked@IndexSet@@QEBAAEBV?$vector@_KV?$allocator@_K@std@@@std@@XZ
    MCAPI std::vector<uint64> const & getPacked() const;

    // symbol: ?insert@IndexSet@@QEAAX_K@Z
    MCAPI void insert(uint64);

    // symbol: ??8IndexSet@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class IndexSet const &) const;

    // symbol: ?remove@IndexSet@@QEAAX_K@Z
    MCAPI void remove(uint64);

    // symbol: ??1IndexSet@@QEAA@XZ
    MCAPI ~IndexSet();

    // NOLINTEND

};

