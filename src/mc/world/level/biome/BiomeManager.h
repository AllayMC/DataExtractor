#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/world/level/biome/registry/BiomeComponentFactory.h"

class BiomeManager {
public:
    // prevent constructor by default
    BiomeManager& operator=(BiomeManager const &) = delete;
    BiomeManager(BiomeManager const &) = delete;
    BiomeManager() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0BiomeManager@@QEAA@V?$OwnerPtrT@U?$SharePtrRefTraits@VBiomeRegistry@@@@@@W4FactoryScope@BiomeComponentFactory@@_NV?$unique_ptr@VAutomaticFeatureRules@@U?$default_delete@VAutomaticFeatureRules@@@std@@@std@@@Z
    MCAPI BiomeManager(class OwnerPtrT<struct SharePtrRefTraits<class BiomeRegistry>>, ::BiomeComponentFactory::FactoryScope, bool, std::unique_ptr<class AutomaticFeatureRules>);

    // symbol: ?getBiomeComponentFactory@BiomeManager@@QEAAAEAVBiomeComponentFactory@@XZ
    MCAPI class BiomeComponentFactory & getBiomeComponentFactory();

    // symbol: ?getBiomeRegistry@BiomeManager@@QEAAAEAVBiomeRegistry@@XZ
    MCAPI class BiomeRegistry & getBiomeRegistry();

    // symbol: ?getSurfaceBuilderRegistry@BiomeManager@@QEAAAEAVSurfaceBuilderRegistry@@XZ
    MCAPI class SurfaceBuilderRegistry & getSurfaceBuilderRegistry();

    // symbol: ?initializeBiomeRegistryAndAutomaticFeatureRulesOnServer@BiomeManager@@QEAAXAEBVExperiments@@AEAVIWorldRegistriesProvider@@AEAVResourcePackManager@@VLevelSeed64@@@Z
    MCAPI void initializeBiomeRegistryAndAutomaticFeatureRulesOnServer(class Experiments const &, class IWorldRegistriesProvider &, class ResourcePackManager &, class LevelSeed64);

    // symbol: ?initializeWithLevelStorageManager@BiomeManager@@QEAAXAEAVLevelStorageManager@@@Z
    MCAPI void initializeWithLevelStorageManager(class LevelStorageManager &);

    // symbol: ?loadBiomeData@BiomeManager@@QEAAXAEAVLevelStorage@@@Z
    MCAPI void loadBiomeData(class LevelStorage &);

    // symbol: ?sendLevelBiomesRegistered@BiomeManager@@QEAAXXZ
    MCAPI void sendLevelBiomesRegistered();

    // symbol: ??1BiomeManager@@QEAA@XZ
    MCAPI ~BiomeManager();

    // symbol: ?use3DBiomeMaps@BiomeManager@@SA_NAEBVBaseGameVersion@@@Z
    MCAPI static bool use3DBiomeMaps(class BaseGameVersion const &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_initializeServerBiomeRegistry@BiomeManager@@AEAAXAEBVExperiments@@AEAVIWorldRegistriesProvider@@AEAVResourcePackManager@@VLevelSeed64@@@Z
    MCAPI void _initializeServerBiomeRegistry(class Experiments const &, class IWorldRegistriesProvider &, class ResourcePackManager &, class LevelSeed64);

    // NOLINTEND

};

