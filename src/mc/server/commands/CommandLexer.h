#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandLexer {
public:
    // CommandLexer inner types declare
    // clang-format off
    struct Token;
    // clang-format on
    
    // CommandLexer inner types define
    struct Token {
    public:
        // prevent constructor by default
        Token& operator=(Token const &) = delete;
        Token(Token const &) = delete;
        Token() = delete;
    
    };
    
public:
    // prevent constructor by default
    CommandLexer& operator=(CommandLexer const &) = delete;
    CommandLexer(CommandLexer const &) = delete;
    CommandLexer() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0CommandLexer@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI CommandLexer(std::string const &);

    // symbol: ?next@CommandLexer@@QEBAAEBUToken@1@XZ
    MCAPI struct CommandLexer::Token const & next() const;

    // symbol: ?step@CommandLexer@@QEAAXXZ
    MCAPI void step();

    // symbol: ?isDigit@CommandLexer@@SA_ND@Z
    MCAPI static bool isDigit(char);

    // NOLINTEND

};

