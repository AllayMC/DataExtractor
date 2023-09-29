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
#include "mc/world/actor/Mob.h"
#include "mc/world/item/components/ItemUseMethod.h"

class ArmorStand : public ::Mob {
public:
    // ArmorStand inner types declare
    // clang-format off
    struct Pose;
    // clang-format on
    
    // ArmorStand inner types define
    struct Pose {
    public:
        // prevent constructor by default
        Pose& operator=(Pose const &) = delete;
        Pose(Pose const &) = delete;
        Pose() = delete;
    
    };
    
public:
    // prevent constructor by default
    ArmorStand& operator=(ArmorStand const &) = delete;
    ArmorStand(ArmorStand const &) = delete;
    ArmorStand() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 43, symbol: ?normalTick@ArmorStand@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 68, symbol: ?getShadowRadius@ArmorStand@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 81, symbol: ?isPickable@ArmorStand@@UEAA_NXZ
    virtual bool isPickable();

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

    // vIndex: 119, symbol: ?isInvulnerableTo@ArmorStand@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 198, symbol: __unk_vfn_198
    virtual void __unk_vfn_198();

    // vIndex: 199, symbol: __unk_vfn_199
    virtual void __unk_vfn_199();

    // vIndex: 205, symbol: ?getInteraction@ArmorStand@@UEAA_NAEAVPlayer@@AEAVActorInteraction@@AEBVVec3@@@Z
    virtual bool getInteraction(class Player &, class ActorInteraction &, class Vec3 const &);

    // vIndex: 215, symbol: __unk_vfn_215
    virtual void __unk_vfn_215();

    // vIndex: 218, symbol: __unk_vfn_218
    virtual void __unk_vfn_218();

    // vIndex: 219, symbol: ?kill@ArmorStand@@UEAAXXZ
    virtual void kill();

    // vIndex: 220, symbol: ?die@ArmorStand@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const &);

    // vIndex: 233, symbol: ?updateEntitySpecificMolangVariables@ArmorStand@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 236, symbol: ?_hurt@ArmorStand@@UEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);

    // vIndex: 239, symbol: ?readAdditionalSaveData@ArmorStand@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);

    // vIndex: 240, symbol: ?addAdditionalSaveData@ArmorStand@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag &) const;

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // vIndex: 248, symbol: __unk_vfn_248
    virtual void __unk_vfn_248();

    // vIndex: 260, symbol: ?pushActors@ArmorStand@@UEAAXXZ
    virtual void pushActors();

    // vIndex: 270, symbol: __unk_vfn_270
    virtual void __unk_vfn_270();

    // vIndex: 274, symbol: __unk_vfn_274
    virtual void __unk_vfn_274();

    // symbol: ?interactPreventDefault@ArmorStand@@UEAA_NXZ
    MCVAPI bool interactPreventDefault();

    // symbol: ??0ArmorStand@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI ArmorStand(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_causeDamage@ArmorStand@@AEAAXM@Z
    MCAPI void _causeDamage(float);

    // symbol: ?_destroyWithEffects@ArmorStand@@AEAAXPEAVActor@@@Z
    MCAPI void _destroyWithEffects(class Actor *);

    // symbol: ?_dropHeldItems@ArmorStand@@AEAAXXZ
    MCAPI void _dropHeldItems();

    // symbol: ?_dropHeldItemsAndResource@ArmorStand@@AEAAXXZ
    MCAPI void _dropHeldItemsAndResource();

    // symbol: ?_dropItem@ArmorStand@@AEAAXAEBVItemStack@@@Z
    MCAPI void _dropItem(class ItemStack const &);

    // symbol: ?_trySwapItem@ArmorStand@@AEAA_NAEAVPlayer@@W4EquipmentSlot@@@Z
    MCAPI bool _trySwapItem(class Player &, ::EquipmentSlot);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?POSE_ATHENA@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_ATHENA;

    // symbol: ?POSE_BRANDISH@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_BRANDISH;

    // symbol: ?POSE_CANCAN_A@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_CANCAN_A;

    // symbol: ?POSE_CANCAN_B@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_CANCAN_B;

    // symbol: ?POSE_DEFAULT@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_DEFAULT;

    // symbol: ?POSE_ENTERTAIN@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_ENTERTAIN;

    // symbol: ?POSE_HERO@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_HERO;

    // symbol: ?POSE_HONOR@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_HONOR;

    // symbol: ?POSE_RIPOSTE@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_RIPOSTE;

    // symbol: ?POSE_SALUTE@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_SALUTE;

    // symbol: ?POSE_SOLEMN@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_SOLEMN;

    // symbol: ?POSE_ZERO_ROTATION@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_ZERO_ROTATION;

    // symbol: ?POSE_ZOMBIE@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_ZOMBIE;

    // symbol: ?STAND_POSES@ArmorStand@@0PAPEBUPose@1@A
    MCAPI static struct ArmorStand::Pose const * STAND_POSES[];

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $POSE_ATHENA() { return POSE_ATHENA; }

    inline auto& $POSE_BRANDISH() { return POSE_BRANDISH; }

    inline auto& $POSE_CANCAN_A() { return POSE_CANCAN_A; }

    inline auto& $POSE_CANCAN_B() { return POSE_CANCAN_B; }

    inline auto& $POSE_DEFAULT() { return POSE_DEFAULT; }

    inline auto& $POSE_ENTERTAIN() { return POSE_ENTERTAIN; }

    inline auto& $POSE_HERO() { return POSE_HERO; }

    inline auto& $POSE_HONOR() { return POSE_HONOR; }

    inline auto& $POSE_RIPOSTE() { return POSE_RIPOSTE; }

    inline auto& $POSE_SALUTE() { return POSE_SALUTE; }

    inline auto& $POSE_SOLEMN() { return POSE_SOLEMN; }

    inline auto& $POSE_ZERO_ROTATION() { return POSE_ZERO_ROTATION; }

    inline auto& $POSE_ZOMBIE() { return POSE_ZOMBIE; }

    inline auto& $STAND_POSES() { return STAND_POSES; }

    // NOLINTEND

};

