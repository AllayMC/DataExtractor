#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ChatRestrictionLevel.h"
#include "mc/enums/Difficulty.h"
#include "mc/enums/GameType.h"
#include "mc/enums/LogLevel.h"
#include "mc/resources/PacketCompressionAlgorithm.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/player/PlayerPermissionLevel.h"

class PropertiesSettings {
public:
    // prevent constructor by default
    PropertiesSettings& operator=(PropertiesSettings const &) = delete;
    PropertiesSettings(PropertiesSettings const &) = delete;
    PropertiesSettings() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0PropertiesSettings@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI PropertiesSettings(std::string const &);

    // symbol: ?adventureModeOverridesEnabled@PropertiesSettings@@QEBA_NXZ
    MCAPI bool adventureModeOverridesEnabled() const;

    // symbol: ?allowCheats@PropertiesSettings@@QEBA_NXZ
    MCAPI bool allowCheats() const;

    // symbol: ?areCustomSkinsDisabled@PropertiesSettings@@QEBA_NXZ
    MCAPI bool areCustomSkinsDisabled() const;

    // symbol: ?blockNetworkIdsAreHashes@PropertiesSettings@@QEBA_NXZ
    MCAPI bool blockNetworkIdsAreHashes() const;

    // symbol: ?canEmitTelemetryEvents@PropertiesSettings@@QEBA_NXZ
    MCAPI bool canEmitTelemetryEvents() const;

    // symbol: ?disablePlayerInteractions@PropertiesSettings@@QEBA_NXZ
    MCAPI bool disablePlayerInteractions() const;

    // symbol: ?enableItemStackNetManager@PropertiesSettings@@QEBA_NXZ
    MCAPI bool enableItemStackNetManager() const;

    // symbol: ?forceGamemode@PropertiesSettings@@QEBA_NXZ
    MCAPI bool forceGamemode() const;

    // symbol: ?getChatRestrictionLevel@PropertiesSettings@@QEBA?AW4ChatRestrictionLevel@@XZ
    MCAPI ::ChatRestrictionLevel getChatRestrictionLevel() const;

    // symbol: ?getClientThrottleScalar@PropertiesSettings@@QEBAMXZ
    MCAPI float getClientThrottleScalar() const;

    // symbol: ?getClientThrottleThreshold@PropertiesSettings@@QEBAHXZ
    MCAPI int32_t getClientThrottleThreshold() const;

    // symbol: ?getCompressionAlgorithm@PropertiesSettings@@QEBA?AW4PacketCompressionAlgorithm@@XZ
    MCAPI ::PacketCompressionAlgorithm getCompressionAlgorithm() const;

    // symbol: ?getCompressionThresholdBytesize@PropertiesSettings@@QEBAGXZ
    MCAPI uint16_t getCompressionThresholdBytesize() const;

    // symbol: ?getContentLogLevel@PropertiesSettings@@QEBA?AW4LogLevel@@XZ
    MCAPI ::LogLevel getContentLogLevel() const;

    // symbol: ?getCustomProperty@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
    MCAPI std::string const & getCustomProperty(std::string const &) const;

    // symbol: ?getDefaultPlayerPermissionLevel@PropertiesSettings@@QEBA?BW4PlayerPermissionLevel@@XZ
    MCAPI ::PlayerPermissionLevel const getDefaultPlayerPermissionLevel() const;

    // symbol: ?getDifficulty@PropertiesSettings@@QEBA?AW4Difficulty@@XZ
    MCAPI ::Difficulty getDifficulty() const;

    // symbol: ?getExtraTrustedKeys@PropertiesSettings@@QEBAAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> const & getExtraTrustedKeys() const;

    // symbol: ?getGameMode@PropertiesSettings@@QEBA?AW4GameType@@XZ
    MCAPI ::GameType getGameMode() const;

    // symbol: ?getLanguage@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const & getLanguage() const;

    // symbol: ?getLevelName@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const & getLevelName() const;

    // symbol: ?getLevelSeed@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const & getLevelSeed() const;

    // symbol: ?getLevelType@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const & getLevelType() const;

    // symbol: ?getMaxPlayerIdleTime@PropertiesSettings@@QEBA?AV?$duration@HU?$ratio@$0DM@$00@std@@@chrono@std@@XZ
    MCAPI std::chrono::duration<int32_t, std::ratio<60, 1>> getMaxPlayerIdleTime() const;

    // symbol: ?getMaxPlayers@PropertiesSettings@@QEBAHXZ
    MCAPI int32_t getMaxPlayers() const;

    // symbol: ?getMaxThreads@PropertiesSettings@@QEBAIXZ
    MCAPI uint32_t getMaxThreads() const;

    // symbol: ?getMaxViewDistanceChunks@PropertiesSettings@@QEBAHXZ
    MCAPI int32_t getMaxViewDistanceChunks() const;

