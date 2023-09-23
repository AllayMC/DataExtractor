#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct IsShearedDefinition {
public:
    // prevent constructor by default
    IsShearedDefinition& operator=(IsShearedDefinition const &) = delete;
    IsShearedDefinition(IsShearedDefinition const &) = delete;
    IsShearedDefinition() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?initialize@IsShearedDefinition@@QEBAXAEAVEntityContext@@@Z
    MCAPI void initialize(class EntityContext &) const;

    // symbol: ?uninitialize@IsShearedDefinition@@QEBAXAEAVEntityContext@@@Z
    MCAPI void uninitialize(class EntityContext &) const;

    // symbol: ?buildSchema@IsShearedDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UIsShearedDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsShearedDefinition>> &);

    // NOLINTEND

};

