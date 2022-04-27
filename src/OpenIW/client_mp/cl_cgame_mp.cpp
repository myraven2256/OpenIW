//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_cl_cgame()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_GetScreenDimensions(int* width, int* height, float* aspect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float CL_GetScreenAspectRatioDisplayPixel()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CL_GetUserCmd(int localClientNum, int cmdNumber, struct usercmd_s* ucmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CL_GetCurrentCmdNumber(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_GetCurrentSnapshotNumber(int localClientNum, int* snapshotNumber, int* serverTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CL_GetSnapshot(int localClientNum, int snapshotNumber, struct snapshot_s* snapshot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_SetUserCmdWeapons(int localClientNum, int weapon, int offHandIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_SetUserCmdAimValues(int localClientNum, const float* kickAngles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_SetUserCmdOrigin(int localClientNum, const float* origin, const float* velocity, int bobCycle, int movementDir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_SetFOVSensitivityScale(int localClientNum, float scale)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_SetExtraButtons(int localClientNum, int buttons)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CL_ConfigstringModified(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_DumpReliableCommands(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CL_CGameNeedsServerCommand(int localClientNum, int serverCommandNumber)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_CM_LoadMap(const char* mapname)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_ShutdownCGame(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CL_DObjCreateSkelForBone(struct DObj_s* obj, int boneIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CL_SurfaceTypeFromName(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* CL_SurfaceTypeToName(int iTypeIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_SubtitlePrint(int localClientNum, const char* text, int duration, int lineWidth)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* CL_GetConfigString(int localClientNum, int configStringIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct snd_alias_t* CL_PickSoundAlias(const char* aliasname)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_FinishLoadingModels()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_GetDebugViewPos(float* pos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_RenderScene(const struct refdef_s* fd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_SetFullScreenViewport()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_SetViewport(int x, int y, int width, int height)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_DrawStretchPicPhysical(float x, float y, float w, float h, float s1, float t1, float s2, float t2, const float* color, struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_DrawStretchPicPhysicalRotateXY(float x, float y, float w, float h, float s1, float t1, float s2, float t2, float angle, const float* color, struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_DrawStretchPicPhysicalFlipST(float x, float y, float w, float h, float s1, float t1, float s2, float t2, const float* color, struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_DrawStretchPic(const struct ScreenPlacement* scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, float s1, float t1, float s2, float t2, const float* color, struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_DrawStretchPicFlipST(const struct ScreenPlacement* scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, float s1, float t1, float s2, float t2, const float* color, struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_DrawStretchPicRotatedST(const struct ScreenPlacement* scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, float centerS, float centerT, float radiusST, float scaleFinalS, float scaleFinalT, float angle, const float* color, struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_ProjectionSet2D()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_ProjectionSet3D()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_CapTurnRate(int localClientNum, float maxPitchSpeed, float maxYawSpeed)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_SetViewAngles(int localClientNum, const float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_SyncTimes(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int LoadWorld(const char* mapname)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_SetupScreenPlacements()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_StartLoading(const char* mapname, const char* gametype)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CL_InitMapLoad_FastFile(const char* mapName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_InitCGame(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CL_AdjustTimeDelta(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CL_FirstSnapshot(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_SetCGameTime(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_SetADS(int localClientNum, bool ads)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_DrawString(int x, int y, const char* pszString, int bShadow, int iCharHeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_DrawRect(const int x, const int y, const int width, const int height, const float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_ArchiveClientState(int localClientNum, struct MemoryFile* memFile, int segmentIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_LookupColor(unsigned char c, float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CL_UpdateColorInternal(const char* var_name, float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_UpdateColor()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CL_IsCgameInitialized(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__
