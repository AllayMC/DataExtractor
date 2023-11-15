#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/SchemaReader.h"
#include "mc/deps/cereal/SchemaReaderState.h"
#include "mc/deps/cereal/SerializerContext.h"
#include "mc/deps/cereal/internal/BasicSchema.h"
#include "mc/deps/cereal/internal/ReflectedType.h"
#include "mc/deps/cereal/internal/ResultCode.h"
#include "mc/deps/core/common/bedrock/Result.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class BasicLoader; }
namespace cereal { class BasicSaver; }
namespace cereal { class Constraint; }
namespace cereal { class NumericConstraint; }
namespace cereal { class SchemaFactory; }
namespace cereal { class SerializerContext; }
namespace cereal { class SerializerEnumMapping; }
namespace cereal { class StringConstraint; }
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct Schema; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal { struct SerializerTraits; }
namespace cereal::internal { class BasicCompositeSchema; }
namespace cereal::internal { class BasicSchema; }
namespace cereal::internal { class UndefinedSchema; }
namespace cereal::internal { struct ExtendedSchemaInfo; }
namespace cereal::internal { struct ReflectionContext; }
namespace cereal::internal { struct SchemaInfo; }
// clang-format on

namespace cereal {
    // NOLINTBEGIN
    // symbol: ?fillOptional@cereal@@YA?AVmeta_any@entt@@AEAV23@@Z
    MCAPI class entt::meta_any fillOptional(class entt::meta_any &);

    // symbol: ?getSchemaName@cereal@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVmeta_type@entt@@@Z
    MCAPI std::string const & getSchemaName(class entt::meta_type const &);

    // symbol: ?isOptional@cereal@@YA_NAEBVmeta_type@entt@@@Z
    MCAPI bool isOptional(class entt::meta_type const &);

    // symbol: ?metaDataTraits@cereal@@YAPEBUSerializerTraits@1@AEBUmeta_data@entt@@@Z
    MCAPI struct cereal::SerializerTraits const * metaDataTraits(struct entt::meta_data const &);

    // symbol: ?resolve@cereal@@YA?AVmeta_type@entt@@AEBUReflectionCtx@1@AEBUtype_info@3@@Z
    MCAPI class entt::meta_type resolve(struct cereal::ReflectionCtx const &, struct entt::type_info const &);

    // symbol: ?tryGetOptionalValue@cereal@@YA?AVmeta_any@entt@@Umeta_handle@3@@Z
    MCAPI class entt::meta_any tryGetOptionalValue(struct entt::meta_handle);

    // symbol: ?typeLevelGetter@cereal@@YA?AUmeta_func@entt@@AEBVmeta_type@3@@Z
    MCAPI struct entt::meta_func typeLevelGetter(class entt::meta_type const &);

    // symbol: ?typeLevelSetters@cereal@@YA?AV?$vector@Umeta_func@entt@@V?$allocator@Umeta_func@entt@@@std@@@std@@AEBVmeta_type@entt@@@Z
    MCAPI std::vector<struct entt::meta_func> typeLevelSetters(class entt::meta_type const &);
    // NOLINTEND

};
