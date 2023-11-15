#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/MolangVersion.h"
#include "mc/world/actor/state/PropertyMetadata.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PropertyGroup {
public:
    // prevent constructor by default
    PropertyGroup& operator=(PropertyGroup const &) = delete;
    PropertyGroup(PropertyGroup const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0PropertyGroup@@QEAA@XZ
    MCAPI PropertyGroup();

    // symbol: ?getDefaultBoolValue@PropertyGroup@@QEBA_N_KAEAVRenderParams@@@Z
    MCAPI bool getDefaultBoolValue(uint64_t, class RenderParams &) const;

    // symbol: ?getDefaultEnumIndexValue@PropertyGroup@@QEBA_K_KAEAVRenderParams@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI uint64_t getDefaultEnumIndexValue(uint64_t, class RenderParams &, std::string const &) const;

    // symbol: ?getDefaultFloatValue@PropertyGroup@@QEBAM_KAEAVRenderParams@@@Z
    MCAPI float getDefaultFloatValue(uint64_t, class RenderParams &) const;

    // symbol: ?getDefaultIntValue@PropertyGroup@@QEBAH_KAEAVRenderParams@@@Z
    MCAPI int32_t getDefaultIntValue(uint64_t, class RenderParams &) const;

    // symbol: ?getNetworkSyncPropertyDescriptionsAsListTag@PropertyGroup@@QEBA?AVListTag@@XZ
    MCAPI class ListTag getNetworkSyncPropertyDescriptionsAsListTag() const;

    // symbol: ?getPropertyMetadata@PropertyGroup@@QEBAPEBVPropertyMetadata@@_K@Z
    MCAPI class PropertyMetadata const * getPropertyMetadata(uint64_t) const;

    // symbol: ?hasAnyClientSyncProperties@PropertyGroup@@QEBA_NXZ
    MCAPI bool hasAnyClientSyncProperties() const;

    // symbol: ??1PropertyGroup@@QEAA@XZ
    MCAPI ~PropertyGroup();

    // symbol: ?isValidEnumEntry@PropertyGroup@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static bool isValidEnumEntry(std::string const &);

    // symbol: ?loadPropertiesFromJson@PropertyGroup@@SA?AV?$shared_ptr@$$CBVPropertyGroup@@@std@@AEBVValue@Json@@AEBVSemVersion@@@Z
    MCAPI static std::shared_ptr<class PropertyGroup const> loadPropertiesFromJson(class Json::Value const &, class SemVersion const &);

    // symbol: ?MAX_ENUM_SIZE@PropertyGroup@@2_KB
    MCAPI static uint64_t const MAX_ENUM_SIZE;

    // symbol: ?MAX_ENUM_VALUE_SIZE@PropertyGroup@@2_KB
    MCAPI static uint64_t const MAX_ENUM_VALUE_SIZE;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addBoolProperty@PropertyGroup@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N1@Z
    MCAPI void _addBoolProperty(std::string const &, bool, bool);

    // symbol: ?_addEnumIndexProperty@PropertyGroup@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N_KAEBV?$vector@VHashedString@@V?$allocator@VHashedString@@@std@@@3@@Z
    MCAPI void _addEnumIndexProperty(std::string const &, bool, uint64_t, std::vector<class HashedString> const &);

    // symbol: ?_addFloatProperty@PropertyGroup@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NMMM@Z
    MCAPI void _addFloatProperty(std::string const &, bool, float, float, float);

    // symbol: ?_addIntProperty@PropertyGroup@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NHHH@Z
    MCAPI void _addIntProperty(std::string const &, bool, int32_t, int32_t, int32_t);

    // symbol: ?_addPropertyMetadata@PropertyGroup@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NW4ContainedType@PropertyMetadata@@@Z
    MCAPI void _addPropertyMetadata(std::string const &, bool, ::PropertyMetadata::ContainedType);

    // symbol: ?_getFriendlyJsonTypeString@PropertyGroup@@AEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ContainedType@PropertyMetadata@@@Z
    MCAPI std::string const & _getFriendlyJsonTypeString(::PropertyMetadata::ContainedType);

    // symbol: ?_loadPropertyFromJson@PropertyGroup@@AEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@W4MolangVersion@@_N@Z
    MCAPI bool _loadPropertyFromJson(std::string const &, class Json::Value const &, ::MolangVersion, bool);

    // symbol: ?_reserveSpaceForTypes@PropertyGroup@@AEAAXAEBV?$vector@_KV?$allocator@_K@std@@@std@@@Z
    MCAPI void _reserveSpaceForTypes(std::vector<uint64_t> const &);

    // symbol: ?_validateDataType@PropertyGroup@@AEAA_NAEBVValue@Json@@W4ContainedType@PropertyMetadata@@@Z
    MCAPI bool _validateDataType(class Json::Value const &, ::PropertyMetadata::ContainedType);

    // symbol: ?_getJsonPropertyType@PropertyGroup@@CA?AW4ContainedType@PropertyMetadata@@AEBVValue@Json@@@Z
    MCAPI static ::PropertyMetadata::ContainedType _getJsonPropertyType(class Json::Value const &);

    // symbol: ?_tryGetClientSync@PropertyGroup@@CA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@AEA_N@Z
    MCAPI static bool _tryGetClientSync(std::string const &, class Json::Value const &, bool &);

    // NOLINTEND

};

