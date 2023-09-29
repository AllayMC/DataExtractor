#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Enchant {
public:
    // Enchant inner types define
    enum class Frequency {};
    
    enum class Slot {};
    
    enum class Type {};
    
public:
    // prevent constructor by default
    Enchant& operator=(Enchant const &) = delete;
    Enchant(Enchant const &) = delete;
    Enchant() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?isCompatibleWith@Enchant@@UEBA_NW4Type@1@@Z
    virtual bool isCompatibleWith(::Enchant::Type) const;

    // vIndex: 2, symbol: ?getMinCost@Enchant@@UEBAHH@Z
    virtual int getMinCost(int) const;

    // vIndex: 3, symbol: ?getMaxCost@Enchant@@UEBAHH@Z
    virtual int getMaxCost(int) const;

    // vIndex: 4, symbol: ?getMinLevel@Enchant@@UEBAHXZ
    virtual int getMinLevel() const;

    // vIndex: 5, symbol: ?getMaxLevel@Enchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // vIndex: 6, symbol: ?getDamageProtection@Enchant@@UEBAHHAEBVActorDamageSource@@@Z
    virtual int getDamageProtection(int, class ActorDamageSource const &) const;

    // vIndex: 7, symbol: ?getDamageBonus@Enchant@@UEBAMHAEBVActor@@@Z
    virtual float getDamageBonus(int, class Actor const &) const;

    // vIndex: 8, symbol: ?doPostAttack@Enchant@@UEBAXAEAVActor@@0H@Z
    virtual void doPostAttack(class Actor &, class Actor &, int) const;

    // vIndex: 9, symbol: ?doPostHurt@Enchant@@UEBAXAEAVItemInstance@@AEAVActor@@1H@Z
    virtual void doPostHurt(class ItemInstance &, class Actor &, class Actor &, int) const;

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13();

    // vIndex: 14, symbol: ?_isValidEnchantmentTypeForCategory@Enchant@@EEBA_NW4Type@1@@Z
    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type) const;

    // symbol: ?isDiscoverable@Enchant@@UEBA_NXZ
    MCVAPI bool isDiscoverable() const;

    // symbol: ?isMeleeDamageEnchant@Enchant@@UEBA_NXZ
    MCVAPI bool isMeleeDamageEnchant() const;

    // symbol: ?isProtectionEnchant@Enchant@@UEBA_NXZ
    MCVAPI bool isProtectionEnchant() const;

    // symbol: ?isTreasureOnly@Enchant@@UEBA_NXZ
    MCVAPI bool isTreasureOnly() const;

    // symbol: ??1Enchant@@UEAA@XZ
    MCVAPI ~Enchant();

    // symbol: ??0Enchant@@QEAA@W4Type@0@W4Frequency@0@V?$basic_string_view@DU?$char_traits@D@std@@@std@@2HH_N@Z
    MCAPI Enchant(::Enchant::Type, ::Enchant::Frequency, std::string_view, std::string_view, int, int, bool);

    // symbol: ?getDescriptionId@Enchant@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getDescriptionId() const;

    // symbol: ?getEnchantType@Enchant@@QEBA?AW4Type@1@XZ
    MCAPI ::Enchant::Type getEnchantType() const;

    // symbol: ?getStringId@Enchant@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const & getStringId() const;

    // symbol: ?isAvailable@Enchant@@QEBA_NXZ
    MCAPI bool isAvailable() const;

    // symbol: ?isDisabled@Enchant@@QEBA_NXZ
    MCAPI bool isDisabled() const;

    // symbol: ?enchantSlotFromString@Enchant@@SA?AW4Slot@1@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI static ::Enchant::Slot enchantSlotFromString(std::string_view);

    // symbol: ?getEnchant@Enchant@@SAPEBV1@AEBW4Type@1@@Z
    MCAPI static class Enchant const * getEnchant(::Enchant::Type const &);

    // symbol: ?getEnchantFromName@Enchant@@SAPEBV1@AEBVHashedString@@@Z
    MCAPI static class Enchant const * getEnchantFromName(class HashedString const &);

    // symbol: ?getEnchantTypeFromName@Enchant@@SA?AW4Type@1@AEBVHashedString@@@Z
    MCAPI static ::Enchant::Type getEnchantTypeFromName(class HashedString const &);

    // symbol: ?initEnchants@Enchant@@SAXXZ
    MCAPI static void initEnchants();

    // symbol: ?shutdownEnchants@Enchant@@SAXXZ
    MCAPI static void shutdownEnchants();

    // symbol: ?stringFromEnchantSlot@Enchant@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBW4Slot@1@@Z
    MCAPI static std::string stringFromEnchantSlot(::Enchant::Slot const &);

    // symbol: ?mEnchantNameToType@Enchant@@2V?$unordered_map@VHashedString@@W4Type@Enchant@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@5@V?$allocator@U?$pair@$$CBVHashedString@@W4Type@Enchant@@@std@@@5@@std@@A
    MCAPI static std::unordered_map<class HashedString,::Enchant::Type> mEnchantNameToType;

    // symbol: ?mEnchantSlotTypeEnumToStringMap@Enchant@@2V?$unordered_map@W4Slot@Enchant@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEnchantSlotEnumHasher@@U?$equal_to@W4Slot@Enchant@@@4@V?$allocator@U?$pair@$$CBW4Slot@Enchant@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@4@@std@@A
    MCAPI static std::unordered_map<::Enchant::Slot, std::string, struct EnchantSlotEnumHasher, std::equal_to<::Enchant::Slot>, std::allocator<std::pair<::Enchant::Slot const, std::string>>> mEnchantSlotTypeEnumToStringMap;

    // symbol: ?mEnchantSlotTypeNameToEnumMap@Enchant@@2V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Slot@Enchant@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Slot@Enchant@@@std@@@2@@std@@A
    MCAPI static std::unordered_map<std::string,::Enchant::Slot> mEnchantSlotTypeNameToEnumMap;

    // symbol: ?mEnchants@Enchant@@2V?$vector@V?$unique_ptr@VEnchant@@U?$default_delete@VEnchant@@@std@@@std@@V?$allocator@V?$unique_ptr@VEnchant@@U?$default_delete@VEnchant@@@std@@@std@@@2@@std@@A
    MCAPI static std::vector<std::unique_ptr<class Enchant>> mEnchants;

    // NOLINTEND

};

