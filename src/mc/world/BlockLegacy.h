#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/HashedString.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/common/optional_ref.h"
#include "mc/common/BurnOdds.h"
#include "mc/common/CreativeItemCategory.h"
#include "mc/common/FertilizerType.h"
#include "mc/common/FlameOdds.h"
#include "mc/common/Flip.h"
#include "mc/common/LavaFlammable.h"
#include "mc/common/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/common/BlockActorType.h"
#include "mc/common/BlockProperty.h"
#include "mc/common/BlockRenderLayer.h"
#include "mc/common/BlockShape.h"
#include "mc/common/BlockSupportType.h"
#include "mc/common/BlockTintType.h"

// auto generated forward declare list
// clang-format off
namespace BlockTrait { class IGetPlacementBlockCallback; }
namespace BlockTrait { class ITrait; }
namespace mce { class Color; }
// clang-format on

class BlockLegacy {
public:
    // BlockLegacy inner types declare
    // clang-format off
    struct AlteredStateCollection;
    struct HorizontalDirectionBits;
    struct NameInfo;
    struct RearrangedStateCollection;
    struct RemovedStateCollection;
    // clang-format on

    // BlockLegacy inner types define
    struct AlteredStateCollection {
    public:
        // prevent constructor by default
        AlteredStateCollection& operator=(AlteredStateCollection const&);
        AlteredStateCollection(AlteredStateCollection const&);
        AlteredStateCollection();

        // protected:
        // NOLINTBEGIN
        // symbol: ?_checkVersioningRequirements@AlteredStateCollection@BlockLegacy@@KA_NAEBVSemVersion@@@Z
        MCAPI static bool _checkVersioningRequirements(class SemVersion const&);

        // NOLINTEND
    };

    struct HorizontalDirectionBits {
    public:
        // prevent constructor by default
        HorizontalDirectionBits& operator=(HorizontalDirectionBits const&);
        HorizontalDirectionBits(HorizontalDirectionBits const&);
        HorizontalDirectionBits();
    };

    struct NameInfo {
    public:
        HashedString mRawName;       // this+0x0
        std::string  mNamespaceName; // this+0x30
        HashedString mFullName;      // this+0x50

    public:
        // NOLINTBEGIN
        // symbol: ??1NameInfo@BlockLegacy@@QEAA@XZ
        MCAPI ~NameInfo();

        // NOLINTEND
    };

    struct RearrangedStateCollection : public ::BlockLegacy::AlteredStateCollection {
    public:
        // prevent constructor by default
        RearrangedStateCollection& operator=(RearrangedStateCollection const&);
        RearrangedStateCollection(RearrangedStateCollection const&);
        RearrangedStateCollection();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ?getState@RearrangedStateCollection@BlockLegacy@@UEBA?AV?$optional@H@std@@AEBV2@H@Z
        virtual std::optional<int> getState(class BlockLegacy const&, int) const;

        // vIndex: 1, symbol: ?setState@RearrangedStateCollection@BlockLegacy@@UEBAPEBVBlock@@AEBV2@HH@Z
        virtual class Block const* setState(class BlockLegacy const&, int, int) const;

        // vIndex: 2, symbol: __gen_??1RearrangedStateCollection@BlockLegacy@@UEAA@XZ
        virtual ~RearrangedStateCollection() = default;

        // symbol:
        // ?add@RearrangedStateCollection@BlockLegacy@@SAXAEAV2@AEBVBlockState@@V?$function@$$A6A?AV?$optional@H@std@@AEBVBlockLegacy@@H@Z@std@@V?$function@$$A6APEBVBlock@@AEBVBlockLegacy@@HH@Z@5@AEBVSemVersion@@@Z
        MCAPI static void
            add(class BlockLegacy&,
                class BlockState const&,
                std::function<std::optional<int>(class BlockLegacy const&, int)>,
                std::function<class Block const* (class BlockLegacy const&, int, int)>,
                class SemVersion const&);

