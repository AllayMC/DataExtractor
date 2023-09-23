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

struct BlockQueuedTickingDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockQueuedTickingDescription& operator=(BlockQueuedTickingDescription const &) = delete;
    BlockQueuedTickingDescription(BlockQueuedTickingDescription const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getName@BlockQueuedTickingDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const & getName() const;

    // vIndex: 2, symbol: ?initializeComponent@BlockQueuedTickingDescription@@UEBAXAEAVEntityContext@@@Z
    virtual void initializeComponent(class EntityContext &) const;

    // symbol: ??0BlockQueuedTickingDescription@@QEAA@XZ
    MCAPI BlockQueuedTickingDescription();

    // symbol: ?bindType@BlockQueuedTickingDescription@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx &);

    // symbol: ?NameID@BlockQueuedTickingDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND

};

