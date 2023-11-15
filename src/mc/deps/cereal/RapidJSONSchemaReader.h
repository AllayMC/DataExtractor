#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/SchemaReader.h"
#include "mc/deps/cereal/SchemaReaderState.h"
#include "mc/deps/core/common/bedrock/Result.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct SchemaReader; }
namespace cereal { struct SerializerTraits; }
// clang-format on

namespace cereal {

class RapidJSONSchemaReader : public ::cereal::SchemaReader {
public:
    // prevent constructor by default
    RapidJSONSchemaReader& operator=(RapidJSONSchemaReader const &) = delete;
    RapidJSONSchemaReader(RapidJSONSchemaReader const &) = delete;
    RapidJSONSchemaReader() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?isValid@RapidJSONSchemaReader@cereal@@UEBA_NXZ
    virtual bool isValid() const;

    // vIndex: 2, symbol: ?isObject@RapidJSONSchemaReader@cereal@@UEBA?AW4SchemaReaderState@2@XZ
    virtual ::cereal::SchemaReaderState isObject() const;

    // vIndex: 3, symbol: ?isArray@RapidJSONSchemaReader@cereal@@UEBA?AW4SchemaReaderState@2@XZ
    virtual ::cereal::SchemaReaderState isArray() const;

    // vIndex: 4, symbol: ?asBool@RapidJSONSchemaReader@cereal@@UEAA?AV?$Result@_NVerror_code@std@@@Bedrock@@AEBUSerializerTraits@2@@Z
    virtual class Bedrock::Result<bool, std::error_code> asBool(struct cereal::SerializerTraits const &);

    // vIndex: 5, symbol: ?asInt8@RapidJSONSchemaReader@cereal@@UEAA?AV?$Result@CVerror_code@std@@@Bedrock@@AEBUSerializerTraits@2@@Z
    virtual class Bedrock::Result<int8_t, std::error_code> asInt8(struct cereal::SerializerTraits const &);

    // vIndex: 6, symbol: ?asUInt8@RapidJSONSchemaReader@cereal@@UEAA?AV?$Result@EVerror_code@std@@@Bedrock@@AEBUSerializerTraits@2@@Z
    virtual class Bedrock::Result<uint8_t, std::error_code> asUInt8(struct cereal::SerializerTraits const &);

    // vIndex: 7, symbol: ?asInt16@RapidJSONSchemaReader@cereal@@UEAA?AV?$Result@FVerror_code@std@@@Bedrock@@AEBUSerializerTraits@2@@Z
    virtual class Bedrock::Result<int16_t, std::error_code> asInt16(struct cereal::SerializerTraits const &);

    // vIndex: 8, symbol: ?asUInt16@RapidJSONSchemaReader@cereal@@UEAA?AV?$Result@GVerror_code@std@@@Bedrock@@AEBUSerializerTraits@2@@Z
    virtual class Bedrock::Result<uint16_t, std::error_code> asUInt16(struct cereal::SerializerTraits const &);

    // vIndex: 9, symbol: ?asInt32@RapidJSONSchemaReader@cereal@@UEAA?AV?$Result@HVerror_code@std@@@Bedrock@@AEBUSerializerTraits@2@@Z
    virtual class Bedrock::Result<int32_t, std::error_code> asInt32(struct cereal::SerializerTraits const &);

    // vIndex: 10, symbol: ?asUInt32@RapidJSONSchemaReader@cereal@@UEAA?AV?$Result@IVerror_code@std@@@Bedrock@@AEBUSerializerTraits@2@@Z
    virtual class Bedrock::Result<uint32_t, std::error_code> asUInt32(struct cereal::SerializerTraits const &);

    // vIndex: 11, symbol: ?asInt64@RapidJSONSchemaReader@cereal@@UEAA?AV?$Result@_JVerror_code@std@@@Bedrock@@AEBUSerializerTraits@2@@Z
    virtual class Bedrock::Result<int64_t, std::error_code> asInt64(struct cereal::SerializerTraits const &);

    // vIndex: 12, symbol: ?asUInt64@RapidJSONSchemaReader@cereal@@UEAA?AV?$Result@_KVerror_code@std@@@Bedrock@@AEBUSerializerTraits@2@@Z
    virtual class Bedrock::Result<uint64_t, std::error_code> asUInt64(struct cereal::SerializerTraits const &);

    // vIndex: 13, symbol: ?asFloat@RapidJSONSchemaReader@cereal@@UEAA?AV?$Result@MVerror_code@std@@@Bedrock@@AEBUSerializerTraits@2@@Z
    virtual class Bedrock::Result<float, std::error_code> asFloat(struct cereal::SerializerTraits const &);

    // vIndex: 14, symbol: ?asDouble@RapidJSONSchemaReader@cereal@@UEAA?AV?$Result@NVerror_code@std@@@Bedrock@@AEBUSerializerTraits@2@@Z
    virtual class Bedrock::Result<double, std::error_code> asDouble(struct cereal::SerializerTraits const &);

    // vIndex: 15, symbol: ?asString@RapidJSONSchemaReader@cereal@@UEAA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Verror_code@2@@Bedrock@@AEBUSerializerTraits@2@@Z
    virtual class Bedrock::Result<std::string, std::error_code> asString(struct cereal::SerializerTraits const &);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 18, symbol: ?pushMember@RapidJSONSchemaReader@cereal@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUSerializerTraits@2@@Z
    virtual bool pushMember(std::string const &, struct cereal::SerializerTraits const &);

    // vIndex: 19, symbol: ?pushMember@RapidJSONSchemaReader@cereal@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_KAEBUSerializerTraits@2@@Z
    virtual std::string pushMember(uint64_t, struct cereal::SerializerTraits const &);

    // vIndex: 20, symbol: ?pushElement@RapidJSONSchemaReader@cereal@@UEAAX_KAEBUSerializerTraits@2@@Z
    virtual void pushElement(uint64_t, struct cereal::SerializerTraits const &);

    // vIndex: 21, symbol: ?pop@RapidJSONSchemaReader@cereal@@UEAAXAEBUSerializerTraits@2@@Z
    virtual void pop(struct cereal::SerializerTraits const &);

    // vIndex: 22, symbol: ?isSequenceReader@SchemaReader@cereal@@UEBA_NXZ
    virtual bool isSequenceReader() const;

    // symbol: ?length@RapidJSONSchemaReader@cereal@@UEAA_KAEBUSerializerTraits@2@@Z
    MCVAPI uint64_t length(struct cereal::SerializerTraits const &);

    // symbol: ?members@RapidJSONSchemaReader@cereal@@UEAA_KAEBUSerializerTraits@2@@Z
    MCVAPI uint64_t members(struct cereal::SerializerTraits const &);

    // symbol: ??1RapidJSONSchemaReader@cereal@@UEAA@XZ
    MCVAPI ~RapidJSONSchemaReader();

    // symbol: ??0RapidJSONSchemaReader@cereal@@QEAA@AEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    MCAPI RapidJSONSchemaReader(class rapidjson::GenericValue<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>> const &);

    // symbol: ??0RapidJSONSchemaReader@cereal@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI RapidJSONSchemaReader(std::string const &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?isArithmeticType@RapidJSONSchemaReader@cereal@@AEBA_NXZ
    MCAPI bool isArithmeticType() const;

    // NOLINTEND

};

};