    // symbol: ?getMotd@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const & getMotd() const;

    // symbol: ?getNetworkPermissions@PropertiesSettings@@QEBAAEBUNetworkPermissions@@XZ
    MCAPI struct NetworkPermissions const & getNetworkPermissions() const;

    // symbol: ?getOpPermissionLevel@PropertiesSettings@@QEBA?AW4CommandPermissionLevel@@XZ
    MCAPI ::CommandPermissionLevel getOpPermissionLevel() const;

    // symbol: ?getPlayerMovementSettings@PropertiesSettings@@QEBAAEBUPlayerMovementSettings@@XZ
    MCAPI struct PlayerMovementSettings const & getPlayerMovementSettings() const;

    // symbol: ?getRemoteServerCommunicationEndpoint@PropertiesSettings@@QEBA?AUNetworkAddress@@XZ
    MCAPI struct NetworkAddress getRemoteServerCommunicationEndpoint() const;

    // symbol: ?getScriptSettings@PropertiesSettings@@QEBAAEBUScriptSettings@@XZ
    MCAPI struct ScriptSettings const & getScriptSettings() const;

    // symbol: ?getServerBuildRatioOverride@PropertiesSettings@@QEBA?AV?$optional@M@std@@XZ
    MCAPI std::optional<float> getServerBuildRatioOverride() const;

    // symbol: ?getServerId@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const & getServerId() const;

    // symbol: ?getServerPort@PropertiesSettings@@QEBAGXZ
    MCAPI uint16_t getServerPort() const;

    // symbol: ?getServerPortv6@PropertiesSettings@@QEBAGXZ
    MCAPI uint16_t getServerPortv6() const;

    // symbol: ?getServerTickRange@PropertiesSettings@@QEBAHXZ
    MCAPI int32_t getServerTickRange() const;

    // symbol: ?getServerType@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const & getServerType() const;

    // symbol: ?getServerWakeupFrequency@PropertiesSettings@@QEBAHXZ
    MCAPI int32_t getServerWakeupFrequency() const;

    // symbol: ?isClientSideGenEnabled@PropertiesSettings@@QEBA_NXZ
    MCAPI bool isClientSideGenEnabled() const;

    // symbol: ?isContentLogConsoleOutputEnabled@PropertiesSettings@@QEBA_NXZ
    MCAPI bool isContentLogConsoleOutputEnabled() const;

    // symbol: ?isContentLogFileEnabled@PropertiesSettings@@QEBA_NXZ
    MCAPI bool isContentLogFileEnabled() const;

    // symbol: ?isEmoteChatMuted@PropertiesSettings@@QEBA_NXZ
    MCAPI bool isEmoteChatMuted() const;

    // symbol: ?isItemTransactionManagerLoggingEnabled@PropertiesSettings@@QEBA_NXZ
    MCAPI bool isItemTransactionManagerLoggingEnabled() const;

    // symbol: ?isPropertiesFileLoaded@PropertiesSettings@@QEBA?B_NXZ
    MCAPI bool const isPropertiesFileLoaded() const;

    // symbol: ?isRealmsStoriesEnabled@PropertiesSettings@@QEBA_NXZ
    MCAPI bool isRealmsStoriesEnabled() const;

    // symbol: ?isServerVisibleToLanDiscovery@PropertiesSettings@@QEBA_NXZ
    MCAPI bool isServerVisibleToLanDiscovery() const;

    // symbol: ?texturePackRequired@PropertiesSettings@@QEBA_NXZ
    MCAPI bool texturePackRequired() const;

    // symbol: ?useAllowList@PropertiesSettings@@QEBA_NXZ
    MCAPI bool useAllowList() const;

    // symbol: ?useMsaGamertagsOnly@PropertiesSettings@@QEBA_NXZ
    MCAPI bool useMsaGamertagsOnly() const;

    // symbol: ?useOnlineAuthentication@PropertiesSettings@@QEBA_NXZ
    MCAPI bool useOnlineAuthentication() const;

    // symbol: ?useWebsocketEncryption@PropertiesSettings@@QEBA_NXZ
    MCAPI bool useWebsocketEncryption() const;

    // symbol: ?websocketRetryTime@PropertiesSettings@@QEBAMXZ
    MCAPI float websocketRetryTime() const;

    // symbol: ??1PropertiesSettings@@QEAA@XZ
    MCAPI ~PropertiesSettings();

    // symbol: ?parseBoolValue@PropertiesSettings@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static bool parseBoolValue(std::string const &);

    // symbol: ?parseGameMode@PropertiesSettings@@SA?AW4GameType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static ::GameType parseGameMode(std::string const &);

    // symbol: ?parseInt32Value@PropertiesSettings@@SAHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static int32_t parseInt32Value(std::string const &);

    // NOLINTEND

};

