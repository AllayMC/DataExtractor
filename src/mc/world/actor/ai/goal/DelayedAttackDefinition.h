#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/MeleeAttackDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DelayedAttackDefinition : public ::MeleeAttackDefinition {
public:
    // prevent constructor by default
    DelayedAttackDefinition& operator=(DelayedAttackDefinition const &) = delete;
    DelayedAttackDefinition(DelayedAttackDefinition const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??0DelayedAttackDefinition@@QEAA@XZ
    MCAPI DelayedAttackDefinition();

    // symbol: ?initialize@DelayedAttackDefinition@@QEBAXAEAVEntityContext@@AEAVDelayedAttackGoal@@@Z
    MCAPI void initialize(class EntityContext &, class DelayedAttackGoal &) const;

    // symbol: ?buildSchema@DelayedAttackDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDelayedAttackDefinition@@@JsonUtil@@@3@@Z
    MCAPI static void buildSchema(std::string const &, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DelayedAttackDefinition>> &);

    // NOLINTEND

};

