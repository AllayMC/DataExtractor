#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/events/MovementEventType.h"

class LegacyTelemetryEventPacket : public ::Packet {
public:
    // LegacyTelemetryEventPacket inner types declare
    // clang-format off
    struct Data;
    // clang-format on
    
    // LegacyTelemetryEventPacket inner types define
    enum class Type {};
    
    struct Data {
    public:
        // prevent constructor by default
        Data& operator=(Data const &) = delete;
        Data(Data const &) = delete;
    
    public:
        // NOLINTBEGIN
        // symbol: ??0Data@LegacyTelemetryEventPacket@@QEAA@XZ
        MCAPI Data();
    
        // symbol: ??1Data@LegacyTelemetryEventPacket@@QEAA@XZ
        MCAPI ~Data();
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    LegacyTelemetryEventPacket& operator=(LegacyTelemetryEventPacket const &) = delete;
    LegacyTelemetryEventPacket(LegacyTelemetryEventPacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@LegacyTelemetryEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@LegacyTelemetryEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@LegacyTelemetryEventPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@LegacyTelemetryEventPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1LegacyTelemetryEventPacket@@UEAA@XZ
    MCVAPI ~LegacyTelemetryEventPacket();

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@XZ
    MCAPI LegacyTelemetryEventPacket();

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@PEBVPlayer@@HV?$not_null@PEBVActor@@@gsl@@@Z
    MCAPI LegacyTelemetryEventPacket(class Player const *, int, gsl::not_null<class Actor const *>);

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@AEBVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI LegacyTelemetryEventPacket(class Player const &, std::string const &, int);

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@PEBVPlayer@@FIF@Z
    MCAPI LegacyTelemetryEventPacket(class Player const *, short, uint, short);

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@PEBVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH1@Z
    MCAPI LegacyTelemetryEventPacket(class Player const *, std::string const &, int, int, std::string const &);

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@PEBVPlayer@@W4AchievementIds@MinecraftEventing@@_N@Z
    MCAPI LegacyTelemetryEventPacket(class Player const *, ::MinecraftEventing::AchievementIds, bool);

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@AEBVPlayer@@W4MovementEventType@@MMMMM@Z
    MCAPI LegacyTelemetryEventPacket(class Player const &, ::MovementEventType, float, float, float, float, float);

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@PEBVPlayer@@AEBUData@0@@Z
    MCAPI LegacyTelemetryEventPacket(class Player const *, struct LegacyTelemetryEventPacket::Data const &);

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@PEBVPlayer@@V?$not_null@PEBVMob@@@gsl@@@Z
    MCAPI LegacyTelemetryEventPacket(class Player const *, gsl::not_null<class Mob const *>);

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@PEBVPlayer@@AEBVRaid@@_N@Z
    MCAPI LegacyTelemetryEventPacket(class Player const *, class Raid const &, bool);

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@PEBVPlayer@@PEBVActor@@V?$not_null@PEBVMob@@@gsl@@W4ActorDamageCause@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4ActorType@@@Z
    MCAPI LegacyTelemetryEventPacket(class Player const *, class Actor const *, gsl::not_null<class Mob const *>, ::ActorDamageCause, std::string, int, ::ActorType);

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@PEBVPlayer@@V?$not_null@PEBVActor@@@gsl@@W4InteractionType@MinecraftEventing@@@Z
    MCAPI LegacyTelemetryEventPacket(class Player const *, gsl::not_null<class Actor const *>, ::MinecraftEventing::InteractionType);

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@PEBVPlayer@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI LegacyTelemetryEventPacket(class Player const *, class AutomaticID<class Dimension, int>);

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@AEBVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI LegacyTelemetryEventPacket(class Player const &, std::string const &);

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@PEBVPlayer@@PEBVActor@@V?$not_null@PEBVMob@@@gsl@@W4ActorDamageCause@@W4ActorType@@@Z
    MCAPI LegacyTelemetryEventPacket(class Player const *, class Actor const *, gsl::not_null<class Mob const *>, ::ActorDamageCause, ::ActorType);

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@PEBVPlayer@@HHW4ActorDamageCause@@_N@Z
    MCAPI LegacyTelemetryEventPacket(class Player const *, int, int, ::ActorDamageCause, bool);

    // symbol: ??0LegacyTelemetryEventPacket@@QEAA@PEBVPlayer@@V?$AutomaticID@VDimension@@H@@1@Z
    MCAPI LegacyTelemetryEventPacket(class Player const *, class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>);

    // symbol: ??4LegacyTelemetryEventPacket@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class LegacyTelemetryEventPacket & operator=(class LegacyTelemetryEventPacket &&);

    // NOLINTEND

};

