#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BalloonDefinition {
public:
    // prevent constructor by default
    BalloonDefinition& operator=(BalloonDefinition const &) = delete;
    BalloonDefinition(BalloonDefinition const &) = delete;
    BalloonDefinition() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?buildSchema@BalloonDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VBalloonDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BalloonDefinition>> &);

    // NOLINTEND

};

