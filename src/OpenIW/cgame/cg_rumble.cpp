//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static struct RumbleGlobals* GetRumbleGlobals(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Rumble_Strcpy(unsigned char* member, const char* keyValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ParseRumbleGraph(struct RumbleGraph* graph, const char* buffer, const char* fileName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ReadRumbleGraph(struct RumbleGraph* graph, const char* rumbleFileName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool LoadRumbleGraph(struct RumbleGraph* rumbleGraphArray, struct RumbleInfo* info, const char* highRumbleFileName, const char* lowRumbleFileName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CG_LoadRumble(struct RumbleGraph* rumbleGraphArray, struct RumbleInfo* info, const char* name, int rumbleNameIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_RegisterRumbles(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DrawActiveRumbles(int localClientNum, const struct ActiveRumble* activeRumbleArray)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void InvalidateActiveRumble(struct ActiveRumble* ar)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RemoveInactiveRumbles(int localClientNum, struct ActiveRumble* activeRumbleArray)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CalcActiveRumbles(int localClientNum, struct ActiveRumble* activeRumbleArray, const float* rumbleReceiverPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_UpdateRumble(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int GetRumbleInfoIndexFromName(int localClientNum, const char* rumbleName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int FindClosestToDyingActiveRumble(const struct cg_s* cgameGlob, const struct ActiveRumble* activeRumbleArray)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool DuplicateRumbleExists(const struct cg_s* cgameGlob, struct ActiveRumble* arArray, const struct RumbleInfo* info, bool loop, enum RumbleSourceType type, int entityNum, const float* pos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct ActiveRumble* NextAvailableRumble(const struct cg_s* cgameGlob, struct ActiveRumble* arArray)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PlayRumbleInternal(int localClientNum, const char* rumbleName, bool loop, enum RumbleSourceType type, int entityNum, const float* pos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_PlayRumbleOnEntity(int localClientNum, const char* rumbleName, int entityNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_PlayRumbleOnPosition(int localClientNum, const char* rumbleName, const float* pos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_PlayRumbleLoopOnEntity(int localClientNum, const char* rumbleName, int entityNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_PlayRumbleLoopOnPosition(int localClientNum, const char* rumbleName, const float* pos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_PlayRumbleOnClient(int localClientNum, const char* rumbleName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_PlayLoopRumbleOnClient(int localClientNum, const char* rumbleName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_StopRumble(int localClientNum, int entityNum, const char* rumbleName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_StopAllRumbles(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_SetRumbleReceiver(int localClientNum, int entityNum, const float* position)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_DrawRumbleDebug(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RumbleGraphEventSaveToFile(const struct RumbleDevguiGraphInfo* graphInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RumbleGraphEventCallback(const struct DevGraph* graph, enum DevEventType event, int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RumbleGraphTextCallback(const struct DevGraph* graph, const float inputX, const float inputY, char* text, const int textLength)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void InitDevguiRumbleGraphInteral(const char* rumbleName, struct RumbleGraph* rumbleGraph, struct RumbleInfo* rumbleInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_InitDevguiRumbleGraph(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__
