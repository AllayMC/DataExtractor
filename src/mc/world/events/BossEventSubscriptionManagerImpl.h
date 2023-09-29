#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/BossEventSubscriptionManager.h"
#include "mc/world/events/BossEventUpdateType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class BossEventSubscriptionManagerImpl : public ::BossEventSubscriptionManager {
public:
    // prevent constructor by default
    BossEventSubscriptionManagerImpl& operator=(BossEventSubscriptionManagerImpl const &) = delete;
    BossEventSubscriptionManagerImpl(BossEventSubscriptionManagerImpl const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ?areBossEventSubscribersReady@BossEventSubscriptionManagerImpl@@UEBA_NXZ
    MCVAPI bool areBossEventSubscribersReady() const;

    // symbol: ?broadcastBossEvent@BossEventSubscriptionManagerImpl@@UEAAXW4BossEventUpdateType@@AEBUActorUniqueID@@AEBVBossEventPacket@@@Z
    MCVAPI void broadcastBossEvent(::BossEventUpdateType, struct ActorUniqueID const &, class BossEventPacket const &);

    // symbol: ?broadcastBossEvent@BossEventSubscriptionManagerImpl@@UEAAXW4BossEventUpdateType@@@Z
    MCVAPI void broadcastBossEvent(::BossEventUpdateType);

    // symbol: ?subscribeToBossEvent@BossEventSubscriptionManagerImpl@@UEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXW4BossEventUpdateType@@@Z@std@@@Z
    MCVAPI class Bedrock::PubSub::Subscription subscribeToBossEvent(std::function<void (::BossEventUpdateType)>);

    // symbol: ?subscribeToBossEvent@BossEventSubscriptionManagerImpl@@UEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXW4BossEventUpdateType@@AEBUActorUniqueID@@AEBVBossEventPacket@@@Z@std@@@Z
    MCVAPI class Bedrock::PubSub::Subscription subscribeToBossEvent(std::function<void (::BossEventUpdateType, struct ActorUniqueID const &, class BossEventPacket const &)>);

    // symbol: ??0BossEventSubscriptionManagerImpl@@QEAA@XZ
    MCAPI BossEventSubscriptionManagerImpl();

    // NOLINTEND

};

