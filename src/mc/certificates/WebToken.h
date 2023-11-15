#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class WebToken {
public:
    // prevent constructor by default
    WebToken& operator=(WebToken const &) = delete;
    WebToken(WebToken const &) = delete;
    WebToken() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0WebToken@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI WebToken(std::string);

    // symbol: ?toString@WebToken@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toString() const;

    // symbol: ?verifyWithIncludedKey@WebToken@@QEBA_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI bool verifyWithIncludedKey(std::vector<std::string> const &) const;

    // symbol: ??1WebToken@@QEAA@XZ
    MCAPI ~WebToken();

    // symbol: ?createFromData@WebToken@@SA?AV?$unique_ptr@VWebToken@@U?$default_delete@VWebToken@@@std@@@std@@AEBVValue@Json@@AEBVPrivateKeyManager@@@Z
    MCAPI static std::unique_ptr<class WebToken> createFromData(class Json::Value const &, class PrivateKeyManager const &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_parse@WebToken@@AEAAXAEAVValue@Json@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _parse(class Json::Value &, std::string const &);

    // symbol: ?_signatureToDER@WebToken@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string _signatureToDER() const;

    // symbol: ?_DERToBinary@WebToken@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@H@Z
    MCAPI static std::string _DERToBinary(std::string const &, int32_t);

    // NOLINTEND

};

