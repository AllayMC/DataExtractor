#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BehaviorData {
public:
    // BehaviorData inner types declare
    // clang-format off
    struct DataProxy;
    // clang-format on
    
    // BehaviorData inner types define
    enum class DataType {};
    
    struct DataProxy {
    public:
        // prevent constructor by default
        DataProxy& operator=(DataProxy const &) = delete;
        DataProxy(DataProxy const &) = delete;
        DataProxy() = delete;
    
    public:
        // NOLINTBEGIN
        // symbol: ??1DataProxy@BehaviorData@@UEAA@XZ
        MCVAPI ~DataProxy();
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    BehaviorData& operator=(BehaviorData const &) = delete;
    BehaviorData(BehaviorData const &) = delete;
    BehaviorData() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?hasDataOfType@BehaviorData@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4DataType@1@@Z
    MCAPI bool hasDataOfType(std::string const &, ::BehaviorData::DataType) const;

    // NOLINTEND

};

