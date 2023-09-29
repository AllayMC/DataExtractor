#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class EquipItemGoal : public ::Goal {
public:
    // EquipItemGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on
    
    // EquipItemGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const &) = delete;
        Definition(Definition const &) = delete;
        Definition() = delete;
    
    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __unk_vfn_0
        virtual void __unk_vfn_0();
    
        // symbol: ?initialize@Definition@EquipItemGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext &, class EquipItemGoal &) const;
    
        // symbol: ?buildSchema@Definition@EquipItemGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefinition@EquipItemGoal@@@JsonUtil@@@4@@Z
        MCAPI static void buildSchema(std::string const &, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EquipItemGoal::Definition>> &);
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    EquipItemGoal& operator=(EquipItemGoal const &) = delete;
    EquipItemGoal(EquipItemGoal const &) = delete;
    EquipItemGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@EquipItemGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@EquipItemGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 6, symbol: ?tick@EquipItemGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?appendDebugInfo@EquipItemGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0EquipItemGoal@@QEAA@AEAVMob@@@Z
    MCAPI EquipItemGoal(class Mob &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_dropItem@EquipItemGoal@@AEBAXAEBVItemStack@@@Z
    MCAPI void _dropItem(class ItemStack const &) const;

    // symbol: ?_sendMobEquipmentPacket@EquipItemGoal@@AEBAXVMobEquipmentPacket@@@Z
    MCAPI void _sendMobEquipmentPacket(class MobEquipmentPacket) const;

    // NOLINTEND

};

