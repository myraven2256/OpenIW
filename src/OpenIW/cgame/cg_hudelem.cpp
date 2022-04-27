//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void CG_HudElemRegisterDvars()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DirectiveFakeIntroSeconds(int localClientNum, const char* arg0, char* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ParseDirective(const char* directive, char* resultName, char* resultArg0)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GetHudelemDirective(int localClientNum, const char* directive, char* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ReplaceDirective(int localClientNum, unsigned int* searchPos, unsigned int* dstLen, char* dstString)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_TranslateHudElemMessage(int localClientNum, const char* message, const char* messageType, char* hudElemString)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SafeTranslateHudElemString(int localClientNum, int index, char* hudElemString)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float HudElemStringWidth(const char* string, const struct cg_hudelem_t* cghe)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int GetHudElemTime(const struct hudelem_s* elem, int timeNow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* HudElemTimerString(const struct hudelem_s* elem, int timeNow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* HudElemTenthsTimerString(const struct hudelem_s* elem, int timeNow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float HudElemMaterialSpecifiedWidth(const struct ScreenPlacement* scrPlace, int alignScreen, int sizeVirtual, const struct cg_hudelem_t* cghe)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float HudElemMaterialSpecifiedHeight(const struct ScreenPlacement* scrPlace, int alignScreen, int sizeVirtual, const struct cg_hudelem_t* cghe)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float HudElemMaterialWidth(const struct ScreenPlacement* scrPlace, const struct hudelem_s* elem, const struct cg_hudelem_t* cghe)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float HudElemMaterialHeight(const struct ScreenPlacement* scrPlace, const struct hudelem_s* elem, const struct cg_hudelem_t* cghe)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float HudElemWidth(const struct ScreenPlacement* scrPlace, const struct hudelem_s* elem, const struct cg_hudelem_t* cghe)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float HudElemHeight(const struct ScreenPlacement* scrPlace, const struct hudelem_s* elem, const struct cg_hudelem_t* cghe)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float AlignHudElemX(int alignOrg, float x, float width)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float AlignHudElemY(int alignOrg, float y, float height)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GetHudElemOrg(const struct ScreenPlacement* scrPlace, int alignOrg, int alignScreen, float xVirtual, float yVirtual, float width, float height, float* orgX, float* orgY)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float HudElemMovementFrac(const struct hudelem_s* elem, int timeNow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SetHudElemPos(const struct ScreenPlacement* scrPlace, const struct hudelem_s* elem, struct cg_hudelem_t* cghe)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float OffsetHudElemY(const struct hudelem_s* elem, const struct cg_hudelem_t* cghe, float offsetY)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ConsolidateHudElemText(struct cg_hudelem_t* cghe, char* hudElemString)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CopyStringToHudElemString(const char* string, char* hudElemString)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GetHudElemInfo(int localClientNum, const struct hudelem_s* elem, struct cg_hudelem_t* cghe, char* hudElemString)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void HudElemColorToVec4(const union hudelem_color_t* hudElemColor, float* resultColor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DrawHudElemString(int localClientNum, const struct ScreenPlacement* scrPlace, const char* text, const struct hudelem_s* elem, struct cg_hudelem_t* cghe)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DrawHudElemClock(int localClientNum, const struct hudelem_s* elem, const struct cg_hudelem_t* cghe)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DrawHudElemMaterial(int localClientNum, const struct hudelem_s* elem, struct cg_hudelem_t* cghe)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float HudElemWaypointHeight(int localClientNum, const struct hudelem_s* elem)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GetViewAxisProjections(const struct refdef_s* refdef, const float* worldPoint, float* projections)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool WorldPosToScreenPos(int localClientNum, const float* worldPos, float* outScreenPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ClampScreenPosToEdges(int localClientNum, float* point, float padLeft, float padRight, float padTop, float padBottom, float* resultNormal, float* resultDist)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float GetScaleForDistance(int localClientNum, const float* worldPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DrawOffscreenViewableWaypoint(int localClientNum, const struct hudelem_s* elem)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DrawSingleHudElem2d(int localClientNum, const struct hudelem_s* elem)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CopyInUseHudElems(struct hudelem_s** elems, int* elemCount, struct hudelem_s* elemSrcArray, int elemSrcArrayCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int compare_hudelems(const void* pe0, const void* pe1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int GetSortedHudElems(int localClientNum, struct hudelem_s** elems)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_Draw2dHudElems(int localClientNum, int foreground)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void AddDrawSurfForHudElemWaypoint(int localClientNum, const struct hudelem_s* elem)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_AddDrawSurfsFor3dHudElems(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__
