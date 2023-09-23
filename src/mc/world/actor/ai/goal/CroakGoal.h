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

class CroakGoal : public ::Goal {
public:
    // CroakGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on
    
    // CroakGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const &) = delete;
        Definition(Definition const &) = delete;
    
    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __unk_vfn_0
        virtual void __unk_vfn_0();
    
        // symbol: ??0Definition@CroakGoal@@QEAA@XZ
        MCAPI Definition();
    
        // symbol: ?initialize@Definition@CroakGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext &, class CroakGoal &) const;
    
        // symbol: ?buildSchema@Definition@CroakGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefinition@CroakGoal@@@JsonUtil@@@4@@Z
        MCAPI static void buildSchema(std::string const &, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class CroakGoal::Definition>> &);
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    CroakGoal& operator=(CroakGoal const &) = delete;
    CroakGoal(CroakGoal const &) = delete;
    CroakGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@CroakGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@CroakGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@CroakGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@CroakGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 7, symbol: ?appendDebugInfo@CroakGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0CroakGoal@@QEAA@AEAVMob@@@Z
    MCAPI CroakGoal(class Mob &);

    // NOLINTEND

};

