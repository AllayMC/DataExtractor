#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BrushableBlockActor.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolBlockPredicateCappedRandomBlockReplacement.h"

class StructurePoolBlockPredicateCappedArcheologyBlockReplacement : public ::StructurePoolBlockPredicateCappedRandomBlockReplacement {
public:
    // prevent constructor by default
    StructurePoolBlockPredicateCappedArcheologyBlockReplacement& operator=(StructurePoolBlockPredicateCappedArcheologyBlockReplacement const &) = delete;
    StructurePoolBlockPredicateCappedArcheologyBlockReplacement(StructurePoolBlockPredicateCappedArcheologyBlockReplacement const &) = delete;
    StructurePoolBlockPredicateCappedArcheologyBlockReplacement() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?finalize@StructurePoolBlockPredicateCappedArcheologyBlockReplacement@@UEAA_NAEAVBlockSource@@AEAVIRandom@@@Z
    virtual bool finalize(class BlockSource &, class IRandom &);

    // symbol: ??0StructurePoolBlockPredicateCappedArcheologyBlockReplacement@@QEAA@AEBV?$map@VHashedString@@V1@U?$less@VHashedString@@@std@@V?$allocator@U?$pair@$$CBVHashedString@@V1@@std@@@3@@std@@_KW4Placement@BrushableBlockActor@@@Z
    MCAPI StructurePoolBlockPredicateCappedArcheologyBlockReplacement(std::map<class HashedString,class HashedString> const &, uint64_t, ::BrushableBlockActor::Placement);

    // NOLINTEND

};

