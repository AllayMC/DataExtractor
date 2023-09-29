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

class TakeFlowerGoal : public ::Goal {
public:
    // TakeFlowerGoal inner types declare
    // clang-format off
    class TakeFlowerDefinition;
    // clang-format on
    
    // TakeFlowerGoal inner types define
    class TakeFlowerDefinition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        TakeFlowerDefinition& operator=(TakeFlowerDefinition const &) = delete;
        TakeFlowerDefinition(TakeFlowerDefinition const &) = delete;
        TakeFlowerDefinition() = delete;
    
    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __unk_vfn_0
        virtual void __unk_vfn_0();
    
        // symbol: ?buildSchema@TakeFlowerDefinition@TakeFlowerGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VTakeFlowerDefinition@TakeFlowerGoal@@@JsonUtil@@@4@@Z
        MCAPI static void buildSchema(std::string const &, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TakeFlowerGoal::TakeFlowerDefinition>> &);
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    TakeFlowerGoal& operator=(TakeFlowerGoal const &) = delete;
    TakeFlowerGoal(TakeFlowerGoal const &) = delete;
    TakeFlowerGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@TakeFlowerGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@TakeFlowerGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@TakeFlowerGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@TakeFlowerGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@TakeFlowerGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?appendDebugInfo@TakeFlowerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0TakeFlowerGoal@@QEAA@AEAVMob@@@Z
    MCAPI TakeFlowerGoal(class Mob &);

    // NOLINTEND

};

