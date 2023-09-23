#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandFlagValue : unsigned short {
    None = 0x00,
    Usage = 0x01,
    Visibility2 = 0x02,
    Visibility4 = 0x04,
    Visibility6 = 0x06,
    Visibility8 = 0x08,
    Sync = 0x10,
    Execute = 0x20,
    Type = 0x40,
    Cheat = 0x80,
    Async = 0x100,
    //Editor = 0x200;
};

struct CommandFlag {
public:
    CommandFlagValue value;
    // prevent constructor by default
    CommandFlag& operator=(CommandFlag const &) = delete;
    CommandFlag(CommandFlag const &) = delete;
    CommandFlag() = delete;
    constexpr bool operator==(CommandFlag const& rhs) const noexcept
    {
        return value == rhs.value;
    }
    constexpr bool operator!=(CommandFlag const& rhs) const noexcept
    {
        return value != rhs.value;
    }
    CommandFlag& operator|=(CommandFlag const& rhs)
    {
        value = (CommandFlagValue)((unsigned short)rhs.value | (unsigned short)value);
        return *this;
    }
};

