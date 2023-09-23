#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EventResponseFactory {
public:
    // prevent constructor by default
    EventResponseFactory& operator=(EventResponseFactory const &) = delete;
    EventResponseFactory(EventResponseFactory const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?initializeFactory@ItemEventResponseFactory@@UEAAXAEBVExperiments@@@Z
    virtual void initializeFactory(class Experiments const &) = 0;

    // vIndex: 2, symbol: ?initSchema@ItemEventResponseFactory@@UEAAXXZ
    virtual void initSchema() = 0;

    // symbol: ??1EventResponseFactory@@UEAA@XZ
    MCVAPI ~EventResponseFactory();

    // symbol: ??0EventResponseFactory@@QEAA@XZ
    MCAPI EventResponseFactory();

    // symbol: ?initSchema@EventResponseFactory@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSemVersion@@@Z
    MCAPI void initSchema(std::string const &, class SemVersion const &);

    // NOLINTEND

};

