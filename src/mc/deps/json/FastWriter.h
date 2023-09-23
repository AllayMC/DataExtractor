#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Writer.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace Json { class Writer; }
// clang-format on

namespace Json {

class FastWriter : public ::Json::Writer {
public:
    // prevent constructor by default
    FastWriter& operator=(FastWriter const &) = delete;
    FastWriter(FastWriter const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?write@FastWriter@Json@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@2@@Z
    virtual std::string write(class Json::Value const &);

    // symbol: ??1FastWriter@Json@@UEAA@XZ
    MCVAPI ~FastWriter();

    // symbol: ??0FastWriter@Json@@QEAA@XZ
    MCAPI FastWriter();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?writeValue@FastWriter@Json@@AEAAXAEBVValue@2@@Z
    MCAPI void writeValue(class Json::Value const &);

    // NOLINTEND

};

};
