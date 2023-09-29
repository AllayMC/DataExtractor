#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct VolumeFogDefinition {
public:
    // prevent constructor by default
    VolumeFogDefinition& operator=(VolumeFogDefinition const &) = delete;
    VolumeFogDefinition(VolumeFogDefinition const &) = delete;
    VolumeFogDefinition() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?initialize@VolumeFogDefinition@@QEBAXAEAVEntityContext@@AEAVVolumeFogComponent@@@Z
    MCAPI void initialize(class EntityContext &, class VolumeFogComponent &) const;

    // symbol: ??1VolumeFogDefinition@@QEAA@XZ
    MCAPI ~VolumeFogDefinition();

    // symbol: ?bindType@VolumeFogDefinition@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx &);

    // symbol: ?NAME@VolumeFogDefinition@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NAME;

    // NOLINTEND

};

