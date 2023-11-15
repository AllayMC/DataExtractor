#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/math/IPositionalRandomFactory.h"

class SimplePositionalRandomFactory : public ::IPositionalRandomFactory {
public:
    // prevent constructor by default
    SimplePositionalRandomFactory& operator=(SimplePositionalRandomFactory const &) = delete;
    SimplePositionalRandomFactory(SimplePositionalRandomFactory const &) = delete;
    SimplePositionalRandomFactory() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?forBlockPos@SimplePositionalRandomFactory@@UEBA?AV?$unique_ptr@VIRandom@@U?$default_delete@VIRandom@@@std@@@std@@AEBVBlockPos@@@Z
    virtual std::unique_ptr<class IRandom> forBlockPos(class BlockPos const &) const;

    // vIndex: 2, symbol: ?forString@SimplePositionalRandomFactory@@UEBA?AV?$unique_ptr@VIRandom@@U?$default_delete@VIRandom@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    virtual std::unique_ptr<class IRandom> forString(std::string const &) const;

    // symbol: ??0SimplePositionalRandomFactory@@QEAA@_J@Z
    MCAPI SimplePositionalRandomFactory(int64_t);

    // symbol: ?forBlockPosImpl@SimplePositionalRandomFactory@@QEBA?AVSimpleRandom@@AEBVBlockPos@@@Z
    MCAPI class SimpleRandom forBlockPosImpl(class BlockPos const &) const;

    // NOLINTEND

};

