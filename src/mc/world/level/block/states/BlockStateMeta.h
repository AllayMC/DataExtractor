#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"

class BlockStateMeta {
public:
    // prevent constructor by default
    BlockStateMeta& operator=(BlockStateMeta const &) = delete;
    BlockStateMeta(BlockStateMeta const &) = delete;
    BlockStateMeta() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0BlockStateMeta@@QEAA@AEBVBlockState@@AEBUBlockStateDefinition@@@Z
    MCAPI BlockStateMeta(class BlockState const &, struct BlockStateDefinition const &);

    // symbol: ?getBool@BlockStateMeta@@QEBA?B_NH@Z
    MCAPI bool const getBool(int) const;

    // symbol: ?getID@BlockStateMeta@@QEBA_KXZ
    MCAPI uint64 getID() const;

    // symbol: ?getInt@BlockStateMeta@@QEBA?BHH@Z
    MCAPI int const getInt(int) const;

    // symbol: ?getState@BlockStateMeta@@QEBAAEBVBlockState@@XZ
    MCAPI class BlockState const & getState() const;

    // symbol: ?getString@BlockStateMeta@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI std::string const & getString(int) const;

    // symbol: ?getType@BlockStateMeta@@QEBA?BW4Type@Tag@@XZ
    MCAPI ::Tag::Type const getType() const;

    // NOLINTEND

};

