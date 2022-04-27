//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

bool Voice_XUIDIsRegisteredWithXHV(unsigned __int64* xuids, unsigned long count, unsigned __int64 x)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Voice_CheckXHVSync(struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Voice_Init(struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Voice_EnableMic(struct SessionData_s* session, int port)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Voice_DisableMic(struct SessionData_s* session, int port)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Voice_DisableLocalMics()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Voice_SetFriendFlag(int localControllerIndex, struct SessionData_s* session, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Voice_SetAllFriendFlags(int localControllerIndex, struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Voice_RegisterRemotePlayer(int localControllerIndex, struct SessionData_s* session, const unsigned __int64 player, const int clientNum, const int natType, struct in_addr inaddr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Voice_UnregisterRemotePlayer(struct SessionData_s* session, const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Voice_ClearRemoteTalkers(struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Live_GetConnectedPlayerList(const struct SessionData_s* session, unsigned __int64* playerList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Live_GetConnectedPlayerCount(const struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Voice_IncomingVoiceData(const struct SessionData_s* session, int clientNum, unsigned char* data, int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned __int64 Live_GetPlayerXuid(struct SessionData_s* session, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct in_addr Live_GetPlayerInAddr(const struct SessionData_s* session, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Live_UpdatePlayerInAddr(struct SessionData_s* session, const int clientNum, const struct in_addr inaddr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Live_IsClientRegistered(const struct SessionData_s* session, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Live_IsClientAFriend(struct SessionData_s* session, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Live_GetClientNumForXuid(const struct SessionData_s* session, const unsigned __int64 xuid)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Live_GetNatTypeForClientNum(struct SessionData_s* session, const int player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Voice_GetLocalVoiceData(struct SessionData_s* session, const int clientNum, struct ClientVoicePacket_t* voiceData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Voice_IsXuidTalking(struct SessionData_s* session, int localControllerIndex, unsigned __int64 xuid)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Voice_IsLocalClientTalking(struct SessionData_s* session, int localClientIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Voice_GetTalkingCount(struct SessionData_s* session, const int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Voice_IsHeadsetPresent(struct SessionData_s* session, const int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Voice_Shutdown(struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Voice_IsMemberMuted(struct SessionData_s* session, int localControllerIndex, unsigned __int64 player)
{

}

#endif // __UNIMPLEMENTED__
