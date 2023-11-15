#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class FoliageColor {
public:
    // FoliageColor inner types define
    enum class PaletteName {};
    
public:
    // prevent constructor by default
    FoliageColor& operator=(FoliageColor const &) = delete;
    FoliageColor(FoliageColor const &) = delete;
    FoliageColor() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?getBirchColor@FoliageColor@@SAHMM@Z
    MCAPI static int32_t getBirchColor(float, float);

    // symbol: ?getDefaultColor@FoliageColor@@SAHXZ
    MCAPI static int32_t getDefaultColor();

    // symbol: ?getEvergreenColor@FoliageColor@@SAHMM@Z
    MCAPI static int32_t getEvergreenColor(float, float);

    // symbol: ?getFoliageColor@FoliageColor@@SAHMM@Z
    MCAPI static int32_t getFoliageColor(float, float);

    // symbol: ?getFoliageColor@FoliageColor@@SAHW4PaletteName@1@MM@Z
    MCAPI static int32_t getFoliageColor(::FoliageColor::PaletteName, float, float);

    // symbol: ?getMapBirchColor@FoliageColor@@SAHMM@Z
    MCAPI static int32_t getMapBirchColor(float, float);

    // symbol: ?getMapEvergreenColor@FoliageColor@@SAHMM@Z
    MCAPI static int32_t getMapEvergreenColor(float, float);

    // symbol: ?getMapFoliageColor@FoliageColor@@SAHMM@Z
    MCAPI static int32_t getMapFoliageColor(float, float);

    // symbol: ?getMapGrassColor@FoliageColor@@SAHMM@Z
    MCAPI static int32_t getMapGrassColor(float, float);

    // symbol: ?getMapGrassColor@FoliageColor@@SAHAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static int32_t getMapGrassColor(class BlockSource &, class BlockPos const &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?calculateMapGrassColorHelper@FoliageColor@@CAXAEAVBlockSource@@AEBVBlockPos@@1AEAH22@Z
    MCAPI static void calculateMapGrassColorHelper(class BlockSource &, class BlockPos const &, class BlockPos const &, int32_t &, int32_t &, int32_t &);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?FOLIAGE_BOTTOM_LEFT@FoliageColor@@0VColor@mce@@B
    MCAPI static class mce::Color const FOLIAGE_BOTTOM_LEFT;

    // symbol: ?FOLIAGE_BOTTOM_RIGHT@FoliageColor@@0VColor@mce@@B
    MCAPI static class mce::Color const FOLIAGE_BOTTOM_RIGHT;

    // symbol: ?FOLIAGE_TOP_LEFT@FoliageColor@@0VColor@mce@@B
    MCAPI static class mce::Color const FOLIAGE_TOP_LEFT;

    // symbol: ?FOLIAGE_TOP_RIGHT@FoliageColor@@0VColor@mce@@B
    MCAPI static class mce::Color const FOLIAGE_TOP_RIGHT;

    // symbol: ?GRASS_BOTTOM_LEFT@FoliageColor@@0VColor@mce@@B
    MCAPI static class mce::Color const GRASS_BOTTOM_LEFT;

    // symbol: ?GRASS_BOTTOM_RIGHT@FoliageColor@@0VColor@mce@@B
    MCAPI static class mce::Color const GRASS_BOTTOM_RIGHT;

    // symbol: ?GRASS_TOP_LEFT@FoliageColor@@0VColor@mce@@B
    MCAPI static class mce::Color const GRASS_TOP_LEFT;

    // symbol: ?GRASS_TOP_RIGHT@FoliageColor@@0VColor@mce@@B
    MCAPI static class mce::Color const GRASS_TOP_RIGHT;

    // symbol: ?mFoliagePalettes@FoliageColor@@0V?$array@V?$unique_ptr@V?$array@H$0BAAAA@@std@@U?$default_delete@V?$array@H$0BAAAA@@std@@@2@@std@@$04@std@@A
    MCAPI static std::array<std::unique_ptr<std::array<int32_t, 65536>>, 5> mFoliagePalettes;

    // symbol: ?mGrassPalettes@FoliageColor@@0V?$array@V?$unique_ptr@V?$array@H$0BAAAA@@std@@U?$default_delete@V?$array@H$0BAAAA@@std@@@2@@std@@$04@std@@A
    MCAPI static std::array<std::unique_ptr<std::array<int32_t, 65536>>, 5> mGrassPalettes;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $FOLIAGE_BOTTOM_LEFT() { return FOLIAGE_BOTTOM_LEFT; }

    inline auto& $FOLIAGE_BOTTOM_RIGHT() { return FOLIAGE_BOTTOM_RIGHT; }

    inline auto& $FOLIAGE_TOP_LEFT() { return FOLIAGE_TOP_LEFT; }

    inline auto& $FOLIAGE_TOP_RIGHT() { return FOLIAGE_TOP_RIGHT; }

    inline auto& $GRASS_BOTTOM_LEFT() { return GRASS_BOTTOM_LEFT; }

    inline auto& $GRASS_BOTTOM_RIGHT() { return GRASS_BOTTOM_RIGHT; }

    inline auto& $GRASS_TOP_LEFT() { return GRASS_TOP_LEFT; }

    inline auto& $GRASS_TOP_RIGHT() { return GRASS_TOP_RIGHT; }

    inline auto& $mFoliagePalettes() { return mFoliagePalettes; }

    inline auto& $mGrassPalettes() { return mGrassPalettes; }

    // NOLINTEND

};

