#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/debug/LogCategory.h"
#include "mc/deps/core/common/debug/LogChannel.h"
#include "mc/deps/core/common/debug/LogRule.h"
#include "mc/enums/LogAreaID.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class ScopeExit; }
namespace BedrockLog { class LogAreaFilter; }
namespace BedrockLog { struct LogDetails; }
namespace Core { class Path; }
// clang-format on

namespace BedrockLog {
    // NOLINTBEGIN
    // symbol: ?_areaFilterString@BedrockLog@@YAPEBDW4LogAreaID@@@Z
    MCAPI char const * _areaFilterString(::LogAreaID);

    // symbol: ?_constructAreaFilterFromString@BedrockLog@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVLogAreaFilter@1@@Z
    MCAPI bool _constructAreaFilterFromString(std::string const &, class BedrockLog::LogAreaFilter &);

    // symbol: ?_constructAreaFilterStringFromFilter@BedrockLog@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLogAreaFilter@1@@Z
    MCAPI std::string _constructAreaFilterStringFromFilter(class BedrockLog::LogAreaFilter const &);

    // symbol: ?_getLog@BedrockLog@@YAAEAULogDetails@1@W4LogCategory@1@W4LogChannel@1@@Z
    MCAPI struct BedrockLog::LogDetails & _getLog(::BedrockLog::LogCategory, ::BedrockLog::LogChannel);

    // symbol: ?_initAreaFilterMap@BedrockLog@@YAXXZ
    MCAPI void _initAreaFilterMap();

    // symbol: ?_initPriorityFilterMap@BedrockLog@@YAXXZ
    MCAPI void _initPriorityFilterMap();

    // symbol: ?_messageIdString@BedrockLog@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI std::string _messageIdString(int32_t);

    // symbol: ?_openChannel@BedrockLog@@YAXAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1W4LogCategory@1@W4LogChannel@1@_NPEAVLogSettingsUpdater@@N@Z
    MCAPI void _openChannel(class Core::Path const &, std::string const &, std::string const &, ::BedrockLog::LogCategory, ::BedrockLog::LogChannel, bool, class LogSettingsUpdater *, double);

    // symbol: ?_priorityFilterString@BedrockLog@@YAPEBDI@Z
    MCAPI char const * _priorityFilterString(uint32_t);

    // symbol: ?_processIdString@BedrockLog@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string _processIdString();

    // symbol: ?closeAndResetAllLogs@BedrockLog@@YAXXZ
    MCAPI void closeAndResetAllLogs();

    // symbol: ?createLog@BedrockLog@@YAXAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1W4LogCategory@1@V?$bitset@$02@5@_NPEAVLogSettingsUpdater@@N@Z
    MCAPI void createLog(class Core::Path const &, std::string const &, std::string const &, ::BedrockLog::LogCategory, std::bitset<3>, bool, class LogSettingsUpdater *, double);

    // symbol: ?initialize@BedrockLog@@YA?AVScopeExit@Bedrock@@XZ
    MCAPI class Bedrock::ScopeExit initialize();

    // symbol: ?initializeLogExtensions@BedrockLog@@YAXXZ
    MCAPI void initializeLogExtensions();

    // symbol: ?log_va@BedrockLog@@YAXW4LogCategory@1@V?$bitset@$02@std@@W4LogRule@1@W4LogAreaID@@IPEBDH4PEAD@Z
    MCAPI void log_va(::BedrockLog::LogCategory, std::bitset<3>, ::BedrockLog::LogRule, ::LogAreaID, uint32_t, char const *, int32_t, char const *, char *);

    // symbol: ?rakDebugLog@BedrockLog@@YAHPEBDZZ
    MCAPI int32_t rakDebugLog(char const *, ...);

    // symbol: ?update@BedrockLog@@YAXXZ
    MCAPI void update();

    // symbol: ?updateLogFilter@BedrockLog@@YAXV?$unique_ptr@VLogSettingsUpdater@@U?$default_delete@VLogSettingsUpdater@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@AEAV43@_N@Z
    MCAPI void updateLogFilter(std::unique_ptr<class LogSettingsUpdater>, std::string const &, std::vector<std::string> const &, std::string &, bool);

    // symbol: ?updateLogSetting@BedrockLog@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI void updateLogSetting(std::string const &, bool);
    // NOLINTEND

};
