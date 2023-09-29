#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace CodeBuilder { class IRequestHandler; }
namespace CodeBuilder { struct CommandRequest; }
namespace CodeBuilder { struct RequestHeader; }
namespace Json { class Value; }
// clang-format on

namespace CodeBuilder {

class RequestInterpreter {
public:
    // prevent constructor by default
    RequestInterpreter& operator=(RequestInterpreter const &) = delete;
    RequestInterpreter(RequestInterpreter const &) = delete;
    RequestInterpreter() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?process@RequestInterpreter@CodeBuilder@@QEBAXAEAVIRequestHandler@2@AEBURequestHeader@2@AEBVValue@Json@@@Z
    MCAPI void process(class CodeBuilder::IRequestHandler &, struct CodeBuilder::RequestHeader const &, class Json::Value const &) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_parse@RequestInterpreter@CodeBuilder@@CA_NAEBVValue@Json@@AEAUCommandRequest@2@@Z
    MCAPI static bool _parse(class Json::Value const &, struct CodeBuilder::CommandRequest &);

    // NOLINTEND

};

};
