#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/common/CreativeItemCategory.h"
#include "mc/common/LevelSoundEvent.h"
#include "mc/common/ItemColor.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class Item {
public:
    // Item inner types declare
    // clang-format off
    class ScopedCreativeGroup;
    class Tier;
    // clang-format on

    // Item inner types define
    class ScopedCreativeGroup {
    public:
        // prevent constructor by default
        ScopedCreativeGroup& operator=(ScopedCreativeGroup const&);
        ScopedCreativeGroup(ScopedCreativeGroup const&);
        ScopedCreativeGroup();

    public:
        // NOLINTBEGIN
        // symbol:
        // ??0ScopedCreativeGroup@Item@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemInstance@@@Z
        MCAPI ScopedCreativeGroup(std::string const&, class ItemInstance const&);

        // symbol:
        // ??0ScopedCreativeGroup@Item@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVBlock@@PEBVCompoundTag@@@Z
        MCAPI ScopedCreativeGroup(std::string const&, class Block const*, class CompoundTag const*);

        // symbol:
        // ??0ScopedCreativeGroup@Item@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@FFPEBVCompoundTag@@@Z
        MCAPI ScopedCreativeGroup(std::string const&, short, short, class CompoundTag const*);

        // symbol: ??1ScopedCreativeGroup@Item@@QEAA@XZ
        MCAPI ~ScopedCreativeGroup();

        // NOLINTEND
    };

    class Tier {
    public:
        // prevent constructor by default
        Tier& operator=(Tier const&);
        Tier(Tier const&);
        Tier();

    public:
        // NOLINTBEGIN
        // symbol: ??0Tier@Item@@QEAA@HHMHH@Z
        MCAPI Tier(int, int, float, int, int);

        // symbol: ?getAttackDamageBonus@Tier@Item@@QEBAHXZ
        MCAPI int getAttackDamageBonus() const;

        // symbol: ?getEnchantmentValue@Tier@Item@@QEBAHXZ
        MCAPI int getEnchantmentValue() const;

        // symbol: ?getLevel@Tier@Item@@QEBAHXZ
        MCAPI int getLevel() const;

        // symbol: ?getSpeed@Tier@Item@@QEBAMXZ
        MCAPI float getSpeed() const;

        // symbol: ?getUses@Tier@Item@@QEBAHXZ
        MCAPI int getUses() const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    Item& operator=(Item const&);
    Item(Item const&);
    Item();

public:
#pragma region vftbl 
    // vIndex: 4, symbol:
    // ?getDescriptionId@Item@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    std::string const& getDescriptionId() const;

    // vIndex: 12, symbol: ?isArmor@Item@@UEBA_NXZ
    bool isArmor() const;

    // vIndex: 13, symbol: ?isBlockPlanterItem@Item@@UEBA_NXZ
    bool isBlockPlanterItem() const;

    // vIndex: 17, symbol: ?isDamageable@Item@@UEBA_NXZ
    bool isDamageable() const;

    // vIndex: 19, symbol: ?isDye@Item@@UEBA_NXZ
    bool isDye() const;

    // vIndex: 20, symbol: ?getItemColor@Item@@UEBA?AW4ItemColor@@XZ
    ::ItemColor getItemColor() const;

    // vIndex: 22, symbol: ?isFood@Item@@UEBA_NXZ
    bool isFood() const;

    // vIndex: 23, symbol: ?isThrowable@Item@@UEBA_NXZ
    bool isThrowable() const;

    // vIndex: 24, symbol: ?isUseable@Item@@UEBA_NXZ
    bool isUseable() const;

    // vIndex: 43, symbol: ?canBeDepleted@Item@@UEBA_NXZ
    bool canBeDepleted() const;

    // vIndex: 47, symbol: ?getMaxDamage@Item@@UEBAFXZ
    short getMaxDamage() const;

    // vIndex: 48, symbol: ?getAttackDamage@Item@@UEBAHXZ
    int getAttackDamage() const;

    // vIndex: 55, symbol: ?canDestroyInCreative@Item@@UEBA_NXZ
    bool canDestroyInCreative() const;

    // vIndex: 64, symbol: ?getArmorValue@Item@@UEBAHXZ
    int getArmorValue() const;

    // vIndex: 65, symbol: ?getToughnessValue@Item@@UEBAHXZ
    int getToughnessValue() const;

    // vIndex: 67, symbol: ?isValidAuxValue@Item@@UEBA_NH@Z
    bool isValidAuxValue(int) const;

    // vIndex: 69, symbol: ?getViewDamping@Item@@UEBAMXZ
    float getViewDamping() const;

    // vIndex: 83, symbol: ?canUseOnSimTick@Item@@UEBA_NXZ
    bool canUseOnSimTick() const;

    // vIndex: 94, symbol:
    // ?buildDescriptionName@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
    std::string buildDescriptionName(class ItemStackBase const&) const;

    // vIndex: 95, symbol:
    // ?buildDescriptionId@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 103, symbol: ?getCooldownType@Item@@UEBAAEBVHashedString@@XZ
    class HashedString const& getCooldownType() const;

    // vIndex: 104, symbol: ?getCooldownTime@Item@@UEBAHXZ
    int getCooldownTime() const;

    // vIndex: 126, symbol: ?canBeCharged@Item@@UEBA_NXZ
    bool canBeCharged() const;
#pragma endregion vftbl 

    // symbol: ?getBaseColor@Item@@UEBA?AVColor@mce@@AEBVItemStack@@@Z
    MCVAPI class mce::Color getBaseColor(class ItemStack const&) const;

    // symbol: ?getSecondaryColor@Item@@UEBA?AVColor@mce@@AEBVItemStack@@@Z
    MCVAPI class mce::Color getSecondaryColor(class ItemStack const&) const;

    // symbol: ?hasCustomColor@Item@@UEBA_NAEBVItemStackBase@@@Z
    MCVAPI bool hasCustomColor(class ItemStackBase const&) const;

    // symbol: ?isActorPlacerItem@Item@@UEBA_NXZ
    MCVAPI bool isActorPlacerItem() const;

    // symbol: ?isBucket@Item@@UEBA_NXZ
    MCVAPI bool isBucket() const;

    // symbol: ?isCandle@Item@@UEBA_NXZ
    MCVAPI bool isCandle() const;

    // symbol: ?isComplex@Item@@UEBA_NXZ
    MCVAPI bool isComplex() const;

    // symbol: ?isComponentBased@Item@@UEBA_NXZ
    MCVAPI bool isComponentBased() const;

    // symbol: ?isFertilizer@Item@@UEBA_NXZ
    MCVAPI bool isFertilizer() const;

    // symbol: ?isMultiColorTinted@Item@@UEBA_NAEBVItemStack@@@Z
    MCVAPI bool isMultiColorTinted(class ItemStack const&) const;

    // symbol: ?isPattern@Item@@UEBA_NXZ
    MCVAPI bool isPattern() const;

    // symbol: ?playSoundIncrementally@Item@@UEBAXAEBVItemInstance@@AEAVMob@@@Z
    MCVAPI void playSoundIncrementally(class ItemInstance const&, class Mob&) const;

    // symbol: ?shouldSendInteractionGameEvents@Item@@UEBA_NXZ
    MCVAPI bool shouldSendInteractionGameEvents() const;

    // symbol: ?showsDurabilityInCreative@Item@@UEBA_NXZ
    MCVAPI bool showsDurabilityInCreative() const;

    // symbol: ?uniqueAuxValues@Item@@UEBA_NXZ
    MCVAPI bool uniqueAuxValues() const;

    // symbol: ?useInterruptedByAttacking@Item@@UEBA_NXZ
    MCVAPI bool useInterruptedByAttacking() const;

    // symbol: ??0Item@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
    MCAPI Item(std::string const&, short);

    // symbol: ?addOnResetBAIcallback@Item@@QEAAXAEBV?$function@$$A6AXXZ@std@@@Z
    MCAPI void addOnResetBAIcallback(std::function<void(void)> const&);

    // symbol: ?addTag@Item@@QEAAAEAV1@AEBVHashedString@@@Z
    MCAPI class Item& addTag(class HashedString const&);

    // symbol: ?addTag@Item@@QEAAAEAV1@AEBUItemTag@@@Z
    MCAPI class Item& addTag(struct ItemTag const&);

    // symbol: ?addTags@Item@@QEAAAEAV1@V?$initializer_list@V?$reference_wrapper@$$CBUItemTag@@@std@@@std@@@Z
    MCAPI class Item& addTags(std::initializer_list<std::reference_wrapper<struct ItemTag const>>);

    // symbol: ?allowOffhand@Item@@QEBA_NXZ
    MCAPI bool allowOffhand() const;

    // symbol: ?buildDescriptor@Item@@QEBA?AVItemDescriptor@@FPEBVCompoundTag@@@Z
    MCAPI class ItemDescriptor buildDescriptor(short, class CompoundTag const*) const;

    // symbol: ?calculatePlacePos@Item@@QEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
    MCAPI bool calculatePlacePos(class ItemStackBase&, class Actor&, uchar&, class BlockPos&) const;

    // symbol: ?canBeUsedInCommands@Item@@QEBA_NAEBVBaseGameVersion@@@Z
    MCAPI bool canBeUsedInCommands(class BaseGameVersion const&) const;

    // symbol: ?destroySpeedBonus@Item@@QEBAMAEBVItemStackBase@@@Z
    MCAPI float destroySpeedBonus(class ItemStackBase const&) const;

    // symbol: ?fixupOnLoad@Item@@QEBAXAEAVItemStackBase@@@Z
    MCAPI void fixupOnLoad(class ItemStackBase&) const;

    // symbol: ?fixupOnLoad@Item@@QEBAXAEAVItemStackBase@@AEAVLevel@@@Z
    MCAPI void fixupOnLoad(class ItemStackBase&, class Level&) const;

    // symbol: ?getCommandNames@Item@@QEBA?AV?$vector@UCommandName@@V?$allocator@UCommandName@@@std@@@std@@XZ
    MCAPI std::vector<struct CommandName> getCommandNames() const;

    // symbol: ?getCreativeCategory@Item@@QEBA?AW4CreativeItemCategory@@XZ
    MCAPI::CreativeItemCategory getCreativeCategory() const;

    // symbol: ?getCreativeGroup@Item@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getCreativeGroup() const;

    // symbol: ?getFrameCount@Item@@QEBAHXZ
    MCAPI int getFrameCount() const;

    // symbol: ?getFullItemName@Item@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getFullItemName() const;

    // symbol: ?getFullNameHash@Item@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const& getFullNameHash() const;

    // symbol: ?getId@Item@@QEBAFXZ
    MCAPI short getId() const;

    // symbol: ?getLegacyBlock@Item@@QEBAAEBV?$WeakPtr@VBlockLegacy@@@@XZ
    MCAPI class WeakPtr<class BlockLegacy> const& getLegacyBlock() const;

    // symbol: ?getNamespace@Item@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getNamespace() const;

    // symbol: ?getRawNameHash@Item@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const& getRawNameHash() const;

    // symbol: ?getRawNameId@Item@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getRawNameId() const;

    // symbol: ?getRequiredBaseGameVersion@Item@@QEBAAEBVBaseGameVersion@@XZ
    MCAPI class BaseGameVersion const& getRequiredBaseGameVersion() const;

    // symbol: ?getSerializedName@Item@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getSerializedName() const;

    // symbol: ?hasDamageValue@Item@@QEBA_NPEBVCompoundTag@@@Z
    MCAPI bool hasDamageValue(class CompoundTag const*) const;

    // symbol: ?hasTag@Item@@QEBA_NAEB_K@Z
    MCAPI bool hasTag(uint64 const&) const;

    // symbol: ?isCommandOnly@Item@@QEBA_NAEBVBaseGameVersion@@@Z
    MCAPI bool isCommandOnly(class BaseGameVersion const&) const;

    // symbol: ?isElytra@Item@@QEBA_NXZ
    MCAPI bool isElytra() const;

    // symbol: ?isExplodable@Item@@QEBA_NXZ
    MCAPI bool isExplodable() const;

    // symbol: ?isFireResistant@Item@@QEBA_NXZ
    MCAPI bool isFireResistant() const;

    // symbol: ?isNameTag@Item@@QEBA_NXZ
    MCAPI bool isNameTag() const;

    // symbol: ?isSeed@Item@@QEBA_NXZ
    MCAPI bool isSeed() const;

    // symbol: ??8Item@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class Item const&) const;

    // symbol: ?removeDamageValue@Item@@QEBAXAEAVItemStackBase@@@Z
    MCAPI void removeDamageValue(class ItemStackBase&) const;

    // symbol: ?setAllowOffhand@Item@@QEAAAEAV1@_N@Z
    MCAPI class Item& setAllowOffhand(bool);

    // symbol: ?setCategory@Item@@QEAAAEAV1@W4CreativeItemCategory@@@Z
    MCAPI class Item& setCategory(::CreativeItemCategory);

    // symbol: ?setCreativeGroup@Item@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Item& setCreativeGroup(std::string const&);

    // symbol: ?setFurnaceBurnIntervalMultiplier@Item@@QEAAAEAV1@M@Z
    MCAPI class Item& setFurnaceBurnIntervalMultiplier(float);

    // symbol: ?setFurnaceXPmultiplier@Item@@QEAAAEAV1@M@Z
    MCAPI class Item& setFurnaceXPmultiplier(float);

    // symbol: ?setHoverTextColorFormat@Item@@QEAAXAEBV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI void setHoverTextColorFormat(std::string_view const&);

    // symbol: ?setIsMirroredArt@Item@@QEAAAEAV1@_N@Z
    MCAPI class Item& setIsMirroredArt(bool);

    // symbol: ?setMinRequiredBaseGameVersion@Item@@QEAAAEAV1@AEBVBaseGameVersion@@@Z
    MCAPI class Item& setMinRequiredBaseGameVersion(class BaseGameVersion const&);

    // symbol: ?shouldDespawn@Item@@QEBA_NXZ
    MCAPI bool shouldDespawn() const;

    // symbol: ?updateCustomBlockEntityTag@Item@@QEBA_NAEAVBlockSource@@AEAVItemStackBase@@AEBVBlockPos@@@Z
    MCAPI bool updateCustomBlockEntityTag(class BlockSource&, class ItemStackBase&, class BlockPos const&) const;

    // symbol: ?useOn@Item@@QEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@HHHEAEBVVec3@@@Z
    MCAPI class InteractionResult useOn(class ItemStack&, class Actor&, int, int, int, uchar, class Vec3 const&) const;

    // symbol: ?addCreativeItem@Item@@SAXVItemRegistryRef@@AEBVBlock@@@Z
    MCAPI static void addCreativeItem(class ItemRegistryRef, class Block const&);

    // symbol: ?addCreativeItem@Item@@SAXVItemRegistryRef@@AEBVItemInstance@@@Z
    MCAPI static void addCreativeItem(class ItemRegistryRef, class ItemInstance const&);

    // symbol: ?addCreativeItem@Item@@SAXVItemRegistryRef@@AEBVItemStack@@@Z
    MCAPI static void addCreativeItem(class ItemRegistryRef, class ItemStack const&);

    // symbol: ?addLooseCreativeItems@Item@@SAX_NAEBVBaseGameVersion@@VItemRegistryRef@@@Z
    MCAPI static void addLooseCreativeItems(bool, class BaseGameVersion const&, class ItemRegistryRef);

    // symbol: ?endCreativeItemDefinitions@Item@@SAX_N@Z
    MCAPI static void endCreativeItemDefinitions(bool);

    // symbol: ?isElytra@Item@@SA_NAEBVItemDescriptor@@@Z
    MCAPI static bool isElytra(class ItemDescriptor const&);

    // symbol: ?isElytraBroken@Item@@SA_NH@Z
    MCAPI static bool isElytraBroken(int);

    // symbol: ?isFlyEnabled@Item@@SA_NAEBVItemInstance@@@Z
    MCAPI static bool isFlyEnabled(class ItemInstance const&);

    // symbol: ?isSameTypeAndItem@Item@@SA_NAEBVItemStackBase@@0@Z
    MCAPI static bool isSameTypeAndItem(class ItemStackBase const&, class ItemStackBase const&);

    // symbol: ?startCreativeItemDefinitions@Item@@SAX_NPEAVCreativeItemRegistry@@@Z
    MCAPI static void startCreativeItemDefinitions(bool, class CreativeItemRegistry*);

    // symbol: ?toBlockId@Item@@SA?AUNewBlockID@@F@Z
    MCAPI static struct NewBlockID toBlockId(short);

    // symbol: ?ICON_DESCRIPTION_PREFIX@Item@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const ICON_DESCRIPTION_PREFIX;

    // symbol: ?TAG_DAMAGE@Item@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_DAMAGE;

    // symbol: ?mActiveCreativeGroupInfo@Item@@2PEAVCreativeGroupInfo@@EA
    MCAPI static class CreativeGroupInfo* mActiveCreativeGroupInfo;

    // symbol: ?mActiveCreativeItemCategory@Item@@2PEAVCreativeItemGroupCategory@@EA
    MCAPI static class CreativeItemGroupCategory* mActiveCreativeItemCategory;

    // symbol: ?mActiveCreativeItemRegistry@Item@@2PEAVCreativeItemRegistry@@EA
    MCAPI static class CreativeItemRegistry* mActiveCreativeItemRegistry;

    // symbol: ?mGenerateDenyParticleEffect@Item@@2_NB
    MCAPI static bool const mGenerateDenyParticleEffect;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addLooseCreativeItemsClient@Item@@CAXXZ
    MCAPI static void _addLooseCreativeItemsClient();

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?mServerItemsUsedInCreativeItems@Item@@0V?$unique_ptr@V?$set@FU?$less@F@std@@V?$allocator@F@2@@std@@U?$default_delete@V?$set@FU?$less@F@std@@V?$allocator@F@2@@std@@@2@@std@@A
    MCAPI static std::unique_ptr<std::set<short>> mServerItemsUsedInCreativeItems;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $mServerItemsUsedInCreativeItems() { return mServerItemsUsedInCreativeItems; }

    // NOLINTEND
};