        // NOLINTEND
    };

    struct RemovedStateCollection : public ::BlockLegacy::AlteredStateCollection {
    public:
        // RemovedStateCollection inner types declare
        // clang-format off
        struct SplitBlock;
        // clang-format on

        // RemovedStateCollection inner types define
        struct SplitBlock {
        public:
            // prevent constructor by default
            SplitBlock& operator=(SplitBlock const&);
            SplitBlock(SplitBlock const&);
            SplitBlock();

        public:
            // NOLINTBEGIN
            // symbol: ??0SplitBlock@RemovedStateCollection@BlockLegacy@@QEAA@HAEAV2@@Z
            MCAPI SplitBlock(int, class BlockLegacy&);

            // NOLINTEND
        };

    public:
        // prevent constructor by default
        RemovedStateCollection& operator=(RemovedStateCollection const&);
        RemovedStateCollection(RemovedStateCollection const&);
        RemovedStateCollection();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ?getState@RemovedStateCollection@BlockLegacy@@UEBA?AV?$optional@H@std@@AEBV2@H@Z
        virtual std::optional<int> getState(class BlockLegacy const&, int) const;

        // vIndex: 1, symbol: ?setState@RemovedStateCollection@BlockLegacy@@UEBAPEBVBlock@@AEBV2@HH@Z
        virtual class Block const* setState(class BlockLegacy const&, int, int) const;

        // vIndex: 2, symbol: __gen_??1RemovedStateCollection@BlockLegacy@@UEAA@XZ
        virtual ~RemovedStateCollection() = default;

        // symbol:
        // ?add@RemovedStateCollection@BlockLegacy@@SAXAEBVBlockState@@$$QEAV?$vector@USplitBlock@RemovedStateCollection@BlockLegacy@@V?$allocator@USplitBlock@RemovedStateCollection@BlockLegacy@@@std@@@std@@AEBVSemVersion@@@Z
        MCAPI static void
            add(class BlockState const&,
                std::vector<struct BlockLegacy::RemovedStateCollection::SplitBlock>&&,
                class SemVersion const&);

        // NOLINTEND
    };

public:
    LLNDAPI std::string const& getTypeName() const;

    LLNDAPI static optional_ref<BlockLegacy> tryGetFromRegistry(std::string const& name);
    LLNDAPI static optional_ref<BlockLegacy> tryGetFromRegistry(uint legacyBlockID);

    // prevent constructor by default
    BlockLegacy& operator=(BlockLegacy const&);
    BlockLegacy(BlockLegacy const&);
    BlockLegacy();

public:
#pragma region vftbl   
    // vIndex: 63, symbol: ?canContainLiquid@BlockLegacy@@UEBA_NXZ
    bool canContainLiquid() const;
#pragma endregion vftbl 

    // symbol: ?allowStateMismatchOnPlacement@BlockLegacy@@MEBA_NAEBVBlock@@0@Z
    MCVAPI bool allowStateMismatchOnPlacement(class Block const&, class Block const&) const;

    // symbol: ?canBeDestroyedByWaterSpread@BlockLegacy@@UEBA_NXZ
    MCVAPI bool canBeDestroyedByWaterSpread() const;

    // symbol: ?canBeSilkTouched@BlockLegacy@@UEBA_NXZ
    MCVAPI bool canBeSilkTouched() const;

    // symbol: ?canDamperVibrations@BlockLegacy@@UEBA_NXZ
    MCVAPI bool canDamperVibrations() const;

    // symbol: ?canHaveExtraData@BlockLegacy@@UEBA_NXZ
    MCVAPI bool canHaveExtraData() const;

    // symbol: ?canInstatick@BlockLegacy@@UEBA_NXZ
    MCVAPI bool canInstatick() const;

    // symbol: ?canOccludeVibrations@BlockLegacy@@UEBA_NXZ
    MCVAPI bool canOccludeVibrations() const;

