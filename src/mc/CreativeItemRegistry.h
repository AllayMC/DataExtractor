#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CreativeItemRegistry {
public:
	// symbol: ?forEachCreativeItemInstance@CreativeItemRegistry@@SAXV?$function@$$A6A_NAEAVItemInstance@@@Z@std@@@Z
	MCAPI static void forEachCreativeItemInstance(std::function<bool(class ItemInstance&)>);
};