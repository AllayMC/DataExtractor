#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class TCPInterface {
public:
    // prevent constructor by default
    TCPInterface& operator=(TCPInterface const &) = delete;
    TCPInterface(TCPInterface const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?Send@TCPInterface@RakNet@@UEAAXPEBDIAEBUSystemAddress@2@_N@Z
    virtual void Send(char const *, uint32_t, struct RakNet::SystemAddress const &, bool);

    // vIndex: 2, symbol: ?SendList@TCPInterface@RakNet@@UEAA_NPEAPEBDPEBIHAEBUSystemAddress@2@_N@Z
    virtual bool SendList(char const **, uint32_t const *, int32_t, struct RakNet::SystemAddress const &, bool);

    // vIndex: 3, symbol: ?ReceiveHasPackets@TCPInterface@RakNet@@UEAA_NXZ
    virtual bool ReceiveHasPackets();

    // vIndex: 4, symbol: ?Receive@TCPInterface@RakNet@@UEAAPEAUPacket@2@XZ
    virtual struct RakNet::Packet * Receive();

    // vIndex: 5, symbol: ?PushBackPacket@TCPInterface@RakNet@@UEAAXPEAUPacket@2@_N@Z
    virtual void PushBackPacket(struct RakNet::Packet *, bool);

    // symbol: ??1TCPInterface@RakNet@@UEAA@XZ
    MCVAPI ~TCPInterface();

    // symbol: ?CloseConnection@TCPInterface@RakNet@@QEAAXUSystemAddress@2@@Z
    MCAPI void CloseConnection(struct RakNet::SystemAddress);

    // symbol: ?Connect@TCPInterface@RakNet@@QEAA?AUSystemAddress@2@PEBDG_NG0@Z
    MCAPI struct RakNet::SystemAddress Connect(char const *, uint16_t, bool, uint16_t, char const *);

    // symbol: ?DeallocatePacket@TCPInterface@RakNet@@QEAAXPEAUPacket@2@@Z
    MCAPI void DeallocatePacket(struct RakNet::Packet *);

    // symbol: ?GetConnectionCount@TCPInterface@RakNet@@QEBAGXZ
    MCAPI uint16_t GetConnectionCount() const;

    // symbol: ?GetConnectionList@TCPInterface@RakNet@@QEBAXPEAUSystemAddress@2@PEAG@Z
    MCAPI void GetConnectionList(struct RakNet::SystemAddress *, uint16_t *) const;

    // symbol: ?GetOutgoingDataBufferSize@TCPInterface@RakNet@@QEBAIUSystemAddress@2@@Z
    MCAPI uint32_t GetOutgoingDataBufferSize(struct RakNet::SystemAddress) const;

    // symbol: ?HasCompletedConnectionAttempt@TCPInterface@RakNet@@QEAA?AUSystemAddress@2@XZ
    MCAPI struct RakNet::SystemAddress HasCompletedConnectionAttempt();

    // symbol: ?HasFailedConnectionAttempt@TCPInterface@RakNet@@QEAA?AUSystemAddress@2@XZ
    MCAPI struct RakNet::SystemAddress HasFailedConnectionAttempt();

    // symbol: ?HasLostConnection@TCPInterface@RakNet@@QEAA?AUSystemAddress@2@XZ
    MCAPI struct RakNet::SystemAddress HasLostConnection();

    // symbol: ?Start@TCPInterface@RakNet@@QEAA_NGGGHGPEBD@Z
    MCAPI bool Start(uint16_t, uint16_t, uint16_t, int32_t, uint16_t, char const *);

    // symbol: ?Stop@TCPInterface@RakNet@@QEAAXXZ
    MCAPI void Stop();

    // symbol: ??0TCPInterface@RakNet@@QEAA@XZ
    MCAPI TCPInterface();

    // symbol: ?WasStarted@TCPInterface@RakNet@@QEBA_NXZ
    MCAPI bool WasStarted() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?CreateListenSocket@TCPInterface@RakNet@@IEAA_NGGGPEBD@Z
    MCAPI bool CreateListenSocket(uint16_t, uint16_t, uint16_t, char const *);

    // symbol: ?SocketConnect@TCPInterface@RakNet@@IEAA_KPEBDGG0@Z
    MCAPI uint64_t SocketConnect(char const *, uint16_t, uint16_t, char const *);

    // symbol: ?_removeFromBlockingSocketList@TCPInterface@RakNet@@IEAA_NAEB_K@Z
    MCAPI bool _removeFromBlockingSocketList(uint64_t const &);

    // NOLINTEND

};

};
