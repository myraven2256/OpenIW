//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

bool LSP_HelloReceived(const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool LSP_HelloSent(const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LSP_CancelAnyHello(const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool LSP_Connected()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LSP_WritePacketHeader(int localControllerIndex, struct msg_t* msg, unsigned __int64 xuid, const char* gamertag, const struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LSP_SendPacket(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LSP_AddKeepAlive(int localControllerIndex, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LSP_SendHello(int localControllerIndex, unsigned __int64 xuid, const char* gamertag)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LSP_SendStatsBlock(int localControllerIndex, const int part, const unsigned char* playerStats, unsigned __int64 xuid, const char* gamertag)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LSP_SendStats(int localControllerIndex, unsigned __int64 xuid, const char* gamertag)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LSP_SendLogRequest(int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LSP_ResendLogMsg()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LSP_CheckForLogSend(int localControllerIndex, int bytesNeeded)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LSP_AddKeepAliveIfNecessary(int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LSP_LogString(int localControllerIndex, const char* string)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LSP_LogStringEvenIfControllerIsInactive(const char* string)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LSP_ForceSendPacket()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LSP_LogStringAboutUser(int localControllerIndex, unsigned __int64 xuid, const char* string)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool LSP_MapTitleServerToIP()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults LSP_FindTitleServersComplete(int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LSP_FindTitleServers(const int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Live_GetIdealServerCountForPlaylist(int playlistId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Live_GetActivePlayerCountForPlaylist(int playlistId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Live_CleanPlaylistPlayerCount()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Live_SetActivePlayerCountForPlaylist(const int playlistId, const int count, const int idealNumServers)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Live_GetTotalPlayersInPlaylists()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Live_GetTotalPlayersOnline()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LSP_ParsePacket(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LSP_GetPackets()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LSP_ResendPackets()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LSP_CheckOngoingTasks()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LSP_HostReportStats()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LSP_Init()
{

}

#endif // __UNIMPLEMENTED__
