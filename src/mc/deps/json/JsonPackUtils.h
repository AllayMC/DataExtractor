#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/ValueType.h"
#include "mc/resources/PackParseErrorType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace JsonPackUtils {
    // NOLINTBEGIN
    // symbol: ?readBoolAndReport@JsonPackUtils@@YA_NAEBVValue@Json@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@5@AEAVPackReport@@_N4@Z
    MCAPI bool readBoolAndReport(class Json::Value const &, std::string const &, std::vector<std::string> &, class PackReport &, bool, bool);

    // symbol: ?readIntAndReport@JsonPackUtils@@YAHAEBVValue@Json@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@5@AEAVPackReport@@_NH@Z
    MCAPI int readIntAndReport(class Json::Value const &, std::string const &, std::vector<std::string> &, class PackReport &, bool, int);

    // symbol: ?readRequiredValue@JsonPackUtils@@YA?AU?$pair@$$CBVValue@Json@@W4PackParseErrorType@@@std@@AEBVValue@Json@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@W4ValueType@5@@Z
    MCAPI std::pair<class Json::Value const, ::PackParseErrorType> readRequiredValue(class Json::Value const &, std::string const &, ::Json::ValueType);

    // symbol: ?readStringAndReport@JsonPackUtils@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@AEBV23@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@AEAVPackReport@@_N@Z
    MCAPI std::string readStringAndReport(class Json::Value const &, std::string const &, std::vector<std::string> &, class PackReport &, bool);

    // symbol: ?readStringArrayAndReport@JsonPackUtils@@YA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVValue@Json@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEAV23@AEAVPackReport@@_N@Z
    MCAPI std::vector<std::string> readStringArrayAndReport(class Json::Value const &, std::string const &, std::vector<std::string> &, class PackReport &, bool);

    // symbol: ?readValue@JsonPackUtils@@YA?AU?$pair@PEBVValue@Json@@W4PackParseErrorType@@@std@@AEBVValue@Json@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI std::pair<class Json::Value const *, ::PackParseErrorType> readValue(class Json::Value const &, std::string const &);

    // symbol: ?readValueAndReportErrors@JsonPackUtils@@YA?AU?$pair@$$CBVValue@Json@@W4PackParseErrorType@@@std@@AEBVValue@Json@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@W4ValueType@5@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@AEAVPackReport@@_N@Z
    MCAPI std::pair<class Json::Value const, ::PackParseErrorType> readValueAndReportErrors(class Json::Value const &, std::string const &, ::Json::ValueType, std::vector<std::string> &, class PackReport &, bool);

    // symbol: ?stringizePath@JsonPackUtils@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI std::string stringizePath(std::vector<std::string> const &);
    // NOLINTEND

};
