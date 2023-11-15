#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/IMessenger.h"
#include "mc/enums/AgentActionType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class CommandOrigin;
class CommandOutput;
class ItemDescriptor;
class ItemInstance;
class LevelChunk;
class Mob;
class Player;
namespace CodeBuilder { class IMessenger; }
namespace Json { class Value; }
// clang-format on

namespace CodeBuilder {

class Messenger : public ::CodeBuilder::IMessenger {
public:
    // prevent constructor by default
    Messenger& operator=(Messenger const &) = delete;
    Messenger(Messenger const &) = delete;
    Messenger() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?blockBroken@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@AEBVBlock@@HHG@Z
    MCVAPI void blockBroken(class Player const *, class Block const &, int32_t, int32_t, uint16_t) const;

    // symbol: ?blockPlaced@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@AEBVBlock@@_NG@Z
    MCVAPI void blockPlaced(class Player const *, class Block const &, bool, uint16_t) const;

    // symbol: ?cameraUsed@Messenger@CodeBuilder@@UEBAX_N@Z
    MCVAPI void cameraUsed(bool) const;

    // symbol: ?chunkChanged@Messenger@CodeBuilder@@UEBAXAEAVLevelChunk@@@Z
    MCVAPI void chunkChanged(class LevelChunk &) const;

    // symbol: ?chunkLoaded@Messenger@CodeBuilder@@UEBAXAEAVLevelChunk@@@Z
    MCVAPI void chunkLoaded(class LevelChunk &) const;

    // symbol: ?chunkUnloaded@Messenger@CodeBuilder@@UEBAXAEAVLevelChunk@@@Z
    MCVAPI void chunkUnloaded(class LevelChunk &) const;

    // symbol: ?codeBuilderRuntimeAction@Messenger@CodeBuilder@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void codeBuilderRuntimeAction(std::string const &) const;

    // symbol: ?codeBuilderScoreChanged@Messenger@CodeBuilder@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCVAPI void codeBuilderScoreChanged(std::string const &, int32_t) const;

    // symbol: ?endOfDay@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@@Z
    MCVAPI void endOfDay(class Player const *) const;

    // symbol: ?entitySpawned@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@HI@Z
    MCVAPI void entitySpawned(class Player const *, int32_t, uint32_t) const;

    // symbol: ?itemAcquired@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@AEBVItemDescriptor@@HIH@Z
    MCVAPI void itemAcquired(class Player const *, class ItemDescriptor const &, int32_t, uint32_t, int32_t) const;

    // symbol: ?itemCrafted@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@_NAEBVItemInstance@@111HHH11@Z
    MCVAPI void itemCrafted(class Player const *, bool, class ItemInstance const &, bool, bool, bool, int32_t, int32_t, int32_t, bool, bool) const;

    // symbol: ?itemDropped@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@AEBVItemDescriptor@@@Z
    MCVAPI void itemDropped(class Player const *, class ItemDescriptor const &) const;

    // symbol: ?itemEquipped@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@AEBVItemInstance@@H@Z
    MCVAPI void itemEquipped(class Player const *, class ItemInstance const &, int32_t) const;

    // symbol: ?itemInteracted@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@AEBVItemInstance@@H@Z
    MCVAPI void itemInteracted(class Player const *, class ItemInstance const &, int32_t) const;

    // symbol: ?itemSmelted@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@AEBVItemDescriptor@@1@Z
    MCVAPI void itemSmelted(class Player const *, class ItemDescriptor const &, class ItemDescriptor const &) const;

    // symbol: ?itemUsed@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@AEBVItemDescriptor@@H@Z
    MCVAPI void itemUsed(class Player const *, class ItemDescriptor const &, int32_t) const;

    // symbol: ?mobInteracted@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@HHHE@Z
    MCVAPI void mobInteracted(class Player const *, int32_t, int32_t, int32_t, uint8_t) const;

    // symbol: ?mobKilled@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@PEAVActor@@AEAVMob@@IAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCVAPI void mobKilled(class Player const *, class Actor *, class Mob &, uint32_t, std::string const &, int32_t) const;

    // symbol: ?onAgentAction@Messenger@CodeBuilder@@UEBAXW4AgentActionType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@@Z
    MCVAPI void onAgentAction(::AgentActionType, std::string const &, class Json::Value const &) const;

    // symbol: ?onCommand@Messenger@CodeBuilder@@UEAAXAEBVCommandOrigin@@AEBVCommandOutput@@@Z
    MCVAPI void onCommand(class CommandOrigin const &, class CommandOutput const &);

    // symbol: ?piglinBarter@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCVAPI void piglinBarter(class Player const *, std::string const &, bool) const;

    // symbol: ?playerBounced@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@AEBVBlock@@HH@Z
    MCVAPI void playerBounced(class Player const *, class Block const &, int32_t, int32_t) const;

    // symbol: ?playerDied@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@HHH_N@Z
    MCVAPI void playerDied(class Player const *, int32_t, int32_t, int32_t, bool) const;

    // symbol: ?playerJoined@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@@Z
    MCVAPI void playerJoined(class Player const *) const;

    // symbol: ?playerLeave@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@@Z
    MCVAPI void playerLeave(class Player const *) const;

    // symbol: ?playerMessage@Messenger@CodeBuilder@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
    MCVAPI void playerMessage(std::string const &, std::string const &, std::string const &, std::string const &) const;

    // symbol: ?playerTeleported@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@MHH@Z
    MCVAPI void playerTeleported(class Player const *, float, int32_t, int32_t) const;

    // symbol: ?playerTransform@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@@Z
    MCVAPI void playerTransform(class Player const *) const;

    // symbol: ?playerTravelled@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@MHH@Z
    MCVAPI void playerTravelled(class Player const *, float, int32_t, int32_t) const;

    // symbol: ?targetBlockHit@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@H@Z
    MCVAPI void targetBlockHit(class Player const *, int32_t) const;

    // symbol: ?tradeCompleted@Messenger@CodeBuilder@@UEBAXPEBVPlayer@@PEAVActor@@AEBVItemDescriptor@@2AEBVItemInstance@@H@Z
    MCVAPI void tradeCompleted(class Player const *, class Actor *, class ItemDescriptor const &, class ItemDescriptor const &, class ItemInstance const &, int32_t) const;

    // NOLINTEND

};

};
