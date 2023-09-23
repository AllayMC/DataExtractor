#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace snappy {

class ByteArraySource {
public:
    // prevent constructor by default
    ByteArraySource& operator=(ByteArraySource const &) = delete;
    ByteArraySource(ByteArraySource const &) = delete;
    ByteArraySource() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?Available@ByteArraySource@snappy@@UEBA_KXZ
    virtual uint64 Available() const;

    // vIndex: 2, symbol: ?Peek@ByteArraySource@snappy@@UEAAPEBDPEA_K@Z
    virtual char const * Peek(uint64 *);

    // vIndex: 3, symbol: ?Skip@ByteArraySource@snappy@@UEAAX_K@Z
    virtual void Skip(uint64);

    // symbol: ??1ByteArraySource@snappy@@UEAA@XZ
    MCVAPI ~ByteArraySource();

    // NOLINTEND

};

};
