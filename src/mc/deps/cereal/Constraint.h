#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
// clang-format on

namespace cereal {

class Constraint {
public:
    // prevent constructor by default
    Constraint& operator=(Constraint const &) = delete;
    Constraint(Constraint const &) = delete;
    Constraint() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?validate@Constraint@cereal@@QEBAXAEBVmeta_any@entt@@AEAVSerializerContext@2@@Z
    MCAPI void validate(class entt::meta_any const &, class cereal::SerializerContext &) const;

    // NOLINTEND

};

};
