#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AnimationComponentGroupType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/EquipmentSlot.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/animal/Animal.h"
#include "mc/world/item/components/ItemUseMethod.h"

class Goat : public ::Animal {
public:
    // prevent constructor by default
    Goat& operator=(Goat const &) = delete;
    Goat(Goat const &) = delete;
    Goat() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 12, symbol: ?initializeComponents@Goat@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::Actor::InitializationMethod, class VariantParameterList const &);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 82, symbol: __unk_vfn_82
    virtual void __unk_vfn_82();

    // vIndex: 85, symbol: __unk_vfn_85
    virtual void __unk_vfn_85();

    // vIndex: 92, symbol: __unk_vfn_92
    virtual void __unk_vfn_92();

    // vIndex: 94, symbol: __unk_vfn_94
    virtual void __unk_vfn_94();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 97, symbol: __unk_vfn_97
    virtual void __unk_vfn_97();

    // vIndex: 118, symbol: ?getAmbientSound@Goat@@UEBA?AW4LevelSoundEvent@@XZ
    virtual ::LevelSoundEvent getAmbientSound() const;

    // vIndex: 125, symbol: ?handleEntityEvent@Goat@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 198, symbol: __unk_vfn_198
    virtual void __unk_vfn_198();

    // vIndex: 199, symbol: __unk_vfn_199
    virtual void __unk_vfn_199();

    // vIndex: 215, symbol: __unk_vfn_215
    virtual void __unk_vfn_215();

    // vIndex: 218, symbol: __unk_vfn_218
    virtual void __unk_vfn_218();

    // vIndex: 233, symbol: ?updateEntitySpecificMolangVariables@Goat@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 239, symbol: ?readAdditionalSaveData@Goat@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);

    // vIndex: 240, symbol: ?addAdditionalSaveData@Goat@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag &) const;

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // vIndex: 248, symbol: __unk_vfn_248
    virtual void __unk_vfn_248();

    // vIndex: 252, symbol: ?getHurtSound@Goat@@UEAA?AW4LevelSoundEvent@@XZ
    virtual ::LevelSoundEvent getHurtSound();

    // vIndex: 253, symbol: ?getDeathSound@Goat@@UEAA?AW4LevelSoundEvent@@XZ
    virtual ::LevelSoundEvent getDeathSound();

    // vIndex: 270, symbol: __unk_vfn_270
    virtual void __unk_vfn_270();

    // vIndex: 274, symbol: __unk_vfn_274
    virtual void __unk_vfn_274();

    // symbol: ??0Goat@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Goat(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

    // symbol: ?getHornCount@Goat@@QEBAHXZ
    MCAPI int getHornCount() const;

    // symbol: ?isScreaming@Goat@@QEAA_NXZ
    MCAPI bool isScreaming();

    // symbol: ?reduceHornCount@Goat@@QEAAXXZ
    MCAPI void reduceHornCount();

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?DEFAULT_HORN_COUNT@Goat@@0HA
    MCAPI static int DEFAULT_HORN_COUNT;

    // symbol: ?SCREAMING_GOAT_VARIANT@Goat@@0HA
    MCAPI static int SCREAMING_GOAT_VARIANT;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $DEFAULT_HORN_COUNT() { return DEFAULT_HORN_COUNT; }

    inline auto& $SCREAMING_GOAT_VARIANT() { return SCREAMING_GOAT_VARIANT; }

    // NOLINTEND

};

