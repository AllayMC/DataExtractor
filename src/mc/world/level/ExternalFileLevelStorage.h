#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace ExternalFileLevelStorage {
    // NOLINTBEGIN
    // symbol: ?_readLevelDataFromFile@ExternalFileLevelStorage@@YA?AVResult@Core@@AEBVPath@3@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVLevelData@@@Z
    MCAPI class Core::Result _readLevelDataFromFile(class Core::Path const &, std::string const &, class LevelData &);

    // symbol: ?_writeLevelDat@ExternalFileLevelStorage@@YA_NAEBVPath@Core@@AEBVLevelData@@@Z
    MCAPI bool _writeLevelDat(class Core::Path const &, class LevelData const &);

    // symbol: ?getAccessStrategy@ExternalFileLevelStorage@@YA?AV?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@std@@AEBVPath@Core@@AEBVContentIdentity@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
    MCAPI std::unique_ptr<class PackAccessStrategy> getAccessStrategy(class Core::Path const &, class ContentIdentity const &, gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);

    // symbol: ?getImportantFiles@ExternalFileLevelStorage@@YA?BV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> const getImportantFiles();

    // symbol: ?getLevelIDFromPath@ExternalFileLevelStorage@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@0@Z
    MCAPI std::string getLevelIDFromPath(class Core::Path const &, class Core::Path const &);

    // symbol: ?isLevelMarkedForSync@ExternalFileLevelStorage@@YA_NAEBVPath@Core@@@Z
    MCAPI bool isLevelMarkedForSync(class Core::Path const &);

    // symbol: ?makeReadableLevelnameFile@ExternalFileLevelStorage@@YAXAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void makeReadableLevelnameFile(class Core::Path const &, std::string const &);

    // symbol: ?readLevelDataFromData@ExternalFileLevelStorage@@YA?AVResult@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVLevelData@@@Z
    MCAPI class Core::Result readLevelDataFromData(std::string const &, class LevelData &);

    // symbol: ?readLevelDataFromFile@ExternalFileLevelStorage@@YA?AVResult@Core@@AEBVPath@3@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVLevelData@@@Z
    MCAPI class Core::Result readLevelDataFromFile(class Core::Path const &, std::string const &, class LevelData &);

    // symbol: ?readShallowLevelSummaryFromSyncFile@ExternalFileLevelStorage@@YA_NAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULevelSummary@@@Z
    MCAPI bool readShallowLevelSummaryFromSyncFile(class Core::Path const &, std::string const &, struct LevelSummary &);

    // symbol: ?readSyncFileData@ExternalFileLevelStorage@@YA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEA_J2AEA_N@Z
    MCAPI bool readSyncFileData(class Core::Path const &, std::string &, int64 &, int64 &, bool &);

    // symbol: ?saveLevelData@ExternalFileLevelStorage@@YAXAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLevelData@@_N@Z
    MCAPI void saveLevelData(class Core::Path const &, std::string const &, class LevelData const &, bool);

    // symbol: ?saveLevelDataToPath@ExternalFileLevelStorage@@YAXAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLevelData@@@Z
    MCAPI void saveLevelDataToPath(class Core::Path const &, std::string const &, class LevelData const &);

    // symbol: ?saveLevelDisplayDataToCache@ExternalFileLevelStorage@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLevelData@@V?$not_null@PEAVTaskGroup@@@gsl@@@Z
    MCAPI void saveLevelDisplayDataToCache(std::string const &, class LevelData const &, gsl::not_null<class TaskGroup *>);

    // symbol: ?validateLevelDat@ExternalFileLevelStorage@@YA?AVResult@Core@@VPath@3@@Z
    MCAPI class Core::Result validateLevelDat(class Core::Path);
    // NOLINTEND

};
