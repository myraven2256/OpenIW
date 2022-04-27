//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_xenon_net()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void NetadrToSockadr(struct netadr_t* a, struct sockaddr* s)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SockadrToNetadr(struct sockaddr* s, struct netadr_t* a)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

char* NET_ErrorString(int code)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Sys_StringToSockaddr(const char* s, struct sockaddr* sadr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Sys_StringToAdr(const char* s, struct netadr_t* a)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Xenon_SendPacketToSocket(unsigned int sock, const char* buffer, int size, const struct sockaddr* to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Xenon_SendPacket(const char* buffer, int size, const struct sockaddr* to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Xenon_BroadcastPacket(const char* buffer, int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Xenon_GetPacketFromSocket(unsigned int sock, char* data, int maxsize, struct sockaddr_in* from)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Xenon_GetPacket(char* data, int maxsize, struct sockaddr_in* from)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Xenon_RegisterRemoteXenon(const struct _XSESSION_INFO* info, struct in_addr* localAddr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void NET_Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct XNADDR* Xenon_GetXNAddr()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct XNADDR* Xenon_GetXNAddrForLive()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Sys_GetPacket(struct netadr_t* net_from, struct msg_t* net_message)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Sys_SendVoiceDataPacket(int dataLength, const void* gamedata, int voiceDataLength, const void* voiceData, struct netadr_t to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Sys_SendPacket(int length, const void* voiddata, struct netadr_t to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int NET_IPSocket(const char* net_interface, int port, int protocol)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void NET_GetLocalAddress()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Xenon_SendLSPPacket(const unsigned char* buffer, int size, struct netadr_t* to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Xenon_ConnectToLSP(struct in_addr addr, int port)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Xenon_GetLSPPacket(char* data, int maxsize, struct sockaddr_in* from)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Sys_GetLSPPacket(struct netadr_t* net_from, struct msg_t* net_message)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int NET_LSPSocket(const char* net_interface, int port, int protocol)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void NET_OpenIP()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void NET_Config(int enableNetworking)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void NET_Restart()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void NET_Shutdown()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void NET_Sleep(int msec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Sys_IsLANAddress(struct netadr_t adr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Sys_ShowIP()
{

}

#endif // __UNIMPLEMENTED__
