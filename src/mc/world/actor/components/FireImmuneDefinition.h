#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct FireImmuneDefinition {
public:
    // prevent constructor by default
    FireImmuneDefinition& operator=(FireImmuneDefinition const &) = delete;
    FireImmuneDefinition(FireImmuneDefinition const &) = delete;
    FireImmuneDefinition() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?initialize@FireImmuneDefinition@@QEBAXAEAVEntityContext@@@Z
    MCAPI void initialize(class EntityContext &) const;

    // symbol: ?uninitialize@FireImmuneDefinition@@QEBAXAEAVEntityContext@@@Z
    MCAPI void uninitialize(class EntityContext &) const;

    // symbol: ?buildSchema@FireImmuneDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UFireImmuneDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct FireImmuneDefinition>> &);

    // NOLINTEND

};

