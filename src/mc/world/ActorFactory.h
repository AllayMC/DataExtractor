#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorFactory {
public:
    // prevent constructor by default
    ActorFactory& operator=(ActorFactory const&);
    ActorFactory(ActorFactory const&);
    ActorFactory();

public:
    // symbol:
    // ?buildSummonEntityTypeEnum@ActorFactory@@QEBA?AV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBUActorDefinitionIdentifier@@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBUActorDefinitionIdentifier@@@std@@@2@@std@@AEBVExperiments@@@Z
    MCAPI std::vector<std::pair<std::string, struct ActorDefinitionIdentifier const*>>
        buildSummonEntityTypeEnum(class Experiments const&) const;
private:
    // NOLINTBEGIN
    // symbol:
    // ?builtinEntityMappings@ActorFactory@@0V?$vector@UVanillaActorData@@V?$allocator@UVanillaActorData@@@std@@@std@@A
    MCAPI static std::vector<struct VanillaActorData> builtinEntityMappings;
    // member accessor
public:
    // NOLINTBEGIN
    static auto& $builtinEntityMappings() { return builtinEntityMappings; }
    // NOLINTEND
};
