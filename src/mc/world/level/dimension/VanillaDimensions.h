#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"
#include "mc/world/AutomaticID.h"

class VanillaDimensions {
public:
    // prevent constructor by default
    VanillaDimensions& operator=(VanillaDimensions const &) = delete;
    VanillaDimensions(VanillaDimensions const &) = delete;
    VanillaDimensions() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?convertPointBetweenDimensions@VanillaDimensions@@SA_NAEBVVec3@@AEAV2@V?$AutomaticID@VDimension@@H@@2AEBVDimensionConversionData@@@Z
    MCAPI static bool convertPointBetweenDimensions(class Vec3 const &, class Vec3 &, class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>, class DimensionConversionData const &);

    // symbol: ?fromSerializedInt@VanillaDimensions@@SA?AV?$AutomaticID@VDimension@@H@@H@Z
    MCAPI static class AutomaticID<class Dimension, int> fromSerializedInt(int);

    // symbol: ?fromSerializedInt@VanillaDimensions@@SA?AV?$Result@V?$AutomaticID@VDimension@@H@@Verror_code@std@@@Bedrock@@$$QEAV?$Result@HVerror_code@std@@@3@@Z
    MCAPI static class Bedrock::Result<class AutomaticID<class Dimension, int>, std::error_code> fromSerializedInt(class Bedrock::Result<int, std::error_code> &&);

    // symbol: ?fromString@VanillaDimensions@@SA?AV?$AutomaticID@VDimension@@H@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class AutomaticID<class Dimension, int> fromString(std::string const &);

    // symbol: ?toSerializedInt@VanillaDimensions@@SAHAEBV?$AutomaticID@VDimension@@H@@@Z
    MCAPI static int toSerializedInt(class AutomaticID<class Dimension, int> const &);

    // symbol: ?toString@VanillaDimensions@@SA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$AutomaticID@VDimension@@H@@@Z
    MCAPI static std::string const toString(class AutomaticID<class Dimension, int> const &);

    // symbol: ?Nether@VanillaDimensions@@2V?$AutomaticID@VDimension@@H@@B
    MCAPI static class AutomaticID<class Dimension, int> const Nether;

    // symbol: ?Overworld@VanillaDimensions@@2V?$AutomaticID@VDimension@@H@@B
    MCAPI static class AutomaticID<class Dimension, int> const Overworld;

    // symbol: ?TheEnd@VanillaDimensions@@2V?$AutomaticID@VDimension@@H@@B
    MCAPI static class AutomaticID<class Dimension, int> const TheEnd;

    // symbol: ?TheEndSpawnPoint@VanillaDimensions@@2VVec3@@B
    MCAPI static class Vec3 const TheEndSpawnPoint;

    // symbol: ?Undefined@VanillaDimensions@@2V?$AutomaticID@VDimension@@H@@B
    MCAPI static class AutomaticID<class Dimension, int> const Undefined;

    // NOLINTEND

protected:
    // NOLINTBEGIN
    // symbol: ?DimensionMap@VanillaDimensions@@1V?$BidirectionalUnorderedMap@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$AutomaticID@VDimension@@H@@@@B
    MCAPI static class BidirectionalUnorderedMap<std::string, class AutomaticID<class Dimension, int>> const DimensionMap;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    // NOLINTEND

};

