//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static int LB_XUserDataToInt(struct _XUSER_DATA* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LB_IntToXUserData(struct _XUSER_DATA* xdata, const int value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LB_PrintPlayerStats(struct _XUSER_STATS_READ_RESULTS* stats)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int LB_CompareXUserStatsRowRanks(const void* r1, const void* r2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool LB_Enumerate(int controllerIndex, struct Leaderboard* lb, void* hEnum, void* pvBuffer, unsigned long cbBuffer, const int taskType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool LB_GetByRank(struct Leaderboard* lb, const int controllerIndex, const unsigned int topRank)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool LB_GetByPlayer(struct Leaderboard* lb, const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool LB_GetFriendStats(const int controllerIndex, struct Leaderboard* lb)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool LB_GetFriends(struct Leaderboard* lb, const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LB_SortXUserStatsByRank(struct _XUSER_STATS_READ_RESULTS* stats)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int LB_CalcPlayerIndex(const int localControllerIndex, struct _XUSER_STATS_READ_RESULTS* stats)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LB_UploadPlayersCmd()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LB_FlushCmd()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LB_DownloadPlayersCmd()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LB_SetStat(const int localControllerIndex, enum LbStatEnum statId, int value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LB_SetStatsCmd()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LB_ShowStatsCmd()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LB_DownByRankCmd()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LB_ShowCmd()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults LB_UploadPlayerStatsComplete(const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults LB_ReadLeaderboardComplete(const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults LB_GetFriendsComplete(const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool LB_CalcOffset(const int offset, struct Leaderboard* lb)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct _XUSER_STATS_READ_RESULTS* LB_UpdateLeaderboard(const int localClientNum, enum LbType lbType, const int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LB_Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int LB_FeederCount(const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LB_FeederSelection(const int localClientNum, int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LB_OverrideCursorPos(const int viewmax, int* cursorPos, int* startPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LB_ForceRefresh()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LB_OnSelect(const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int LB_GetXUserCol(struct _XUSER_STATS_ROW* row, int colId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LB_MapStat(const int lbStatId, const int statId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LB_UpdateNeeded(const int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool LB_UploadPlayerStats(const int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LB_ClearPlayerStats(const int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LB_GetRankIconForXp(struct _XUSER_STATS_ROW* row, enum LbType type, struct Material** handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static char* LB_KillsFeederItemText(struct _XUSER_STATS_ROW* row, int col, struct Material** material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static char* LB_WinsFeederItemText(struct _XUSER_STATS_ROW* row, int col, struct Material** material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static char* LB_XpFeederItemText(struct _XUSER_STATS_ROW* row, int col, struct Material** material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static char* LB_AccuracyFeederItemText(struct _XUSER_STATS_ROW* row, int col, struct Material** material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static char* LB_TrueSkillFeederItemText(struct _XUSER_STATS_ROW* row, int col, struct Material** material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LB_CheckOngoingTasks()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LB_EndOngoingTasks()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* LB_FeederItemText(const int localClientNum, int index, int column, struct Material** material)
{

}

#endif // __UNIMPLEMENTED__
