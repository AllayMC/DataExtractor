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

class PlayGoal : public ::Goal {
public:
    // PlayGoal inner types declare
    // clang-format off
    class PlayDefinition;
    // clang-format on
    
    // PlayGoal inner types define
    class PlayDefinition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        PlayDefinition& operator=(PlayDefinition const &) = delete;
        PlayDefinition(PlayDefinition const &) = delete;
        PlayDefinition() = delete;
    
    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __unk_vfn_0
        virtual void __unk_vfn_0();
    
        // symbol: ?initialize@PlayDefinition@PlayGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext &, class PlayGoal &) const;
    
        // symbol: ?buildSchema@PlayDefinition@PlayGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VPlayDefinition@PlayGoal@@@JsonUtil@@@4@@Z
        MCAPI static void buildSchema(std::string const &, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class PlayGoal::PlayDefinition>> &);
    
        // symbol: ?getStrictParsingVersion@PlayDefinition@PlayGoal@@SA?AVSemVersion@@XZ
        MCAPI static class SemVersion getStrictParsingVersion();
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    PlayGoal& operator=(PlayGoal const &) = delete;
    PlayGoal(PlayGoal const &) = delete;
    PlayGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@PlayGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@PlayGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@PlayGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@PlayGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@PlayGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?appendDebugInfo@PlayGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0PlayGoal@@QEAA@AEAVMob@@@Z
    MCAPI PlayGoal(class Mob &);

    // NOLINTEND

};

