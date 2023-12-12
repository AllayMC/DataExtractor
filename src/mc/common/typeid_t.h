#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {
class Value;
}
class CommandRegistry;
template <typename>
class CommandSelector;
template <typename>
class WildcardCommandSelector;
class CommandBlockName;
class CommandMessage;
class CommandPosition;
class CommandPositionFloat;
class MobEffect;
class RelativeFloat;
class CommandItem;
struct ActorDefinitionIdentifier;
class CommandRawText;
class CommandWildcardInt;
class Player;
class Actor;
class Command;

namespace Bedrock {

template <typename T0>
class typeid_t {
public:
    constexpr static ushort count = 0;

    ushort value;
    [[nodiscard]] constexpr typeid_t<T0>(typeid_t<T0> const& id) : value(id.value) {}
    [[nodiscard]] constexpr typeid_t<T0>(ushort value) : value(value) {}
    [[nodiscard]] inline typeid_t<T0>() : value(++_getCounter()) {}

    static std::atomic_ushort& _getCounter() {

        // MCAPI // error C2201
        static std::atomic_ushort storage;

        return storage;
    }
};

template <typename T0, typename T1>
typeid_t<T0> type_id() {
    static typeid_t<T0> id{};
    return id;
}

}; // namespace Bedrock