    // symbol: ?causesFreezeEffect@BlockLegacy@@UEBA_NXZ
    MCVAPI bool causesFreezeEffect() const;

    // symbol: ?detachesOnPistonMove@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCVAPI bool detachesOnPistonMove(class BlockSource&, class BlockPos const&) const;

    // symbol: ?hasComparatorSignal@BlockLegacy@@UEBA_NXZ
    MCVAPI bool hasComparatorSignal() const;

    // symbol: ?hasVariableLighting@BlockLegacy@@UEBA_NXZ
    MCVAPI bool hasVariableLighting() const;

    // symbol: ?isBounceBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isBounceBlock() const;

    // symbol: ?isButtonBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isButtonBlock() const;

    // symbol: ?isCandleCakeBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isCandleCakeBlock() const;

    // symbol: ?isContainerBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isContainerBlock() const;

    // symbol: ?isCraftingBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isCraftingBlock() const;

    // symbol: ?isCropBlock@BlockLegacy@@MEBA_NXZ
    MCVAPI bool isCropBlock() const;

    // symbol: ?isDoorBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isDoorBlock() const;

    // symbol: ?isFenceBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isFenceBlock() const;

    // symbol: ?isFenceGateBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isFenceGateBlock() const;

    // symbol: ?isHurtableBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isHurtableBlock() const;

    // symbol: ?isInteractiveBlock@BlockLegacy@@MEBA_NXZ
    MCVAPI bool isInteractiveBlock() const;

    // symbol: ?isLeverBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isLeverBlock() const;

    // symbol: ?isMultifaceBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isMultifaceBlock() const;

    // symbol: ?isRailBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isRailBlock() const;

    // symbol: ?isSilentWhenJumpingOff@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isSilentWhenJumpingOff() const;

    // symbol: ?isSlabBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isSlabBlock() const;

    // symbol: ?isStairBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isStairBlock() const;

    // symbol: ?isStemBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isStemBlock() const;

    // symbol: ?isThinFenceBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isThinFenceBlock() const;

    // symbol: ?isWallBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isWallBlock() const;

    // symbol: ?onPlayerPlacing@BlockLegacy@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@E@Z
    MCVAPI void onPlayerPlacing(class BlockSource&, class BlockPos const&, class Actor&, uchar) const;

    // symbol: ?onStepOff@BlockLegacy@@MEBAXAEAVActor@@AEBVBlockPos@@@Z
    MCVAPI void onStepOff(class Actor&, class BlockPos const&) const;

    // symbol: ?onStepOn@BlockLegacy@@MEBAXAEAVActor@@AEBVBlockPos@@@Z
    MCVAPI void onStepOn(class Actor&, class BlockPos const&) const;

    // symbol: ?pushesUpFallingBlocks@BlockLegacy@@UEBA_NXZ
    MCVAPI bool pushesUpFallingBlocks() const;

    // symbol: ?shouldTickOnSetBlock@BlockLegacy@@MEBA_NXZ
    MCVAPI bool shouldTickOnSetBlock() const;

    // symbol: ?spawnBurnResources@BlockLegacy@@UEBA_NAEAVBlockSource@@MMM@Z
    MCVAPI bool spawnBurnResources(class BlockSource&, float, float, float) const;

    // symbol: ?waterSpreadCausesSpawn@BlockLegacy@@UEBA_NXZ
    MCVAPI bool waterSpreadCausesSpawn() const;

    // symbol: ??0BlockLegacy@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI BlockLegacy(std::string const&, int, class Material const&);

    // symbol: ?_isDataDrivingVanillaBlocksAndItems@BlockLegacy@@QEBA_NXZ
    MCAPI bool _isDataDrivingVanillaBlocksAndItems() const;

    // symbol: ?addAABB@BlockLegacy@@QEBA_NAEBVAABB@@PEBV2@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
    MCAPI bool addAABB(class AABB const&, class AABB const*, std::vector<class AABB>&) const;

