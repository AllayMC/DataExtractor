#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ExplodeDefinition {
public:
    // prevent constructor by default
    ExplodeDefinition& operator=(ExplodeDefinition const &) = delete;
    ExplodeDefinition(ExplodeDefinition const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0ExplodeDefinition@@QEAA@XZ
    MCAPI ExplodeDefinition();

    // symbol: ?initialize@ExplodeDefinition@@QEBAXAEAVEntityContext@@AEAVExplodeComponent@@@Z
    MCAPI void initialize(class EntityContext &, class ExplodeComponent &) const;

    // symbol: ?uninitialize@ExplodeDefinition@@QEBAXAEAVEntityContext@@@Z
    MCAPI void uninitialize(class EntityContext &) const;

    // symbol: ?buildSchema@ExplodeDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VExplodeDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ExplodeDefinition>> &);

    // NOLINTEND

};

