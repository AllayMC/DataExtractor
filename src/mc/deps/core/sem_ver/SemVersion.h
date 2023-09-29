#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SemVersion {
public:
    // SemVersion inner types declare
    // clang-format off
    struct any_version_constructor;
    // clang-format on
    
    // SemVersion inner types define
    enum class MatchType {};
    
    enum class ParseOption {};
    
    struct any_version_constructor {
    public:
        // prevent constructor by default
        any_version_constructor& operator=(any_version_constructor const &) = delete;
        any_version_constructor(any_version_constructor const &) = delete;
        any_version_constructor() = delete;
    
    };
    
public:
    // NOLINTBEGIN
    // symbol: ??0SemVersion@@QEAA@XZ
    MCAPI SemVersion();

    // symbol: ??0SemVersion@@QEAA@Uany_version_constructor@0@@Z
    MCAPI SemVersion(struct SemVersion::any_version_constructor);

    // symbol: ??0SemVersion@@QEAA@AEBV0@@Z
    MCAPI SemVersion(class SemVersion const &);

    // symbol: ??0SemVersion@@QEAA@GGGAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI SemVersion(ushort, ushort, ushort, std::string const &, std::string const &);

    // symbol: ?asString@SemVersion@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const & asString() const;

    // symbol: ?getMajor@SemVersion@@QEBAGXZ
    MCAPI ushort getMajor() const;

    // symbol: ?getMinor@SemVersion@@QEBAGXZ
    MCAPI ushort getMinor() const;

    // symbol: ?getPatch@SemVersion@@QEBAGXZ
    MCAPI ushort getPatch() const;

    // symbol: ?getPreRelease@SemVersion@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const & getPreRelease() const;

    // symbol: ?isAnyVersion@SemVersion@@QEBA_NXZ
    MCAPI bool isAnyVersion() const;

    // symbol: ?isValid@SemVersion@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ??9SemVersion@@QEBA_NAEBV0@@Z
    MCAPI bool operator!=(class SemVersion const &) const;

    // symbol: ??MSemVersion@@QEBA_NAEBV0@@Z
    MCAPI bool operator<(class SemVersion const &) const;

    // symbol: ??NSemVersion@@QEBA_NAEBV0@@Z
    MCAPI bool operator<=(class SemVersion const &) const;

    // symbol: ??4SemVersion@@QEAAAEAV0@AEBV0@@Z
    MCAPI class SemVersion & operator=(class SemVersion const &);

    // symbol: ??8SemVersion@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class SemVersion const &) const;

    // symbol: ??OSemVersion@@QEBA_NAEBV0@@Z
    MCAPI bool operator>(class SemVersion const &) const;

    // symbol: ??PSemVersion@@QEBA_NAEBV0@@Z
    MCAPI bool operator>=(class SemVersion const &) const;

    // symbol: ?satisfies@SemVersion@@QEBA_NAEBV1@@Z
    MCAPI bool satisfies(class SemVersion const &) const;

    // symbol: ??1SemVersion@@QEAA@XZ
    MCAPI ~SemVersion();

    // symbol: ?fromJson@SemVersion@@SA?AW4MatchType@1@AEBVValue@Json@@AEAV1@W4ParseOption@1@@Z
    MCAPI static ::SemVersion::MatchType fromJson(class Json::Value const &, class SemVersion &, ::SemVersion::ParseOption);

    // symbol: ?fromJsonArray@SemVersion@@SA?AW4MatchType@1@AEBVValue@Json@@AEAV1@@Z
    MCAPI static ::SemVersion::MatchType fromJsonArray(class Json::Value const &, class SemVersion &);

    // symbol: ?fromString@SemVersion@@SA?AW4MatchType@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV1@W4ParseOption@1@@Z
    MCAPI static ::SemVersion::MatchType fromString(std::string const &, class SemVersion &, ::SemVersion::ParseOption);

    // symbol: ?AnyVersionConstructor@SemVersion@@2Uany_version_constructor@1@B
    MCAPI static struct SemVersion::any_version_constructor const AnyVersionConstructor;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_parseVersionToString@SemVersion@@AEAAXXZ
    MCAPI void _parseVersionToString();

    // NOLINTEND

};

