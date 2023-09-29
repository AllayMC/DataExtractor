#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameRule {
public:
    // GameRule inner types declare
    // clang-format off
    class ValidationError;
    // clang-format on
    
    // GameRule inner types define
    enum class Type {};
    
    union Value {};
    
    class ValidationError {
    public:
        // prevent constructor by default
        ValidationError& operator=(ValidationError const &) = delete;
        ValidationError(ValidationError const &) = delete;
        ValidationError() = delete;
    
    public:
        // NOLINTBEGIN
        // symbol: ??1ValidationError@GameRule@@QEAA@XZ
        MCAPI ~ValidationError();
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    GameRule() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0GameRule@@QEAA@$$QEAV0@@Z
    MCAPI GameRule(class GameRule &&);

    // symbol: ??0GameRule@@QEAA@AEBV0@@Z
    MCAPI GameRule(class GameRule const &);

    // symbol: ??0GameRule@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI GameRule(std::string const &, bool);

    // symbol: ?allowUseInCommand@GameRule@@QEBA_NXZ
    MCAPI bool allowUseInCommand() const;

    // symbol: ?canBeModifiedByPlayer@GameRule@@QEBA_NXZ
    MCAPI bool canBeModifiedByPlayer() const;

    // symbol: ?getBool@GameRule@@QEBA_NXZ
    MCAPI bool getBool() const;

    // symbol: ?getFloat@GameRule@@QEBAMXZ
    MCAPI float getFloat() const;

    // symbol: ?getInt@GameRule@@QEBAHXZ
    MCAPI int getInt() const;

    // symbol: ?getName@GameRule@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const & getName() const;

    // symbol: ?getType@GameRule@@QEBA?AW4Type@1@XZ
    MCAPI ::GameRule::Type getType() const;

    // symbol: ?getValue@GameRule@@QEBAAEBTValue@1@XZ
    MCAPI union GameRule::Value const & getValue() const;

    // symbol: ??4GameRule@@QEAAAEAV0@AEBV0@@Z
    MCAPI class GameRule & operator=(class GameRule const &);

    // symbol: ??4GameRule@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class GameRule & operator=(class GameRule &&);

    // symbol: ?requiresCheats@GameRule@@QEBA_NXZ
    MCAPI bool requiresCheats() const;

    // symbol: ?resetType@GameRule@@QEAAXW4Type@1@@Z
    MCAPI void resetType(::GameRule::Type);

    // symbol: ?setBool@GameRule@@QEAA_N_NPEA_NPEAVValidationError@1@@Z
    MCAPI bool setBool(bool, bool *, class GameRule::ValidationError *);

    // symbol: ?setFloat@GameRule@@QEAA_NMPEA_NPEAVValidationError@1@@Z
    MCAPI bool setFloat(float, bool *, class GameRule::ValidationError *);

    // symbol: ?setInt@GameRule@@QEAA_NHPEA_NPEAVValidationError@1@@Z
    MCAPI bool setInt(int, bool *, class GameRule::ValidationError *);

    // symbol: ?setTagDataNotFoundCallback@GameRule@@QEAAAEAV1@V?$function@$$A6AXAEAVGameRule@@@Z@std@@@Z
    MCAPI class GameRule & setTagDataNotFoundCallback(std::function<void (class GameRule &)>);

    // symbol: ?setValidateValueCallback@GameRule@@QEAAAEAV1@V?$function@$$A6A_NAEBTValue@GameRule@@PEAVValidationError@2@@Z@std@@@Z
    MCAPI class GameRule & setValidateValueCallback(std::function<bool (union GameRule::Value const &, class GameRule::ValidationError *)>);

    // symbol: ??1GameRule@@QEAA@XZ
    MCAPI ~GameRule();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_setDefaultValue@GameRule@@IEAAAEAV1@H@Z
    MCAPI class GameRule & _setDefaultValue(int);

    // symbol: ?_setDefaultValue@GameRule@@IEAAAEAV1@_N@Z
    MCAPI class GameRule & _setDefaultValue(bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_set@GameRule@@AEAA_NAEBTValue@1@PEA_NPEAVValidationError@1@@Z
    MCAPI bool _set(union GameRule::Value const &, bool *, class GameRule::ValidationError *);

    // NOLINTEND

};

