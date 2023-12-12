#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/OwnerPtrT.h"

template <typename T0, typename T1, typename T2>
class OwnerPtrFactory {
public:
    // prevent constructor by default
    OwnerPtrFactory& operator=(OwnerPtrFactory const&);
    OwnerPtrFactory(OwnerPtrFactory const&);
    OwnerPtrFactory();

    // symbol:
    // ?registerFactory@?$OwnerPtrFactory@VDimension@@AEAVILevel@@AEAVScheduler@@@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6A?AV?$OwnerPtrT@U?$SharePtrRefTraits@VDimension@@@@@@AEAVILevel@@AEAVScheduler@@@Z@3@@Z
    MCAPI void registerFactory(std::string const&, std::function<OwnerPtrT<SharePtrRefTraits<T0>>(T1&, T2&)>);
};
