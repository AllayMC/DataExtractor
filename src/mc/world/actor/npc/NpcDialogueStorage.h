#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CurrentCmdVersion.h"

class NpcDialogueStorage {
public:
    // prevent constructor by default
    NpcDialogueStorage& operator=(NpcDialogueStorage const &) = delete;
    NpcDialogueStorage(NpcDialogueStorage const &) = delete;
    NpcDialogueStorage() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?getScene@NpcDialogueStorage@@QEAAPEAUNpcDialogueScene@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct NpcDialogueScene * getScene(std::string const &);

    // symbol: ?getScene@NpcDialogueStorage@@QEBAPEBUNpcDialogueScene@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct NpcDialogueScene const * getScene(std::string const &) const;

    // symbol: ?init@NpcDialogueStorage@@QEAAXAEAVResourcePackManager@@@Z
    MCAPI void init(class ResourcePackManager &);

    // symbol: ?parseFile@NpcDialogueStorage@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4CurrentCmdVersion@@@Z
    MCAPI bool parseFile(std::string const &, std::string const &, ::CurrentCmdVersion);

    // NOLINTEND

};

