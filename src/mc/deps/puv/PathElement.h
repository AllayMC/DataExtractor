#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/SerializerContext.h"

namespace Puv::internal {

struct PathElement {
public:
    // prevent constructor by default
    PathElement& operator=(PathElement const &) = delete;
    PathElement(PathElement const &) = delete;
    PathElement() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0PathElement@internal@Puv@@QEAA@IV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ContextType@SerializerContext@cereal@@@Z
    MCAPI PathElement(uint, std::string, ::cereal::SerializerContext::ContextType);

    // symbol: ??1PathElement@internal@Puv@@QEAA@XZ
    MCAPI ~PathElement();

    // NOLINTEND

};

};
