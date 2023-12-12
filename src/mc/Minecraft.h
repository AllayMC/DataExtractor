#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Minecraft {
public:
    // prevent constructor by default
    Minecraft& operator=(Minecraft const&);
    Minecraft(Minecraft const&);
    Minecraft();

public:
    // symbol: ?getLevel@Minecraft@@QEBAPEAVLevel@@XZ
    MCAPI class Level* getLevel() const;

    // symbol: ?getCommands@Minecraft@@QEAAAEAVMinecraftCommands@@XZ
    MCAPI class MinecraftCommands& getCommands();

    // symbol: ?initAsDedicatedServer@Minecraft@@QEAAXXZ
    MCAPI void initAsDedicatedServer();
};