#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JigsawStructureElementRegistry {
public:
    // prevent constructor by default
    JigsawStructureElementRegistry& operator=(JigsawStructureElementRegistry const &) = delete;
    JigsawStructureElementRegistry(JigsawStructureElementRegistry const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0JigsawStructureElementRegistry@@QEAA@XZ
    MCAPI JigsawStructureElementRegistry();

    // symbol: ?lookupByName@JigsawStructureElementRegistry@@QEBAPEBVStructurePoolElement@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class StructurePoolElement const * lookupByName(std::string) const;

    // symbol: ?registerStructureElement@JigsawStructureElementRegistry@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV?$unique_ptr@VStructurePoolElement@@U?$default_delete@VStructurePoolElement@@@std@@@3@@Z
    MCAPI void registerStructureElement(std::string, std::unique_ptr<class StructurePoolElement> &&);

    // NOLINTEND

};

