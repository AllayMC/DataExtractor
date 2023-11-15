#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IRequestBody.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http::Internal { class IRequestBody; }
// clang-format on

namespace Bedrock::Http {

class BinaryRequestBody : public ::Bedrock::Http::Internal::IRequestBody {
public:
    // prevent constructor by default
    BinaryRequestBody& operator=(BinaryRequestBody const &) = delete;
    BinaryRequestBody(BinaryRequestBody const &) = delete;
    BinaryRequestBody() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?read@BinaryRequestBody@Http@Bedrock@@MEAA?AUReadResult@IRequestBody@Internal@23@V?$span@E$0?0@gsl@@@Z
    virtual struct Bedrock::Http::Internal::IRequestBody::ReadResult read(class gsl::span<uint8_t>);

    // vIndex: 2, symbol: ?getSize@BinaryRequestBody@Http@Bedrock@@MEAA_KXZ
    virtual uint64_t getSize();

    // vIndex: 3, symbol: ?cancel@BinaryRequestBody@Http@Bedrock@@MEAAXXZ
    virtual void cancel();

    // vIndex: 4, symbol: ?getLoggableSource@BinaryRequestBody@Http@Bedrock@@MEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const & getLoggableSource() const;

    // vIndex: 5, symbol: ?getLoggableData@BinaryRequestBody@Http@Bedrock@@MEBA?AV?$span@$$CBE$0?0@gsl@@XZ
    virtual class gsl::span<uint8_t const> getLoggableData() const;

    // symbol: ??1BinaryRequestBody@Http@Bedrock@@UEAA@XZ
    MCVAPI ~BinaryRequestBody();

    // symbol: ?setData@BinaryRequestBody@Http@Bedrock@@QEAAXV?$span@$$CBE$0?0@gsl@@@Z
    MCAPI void setData(class gsl::span<uint8_t const>);

    // NOLINTEND

};

};
