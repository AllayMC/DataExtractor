#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/VanillaBiomeTypes.h"
#include "mc/common/TagRegistry.h"
#include "mc/common/IDType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class BiomeRegistry {
public:
    // BiomeRegistry inner types declare
    // clang-format off
    struct BiomeParent;
    // clang-format on

    // BiomeRegistry inner types define
    struct BiomeParent {
    public:
        // prevent constructor by default
        BiomeParent& operator=(BiomeParent const&);
        BiomeParent(BiomeParent const&);
        BiomeParent();

    public:
        // NOLINTBEGIN
        // symbol: ??1BiomeParent@BiomeRegistry@@QEAA@XZ
        MCAPI ~BiomeParent();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BiomeRegistry& operator=(BiomeRegistry const&);
    BiomeRegistry(BiomeRegistry const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BiomeRegistry@@UEAA@XZ
    virtual ~BiomeRegistry();

    // symbol: ??0BiomeRegistry@@QEAA@XZ
    MCAPI BiomeRegistry();

    // symbol: ?forEachBiome@BiomeRegistry@@QEBAXV?$function@$$A6AXAEAVBiome@@@Z@std@@@Z
    MCAPI void forEachBiome(std::function<void(class Biome&)>) const;

    // symbol:
    // ?getTagRegistry@BiomeRegistry@@QEAAAEAV?$TagRegistry@U?$IDType@UBiomeTagIDType@@@@U?$IDType@UBiomeTagSetIDType@@@@@@XZ
    MCAPI class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>>&
        getTagRegistry();

    // symbol:
    // ?getTagRegistry@BiomeRegistry@@QEBAAEBV?$TagRegistry@U?$IDType@UBiomeTagIDType@@@@U?$IDType@UBiomeTagSetIDType@@@@@@XZ
    MCAPI class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const&
        getTagRegistry() const;
};
