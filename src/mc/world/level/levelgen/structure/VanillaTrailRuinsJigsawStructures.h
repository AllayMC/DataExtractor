#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class VanillaTrailRuinsJigsawStructures {
public:
    // prevent constructor by default
    VanillaTrailRuinsJigsawStructures& operator=(VanillaTrailRuinsJigsawStructures const &) = delete;
    VanillaTrailRuinsJigsawStructures(VanillaTrailRuinsJigsawStructures const &) = delete;
    VanillaTrailRuinsJigsawStructures() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?initialize@VanillaTrailRuinsJigsawStructures@@SAXV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEAVJigsawStructureRegistry@@@Z
    MCAPI static void initialize(Bedrock::NotNullNonOwnerPtr<class StructureManager>, class JigsawStructureRegistry &);

    // NOLINTEND

};

