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

class StayNearNoteblockGoal : public ::Goal {
public:
    // StayNearNoteblockGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on
    
    // StayNearNoteblockGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const &) = delete;
        Definition(Definition const &) = delete;
    
    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __unk_vfn_0
        virtual void __unk_vfn_0();
    
        // symbol: ??1Definition@StayNearNoteblockGoal@@UEAA@XZ
        MCVAPI ~Definition();
    
        // symbol: ??0Definition@StayNearNoteblockGoal@@QEAA@XZ
        MCAPI Definition();
    
        // symbol: ?initialize@Definition@StayNearNoteblockGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext &, class StayNearNoteblockGoal &) const;
    
        // symbol: ?buildSchema@Definition@StayNearNoteblockGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefinition@StayNearNoteblockGoal@@@JsonUtil@@@4@@Z
        MCAPI static void buildSchema(std::string const &, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class StayNearNoteblockGoal::Definition>> &);
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    StayNearNoteblockGoal& operator=(StayNearNoteblockGoal const &) = delete;
    StayNearNoteblockGoal(StayNearNoteblockGoal const &) = delete;
    StayNearNoteblockGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@StayNearNoteblockGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@StayNearNoteblockGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@StayNearNoteblockGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@StayNearNoteblockGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@StayNearNoteblockGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?appendDebugInfo@StayNearNoteblockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0StayNearNoteblockGoal@@QEAA@AEAVMob@@@Z
    MCAPI StayNearNoteblockGoal(class Mob &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_hasLastVibrationAtNoteblock@StayNearNoteblockGoal@@AEAA?BV?$optional@VBlockPos@@@std@@XZ
    MCAPI std::optional<class BlockPos> const _hasLastVibrationAtNoteblock();

    // NOLINTEND

};

