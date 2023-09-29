#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
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

class StainedGlassBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    StainedGlassBlock& operator=(StainedGlassBlock const &) = delete;
    StainedGlassBlock(StainedGlassBlock const &) = delete;
    StainedGlassBlock() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 7, symbol: ?getCollisionShapeForCamera@StainedGlassBlock@@UEBA_NAEAVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@@Z
    virtual bool getCollisionShapeForCamera(class AABB &, class Block const &, class IConstBlockSource const &, class BlockPos const &) const;

    // vIndex: 22, symbol: __unk_vfn_22
    virtual void __unk_vfn_22();

    // vIndex: 28, symbol: ?canConnect@StainedGlassBlock@@UEBA_NAEBVBlock@@E0@Z
    virtual bool canConnect(class Block const &, uchar, class Block const &) const;

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

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 83, symbol: __unk_vfn_83
    virtual void __unk_vfn_83();

    // vIndex: 97, symbol: ?breaksFallingBlocks@StainedGlassBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;

    // vIndex: 104, symbol: ?asItemInstance@StainedGlassBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const &, class BlockActor const *) const;

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

    // vIndex: 132, symbol: ?buildDescriptionId@StainedGlassBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const &) const;

    // vIndex: 133, symbol: ?isAuxValueRelevantForPicking@StainedGlassBlock@@UEBA_NXZ
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 153, symbol: __unk_vfn_153
    virtual void __unk_vfn_153();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: __unk_vfn_163
    virtual void __unk_vfn_163();

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 171, symbol: __unk_vfn_171
    virtual void __unk_vfn_171();

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 182, symbol: ?getMapColor@StainedGlassBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &, class Block const &) const;

    // vIndex: 183, symbol: __unk_vfn_183
    virtual void __unk_vfn_183();

    // vIndex: 186, symbol: ?getResourceCount@StainedGlassBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;

    // vIndex: 187, symbol: ?getSilkTouchItemInstance@StainedGlassBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
    virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;

    // symbol: ??0StainedGlassBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N11@Z
    MCAPI StainedGlassBlock(std::string const &, int, bool, bool, bool);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?STAINED_GLASS_DOESNT_BREAK_FALLING_BLOCK_VERSION@StainedGlassBlock@@0VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const STAINED_GLASS_DOESNT_BREAK_FALLING_BLOCK_VERSION;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $STAINED_GLASS_DOESNT_BREAK_FALLING_BLOCK_VERSION() { return STAINED_GLASS_DOESNT_BREAK_FALLING_BLOCK_VERSION; }

    // NOLINTEND

};
