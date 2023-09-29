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

class TradeWithPlayerGoal : public ::Goal {
public:
    // TradeWithPlayerGoal inner types declare
    // clang-format off
    class TradeWithPlayerDefinition;
    // clang-format on
    
    // TradeWithPlayerGoal inner types define
    class TradeWithPlayerDefinition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        TradeWithPlayerDefinition& operator=(TradeWithPlayerDefinition const &) = delete;
        TradeWithPlayerDefinition(TradeWithPlayerDefinition const &) = delete;
        TradeWithPlayerDefinition() = delete;
    
    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __unk_vfn_0
        virtual void __unk_vfn_0();
    
        // symbol: ?buildSchema@TradeWithPlayerDefinition@TradeWithPlayerGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VTradeWithPlayerDefinition@TradeWithPlayerGoal@@@JsonUtil@@@4@@Z
        MCAPI static void buildSchema(std::string const &, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TradeWithPlayerGoal::TradeWithPlayerDefinition>> &);
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    TradeWithPlayerGoal& operator=(TradeWithPlayerGoal const &) = delete;
    TradeWithPlayerGoal(TradeWithPlayerGoal const &) = delete;
    TradeWithPlayerGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@TradeWithPlayerGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@TradeWithPlayerGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@TradeWithPlayerGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 7, symbol: ?appendDebugInfo@TradeWithPlayerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // NOLINTEND

};

