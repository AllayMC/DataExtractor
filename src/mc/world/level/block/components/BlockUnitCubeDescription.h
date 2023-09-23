#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockUnitCubeDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockUnitCubeDescription& operator=(BlockUnitCubeDescription const &) = delete;
    BlockUnitCubeDescription(BlockUnitCubeDescription const &) = delete;
    BlockUnitCubeDescription() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getName@BlockUnitCubeDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const & getName() const;

    // vIndex: 2, symbol: ?initializeComponent@BlockUnitCubeDescription@@UEBAXAEAVEntityContext@@@Z
    virtual void initializeComponent(class EntityContext &) const;

    // vIndex: 7, symbol: ?isNetworkComponent@BlockUnitCubeDescription@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 8, symbol: ?buildNetworkTag@BlockUnitCubeDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEAUReflectionCtx@cereal@@@Z
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx &) const;

    // vIndex: 9, symbol: ?initializeFromNetwork@BlockUnitCubeDescription@@UEAAXAEBVCompoundTag@@AEAUReflectionCtx@cereal@@@Z
    virtual void initializeFromNetwork(class CompoundTag const &, struct cereal::ReflectionCtx &);

    // symbol: ?bindType@BlockUnitCubeDescription@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx &);

    // symbol: ?NameID@BlockUnitCubeDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND

};