    // symbol: ?addBlockProperties@BlockLegacy@@QEAAAEAV1@W4BlockProperty@@@Z
    MCAPI class BlockLegacy& addBlockProperties(::BlockProperty);

    // symbol: ?addComponent@BlockLegacy@@QEAAAEAV1@AEBUBlockComponentDescription@@@Z
    MCAPI class BlockLegacy& addComponent(struct BlockComponentDescription const&);

    // symbol:
    // ?addGetPlacementBlockCallback@BlockLegacy@@QEAAXV?$unique_ptr@VIGetPlacementBlockCallback@BlockTrait@@U?$default_delete@VIGetPlacementBlockCallback@BlockTrait@@@std@@@std@@@Z
    MCAPI void addGetPlacementBlockCallback(std::unique_ptr<class BlockTrait::IGetPlacementBlockCallback>);

    // symbol: ?addTag@BlockLegacy@@QEAAAEAV1@AEBVHashedString@@@Z
    MCAPI class BlockLegacy& addTag(class HashedString const&);

    // symbol: ?addTrait@BlockLegacy@@QEAAAEAV1@AEBVITrait@BlockTrait@@@Z
    MCAPI class BlockLegacy& addTrait(class BlockTrait::ITrait const&);

    // symbol: ?anyOf@BlockLegacy@@QEBA_NV?$initializer_list@$$CBVHashedString@@@std@@@Z
    MCAPI bool anyOf(std::initializer_list<class HashedString const>) const;

    // symbol:
    // ?anyOf@BlockLegacy@@QEBA_NAEBV?$vector@V?$reference_wrapper@$$CBVHashedString@@@std@@V?$allocator@V?$reference_wrapper@$$CBVHashedString@@@std@@@2@@std@@@Z
    MCAPI bool anyOf(std::vector<std::reference_wrapper<class HashedString const>> const&) const;

    // symbol:
    // ?buildDescriptionName@BlockLegacy@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    MCAPI std::string buildDescriptionName(class Block const&) const;

    // symbol: ?canReactToNeighborsDuringInstatick@BlockLegacy@@QEBA_NXZ
    MCAPI bool canReactToNeighborsDuringInstatick() const;

    // symbol: ?createBlockPermutations@BlockLegacy@@QEAAXI@Z
    MCAPI void createBlockPermutations(uint);

    // symbol: ?createWeakPtr@BlockLegacy@@QEBA?AV?$WeakPtr@VBlockLegacy@@@@XZ
    MCAPI class WeakPtr<class BlockLegacy> createWeakPtr() const;

    // symbol: ?finalizeBlockComponentStorage@BlockLegacy@@QEAAXXZ
    MCAPI void finalizeBlockComponentStorage();

    // symbol: ?forEachBlockPermutation@BlockLegacy@@QEBAXV?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
    MCAPI void forEachBlockPermutation(std::function<bool(class Block const&)>) const;

    // symbol: ?forEachBlockStateInstance@BlockLegacy@@QEBAXV?$function@$$A6A_NAEBVBlockStateInstance@@@Z@std@@@Z
    MCAPI void forEachBlockStateInstance(std::function<bool(class BlockStateInstance const&)>) const;

    // symbol: ?getAllowsRunes@BlockLegacy@@QEBA_NXZ
    MCAPI bool getAllowsRunes() const;

    // symbol: ?getBlockEntityType@BlockLegacy@@QEBA?AW4BlockActorType@@XZ
    MCAPI::BlockActorType getBlockEntityType() const;

    // symbol: ?getBlockItemId@BlockLegacy@@QEBAFXZ
    MCAPI short getBlockItemId() const;

    // symbol: ?getBlockState@BlockLegacy@@QEBAPEBVBlockState@@AEBVHashedString@@@Z
    MCAPI class BlockState const* getBlockState(class HashedString const&) const;

    // symbol: ?getBlockStateGroup@BlockLegacy@@QEAAPEAVBlockStateGroup@@XZ
    MCAPI class BlockStateGroup* getBlockStateGroup();

