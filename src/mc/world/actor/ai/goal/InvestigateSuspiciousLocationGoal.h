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

class InvestigateSuspiciousLocationGoal : public ::Goal {
public:
    // InvestigateSuspiciousLocationGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on
    
    // InvestigateSuspiciousLocationGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const &) = delete;
        Definition(Definition const &) = delete;
    
    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __unk_vfn_0
        virtual void __unk_vfn_0();
    
        // symbol: ??0Definition@InvestigateSuspiciousLocationGoal@@QEAA@XZ
        MCAPI Definition();
    
        // symbol: ?initialize@Definition@InvestigateSuspiciousLocationGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext &, class InvestigateSuspiciousLocationGoal &) const;
    
        // symbol: ?buildSchema@Definition@InvestigateSuspiciousLocationGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefinition@InvestigateSuspiciousLocationGoal@@@JsonUtil@@@4@@Z
        MCAPI static void buildSchema(std::string const &, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class InvestigateSuspiciousLocationGoal::Definition>> &);
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    InvestigateSuspiciousLocationGoal& operator=(InvestigateSuspiciousLocationGoal const &) = delete;
    InvestigateSuspiciousLocationGoal(InvestigateSuspiciousLocationGoal const &) = delete;
    InvestigateSuspiciousLocationGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@InvestigateSuspiciousLocationGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@InvestigateSuspiciousLocationGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@InvestigateSuspiciousLocationGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@InvestigateSuspiciousLocationGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@InvestigateSuspiciousLocationGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?appendDebugInfo@InvestigateSuspiciousLocationGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0InvestigateSuspiciousLocationGoal@@QEAA@AEAVMob@@@Z
    MCAPI InvestigateSuspiciousLocationGoal(class Mob &);

    // NOLINTEND

};

