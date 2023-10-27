#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CerealComponentItemDataLoader {
public:
    // prevent constructor by default
    CerealComponentItemDataLoader& operator=(CerealComponentItemDataLoader const &) = delete;
    CerealComponentItemDataLoader(CerealComponentItemDataLoader const &) = delete;
    CerealComponentItemDataLoader() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0CerealComponentItemDataLoader@@QEAA@PEAVComponentItem@@VSemVersion@@AEAUReflectionCtx@cereal@@@Z
    MCAPI CerealComponentItemDataLoader(class ComponentItem *, class SemVersion, struct cereal::ReflectionCtx &);

    // NOLINTEND

};

