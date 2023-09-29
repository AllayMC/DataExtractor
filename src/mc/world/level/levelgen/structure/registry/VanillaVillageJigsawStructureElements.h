#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class VanillaVillageJigsawStructureElements {
public:
    // prevent constructor by default
    VanillaVillageJigsawStructureElements& operator=(VanillaVillageJigsawStructureElements const &) = delete;
    VanillaVillageJigsawStructureElements(VanillaVillageJigsawStructureElements const &) = delete;
    VanillaVillageJigsawStructureElements() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?initialize@VanillaVillageJigsawStructureElements@@SAXV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEAVFeatureRegistry@@AEAVJigsawStructureRegistry@@@Z
    MCAPI static void initialize(gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class FeatureRegistry &, class JigsawStructureRegistry &);

    // NOLINTEND

};

