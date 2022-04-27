//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

const char* NET_AdrToString(struct netadr_t a)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void NetProf_PrepProfiling(struct netProfileInfo_t* prof)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void NetProf_AddPacket(struct netProfileStream_t* pProfStream, int iSize, int bFragment)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void NetProf_NewSendPacket(struct netchan_t* pChan, int iSize, int bFragment)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void NetProf_NewRecievePacket(struct netchan_t* pChan, int iSize, int bFragment)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void NetProf_UpdateStatistics(struct netProfileStream_t* pStream)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Net_DumpProfile_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Net_DisplayProfile(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool FakeLag_DestroyPacket(unsigned int packet)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FakeLag_SendPacket_Real(unsigned int packet)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FakeLag_Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int FakeLag_GetFreeSlot()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool FakeLag_HostingGameOrParty()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int FakeLag_SendLaggedPackets()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int FakeLag_SendPacket(enum netsrc_t sock, int length, const void* data, struct netadr_t to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int FakeLag_QueueIncomingPacket(bool loopback, enum netsrc_t sock, struct netadr_t* from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FakeLag_ReceivePackets()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int FakeLag_GetPacket(bool loopback, enum netsrc_t sock, struct netadr_t* net_from, struct msg_t* net_message)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FakeLag_Frame()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FakeLag_Shutdown()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void TRACK_net_chan()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Netchan_Init(int port)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Netchan_Setup(enum netsrc_t sock, struct netchan_t* chan, struct netadr_t adr, int qport, char* outgoingBuffer, int outgoingBufferSize, char* incomingBuffer, int incomingBufferSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Netchan_TransmitNextFragment(struct netchan_t* chan)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Netchan_Transmit(struct netchan_t* chan, int length, const unsigned char* data)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Netchan_Process(struct netchan_t* chan, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int NET_CompareBaseAdrSigned(struct netadr_t* a, struct netadr_t* b)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int NET_CompareBaseAdr(struct netadr_t a, struct netadr_t b)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int NET_CompareAdrSigned(struct netadr_t* a, struct netadr_t* b)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int NET_CompareAdr(struct netadr_t a, struct netadr_t b)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int NET_CompareXNAddr(struct XNADDR* a, struct XNADDR* b)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int NET_IsLocalAddress(struct netadr_t adr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int NET_GetClientPacket(struct netadr_t* net_from, struct msg_t* net_message)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int NET_GetServerPacket(struct netadr_t* net_from, struct msg_t* net_message)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int NET_GetLoopPacket_Real(enum netsrc_t sock, struct netadr_t* net_from, struct msg_t* net_message)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int NET_GetLoopPacket(enum netsrc_t sock, struct netadr_t* net_from, struct msg_t* net_message)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void NET_SendLoopPacket(enum netsrc_t sock, int length, const void* data, struct netadr_t to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void NET_DeferPacketToClient(struct netadr_t* net_from, struct msg_t* net_message)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool NET_GetDeferredClientPacket(struct netadr_t* net_from, struct msg_t* net_message)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool NET_SendPacket(enum netsrc_t sock, int length, const void* data, struct netadr_t to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool NET_SendVoiceDataPackets(enum netsrc_t sock, int dataLength, const void* data, int voiceDataLength, const void* voiceData, struct netadr_t to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool NET_OutOfBandPrint(enum netsrc_t sock, struct netadr_t adr, const char* data)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool NET_OutOfBandData(enum netsrc_t sock, struct netadr_t adr, const unsigned char* format, int len)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int NET_OutOfBandVoiceData(enum netsrc_t sock, struct netadr_t adr, unsigned char* format, int len)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int NET_StringToAdr(const char* s, struct netadr_t* a)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Int64ToString(__int64 int64, char* str)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Int128ToString(unsigned char* data, char* str)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

__int64 StringToInt64(const char* str)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void StringToInt128(const char* str, unsigned char* data)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XUIDToString(const unsigned __int64* xuid, char* str)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void StringToXUID(const char* str, unsigned __int64* xuid)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XNAddrToString(const struct XNADDR* xnaddr, char* str)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void StringToXNAddr(const char* str, struct XNADDR* xnaddr)
{

}

#endif // __UNIMPLEMENTED__
