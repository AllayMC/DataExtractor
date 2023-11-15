#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/Constraint.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
// clang-format on

namespace cereal {

class NullConstraint : public ::cereal::Constraint {
public:
    // prevent constructor by default
    NullConstraint& operator=(NullConstraint const &) = delete;
    NullConstraint(NullConstraint const &) = delete;
    NullConstraint() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?doValidate@NullConstraint@cereal@@EEBAXAEBVmeta_any@entt@@AEAVSerializerContext@2@@Z
    MCVAPI void doValidate(class entt::meta_any const &, class cereal::SerializerContext &) const;

    // symbol: ??1NullConstraint@cereal@@UEAA@XZ
    MCVAPI ~NullConstraint();

    // NOLINTEND

};

};
