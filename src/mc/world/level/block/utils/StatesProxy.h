#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace BlockDescriptorSerializer {

struct StatesProxy {
public:
    // prevent constructor by default
    StatesProxy(StatesProxy const &) = delete;
    StatesProxy() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?fromMap@StatesProxy@BlockDescriptorSerializer@@QEAAXAEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UCompoundProxy@BlockDescriptor@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UCompoundProxy@BlockDescriptor@@@std@@@2@@std@@@Z
    MCAPI void fromMap(std::map<std::string,struct BlockDescriptor::CompoundProxy> const &);

    // symbol: ??4StatesProxy@BlockDescriptorSerializer@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct BlockDescriptorSerializer::StatesProxy & operator=(struct BlockDescriptorSerializer::StatesProxy &&);

    // symbol: ??4StatesProxy@BlockDescriptorSerializer@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct BlockDescriptorSerializer::StatesProxy & operator=(struct BlockDescriptorSerializer::StatesProxy const &);

    // symbol: ??1StatesProxy@BlockDescriptorSerializer@@QEAA@XZ
    MCAPI ~StatesProxy();

    // symbol: ?bindType@StatesProxy@BlockDescriptorSerializer@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx &);

    // symbol: ?toMap@StatesProxy@BlockDescriptorSerializer@@SA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UCompoundProxy@BlockDescriptor@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UCompoundProxy@BlockDescriptor@@@std@@@2@@std@@AEBU12@@Z
    MCAPI static std::map<std::string,struct BlockDescriptor::CompoundProxy> toMap(struct BlockDescriptorSerializer::StatesProxy const &);

    // NOLINTEND

};

};
