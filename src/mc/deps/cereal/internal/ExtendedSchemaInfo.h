#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct ExtendedSchemaInfo {
public:
    // prevent constructor by default
    ExtendedSchemaInfo& operator=(ExtendedSchemaInfo const &) = delete;
    ExtendedSchemaInfo(ExtendedSchemaInfo const &) = delete;
    ExtendedSchemaInfo() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0ExtendedSchemaInfo@internal@cereal@@QEAA@$$QEAU012@@Z
    MCAPI ExtendedSchemaInfo(struct cereal::internal::ExtendedSchemaInfo &&);

    // symbol: ??1ExtendedSchemaInfo@internal@cereal@@QEAA@XZ
    MCAPI ~ExtendedSchemaInfo();

    // NOLINTEND

};

};
