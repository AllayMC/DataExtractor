#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct IsStackableDefinition {
public:
    // prevent constructor by default
    IsStackableDefinition& operator=(IsStackableDefinition const &) = delete;
    IsStackableDefinition(IsStackableDefinition const &) = delete;
    IsStackableDefinition() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?initialize@IsStackableDefinition@@QEBAXAEAVEntityContext@@@Z
    MCAPI void initialize(class EntityContext &) const;

    // symbol: ?uninitialize@IsStackableDefinition@@QEBAXAEAVEntityContext@@@Z
    MCAPI void uninitialize(class EntityContext &) const;

    // symbol: ?buildSchema@IsStackableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UIsStackableDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsStackableDefinition>> &);

    // NOLINTEND

};

