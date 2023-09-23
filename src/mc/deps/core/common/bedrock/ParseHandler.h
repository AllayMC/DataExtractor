#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock::JSONObject {

class ParseHandler {
public:
    // prevent constructor by default
    ParseHandler& operator=(ParseHandler const &) = delete;
    ParseHandler(ParseHandler const &) = delete;
    ParseHandler() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?Bool@ParseHandler@JSONObject@Bedrock@@QEAA_N_N@Z
    MCAPI bool Bool(bool);

    // symbol: ?Double@ParseHandler@JSONObject@Bedrock@@QEAA_NN@Z
    MCAPI bool Double(double);

    // symbol: ?Int@ParseHandler@JSONObject@Bedrock@@QEAA_NH@Z
    MCAPI bool Int(int);

    // symbol: ?Int64@ParseHandler@JSONObject@Bedrock@@QEAA_N_J@Z
    MCAPI bool Int64(int64);

    // symbol: ?Key@ParseHandler@JSONObject@Bedrock@@QEAA_NPEBDI_N@Z
    MCAPI bool Key(char const *, uint, bool);

    // symbol: ?Null@ParseHandler@JSONObject@Bedrock@@QEAA_NXZ
    MCAPI bool Null();

    // symbol: ?StartArray@ParseHandler@JSONObject@Bedrock@@QEAA_NXZ
    MCAPI bool StartArray();

    // symbol: ?StartObject@ParseHandler@JSONObject@Bedrock@@QEAA_NXZ
    MCAPI bool StartObject();

    // symbol: ?String@ParseHandler@JSONObject@Bedrock@@QEAA_NPEBDI_N@Z
    MCAPI bool String(char const *, uint, bool);

    // symbol: ?Uint@ParseHandler@JSONObject@Bedrock@@QEAA_NI@Z
    MCAPI bool Uint(uint);

    // symbol: ?Uint64@ParseHandler@JSONObject@Bedrock@@QEAA_N_K@Z
    MCAPI bool Uint64(uint64);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addObjectOrArray@ParseHandler@JSONObject@Bedrock@@AEAA_NAEBVValueWrapper@23@@Z
    MCAPI bool _addObjectOrArray(class Bedrock::JSONObject::ValueWrapper const &);

    // NOLINTEND

};

};
