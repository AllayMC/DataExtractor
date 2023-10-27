#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Value.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Features; }
namespace Json { class Value; }
// clang-format on

namespace Json {

class Reader {
public:
    // Reader inner types declare
    // clang-format off
    class ErrorInfo;
    class Token;
    // clang-format on
    
    // Reader inner types define
    enum class TokenType {};
    
    class ErrorInfo {
    public:
        // prevent constructor by default
        ErrorInfo& operator=(ErrorInfo const &) = delete;
        ErrorInfo(ErrorInfo const &) = delete;
        ErrorInfo() = delete;
    
    public:
        // NOLINTBEGIN
        // symbol: ??1ErrorInfo@Reader@Json@@QEAA@XZ
        MCAPI ~ErrorInfo();
    
        // NOLINTEND
    
    };
    
    class Token {
    public:
        // prevent constructor by default
        Token& operator=(Token const &) = delete;
        Token(Token const &) = delete;
        Token() = delete;
    
    };
    
public:
    // prevent constructor by default
    Reader& operator=(Reader const &) = delete;
    Reader(Reader const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0Reader@Json@@QEAA@AEBVFeatures@1@@Z
    MCAPI Reader(class Json::Features const &);

    // symbol: ??0Reader@Json@@QEAA@XZ
    MCAPI Reader();

    // symbol: ?getFormattedErrorMessages@Reader@Json@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getFormattedErrorMessages() const;

    // symbol: ?parse@Reader@Json@@QEAA_NPEBD_KAEAVValue@2@_N@Z
    MCAPI bool parse(char const *, uint64, class Json::Value &, bool);

    // symbol: ?parse@Reader@Json@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVValue@2@_N@Z
    MCAPI bool parse(std::string const &, class Json::Value &, bool);

    // symbol: ?parse@Reader@Json@@QEAA_NAEAV?$basic_istream@DU?$char_traits@D@std@@@std@@AEAVValue@2@_N@Z
    MCAPI bool parse(std::istream &, class Json::Value &, bool);

    // symbol: ??1Reader@Json@@QEAA@XZ
    MCAPI ~Reader();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?addError@Reader@Json@@AEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVToken@12@PEBD@Z
    MCAPI bool addError(std::string const &, class Json::Reader::Token &, char const *);

    // symbol: ?decodeDouble@Reader@Json@@AEAA?AVValue@2@AEAVToken@12@AEA_N@Z
    MCAPI class Json::Value decodeDouble(class Json::Reader::Token &, bool &);

    // symbol: ?decodeNumber@Reader@Json@@AEAA?AVValue@2@AEAVToken@12@AEA_N@Z
    MCAPI class Json::Value decodeNumber(class Json::Reader::Token &, bool &);

    // symbol: ?decodeString@Reader@Json@@AEAA_NAEAVToken@12@PEAD@Z
    MCAPI bool decodeString(class Json::Reader::Token &, char *);

    // symbol: ?decodeString@Reader@Json@@AEAA?AVCZString@Value@2@AEAVToken@12@AEA_N@Z
    MCAPI class Json::Value::CZString decodeString(class Json::Reader::Token &, bool &);

    // symbol: ?decodeUnicodeCodePoint@Reader@Json@@AEAA_NAEAVToken@12@AEAPEBDPEBDAEAI@Z
    MCAPI bool decodeUnicodeCodePoint(class Json::Reader::Token &, char const *&, char const *, uint &);

    // symbol: ?decodeUnicodeEscapeSequence@Reader@Json@@AEAA_NAEAVToken@12@AEAPEBDPEBDAEAI@Z
    MCAPI bool decodeUnicodeEscapeSequence(class Json::Reader::Token &, char const *&, char const *, uint &);

    // symbol: ?getLocationLineAndColumn@Reader@Json@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBD@Z
    MCAPI std::string getLocationLineAndColumn(char const *) const;

    // symbol: ?parse@Reader@Json@@AEAA_NPEBD0AEAVValue@2@_N@Z
    MCAPI bool parse(char const *, char const *, class Json::Value &, bool);

    // symbol: ?readArray@Reader@Json@@AEAA?AVValue@2@AEAVToken@12@AEA_N@Z
    MCAPI class Json::Value readArray(class Json::Reader::Token &, bool &);

    // symbol: ?readObject@Reader@Json@@AEAA?AVValue@2@AEAVToken@12@AEA_N@Z
    MCAPI class Json::Value readObject(class Json::Reader::Token &, bool &);

    // symbol: ?readToken@Reader@Json@@AEAA_NAEAVToken@12@@Z
    MCAPI bool readToken(class Json::Reader::Token &);

    // symbol: ?readValue@Reader@Json@@AEAA?AVValue@2@AEA_N@Z
    MCAPI class Json::Value readValue(bool &);

    // symbol: ?recoverFromError@Reader@Json@@AEAA_NW4TokenType@12@@Z
    MCAPI bool recoverFromError(::Json::Reader::TokenType);

    // NOLINTEND

};

};
