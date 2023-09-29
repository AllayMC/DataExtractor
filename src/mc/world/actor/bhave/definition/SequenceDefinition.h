#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/CompositeDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SequenceDefinition : public ::CompositeDefinition {
public:
    // prevent constructor by default
    SequenceDefinition& operator=(SequenceDefinition const &) = delete;
    SequenceDefinition(SequenceDefinition const &) = delete;
    SequenceDefinition() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?load@SequenceDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
    virtual void load(class Json::Value, class BehaviorFactory const &);

    // vIndex: 2, symbol: ?createNode@BehaviorDefinition@@UEBA?AV?$unique_ptr@VBehaviorNode@@U?$default_delete@VBehaviorNode@@@std@@@std@@AEAVActor@@AEBVBehaviorFactory@@PEAVBehaviorNode@@PEAVBehaviorData@@@Z
    virtual std::unique_ptr<class BehaviorNode> createNode(class Actor &, class BehaviorFactory const &, class BehaviorNode *, class BehaviorData *) const;

    // NOLINTEND

};

