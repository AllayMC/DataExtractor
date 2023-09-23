#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockTagPredicate.h"

class StructurePoolBlockTagPredicateBlockTagStringMatches : public ::IStructurePoolBlockTagPredicate {
public:
    // prevent constructor by default
    StructurePoolBlockTagPredicateBlockTagStringMatches& operator=(StructurePoolBlockTagPredicateBlockTagStringMatches const &) = delete;
    StructurePoolBlockTagPredicateBlockTagStringMatches(StructurePoolBlockTagPredicateBlockTagStringMatches const &) = delete;
    StructurePoolBlockTagPredicateBlockTagStringMatches() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?test@StructurePoolBlockTagPredicateBlockTagStringMatches@@UEBA_NAEBVBlock@@AEBVCompoundTag@@@Z
    virtual bool test(class Block const &, class CompoundTag const &) const;

    // symbol: ??0StructurePoolBlockTagPredicateBlockTagStringMatches@@QEAA@AEBVBlock@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    MCAPI StructurePoolBlockTagPredicateBlockTagStringMatches(class Block const &, std::string, std::string);

    // NOLINTEND

};

