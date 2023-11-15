#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/ConnectionAttemptResult.h"
#include "mc/deps/raknet/ConnectionState.h"
#include "mc/deps/raknet/RNS2BindResult.h"
#include "mc/deps/raknet/RNS2Type.h"
#include "mc/deps/raknet/RakPeer.h"
#include "mc/deps/raknet/RakString.h"
#include "mc/deps/raknet/ReliabilityLayer.h"
#include "mc/deps/raknet/StartupResult.h"
#include "mc/deps/raknet/data_structures/LinkedList.h"
#include "mc/deps/raknet/data_structures/List.h"
#include "mc/resources/PacketPriority.h"
#include "mc/resources/PacketReliability.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
namespace RakNet { class IRNS2_Berkley; }
namespace RakNet { class PluginInterface2; }
namespace RakNet { class RakNetRandom; }
namespace RakNet { class RakNetSocket2; }
namespace RakNet { class RakPeer; }
namespace RakNet { class RakPeerInterface; }
namespace RakNet { class RakString; }
namespace RakNet { class SocketLayerOverride; }
namespace RakNet { class StringCompressor; }
namespace RakNet { class StringTable; }
namespace RakNet { struct AddressOrGUID; }
namespace RakNet { struct InternalPacket; }
namespace RakNet { struct NetworkAdapter; }
namespace RakNet { struct Packet; }
namespace RakNet { struct PublicKey; }
namespace RakNet { struct RNS2RecvStruct; }
namespace RakNet { struct RNS2_BerkleyBindParameters; }
namespace RakNet { struct RNS2_SendParameters; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct RakNetStatistics; }
namespace RakNet { struct SocketDescriptor; }
namespace RakNet { struct SplitPacketChannel; }
namespace RakNet { struct SystemAddress; }
namespace RakNet { struct uint24_t; }
// clang-format on

namespace RakNet {
    // NOLINTBEGIN
    // symbol: ?ConnectionAttemptLoop@RakNet@@YAIPEAX@Z
    MCAPI uint32_t ConnectionAttemptLoop(void *);

    // symbol: ?GetTime@RakNet@@YA_KXZ
    MCAPI uint64_t GetTime();

    // symbol: ?GetTimeMS@RakNet@@YAIXZ
    MCAPI uint32_t GetTimeMS();

    // symbol: ?GetTimeUS@RakNet@@YA_KXZ
    MCAPI uint64_t GetTimeUS();

    // symbol: ?NonNumericHostString@RakNet@@YA_NPEBD@Z
    MCAPI bool NonNumericHostString(char const *);

    // symbol: ?ProcessNetworkPacket@RakNet@@YAXUSystemAddress@1@PEBDHPEAVRakPeer@1@PEAVRakNetSocket2@1@_KAEAVBitStream@1@@Z
    MCAPI void ProcessNetworkPacket(struct RakNet::SystemAddress, char const *, int32_t, class RakNet::RakPeer *, class RakNet::RakNetSocket2 *, uint64_t, class RakNet::BitStream &);

    // symbol: ?ProcessOfflineNetworkPacket@RakNet@@YA_NUSystemAddress@1@PEBDHPEAVRakPeer@1@PEAVRakNetSocket2@1@PEA_N_K@Z
    MCAPI bool ProcessOfflineNetworkPacket(struct RakNet::SystemAddress, char const *, int32_t, class RakNet::RakPeer *, class RakNet::RakNetSocket2 *, bool *, uint64_t);

    // symbol: ?SplitPacketChannelComp@RakNet@@YAHAEBGAEBQEAUSplitPacketChannel@1@@Z
    MCAPI int32_t SplitPacketChannelComp(uint16_t const &, struct RakNet::SplitPacketChannel *const &);

    // symbol: ?UNASSIGNED_RAKNET_GUID@RakNet@@3URakNetGUID@1@B
    MCAPI extern struct RakNet::RakNetGUID const UNASSIGNED_RAKNET_GUID;

    // symbol: ?UNASSIGNED_SYSTEM_ADDRESS@RakNet@@3USystemAddress@1@B
    MCAPI extern struct RakNet::SystemAddress const UNASSIGNED_SYSTEM_ADDRESS;

    // symbol: ?UpdateNetworkLoop@RakNet@@YAIPEAX@Z
    MCAPI uint32_t UpdateNetworkLoop(void *);

    // symbol: ?UpdateTCPInterfaceLoop@RakNet@@YAIPEAX@Z
    MCAPI uint32_t UpdateTCPInterfaceLoop(void *);

    // symbol: ?_DLMallocDirectMMap@RakNet@@YAPEAX_K@Z
    MCAPI void * _DLMallocDirectMMap(uint64_t);

    // symbol: ?_DLMallocMMap@RakNet@@YAPEAX_K@Z
    MCAPI void * _DLMallocMMap(uint64_t);

    // symbol: ?_DLMallocMUnmap@RakNet@@YAHPEAX_K@Z
    MCAPI int32_t _DLMallocMUnmap(void *, uint64_t);

    // symbol: ?_RakFree@RakNet@@YAXPEAX@Z
    MCAPI void _RakFree(void *);

    // symbol: ?_RakFree_Ex@RakNet@@YAXPEAXPEBDI@Z
    MCAPI void _RakFree_Ex(void *, char const *, uint32_t);

    // symbol: ?_RakMalloc@RakNet@@YAPEAX_K@Z
    MCAPI void * _RakMalloc(uint64_t);

    // symbol: ?_RakMalloc_Ex@RakNet@@YAPEAX_KPEBDI@Z
    MCAPI void * _RakMalloc_Ex(uint64_t, char const *, uint32_t);

    // symbol: ?_RakRealloc@RakNet@@YAPEAXPEAX_K@Z
    MCAPI void * _RakRealloc(void *, uint64_t);

    // symbol: ?_RakRealloc_Ex@RakNet@@YAPEAXPEAX_KPEBDI@Z
    MCAPI void * _RakRealloc_Ex(void *, uint64_t, char const *, uint32_t);
    // NOLINTEND

};
