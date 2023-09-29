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
#include "mc/world/actor/projectile/PredictableProjectile.h"
#include "mc/world/item/components/ItemUseMethod.h"

class FallingBlockActor : public ::PredictableProjectile {
public:
    // prevent constructor by default
    FallingBlockActor& operator=(FallingBlockActor const &) = delete;
    FallingBlockActor(FallingBlockActor const &) = delete;
    FallingBlockActor() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: ?reloadHardcoded@FallingBlockActor@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const &);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 38, symbol: ?teleportTo@FallingBlockActor@@UEAAXAEBVVec3@@_NHH1@Z
    virtual void teleportTo(class Vec3 const &, bool, int, int, bool);

    // vIndex: 43, symbol: ?normalTick@FallingBlockActor@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 67, symbol: ?getShadowHeightOffs@FallingBlockActor@@UEAAMXZ
    virtual float getShadowHeightOffs();

    // vIndex: 68, symbol: ?getShadowRadius@FallingBlockActor@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 81, symbol: ?isPickable@FallingBlockActor@@UEAA_NXZ
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

    // vIndex: 161, symbol: ?canChangeDimensionsUsingPortal@FallingBlockActor@@UEBA_NXZ
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 166, symbol: ?causeFallDamage@FallingBlockActor@@UEAAXMMVActorDamageSource@@@Z
    virtual void causeFallDamage(float, float, class ActorDamageSource);

    // vIndex: 169, symbol: ?onSynchedDataUpdate@FallingBlockActor@@UEAAXH@Z
    virtual void onSynchedDataUpdate(int);

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

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 236, symbol: ?_hurt@FallingBlockActor@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);

    // vIndex: 239, symbol: ?readAdditionalSaveData@FallingBlockActor@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);

    // vIndex: 240, symbol: ?addAdditionalSaveData@FallingBlockActor@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag &) const;

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // symbol: ?getDeletionDelayTimeSeconds@FallingBlockActor@@UEBAMXZ
    MCVAPI float getDeletionDelayTimeSeconds() const;

    // symbol: ??0FallingBlockActor@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI FallingBlockActor(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

    // symbol: ?breakBlock@FallingBlockActor@@QEAAXXZ
    MCAPI void breakBlock();

    // symbol: ?doNormalTick@FallingBlockActor@@QEAAXAEAVITickDelegate@@@Z
    MCAPI void doNormalTick(class ITickDelegate &);

    // symbol: ?getFallingBlock@FallingBlockActor@@QEBAAEBVBlock@@XZ
    MCAPI class Block const & getFallingBlock() const;

    // symbol: ?setFallDamageAmount@FallingBlockActor@@QEAAXM@Z
    MCAPI void setFallDamageAmount(float);

    // symbol: ?setFallingBlock@FallingBlockActor@@QEAAXAEBVBlock@@_N@Z
    MCAPI void setFallingBlock(class Block const &, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_waitRemoval@FallingBlockActor@@AEAAXXZ
    MCAPI void _waitRemoval();

    // NOLINTEND

};
