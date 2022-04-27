//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

int Live_UIMapPackFlags()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Live_CurrentMapPackFlags(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_PrintTeams(struct SubpartyInfo* subparties, int subpartyCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LSP_LogTeams(const int localControllerIndex, struct SubpartyInfo* subparties, int subpartyCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool IsLobbyState(struct PartyData_s* party, unsigned char lobbyState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SetLobbyState(struct PartyData_s* party, unsigned char lobbyState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RandomPermute(int* arr, int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ClearMember(struct PartyData_s* party, const int memberIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_PlayPlayerJoinSound(const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_PlayPlayerLeaveSound(const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_GetLobbyState_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PartyClient_FindSubpartyByXUID(struct PartyData_s* party, unsigned __int64 xuid)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_ClearMembers(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PartyHost_CountMembers(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PartyClient_CountMembersEvenIfInactive(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PartyClient_CountMembers(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyClient_RemovePartyMember(struct PartyData_s* party, int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned __int64 PartyClient_GetMemberXuidBySlot(struct PartyData_s* party, int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_Sort(struct PartyData_s* party, int* indices, int maxCount, function * partyMemberCompFunc, bool ascending)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PartyMember_ScoreComp(struct PartyData_s* party, int i1, int i2, bool invalidHigh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct PartyMember* PartyUI_GetMember(struct PartyData_s* party, const int localControllerIndex, int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PartyUI_ShowTruePlayerInfo(struct PartyData_s* party, const int localControllerIndex, const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* PartyUI_MemberNameWithClan(struct PartyMember* member)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* PartyUI_MemberStat(struct PartyMember* member, int column)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MemberRankIcon(struct PartyMember* member, struct Material** handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned __int64 PartyUI_GetMemberXuid(struct PartyData_s* party, int localControllerIndex, int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* PartyUI_GetMemberName(struct PartyData_s* party, int localControllerIndex, int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* PartyUI_GetMemberStat(struct PartyData_s* party, int localControllerIndex, int slot, int column)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool PartyUI_IsMemberTalking(struct PartyData_s* party, int localControllerIndex, int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool PartyUI_IsMemberMuted(struct PartyData_s* party, int localControllerIndex, int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool PartyUI_MemberHasHeadset(struct PartyData_s* party, int localControllerIndex, int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyUI_MemberRankIcon(struct PartyData_s* party, int localControllerIndex, int slot, struct Material** handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* PartyUI_MemberRank(struct PartyData_s* party, int localControllerIndex, int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct PartyMember* PartyUI_GetTeamMember(struct PartyData_s* party, const int localControllerIndex, const int team, const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PartyUI_CountTeamMembers(struct PartyData_s* party, int team)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PartyUI_GetTeam(struct PartyData_s* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* PartyUI_GetTeamMemberName(struct PartyData_s* party, int localControllerIndex, int team, int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* PartyUI_GetTeamMemberStat(struct PartyData_s* party, int localControllerIndex, int team, int slot, int column)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned __int64 PartyUI_GetTeamMemberXuid(struct PartyData_s* party, int localControllerIndex, int team, int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool PartyUI_IsTeamMemberTalking(struct PartyData_s* party, int localControllerIndex, int team, int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool PartyUI_IsTeamMemberMuted(struct PartyData_s* party, int localControllerIndex, int team, int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool PartyUI_TeamMemberHasHeadset(struct PartyData_s* party, int localControllerIndex, int team, int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyUI_TeamMemberRankIcon(struct PartyData_s* party, int localControllerIndex, int team, int slot, struct Material** handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* PartyUI_TeamMemberRank(struct PartyData_s* party, int localControllerIndex, int team, int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_FindMemberByXUID(struct PartyData_s* party, const unsigned __int64 player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_FindSubparties(struct PartyData_s* party, struct SubpartyInfo* subparties, int* subpartyCount, int* totalSkill)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_SetUIPlayerCount(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_SetMaxFreeSlots(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_GamestateChanged(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_MarkMemberInfoDirty(struct PartyData_s* party, int dirtyMemberSlot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_UpdatePlayerHiding(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_MemberInfoChanged(struct PartyData_s* party, int memberSlot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_MarkPacketReceivedForClients(struct PartyData_s* party, const struct netadr_t from)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_ResetClientTimeouts(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Party_GetVetoCount(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Party_ClientsAreReady(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_ReAddAllPlayers(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_AddAllPlayersToPresenceSession(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_SyncVoiceDataForAllPlayers(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_CleanUpInviteSessions(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_RemoveFromList(struct PartyData_s* party, struct XNADDR* xnaddr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_DisconnectFromHost(struct PartyData_s* party, int localControllerIndex, const char* reason)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_StopParty(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PartyHost_FindOldestZombieSlot(struct PartyData_s* party, bool invited)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_AddAnonymousMemberAtSlot(struct PartyData_s* party, const int slot, struct netadr_t* addr, const char* challenge, bool invited, bool headsetPresent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PartyHost_AddAnonymousMember(struct PartyData_s* party, struct netadr_t* addr, const char* challenge, bool invited, bool headsetPresent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PartyHost_FindTeams(struct SubpartyInfo* parties, const int partyCount, const int memberCount, const int maxSkill, int maxCountDiff, bool makeTeams)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_AnonymousAddRequest(struct PartyData_s* party, struct netadr_t from, int numPlayersJoining, bool invited, bool headsetPresent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_IntegrateMapPrefs(bool* mapList, const int mapCount, const bool* mapPrefs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PartyHost_MapListIsCompatible(struct PartyData_s* party, const int mapCount, const bool* mapPrefs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool PartyHost_MapIsAcceptable(struct PartyData_s* party, const char* mapname)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PartyHost_AssignTeam(struct PartyData_s* party, const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_PlayerJustConnected(struct PartyData_s* party, const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PartyHost_AddPlayerAtSlot(struct PartyData_s* party, const int slot, const struct netadr_t addr, const unsigned __int64* xuid, const struct XNKID* privatePartyId, const char* gamertag, const char* clanAbbrev, int rank, int prestige, const bool invited, const int natType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PartyHost_AddPlayer(struct PartyData_s* party, const struct netadr_t addr, const unsigned __int64* xuid, const char* gamertag, const char* clanAbbrev, const int rank, const int prestige, const bool invited, const int natType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PartyHost_ClaimAnonymousSpot(struct PartyData_s* party, const struct netadr_t addr, const unsigned __int64* xuid, const struct XNKID* privatePartyId, const char* challenge, const char* gamertag, const char* clanAbbrev, int rank, int prestige, const char* gametype, const bool* mapPrefs, const bool invited, const int natType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PartyHost_AddLocalPlayer(struct PartyData_s* party, const int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_RemovePlayer(struct PartyData_s* party, const int memberIndex, bool tellThem, const char* reason)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PartyHost_FindMember(struct PartyData_s* party, const struct netadr_t playerAddr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* PartyHost_GetMemberName(struct PartyData_s* party, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct netadr_t* PartyHost_GetMemberAddressBySlot(struct PartyData_s* party, const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool PartyHost_GetMemberXNAddrBySlot(struct PartyData_s* party, const int slot, struct XNADDR* xnaddr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_GetVoiceConnectivityBits(struct PartyData_s* party, int memberIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_UpdateVoiceConnectivityBits(struct PartyData_s* party, int memberIndex, int connectivityBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_SendGo(struct PartyData_s* party, int localControllerIndex, int partyMemberSlot, const char* mapname, const char* gametype)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_SetRoundScores(struct PartyData_s* party, const int memberIndex, const int score, const int deaths)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PartyHost_TeamsAreReady(struct PartyData_s* party, int memberCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PartyHost_MakeTeams(struct PartyData_s* party, int memberCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_PreMatch(struct PartyData_s* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_StartTeamMatch(struct PartyData_s* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void InitMapLoad_FastFile(const char* mapName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void HostPreloadMap(const char* mapname, const char* gametype)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_StartMatch(struct PartyData_s* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_TestTeamCreation_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_GetAssignedTeam(struct PartyData_s* party, const unsigned __int64 player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_SetAssignedTeam(struct PartyData_s* party, const unsigned __int64 player, int team)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PartyHost_GetExpectedPlayerCount(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_SetPlaylistEntry(struct PartyData_s* party, const int playlistEntry)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_GetPlaylistEntry(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_TimeoutMembers(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_WritePartyStateMember(struct PartyMember* partyMember, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_WritePartyStatePart1(struct PartyData_s* party, int destinationMemberSlot, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_WritePartyStatePart2(struct PartyData_s* party, int destinationMemberSlot, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_SendPartyStates(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_SendHeartbeats(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_DropPlayersToMatchSlots(struct PartyData_s* party, const int publicSlots, const int privateSlots)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_ClearPartyList(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_AddPartyToList(struct PartyData_s* party, const struct _XSESSION_INFO* info, const int publicSlots, const int privateSlots, const int occupiedPublicSlots, const int occupiedPrivateSlots)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_SetPartyQoS(struct PartyData_s* party, int slot, int ping, int uploadBandwidth)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct _XSESSION_INFO* Party_GetPartyInfo(struct PartyData_s* party, int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_FindPartyByXNKId(struct PartyData_s* party, const struct XNKID* key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_AskToJoinParty(struct PartyData_s* party, int partyId, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_JoinAttemptFailed(struct PartyData_s* party, const int localControllerIndex, const char* errorMsg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Party_AllSlotsAvoided(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_CountPotentialHosts(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Party_GetGoodSlot(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_GetLobbySessionFlags(struct PartyData_s* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Party_ShouldCreateLobby(struct PartyData_s* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_ChooseBestHost(struct PartyData_s* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_SetDisplayMapName(const char* rawmapname)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_SetDisplayGameType(const char* rawgametype)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_SetDisplayMapPacks(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_SetMapPackFlags(struct PartyData_s* party, const int flags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_BroadcastNewLobby(struct PartyData_s* party, struct PartyInfo* newHost, const int localControllerIndex, const char* challenge)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_EnableMicIfAllowed(struct PartyData_s* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_StartParty(struct PartyData_s* party, int localControllerIndex, int flags, int numPrivateSlots, int numPublicSlots)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_CreatePartyPresenceComplete(int localControllerIndex, struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_StartPartyComplete(int localControllerIndex, struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_JoinParty(struct PartyData_s* party, const int localControllerIndex, struct netadr_t from, const char* challenge, unsigned __int64 xuid, const char* gamertag, const char* clanAbbrev)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_SendVetoMsg(struct PartyData_s* party, const bool veto)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_SendHeadsetMsg(struct PartyData_s* party, const bool headsetPresent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_UpdateClanName(struct PartyData_s* party, const char* clanAbbrev)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_UpdateRank(struct PartyData_s* party, int rank, int prestige)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_UpdateRank(struct PartyData_s* party, int rank, int prestige)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_SetVoteString(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Party_GetStatus(struct PartyData_s* party, int* timeRemaining)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_AutoStart(struct PartyData_s* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_ParsePartyStateHeaderData(struct PartyData_s* party, int localControllerIndex, struct msg_t* msg, struct netadr_t from, unsigned char numMembers)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_ParseMemberListFromPacket(struct PartyData_s* party, int localControllerIndex, int partNum, struct msg_t* msg, struct netadr_t from, int memberStart, int numMembers)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_DoneParsingPartyState(struct PartyData_s* party, int localControllerIndex, struct msg_t* msg, struct netadr_t from)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_PreParsePartyState(struct PartyData_s* party, int localControllerIndex, struct msg_t* msg, struct netadr_t from)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_ParsePartyStatePacket(struct PartyData_s* party, int localControllerIndex, int partNum, struct msg_t* msg, struct netadr_t from)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_SetUpPartyForHost(struct PartyData_s* party, const int localControllerIndex, struct PartyHostDetails* hostInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_GetNatType(struct PartyData_s* party, const unsigned __int64 xuid)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_SetNatTypeForXuid(struct PartyData_s* party, const unsigned __int64 xuid, int natType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_IsRunning(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_InParty(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_AreWeHost(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_MarkPacketReceived(struct PartyData_s* party, struct PartyHostDetails* partyHost)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Party_PacketIsFromHost(struct PartyData_s* party, const struct netadr_t from)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Party_PacketIsFromPotentialHost(struct PartyData_s* party, const struct netadr_t from)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Party_PacketIsFromAcceptedHost(struct PartyData_s* party, const struct netadr_t from)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_SendHeartbeatAck(struct PartyData_s* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_HandleHeartbeat(struct PartyData_s* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_HandleHeartbeatAck(struct PartyData_s* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PartyHost_GenerateClientBitfield(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_HandleClientPartyStateAck(struct PartyData_s* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_HandleJoinPartyRequest(struct PartyData_s* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PartyHost_CountUninvitedPlayers(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PartyHost_CountInvitedPlayers(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_HandleClientHandshake(struct PartyData_s* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_HandleVetoMsg(struct PartyData_s* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_HandleHeadsetMsg(struct PartyData_s* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_HandleClanMsg(struct PartyData_s* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_PrintConnectivity(struct PartyData_s* party, const int clientNum, const int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_HandleIHearMsg(struct PartyData_s* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_HandleClientDisconnect(struct PartyData_s* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_HandleRankMsg(struct PartyData_s* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_HandleHostAccept(struct PartyData_s* party, const int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_HandleNewLobby(struct PartyData_s* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_FailedToJoinParty(struct PartyData_s* party, int localControllerIndex, struct netadr_t from, const char* errorMsg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_HandleFailedPartyJoinMsg(struct PartyData_s* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_HandleOldPlaylistMsg(struct PartyData_s* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_HandleNewPlaylistMsg(struct PartyData_s* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_HandleFullPartyMsg(struct PartyData_s* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_HandleEndingMsg(struct PartyData_s* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_HandleEndParty(struct PartyData_s* party, const int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_HandlePartyStateMsg(struct PartyData_s* party, const int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_HandleGoMsg(struct PartyData_s* party, const int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Party_IsClientActive(struct PartyData_s* party, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_HandlePacket(struct PartyData_s* party, const char* c, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_Sleep(struct PartyData_s* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_ClearVetoes(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_Awake(struct PartyData_s* party, const int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_Frame(struct PartyData_s* party, const int localControllerIndex, const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyClient_Frame(struct PartyData_s* party, const int localControllerIndex, const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_Frame(struct PartyData_s* party, int localControllerIndex, const int msec)
{

}

#endif // __UNIMPLEMENTED__
