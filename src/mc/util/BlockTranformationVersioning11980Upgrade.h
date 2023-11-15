#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockTranformationVersioning {

class BlockTranformationVersioning11980Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockTranformationVersioning11980Upgrade& operator=(BlockTranformationVersioning11980Upgrade const &) = delete;
    BlockTranformationVersioning11980Upgrade(BlockTranformationVersioning11980Upgrade const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?previousSchema@BlockTranformationVersioning11980Upgrade@BlockTranformationVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory &) const;

    // vIndex: 2, symbol: ?upgradeToNext@BlockTranformationVersioning11980Upgrade@BlockTranformationVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator> &) const;

    // symbol: ??0BlockTranformationVersioning11980Upgrade@BlockTranformationVersioning@@QEAA@XZ
    MCAPI BlockTranformationVersioning11980Upgrade();

    // NOLINTEND

};

};
