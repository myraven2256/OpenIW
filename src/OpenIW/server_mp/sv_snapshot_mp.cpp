//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static void SV_EmitPacketEntities(struct SnapshotInfo_s* snapInfo, const int from_num_entities, const int from_first_entity, const int to_num_entities, const int to_first_entity, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SV_EmitPacketClients(struct SnapshotInfo_s* snapInfo, const int from_num_clients, const int from_first_client, const int to_num_clients, const int to_first_client, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_WriteSnapshotToClient(struct client_t* client, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_UpdateServerCommandsToClient(struct client_t* client, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_UpdateServerCommandsToClient_PreventOverflow(struct client_t* client, struct msg_t* msg, int iMsgSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SV_PrintServerCommandsForClient(struct client_t* client)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SV_AddEntToSnapshot(int entnum, struct snapshotEntityNumbers_t* eNums)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SV_AddArchivedEntToSnapshot(int e, struct snapshotEntityNumbers_t* eNums)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SV_AddEntitiesVisibleFromPoint(float* org, int clientNum, struct snapshotEntityNumbers_t* eNums)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SV_AddCachedEntitiesVisibleFromPoint(int from_num_entities, int from_first_entity, float* org, int clientNum, struct snapshotEntityNumbers_t* eNums, struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct cachedSnapshot_t* SV_GetCachedSnapshotInternal(int archivedFrame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct cachedSnapshot_t* SV_GetCachedSnapshot(int* pArchiveTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int SV_GetCurrentClientInfo(int clientNum, struct playerState_s* ps, struct clientState_s* cs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool SV_GetClientPositionAtTime(int client, int gametime, float* pos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_GetArchivedClientInfo(int clientNum, int* pArchiveTime, struct playerState_s* ps, struct clientState_s* cs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_BuildClientSnapshot(struct client_t* client)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int SV_RateMsec(struct client_t* client, int messageSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_SendMessageToClient(struct msg_t* msg, struct client_t* client)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_BeginClientSnapshot(struct client_t* client, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_EndClientSnapshot(struct client_t* client, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_SetServerStaticHeader()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_GetServerStaticHeader()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_SendClientMessages()
{

}

#endif // __UNIMPLEMENTED__