    // symbol: ?getCommandNames@BlockLegacy@@QEBA?AV?$vector@UCommandName@@V?$allocator@UCommandName@@@std@@@std@@XZ
    MCAPI std::vector<struct CommandName> getCommandNames() const;

    // symbol: ?getCreativeCategory@BlockLegacy@@QEBA?AW4CreativeItemCategory@@XZ
    MCAPI::CreativeItemCategory getCreativeCategory() const;

    // symbol:
    // ?getDebugText@BlockLegacy@@QEBAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVBlockPos@@@Z
    MCAPI void getDebugText(std::vector<std::string>&, class BlockPos const&) const;

    // symbol: ?getDefaultState@BlockLegacy@@QEBAAEBVBlock@@XZ
    MCAPI class Block const& getDefaultState() const;

    // symbol: ?getDescriptionId@BlockLegacy@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getDescriptionId() const;

    // symbol: ?getEntity@BlockLegacy@@QEBAAEBVEntityContext@@XZ
    MCAPI class EntityContext const& getEntity() const;

    // symbol: ?getEntityForModification@BlockLegacy@@QEBAAEAVEntityContext@@XZ
    MCAPI class EntityContext& getEntityForModification() const;

    // symbol: ?getEntityNoCheck@BlockLegacy@@QEBAAEBVEntityContext@@XZ
    MCAPI class EntityContext const& getEntityNoCheck() const;

    // symbol: ?getExperienceDrop@BlockLegacy@@QEBAHAEAVRandom@@@Z
    MCAPI int getExperienceDrop(class Random&) const;

    // symbol: ?getMaterial@BlockLegacy@@QEBAAEBVMaterial@@XZ
    MCAPI class Material const& getMaterial() const;

    // symbol: ?getNamespace@BlockLegacy@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getNamespace() const;

    // symbol: ?getRawNameHash@BlockLegacy@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const& getRawNameHash() const;

    // symbol: ?getRawNameId@BlockLegacy@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getRawNameId() const;

    // symbol: ?getRequiredBaseGameVersion@BlockLegacy@@QEBAAEBVBaseGameVersion@@XZ
    MCAPI class BaseGameVersion const& getRequiredBaseGameVersion() const;

