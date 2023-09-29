#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/LogAreaID.h"

// auto generated forward declare list
// clang-format off
class LogSettingsUpdater;
namespace Core { class Path; }
// clang-format on

namespace BedrockLog {

struct LogDetails {
public:
    // prevent constructor by default
    LogDetails& operator=(LogDetails const &) = delete;
    LogDetails(LogDetails const &) = delete;
    LogDetails() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?closeLog@LogDetails@BedrockLog@@QEAAXXZ
    MCAPI void closeLog();

    // symbol: ?createLog@LogDetails@BedrockLog@@QEAAXAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1_NPEAVLogSettingsUpdater@@N@Z
    MCAPI void createLog(class Core::Path const &, std::string const &, std::string const &, bool, class LogSettingsUpdater *, double);

    // symbol: ?updateLogFilter@LogDetails@BedrockLog@@QEAAXV?$unique_ptr@VLogSettingsUpdater@@U?$default_delete@VLogSettingsUpdater@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@AEAV54@_N@Z
    MCAPI void updateLogFilter(std::unique_ptr<class LogSettingsUpdater>, std::string const &, std::vector<std::string> const &, std::string &, bool);

    // symbol: ?updateLogSetting@LogDetails@BedrockLog@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI void updateLogSetting(std::string const &, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_appendLogEntryMetadata@LogDetails@BedrockLog@@AEAAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V34@W4LogAreaID@@I1HH@Z
    MCAPI void _appendLogEntryMetadata(std::string &, std::string, ::LogAreaID, uint, std::string, int, int);

    // symbol: ?_getCurrentTimestamp@LogDetails@BedrockLog@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string _getCurrentTimestamp();

    // symbol: ?_logToFile@LogDetails@BedrockLog@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _logToFile(std::string const &);

    // symbol: ?_log_va@LogDetails@BedrockLog@@AEAAXW4LogAreaID@@IPEBDHH1PEAD@Z
    MCAPI void _log_va(::LogAreaID, uint, char const *, int, int, char const *, char *);

    // symbol: ?_makeLogString@LogDetails@BedrockLog@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V34@W4LogAreaID@@I0HHAEBV34@@Z
    MCAPI std::string _makeLogString(std::string, ::LogAreaID, uint, std::string, int, int, std::string const &);

    // symbol: ?_openLogFile@LogDetails@BedrockLog@@AEAAXXZ
    MCAPI void _openLogFile();

    // symbol: ?_updateAllSettings@LogDetails@BedrockLog@@AEAAXAEAVLogSettingsUpdater@@@Z
    MCAPI void _updateAllSettings(class LogSettingsUpdater &);

    // NOLINTEND

};

};
