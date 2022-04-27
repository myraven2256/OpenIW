//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

int G_GetTime()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void G_RegisterDvars()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void TRACK_g_main()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_GetSavePersist()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_SetSavePersist(int savepersist)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float G_GetFogOpaqueDistSqrd()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_GetClientScore(int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_GetClientDeaths(int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_GetClientArchiveTime(int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_SetClientArchiveTime(int clientNum, int time)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct clientState_s* G_GetClientState(int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct playerState_s* G_GetPlayerState(int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_GetClientSize()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_FreeEntities()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void G_CreateDObj(struct DObjModel_s* dobjModels, unsigned short numModels, struct XAnimTree_s* tree, int handle, int unusedLocalClientNum, struct clientInfo_t* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct DObj_s* G_GetDObj(int handle, int unusedLocalClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void G_SafeDObjFree(int handle, int unusedLocalClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void G_LoadAnimTreeInstances()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void G_FreeAnimTreeInstances()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* Hunk_AllocXAnimServer(int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool G_ExitAfterConnectPaths()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_IsServerGameSystem(int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_SendGameEndNotify()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void G_PrintFastFileErrors(const char* fastfile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void G_PrintAllFastFileErrors()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_InitGame(int levelTime, int randomSeed, int restart, int savepersist)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_ShutdownGame(int freeScripts)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SendScoreboardMessageToAllIntermissionClients()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int SortRanks(const void* a, const void* b)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CalculateRanks()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ExitLevel()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_LogPrintf(const char* fmt, <NoType> )
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CheckVote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_UpdateObjectiveToClients()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_UpdateHudElemsToClients()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_RunThink(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DebugDumpAnims()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_XAnimUpdateEnt(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool DoPerFrameNotify(struct gentity_s* ent, bool isCurrently, bool wasPreviously, unsigned short begin, unsigned short end)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void G_ClientDoPerFrameNotifies(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ShowEntityInfo_Items(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ShowEntityInfo()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void G_RunFrameForEntity(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_RunFrame(int levelTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_TraceCapsule(struct trace_t* results, const float* start, const float* mins, const float* maxs, const float* end, int passEntityNum, int contentmask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_TraceCapsuleComplete(const float* start, const float* mins, const float* maxs, const float* end, int passEntityNum, int contentmask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_LocationalTrace(struct trace_t* results, const float* start, const float* end, int passEntityNum, int contentmask, unsigned char* priorityMap)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_LocationalTraceAllowChildren(struct trace_t* results, const float* start, const float* end, int passEntityNum, int contentmask, unsigned char* priorityMap)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_LocationalTracePassed(const float* start, const float* end, int passEntityNum, int passEntityNum1, int contentmask, unsigned char* priorityMap)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_SightTrace(int* hitNum, const float* start, const float* end, int passEntityNum, int contentmask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_AddDebugString(const float* xyz, const float* color, float scale, const char* text, int duration)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool G_EntityIsTemp(const int entNum)
{

}

#endif // __UNIMPLEMENTED__
