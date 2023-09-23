#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorInteraction {
public:
    // prevent constructor by default
    ActorInteraction& operator=(ActorInteraction const &) = delete;
    ActorInteraction(ActorInteraction const &) = delete;
    ActorInteraction() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0ActorInteraction@@QEAA@_N@Z
    MCAPI ActorInteraction(bool);

    // symbol: ?capture@ActorInteraction@@QEAAXV?$function@$$A6AXXZ@std@@@Z
    MCAPI void capture(std::function<void (void)>);

    // symbol: ?getInteractText@ActorInteraction@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const & getInteractText() const;

    // symbol: ?interact@ActorInteraction@@QEAAXXZ
    MCAPI void interact();

    // symbol: ?setInteractText@ActorInteraction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setInteractText(std::string const &);

    // symbol: ?shouldCapture@ActorInteraction@@QEBA_NXZ
    MCAPI bool shouldCapture() const;

    // symbol: ??1ActorInteraction@@QEAA@XZ
    MCAPI ~ActorInteraction();

    // NOLINTEND

};

