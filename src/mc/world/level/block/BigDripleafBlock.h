#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/BigDripleafTilt.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BigDripleafBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    BigDripleafBlock& operator=(BigDripleafBlock const &) = delete;
    BigDripleafBlock(BigDripleafBlock const &) = delete;
    BigDripleafBlock() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 6, symbol: ?getCollisionShape@BigDripleafBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB getCollisionShape(class Block const &, class IConstBlockSource const &, class BlockPos const &, class optional_ref<class GetCollisionShapeInterface const>) const;

    // vIndex: 12, symbol: ?getVisualShape@BigDripleafBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const & getVisualShape(class Block const &, class AABB &) const;

    // vIndex: 18, symbol: ?onProjectileHit@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z
    virtual void onProjectileHit(class BlockSource &, class BlockPos const &, class Actor const &) const;

    // vIndex: 22, symbol: __unk_vfn_22
    virtual void __unk_vfn_22();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 32, symbol: __unk_vfn_32
    virtual void __unk_vfn_32();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 37, symbol: ?isWaterBlocking@BigDripleafBlock@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

    // vIndex: 38, symbol: __unk_vfn_38
    virtual void __unk_vfn_38();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 40, symbol: __unk_vfn_40
    virtual void __unk_vfn_40();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 43, symbol: __unk_vfn_43
    virtual void __unk_vfn_43();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 46, symbol: __unk_vfn_46
    virtual void __unk_vfn_46();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 49, symbol: __unk_vfn_49
    virtual void __unk_vfn_49();

    // vIndex: 50, symbol: __unk_vfn_50
    virtual void __unk_vfn_50();

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: ?canContainLiquid@BigDripleafBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 70, symbol: ?checkIsPathable@BigDripleafBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;

    // vIndex: 74, symbol: ?onRedstoneUpdate@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 80, symbol: ?setupRedstoneComponent@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;

    // vIndex: 83, symbol: __unk_vfn_83
    virtual void __unk_vfn_83();

    // vIndex: 87, symbol: ?onFertilized@BigDripleafBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, ::FertilizerType) const;

    // vIndex: 89, symbol: ?canBeFertilized@BigDripleafBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;

    // vIndex: 94, symbol: ?mayPlaceOn@BigDripleafBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlaceOn(class BlockSource &, class BlockPos const &) const;

    // vIndex: 100, symbol: ?neighborChanged@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;

    // vIndex: 106, symbol: __unk_vfn_106
    virtual void __unk_vfn_106();

    // vIndex: 122, symbol: __unk_vfn_122
    virtual void __unk_vfn_122();

    // vIndex: 123, symbol: __unk_vfn_123
    virtual void __unk_vfn_123();

    // vIndex: 124, symbol: __unk_vfn_124
    virtual void __unk_vfn_124();

    // vIndex: 127, symbol: __unk_vfn_127
    virtual void __unk_vfn_127();

    // vIndex: 130, symbol: __unk_vfn_130
    virtual void __unk_vfn_130();

    // vIndex: 149, symbol: ?init@BigDripleafBlock@@UEAAAEAVBlockLegacy@@XZ
    virtual class BlockLegacy & init();

    // vIndex: 153, symbol: __unk_vfn_153
    virtual void __unk_vfn_153();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: __unk_vfn_163
    virtual void __unk_vfn_163();

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 165, symbol: ?onPlace@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: ?tick@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;

    // vIndex: 171, symbol: __unk_vfn_171
    virtual void __unk_vfn_171();

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 175, symbol: ?canSurvive@BigDripleafBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;

    // vIndex: 183, symbol: __unk_vfn_183
    virtual void __unk_vfn_183();

    // vIndex: 188, symbol: ?entityInside@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
    virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;

    // symbol: ?canBeSilkTouched@BigDripleafBlock@@UEBA_NXZ
    MCVAPI bool canBeSilkTouched() const;

    // symbol: ?waterSpreadCausesSpawn@BigDripleafBlock@@UEBA_NXZ
    MCVAPI bool waterSpreadCausesSpawn() const;

    // symbol: ??0BigDripleafBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI BigDripleafBlock(std::string const &, int);

    // symbol: ?placeWithRandomHeight@BigDripleafBlock@@SAXAEAVBlockSource@@AEAVRandom@@VBlockPos@@H@Z
    MCAPI static void placeWithRandomHeight(class BlockSource &, class Random &, class BlockPos, int);

    // symbol: ?MAX_DRIPLEAF_GROWTH_HEIGHT@BigDripleafBlock@@2HB
    MCAPI static int const MAX_DRIPLEAF_GROWTH_HEIGHT;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_findHeadPos@BigDripleafBlock@@AEBA?AVBlockPos@@AEAVBlockSource@@V2@@Z
    MCAPI class BlockPos _findHeadPos(class BlockSource &, class BlockPos) const;

    // symbol: ?_resetTilt@BigDripleafBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _resetTilt(class BlockSource &, class BlockPos const &) const;

    // symbol: ?_setTiltAndScheduleTick@BigDripleafBlock@@AEBAXW4BigDripleafTilt@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _setTiltAndScheduleTick(::BigDripleafTilt, class BlockSource &, class BlockPos const &) const;

    // NOLINTEND

};
