#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockMaterialInstancesDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockMaterialInstancesDescription& operator=(BlockMaterialInstancesDescription const &) = delete;
    BlockMaterialInstancesDescription(BlockMaterialInstancesDescription const &) = delete;
    BlockMaterialInstancesDescription() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getName@BlockMaterialInstancesDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const & getName() const;

    // vIndex: 2, symbol: ?initializeComponent@BlockMaterialInstancesDescription@@UEBAXAEAVEntityContext@@@Z
    virtual void initializeComponent(class EntityContext &) const;

    // vIndex: 4, symbol: ?initializeComponentFromCode@BlockMaterialInstancesDescription@@UEBAXAEAVEntityContext@@@Z
    virtual void initializeComponentFromCode(class EntityContext &) const;

    // vIndex: 7, symbol: ?isNetworkComponent@BlockMaterialInstancesDescription@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 8, symbol: ?buildNetworkTag@BlockMaterialInstancesDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEAUReflectionCtx@cereal@@@Z
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx &) const;

    // vIndex: 9, symbol: ?initializeFromNetwork@BlockMaterialInstancesDescription@@UEAAXAEBVCompoundTag@@AEAUReflectionCtx@cereal@@@Z
    virtual void initializeFromNetwork(class CompoundTag const &, struct cereal::ReflectionCtx &);

    // symbol: ??1BlockMaterialInstancesDescription@@UEAA@XZ
    MCVAPI ~BlockMaterialInstancesDescription();

    // symbol: ??0BlockMaterialInstancesDescription@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockRenderLayer@@_N2@Z
    MCAPI BlockMaterialInstancesDescription(std::string const &, ::BlockRenderLayer, bool, bool);

    // symbol: ?bindType@BlockMaterialInstancesDescription@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx &);

    // symbol: ?NameID@BlockMaterialInstancesDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND

};

