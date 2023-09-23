#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct IsIgnitedDefinition {
public:
    // prevent constructor by default
    IsIgnitedDefinition& operator=(IsIgnitedDefinition const &) = delete;
    IsIgnitedDefinition(IsIgnitedDefinition const &) = delete;
    IsIgnitedDefinition() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?initialize@IsIgnitedDefinition@@QEBAXAEAVEntityContext@@@Z
    MCAPI void initialize(class EntityContext &) const;

    // symbol: ?uninitialize@IsIgnitedDefinition@@QEBAXAEAVEntityContext@@@Z
    MCAPI void uninitialize(class EntityContext &) const;

    // symbol: ?buildSchema@IsIgnitedDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UIsIgnitedDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsIgnitedDefinition>> &);

    // NOLINTEND

};

