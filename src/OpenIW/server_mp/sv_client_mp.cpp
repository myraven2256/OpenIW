//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

int SV_CountClients()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_GetChallenge(struct netadr_t from)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_ReceiveStats(struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_SetClientStat(int clientNum, int index, int value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_GetClientStat(int clientNum, int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int SV_IsBannedGuid(int guid)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int SV_FindFreeTempBanSlot()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_BanGuidBriefly(int guid)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_BanClient(struct client_t* cl)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_UnbanClient(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_FreeClient(struct client_t* cl)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_FreeClients()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned __int64 SV_GetPlayerXuid(int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_FindClientNumByXUID(const unsigned __int64 xuid)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_DirectConnect(struct netadr_t from)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_FreeClientScriptPers()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_SendDisconnect(struct client_t* client, int state, const char* reason, bool translationForReason, const char* clientName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_DropClient(struct client_t* drop, const char* reason, bool tellThem)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_DelayDropClient(struct client_t* drop, const char* reason)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_SendClientGameState(struct client_t* client)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_ClientEnterWorld(struct client_t* client, struct usercmd_s* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SV_PeerVoiceResults(struct client_t* cl)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SV_Disconnect_f(struct client_t* cl)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_UserinfoChanged(struct client_t* cl)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SV_UpdateUserinfo_f(struct client_t* cl)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float SV_FX_GetVisibility(const float* start, const float* end)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_ExecuteClientCommand(struct client_t* cl, const char* s, int clientOK)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int SV_ClientCommand(struct client_t* cl, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_ClientThink(struct client_t* cl, struct usercmd_s* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_UserMove(struct client_t* cl, struct msg_t* msg, int delta)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_ExecuteClientMessage(struct client_t* cl, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct gentity_s* SV_AddTestClient()
{

}

#endif // __UNIMPLEMENTED__
