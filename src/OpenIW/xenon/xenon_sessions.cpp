//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void Session_QoSListenStart(struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_QoSListenStop(struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Session_FindRegisteredUser(struct SessionData_s* session, const unsigned __int64 xuid)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Session_CountRegisteredUsers(struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Session_IsUserRegistered(struct SessionData_s* session, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_EndGameSession(struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_StartDeleteHandle(const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults Session_DeleteHandleComplete(const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_DeleteHandle(void* sessionHandle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_UnregisterAllUsersFromVoice(struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Session_GetFreeSessionGraveYardSlot()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_DeleteSession(struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Session_CurrentFlags(struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Session_PrivateSlots(struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_ClientRegisterWithArbitration(struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FindXuidInList(unsigned __int64 xuid, int listSize, unsigned __int64* list)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_HostRegisterWithArbitration(struct PartyData_s* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults Session_StartHostComplete(const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Session_GetFreeCreateSessionSlot()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_StartHost(struct SessionData_s* session, int sessionFlags, int numPrivateSlots, int numPublicSlots)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Session_StartClient(struct SessionData_s* session, const int localControllerIndex, const int flags, struct _XSESSION_INFO* hostInfo, unsigned __int64 sessionNonce, int numPublicSlots, int numPrivateSlots)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Session_NeedToSyncParams(struct SessionData_s* session, const int numPublic, const int numPrivate, const int flags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_SyncParams(const int localControllerIndex, struct SessionData_s* session, const int numPublic, const int numPrivate, const int flags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Session_ModifyInProgress()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_Modify(const int localControllerIndex, struct SessionData_s* session, const int flags, const int publicSlots, const int privateSlots)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults Session_ModifyComplete(const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_FinishModify()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Session_CreateOrJoinInProgress()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Session_Started(struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_StartGameSession(const int localControllerIndex, struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults Session_StartSessionComplete(const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Session_GetFreeJoinSessionSlot()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_JoinSession(const int localControllerIndex, struct SessionData_s* session, const int slot, const unsigned __int64 player, bool privateSlot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults Session_JoinSessionComplete(const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Session_JoinInProgress()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults Session_EveryoneLeaveSessionComplete(const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Session_GetFreeLeaveSessionSlot()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_EveryoneLeaveSessionAsync(const int localControllerIndex, struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_RemoveAllPlayersFromSession(struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_LeaveSession(struct SessionData_s* session, const int registeredUserSlot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_RegisterRemotePlayer(const int localControllerIndex, struct SessionData_s* session, const unsigned __int64 player, bool privateSlot, const int clientNum, const int natType, const struct XNADDR* xnaddr, const struct in_addr inaddr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_UnregisterRemotePlayer(struct SessionData_s* session, const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned __int64 Session_GetNonce(struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Xenon_SetSessionNonce(struct SessionData_s* session, unsigned __int64 nonce)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct XNKEY* Xenon_GetXNKey(struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct XNKID* Xenon_GetXNKId(struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Session_AllSearchStagesComplete()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Session_GetCurrentSearchStageMapPacks()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_SearchForAllSessions(struct SessionData_s* session, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Session_CurrentStageIsValid()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Session_GoToNextSearchStage(const int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_SearchForSession(int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Session_ParseSearchResults(const int localControllerIndex, struct _XSESSION_SEARCHRESULT_HEADER* searchResults)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults Session_RandomSearchSessionsComplete(const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_CleanUpSearches(int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Session_SearchInProgress()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_ManageGraveYard()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_DeleteGraveyardSlot(int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_DeletePresenceSessionInGraveYard(const int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_EmptyGraveYard(const int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_NeedsSkillUpdate(struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_CalcSkill()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults Session_CalcSkillComplete(const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_ModifySkill()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults Session_ModifySkillComplete(const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Session_SessionTasksInProgress(struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_EndOngoingSessionTasksForLeave(struct SessionData_s* session, unsigned __int64 player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_EndOngoingSessionTasks(struct SessionData_s* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Live_FinishOngoingSessionJoinTasksForXUID(struct SessionData_s* session, unsigned __int64 player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Session_JoinInProgressForXUID(unsigned __int64 player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Live_CheckOngoingSessionTasks()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_Init()
{

}

#endif // __UNIMPLEMENTED__
