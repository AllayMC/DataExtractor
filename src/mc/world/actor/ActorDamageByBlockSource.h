#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorCategory.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/world/actor/ActorDamageSource.h"

class ActorDamageByBlockSource : public ::ActorDamageSource {
public:
    // prevent constructor by default
    ActorDamageByBlockSource& operator=(ActorDamageByBlockSource const &) = delete;
    ActorDamageByBlockSource(ActorDamageByBlockSource const &) = delete;
    ActorDamageByBlockSource() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?isBlockSource@ActorDamageByBlockSource@@UEBA_NXZ
    virtual bool isBlockSource() const;

    // vIndex: 10, symbol: ?getDeathMessage@ActorDamageByBlockSource@@UEBA?AU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@PEAVActor@@@Z
    virtual std::pair<std::string, std::vector<std::string>> getDeathMessage(std::string, class Actor *) const;

    // vIndex: 21, symbol: ?clone@ActorDamageByBlockSource@@UEBA?AV?$unique_ptr@VActorDamageSource@@U?$default_delete@VActorDamageSource@@@std@@@std@@XZ
    virtual std::unique_ptr<class ActorDamageSource> clone() const;

    // symbol: ??0ActorDamageByBlockSource@@QEAA@AEBVBlock@@W4ActorDamageCause@@@Z
    MCAPI ActorDamageByBlockSource(class Block const &, ::ActorDamageCause);

    // NOLINTEND

};

