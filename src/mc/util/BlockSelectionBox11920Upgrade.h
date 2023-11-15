#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockSelectionBoxVersioning {

class BlockSelectionBox11920Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockSelectionBox11920Upgrade& operator=(BlockSelectionBox11920Upgrade const &) = delete;
    BlockSelectionBox11920Upgrade(BlockSelectionBox11920Upgrade const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?previousSchema@BlockSelectionBox11920Upgrade@BlockSelectionBoxVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory &) const;

    // vIndex: 2, symbol: ?upgradeToNext@BlockSelectionBox11920Upgrade@BlockSelectionBoxVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator> &) const;

    // symbol: ??0BlockSelectionBox11920Upgrade@BlockSelectionBoxVersioning@@QEAA@XZ
    MCAPI BlockSelectionBox11920Upgrade();

    // NOLINTEND

};

};
