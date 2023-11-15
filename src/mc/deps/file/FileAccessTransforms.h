#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FileAccessTransforms {
public:
    // prevent constructor by default
    FileAccessTransforms& operator=(FileAccessTransforms const &) = delete;
    FileAccessTransforms(FileAccessTransforms const &) = delete;
    FileAccessTransforms() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?readTransform@FileAccessTransforms@@UEBA_NAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual bool readTransform(std::vector<uint8_t> &) const;

    // vIndex: 2, symbol: ?writeTransform@FileAccessTransforms@@UEBA_NAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual bool writeTransform(std::vector<uint8_t> &) const;

    // NOLINTEND

};

