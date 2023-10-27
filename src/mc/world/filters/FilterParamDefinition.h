#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/FilterParamOption.h"
#include "mc/enums/FilterParamRequirement.h"
#include "mc/enums/FilterParamType.h"

struct FilterParamDefinition {
public:
    // prevent constructor by default
    FilterParamDefinition& operator=(FilterParamDefinition const &) = delete;
    FilterParamDefinition(FilterParamDefinition const &) = delete;
    FilterParamDefinition() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0FilterParamDefinition@@QEAA@W4FilterParamType@@W4FilterParamRequirement@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VFilterInput@@UFilterStringMap@@@Z
    MCAPI FilterParamDefinition(::FilterParamType, ::FilterParamRequirement, std::string, class FilterInput, struct FilterStringMap);

    // symbol: ??0FilterParamDefinition@@QEAA@W4FilterParamType@@W4FilterParamRequirement@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4FilterParamOption@@VFilterInput@@UFilterStringMap@@@Z
    MCAPI FilterParamDefinition(::FilterParamType, ::FilterParamRequirement, std::string, ::FilterParamOption, class FilterInput, struct FilterStringMap);

    // symbol: ??1FilterParamDefinition@@QEAA@XZ
    MCAPI ~FilterParamDefinition();

    // NOLINTEND

};

