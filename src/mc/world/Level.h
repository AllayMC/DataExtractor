#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Level {	
public:
	char padding[315];

public:
	// symbol: ?getBlockPalette@Level@@UEBAAEBVBlockPalette@@XZ
	MCVAPI class BlockPalette const& getBlockPalette() const;

	// symbol: ?getBlockPalette@Level@@UEAAAEAVBlockPalette@@XZ
	MCVAPI class BlockPalette& getBlockPalette();

	// symbol: ?getLevelData@Level@@UEAAAEAVLevelData@@XZ
	MCVAPI class LevelData& getLevelData();

	// symbol: ?getLevelData@Level@@UEBAAEBVLevelData@@XZ
	MCVAPI class LevelData const& getLevelData() const;

	// symbol: ?getActorFactory@Level@@UEBAAEBVActorFactory@@XZ
	MCVAPI class ActorFactory const& getActorFactory() const;

	// symbol: ?getActorFactory@Level@@UEAAAEAVActorFactory@@XZ
	MCVAPI class ActorFactory& getActorFactory();

	// symbol: ?getBiomeRegistry@Level@@UEBAAEBVBiomeRegistry@@XZ
	MCVAPI class BiomeRegistry const& getBiomeRegistry() const;

	// symbol: ?getBiomeRegistry@Level@@UEAAAEAVBiomeRegistry@@XZ
	MCVAPI class BiomeRegistry& getBiomeRegistry();

	// symbol: ?getSpawner@Level@@UEBAAEAVSpawner@@XZ
	MCVAPI class Spawner& getSpawner() const;
};