    // symbol:
    // ?getResourceDrops@BlockLegacy@@QEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z
    MCAPI std::vector<class ItemStack>
        getResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&) const;

    // symbol: ?getUniquePermutations@BlockLegacy@@QEBA_KXZ
    MCAPI uint64 getUniquePermutations() const;

    // symbol: ?hasBlockEntity@BlockLegacy@@QEBA_NXZ
    MCAPI bool hasBlockEntity() const;

    // symbol: ?hasProperty@BlockLegacy@@QEBA_NW4BlockProperty@@@Z
    MCAPI bool hasProperty(::BlockProperty) const;

    // symbol: ?hasState@BlockLegacy@@QEBA_NAEBVBlockState@@@Z
    MCAPI bool hasState(class BlockState const&) const;

    // symbol: ?hasState@BlockLegacy@@QEBA_NAEBVHashedString@@@Z
    MCAPI bool hasState(class HashedString const&) const;

    // symbol: ?hasTag@BlockLegacy@@QEBA_NAEBVHashedString@@@Z
    MCAPI bool hasTag(class HashedString const&) const;

    // symbol: ?hasTag@BlockLegacy@@QEBA_NAEB_K@Z
    MCAPI bool hasTag(uint64 const&) const;

    // symbol: ?initEntity@BlockLegacy@@QEAAXAEAVEntityRegistry@@@Z
    MCAPI void initEntity(class EntityRegistry&);

    // symbol: ?initializeBlockStateGroup@BlockLegacy@@QEAAXXZ
    MCAPI void initializeBlockStateGroup();

    // symbol: ?isEmpty@BlockLegacy@@QEBA_NXZ
    MCAPI bool isEmpty() const;

    // symbol: ?isFallingBlock@BlockLegacy@@QEBA_NXZ
    MCAPI bool isFallingBlock() const;

    // symbol: ?isFullAndOpaque@BlockLegacy@@QEBA_NXZ
    MCAPI bool isFullAndOpaque() const;

    // symbol: ?isMotionBlockingBlock@BlockLegacy@@QEBA_NXZ
    MCAPI bool isMotionBlockingBlock() const;

    // symbol: ?isSolidBlockingBlock@BlockLegacy@@QEBA_NXZ
    MCAPI bool isSolidBlockingBlock() const;

    // symbol: ?isVanilla@BlockLegacy@@QEBA_NXZ
    MCAPI bool isVanilla() const;

    // symbol: ?matchesStates@BlockLegacy@@QEBA_NAEBV1@@Z
    MCAPI bool matchesStates(class BlockLegacy const&) const;

    // symbol: ??9BlockLegacy@@QEBA_NAEBVHashedString@@@Z
    MCAPI bool operator!=(class HashedString const&) const;

    // symbol: ??8BlockLegacy@@QEBA_NAEBVHashedString@@@Z
    MCAPI bool operator==(class HashedString const&) const;

    // symbol: ?overrideBlockProperties@BlockLegacy@@QEAAAEAV1@W4BlockProperty@@@Z
    MCAPI class BlockLegacy& overrideBlockProperties(::BlockProperty);

    // symbol: ?setAllowsRunes@BlockLegacy@@QEAAAEAV1@_N@Z
    MCAPI class BlockLegacy& setAllowsRunes(bool);

    // symbol: ?setBlockTintType@BlockLegacy@@QEAAAEAV1@W4BlockTintType@@@Z
    MCAPI class BlockLegacy& setBlockTintType(::BlockTintType);

    // symbol: ?setCanBeExtraBlock@BlockLegacy@@QEAAAEAV1@_N@Z
    MCAPI class BlockLegacy& setCanBeExtraBlock(bool);

    // symbol: ?setCanBeOriginalSurface@BlockLegacy@@QEAAAEAV1@_N@Z
    MCAPI class BlockLegacy& setCanBeOriginalSurface(bool);

    // symbol: ?setCategory@BlockLegacy@@QEAAAEAV1@W4CreativeItemCategory@@@Z
    MCAPI class BlockLegacy& setCategory(::CreativeItemCategory);

    // symbol: ?setCreativeEnumState@BlockLegacy@@QEAAAEAV1@AEBVBlockState@@@Z
    MCAPI class BlockLegacy& setCreativeEnumState(class BlockState const&);

    // symbol:
    // ?setCreativeGroup@BlockLegacy@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class BlockLegacy& setCreativeGroup(std::string const&);

    // symbol: ?setDefaultState@BlockLegacy@@QEAAXAEBVBlock@@@Z
    MCAPI void setDefaultState(class Block const&);

    // symbol: ?setDestroyTime@BlockLegacy@@QEAAAEAV1@M@Z
    MCAPI class BlockLegacy& setDestroyTime(float);

    // symbol: ?setDestroyTime@BlockLegacy@@QEAAAEAV1@MM@Z
    MCAPI class BlockLegacy& setDestroyTime(float, float);

    // symbol: ?setExperienceDrop@BlockLegacy@@QEAAAEAV1@UIntRange@@@Z
    MCAPI class BlockLegacy& setExperienceDrop(struct IntRange);

    // symbol: ?setFlammable@BlockLegacy@@QEAAAEAV1@W4FlameOdds@@W4BurnOdds@@W4LavaFlammable@@@Z
    MCAPI class BlockLegacy& setFlammable(::FlameOdds, ::BurnOdds, ::LavaFlammable);

    // symbol: ?setIgnoreBlockForInsideCubeRenderer@BlockLegacy@@QEAAX_N@Z
    MCAPI void setIgnoreBlockForInsideCubeRenderer(bool);

    // symbol: ?setIsHiddenInCommands@BlockLegacy@@QEAAAEAV1@_N@Z
    MCAPI class BlockLegacy& setIsHiddenInCommands(bool);

    // symbol: ?setIsInteraction@BlockLegacy@@QEAAX_N@Z
    MCAPI void setIsInteraction(bool);

    // symbol: ?setIsVanillaBlock@BlockLegacy@@QEAAX_N@Z
    MCAPI void setIsVanillaBlock(bool);

    // symbol: ?setLightBlock@BlockLegacy@@QEAAAEAV1@UBrightness@@@Z
    MCAPI class BlockLegacy& setLightBlock(struct Brightness);

    // symbol: ?setLightEmission@BlockLegacy@@QEAAAEAV1@UBrightness@@@Z
    MCAPI class BlockLegacy& setLightEmission(struct Brightness);

    // symbol: ?setMapColor@BlockLegacy@@QEAAAEAV1@AEBVColor@mce@@@Z
    MCAPI class BlockLegacy& setMapColor(class mce::Color const&);

    // symbol: ?setMinRequiredBaseGameVersion@BlockLegacy@@QEAAAEAV1@AEBVBaseGameVersion@@@Z
    MCAPI class BlockLegacy& setMinRequiredBaseGameVersion(class BaseGameVersion const&);

    // symbol: ?setNameId@BlockLegacy@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class BlockLegacy& setNameId(std::string const&);

    // symbol:
    // ?setOnlyPermutationandDefaultState@BlockLegacy@@QEAAXV?$unique_ptr@VBlock@@U?$default_delete@VBlock@@@std@@@std@@@Z
    MCAPI void setOnlyPermutationandDefaultState(std::unique_ptr<class Block>);

    // symbol: ?setPreFlatteningName@BlockLegacy@@QEAAXAEBVHashedString@@@Z
    MCAPI void setPreFlatteningName(class HashedString const&);

    // symbol: ?setPushesOutItems@BlockLegacy@@QEAAX_N@Z
    MCAPI void setPushesOutItems(bool);

    // symbol: ?setRandomTicking@BlockLegacy@@QEBAX_N@Z
    MCAPI void setRandomTicking(bool) const;

    // symbol: ?setRandomTickingExtraLayer@BlockLegacy@@QEBAX_N@Z
    MCAPI void setRandomTickingExtraLayer(bool) const;

    // symbol:
    // ?setResourceDropsStrategy@BlockLegacy@@QEAAXV?$unique_ptr@VIResourceDropsStrategy@@U?$default_delete@VIResourceDropsStrategy@@@std@@@std@@@Z
    MCAPI void setResourceDropsStrategy(std::unique_ptr<class IResourceDropsStrategy>);

    // symbol: ?setSolid@BlockLegacy@@QEAAX_N@Z
    MCAPI void setSolid(bool);

    // symbol: ?setVisualShape@BlockLegacy@@QEAAXAEBVAABB@@@Z
    MCAPI void setVisualShape(class AABB const&);

    // symbol: ?setVisualShape@BlockLegacy@@QEAAXAEBVVec3@@0@Z
    MCAPI void setVisualShape(class Vec3 const&, class Vec3 const&);

    // symbol: ?tryGetStateFromLegacyData@BlockLegacy@@QEBAPEBVBlock@@G@Z
    MCAPI class Block const* tryGetStateFromLegacyData(ushort) const;

    // symbol:
    // ?updateTallestCollisionShape@BlockLegacy@@QEBA_NAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@AEBVAABB@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@AEAV5@AEBVVec3@@AEAM@Z
    MCAPI bool
        updateTallestCollisionShape(class Block const&, class BlockSource const&, class BlockPos const&, class AABB const&, class optional_ref<class GetCollisionShapeInterface const>, class AABB&, class Vec3 const&, float&)
        const;

    // symbol:
    // ?buildDescriptionIdFromNameInfo@BlockLegacy@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUNameInfo@1@@Z
    MCAPI static std::string buildDescriptionIdFromNameInfo(struct BlockLegacy::NameInfo const&);

    // symbol:
    // ?extractBlockNameInfo@BlockLegacy@@SA?AUNameInfo@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static struct BlockLegacy::NameInfo extractBlockNameInfo(std::string const&);

    // symbol:
    // ?getConnectedDirections@BlockLegacy@@SA?AUHorizontalDirectionBits@1@AEBVBlock@@AEBVBlockPos@@AEBVIConstBlockSource@@@Z
    MCAPI static struct BlockLegacy::HorizontalDirectionBits
        getConnectedDirections(class Block const&, class BlockPos const&, class IConstBlockSource const&);

    // symbol: ?getPlacementFacingAll@BlockLegacy@@SAEAEBVActor@@AEBVBlockPos@@M@Z
    MCAPI static uchar getPlacementFacingAll(class Actor const&, class BlockPos const&, float);

    // symbol: ?getPlacementFacingAllExceptAxisY@BlockLegacy@@SAEAEBVActor@@AEBVBlockPos@@M@Z
    MCAPI static uchar getPlacementFacingAllExceptAxisY(class Actor const&, class BlockPos const&, float);

    // symbol: ?popResource@BlockLegacy@@SAPEAVItemActor@@AEAVBlockSource@@AEBVBlockPos@@AEBVItemInstance@@@Z
    MCAPI static class ItemActor* popResource(class BlockSource&, class BlockPos const&, class ItemInstance const&);

    // symbol: ?popResource@BlockLegacy@@SAPEAVItemActor@@AEAVBlockSource@@AEBVBlockPos@@AEBVItemStack@@@Z
    MCAPI static class ItemActor* popResource(class BlockSource&, class BlockPos const&, class ItemStack const&);

    // symbol: ?BLOCK_DESCRIPTION_PREFIX@BlockLegacy@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const BLOCK_DESCRIPTION_PREFIX;

    // symbol: ?SIZE_OFFSET@BlockLegacy@@2MB
    MCAPI static float const SIZE_OFFSET;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_getBlockShape@BlockLegacy@@IEBA?AW4BlockShape@@XZ
    MCAPI::BlockShape _getBlockShape() const;

    // symbol: ?forEachBlockPermutationMutable@BlockLegacy@@IEAA_NV?$function@$$A6A_NAEAVBlock@@@Z@std@@@Z
    MCAPI bool forEachBlockPermutationMutable(std::function<bool(class Block&)>);

    // symbol: ?getBurnOdds@BlockLegacy@@IEBAHXZ
    MCAPI int getBurnOdds() const;

    // symbol: ?getDestroySpeed@BlockLegacy@@IEBAMXZ
    MCAPI float getDestroySpeed() const;

    // symbol: ?getFlameOdds@BlockLegacy@@IEBAHXZ
    MCAPI int getFlameOdds() const;

    // symbol: ?getFriction@BlockLegacy@@IEBAMXZ
    MCAPI float getFriction() const;

    // symbol: ?isLavaFlammable@BlockLegacy@@IEBA_NXZ
    MCAPI bool isLavaFlammable() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tryLookupAlteredStateCollection@BlockLegacy@@AEBA?AV?$optional@H@std@@_KG@Z
    MCAPI std::optional<int> _tryLookupAlteredStateCollection(uint64, ushort) const;

    // symbol: ?_trySetStateFromAlteredStateCollection@BlockLegacy@@AEBAPEBVBlock@@_KHG@Z
    MCAPI class Block const* _trySetStateFromAlteredStateCollection(uint64, int, ushort) const;

    // symbol: ?initParams@BlockLegacy@@AEBAXAEAVRenderParams@@AEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    MCAPI void initParams(class RenderParams&, class BlockSource&, class BlockPos const&, class Actor*) const;

    // NOLINTEND
};