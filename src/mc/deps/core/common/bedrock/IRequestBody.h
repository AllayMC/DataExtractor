#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::Internal {

class IRequestBody {
public:
    // IRequestBody inner types declare
    // clang-format off
    struct ReadResult;
    // clang-format on
    
    // IRequestBody inner types define
    struct ReadResult {
    public:
        // prevent constructor by default
        ReadResult& operator=(ReadResult const &) = delete;
        ReadResult(ReadResult const &) = delete;
        ReadResult() = delete;
    
    };
    
public:
    // prevent constructor by default
    IRequestBody& operator=(IRequestBody const &) = delete;
    IRequestBody(IRequestBody const &) = delete;
    IRequestBody() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1IRequestBody@Internal@Http@Bedrock@@UEAA@XZ
    MCVAPI ~IRequestBody();

    // NOLINTEND

};

};
