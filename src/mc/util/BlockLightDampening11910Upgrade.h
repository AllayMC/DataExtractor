#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockLightDampeningVersioning {

class BlockLightDampening11910Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockLightDampening11910Upgrade& operator=(BlockLightDampening11910Upgrade const &) = delete;
    BlockLightDampening11910Upgrade(BlockLightDampening11910Upgrade const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?previousSchema@BlockLightDampening11910Upgrade@BlockLightDampeningVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory &) const;

    // vIndex: 2, symbol: ?upgradeToNext@BlockLightDampening11910Upgrade@BlockLightDampeningVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator> &) const;

    // symbol: ??0BlockLightDampening11910Upgrade@BlockLightDampeningVersioning@@QEAA@XZ
    MCAPI BlockLightDampening11910Upgrade();

    // NOLINTEND

};

};
