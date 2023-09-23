#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DropItemForDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    DropItemForDefinition& operator=(DropItemForDefinition const &) = delete;
    DropItemForDefinition(DropItemForDefinition const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??0DropItemForDefinition@@QEAA@XZ
    MCAPI DropItemForDefinition();

    // symbol: ?initialize@DropItemForDefinition@@QEBAXAEAVEntityContext@@AEAVDropItemForGoal@@@Z
    MCAPI void initialize(class EntityContext &, class DropItemForGoal &) const;

    // symbol: ?buildSchema@DropItemForDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDropItemForDefinition@@@JsonUtil@@@3@@Z
    MCAPI static void buildSchema(std::string const &, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DropItemForDefinition>> &);

    // NOLINTEND

};

