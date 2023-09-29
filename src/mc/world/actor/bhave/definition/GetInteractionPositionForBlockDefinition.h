#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class GetInteractionPositionForBlockDefinition : public ::BehaviorDefinition {
public:
    // prevent constructor by default
    GetInteractionPositionForBlockDefinition& operator=(GetInteractionPositionForBlockDefinition const &) = delete;
    GetInteractionPositionForBlockDefinition(GetInteractionPositionForBlockDefinition const &) = delete;
    GetInteractionPositionForBlockDefinition() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?load@GetInteractionPositionForBlockDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
    virtual void load(class Json::Value, class BehaviorFactory const &);

    // symbol: ??1GetInteractionPositionForBlockDefinition@@UEAA@XZ
    MCVAPI ~GetInteractionPositionForBlockDefinition();

    // NOLINTEND

};

