//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static struct uiInfo_s* UI_GetClientInfo(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct UILocalVarContext* UI_GetLocalVarsContext(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_RegisterDvars()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void TRACK_ui_main()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_AssetCache()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_DrawSides(const struct ScreenPlacement* scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, float size, const float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_DrawTopBottom(const struct ScreenPlacement* scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, float size, const float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_DrawRect(const struct ScreenPlacement* scrPlace, float x, float y, float width, float height, int horzAlign, int vertAlign, float size, const float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_DrawHighlightRect(const struct ScreenPlacement* scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, float size, const float* hiColor, const float* loColor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int UI_TextWidth(const char* text, int maxChars, struct Font_s* font, float scale)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int UI_TextHeight(struct Font_s* font, float scale)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_DrawText(const struct ScreenPlacement* scrPlace, const char* text, int maxChars, struct Font_s* font, float x, float y, int horzAlign, int vertAlign, float scale, const float* color, int style)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_DrawTextWithGlow(const struct ScreenPlacement* scrPlace, const char* text, int maxChars, struct Font_s* font, float x, float y, int horzAlign, int vertAlign, float scale, const float* color, int style, const float* glowColor, bool subtitle, bool cinematic)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_DrawTextNoSnap(const struct ScreenPlacement* scrPlace, const char* text, int maxChars, struct Font_s* font, float x, float y, int horzAlign, int vertAlign, float scale, const float* color, int style)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_DrawTextWithCursor(const struct ScreenPlacement* scrPlace, const char* text, int maxChars, struct Font_s* font, float x, float y, int horzAlign, int vertAlign, float scale, const float* color, int style, int cursorPos, char cursor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct Font_s* UI_GetFontHandle(const struct ScreenPlacement* scrPlace, int fontEnum, float scale)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_UpdateTime(int localClientNum, int realtime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_DrawBuildNumber(const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_Refresh(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_Shutdown(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static char* GetMenuBuffer_FastFile(const char* filename)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

char* GetMenuBuffer(const char* filename)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct MenuList* Load_ScriptMenuInternal(const char* pszMenu, int imageTrack)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Load_ScriptMenu(int localClientNum, const char* pszMenu, int imageTrack)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* UI_GetMapDisplayName(const char* pszMap)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* UI_GetMapDisplayNameFromPartialLoadNameMatch(const char* mapName, int* mapLoadNameLen)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* UI_GetGameTypeDisplayName(const char* pszGameType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int UI_OwnerDrawWidth(int ownerDraw, struct Font_s* font, float scale)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_BuildPlayerList(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_BuildCustomGameTypeList(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_DrawServerRefreshDate(int localClientNum, struct rectDef_s* rect, struct Font_s* font, float scale, float* color, int textStyle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_DrawKeyBindStatus(int localClientNum, struct rectDef_s* rect, struct Font_s* font, float scale, float* color, int textStyle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_DrawMapLevelshot(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_LoadIngameMenus(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_SetMap(const char* mapname, const char* gametype)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_DrawLocalTalking(struct SessionData_s* session, int localClientNum, const struct rectDef_s* rect, const float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int UI_GetTalkerClientNum(int localClientNum, const int num)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_DrawTalkerNum(int localClientNum, const int num, struct rectDef_s* rect, struct Font_s* font, float* color, float textScale, int style)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_DrawPartyStatus(int localClientNum, struct rectDef_s* rect, struct Font_s* font, float* color, float textScale, int style)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_DrawReservedSlots(const int localClientNum, struct rectDef_s* rect, struct Font_s* font, float* color, float textScale, int style)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_DrawLoggedInUser(struct rectDef_s* rect, struct Font_s* font, float scale, float* color, int textStyle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_DrawLoggedInUserName(struct rectDef_s* rect, struct Font_s* font, float scale, float* color, int textStyle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_DrawPlaylistName(const int localClientNum, struct rectDef_s* rect, struct Font_s* font, float* color, float textScale, int style)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* GetXpLockDescription(const int localClientNum, const int playlistId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_DrawPlaylistDescription(const int localClientNum, struct rectDef_s* rect, struct Font_s* font, float* color, float textScale, int style, int textAlignment)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_OwnerDraw(int localClientNum, float x, float y, float w, float h, int horzAlign, int vertAlign, float text_x, float text_y, int ownerDraw, int ownerDrawFlags, int align, float special, struct Font_s* font, float scale, float* color, struct Material* material, int textStyle, struct rectDef_s parentRect, int textAlignMode)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int UI_OwnerDrawVisible(int flags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int UI_OwnerDrawHandleKey(int ownerDraw, int flags, float* special, int key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int UI_ServersQsortCompare(const void* arg1, const void* arg2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_ServersSort(int column, int force)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int UI_CheckExecKey(int localClientNum, int key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_VerifyLanguage()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_UpdateDisplayServers(struct uiInfo_s* uiInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int String_ParseInternal(const char** p, const char** out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool UI_GetOpenOrCloseMenuOnDvarArgs(const char** args, const char* cmd, char* dvarName, int dvarNameLen, char* testValue, int testValueLen, char* menuName, int menuNameLen)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool UI_DvarValueTest(const char* cmd, const char* dvarName, const char* testValue, bool wantMatch)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_OpenMenuOnDvar(struct uiInfo_s* uiInfo, const char* cmd, const char* menuName, const char* dvarName, const char* testValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_CloseMenuOnDvar(struct uiInfo_s* uiInfo, const char* cmd, const char* menuName, const char* dvarName, const char* testValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_RunMenuScript(int localClientNum, const char** args, const char* actualScript)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_InsertServerIntoDisplayList(int num, int position)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_BinaryServerInsertion(int num)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_ClearDisplayedServers()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_BuildServerDisplayList(struct uiInfo_s* uiInfo, int force)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_BuildServerStatus(struct uiInfo_s* uiInfo, int force)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int UI_FeederCount(int localClientNum, float feederID)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_UpdatePendingPings(struct uiInfo_s* uiInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UpdatePartyDvars(const int localClientNum, unsigned __int64 xuid)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* UI_FeederItemText(int localClientNum, struct itemDef_s* item, const float feederID, int index, int column, struct Material** handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int UI_FeederItemEnabled(int localClientNum, float feederID, int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct Material* UI_FeederItemImage(const float feederID, int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const void UI_FeederItemColor(int localClientNum, struct itemDef_s* item, const float feederID, int index, int column, float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_OverrideCursorPos(int localClientNum, struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_FeederSelection(int localClientNum, float feederID, int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_GetGameTypesList_FastFile()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_GetGameTypesList()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* UI_GetRandomGametype()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int UI_GetGametypeCount()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int UI_GetCustomGametypeCount()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_Pause(int localClientNum, int b)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_OpenMenu_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_ListMenus_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_SelectStringTableEntryInDvar_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool UI_VerifyString(const char* str, const wchar_t* strOrig)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int LoadCustomModeDvarNames(const char** dvarNames, char* dvarBuffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_CustomModeSaveToBuffer(char* buffer, unsigned int buflen)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_CustomModeLoadFromBuffer(char* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_CustomModeSetCancelState_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_CustomModeNew_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_CustomModeKeyboard_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_Keyboard_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_CustomModeDelete_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* GetLocaleString(unsigned long locale)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static char* stripLeadTrailingSpaces(const char* string)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_ClanKeyboardComplete(int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_ClanKeyboard_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_EnumerateSaved_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_CustomMode_Load_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_CustomMode_Save_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_CloseMenu_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_Init(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_KeyEvent(int localClientNum, int key, int down)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum uiMenuCommand_t UI_GetActiveMenu(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* UI_GetTopActiveMenuName(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int UI_SetActiveMenu(int localClientNum, int menu)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int UI_IsFullscreen(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_ShowAcceptInviteWarning(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Text_PaintCenter(const struct ScreenPlacement* scrPlace, const float x, const float y, struct Font_s* const font, const float scale, const float* color, const char* text, const float* glowColor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Text_PaintCenterWithDots(const struct ScreenPlacement* scrPlace, const float x, const float y, struct Font_s* const font, const float scale, const float* color, const char* text, const float* glowColor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_DrawConnectScreen(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float UI_GetBlurRadius(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_StopServerRefresh()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_DoServerRefresh(struct uiInfo_s* uiInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_StartServerRefresh(int localClientNum, int full)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* UI_SafeTranslateString(const char* reference)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int UI_AnyFullScreenMenuVisible(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int UI_AnyMenuVisible(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* UI_ReplaceConversionString(const char* sourceString, const char* replaceString)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* UI_ReplaceConversionInt(const char* sourceString, int replaceInt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* UI_ReplaceConversionInts(const char* sourceString, int numInts, int* replaceInts)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_FilterStringForButtonAnimation(char* str, unsigned int strMaxSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_ReplaceConversions(const char* sourceString, struct ConversionArguments* arguments, char* outputString, int outputStringSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_CloseAll(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_CloseFocusedMenu(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int UI_Popup(int localClientNum, const char* menu)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int UI_PopupScriptMenu(int localClientNum, const char* menuName, bool useMouse)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_ClosePopupScriptMenu(int localClientNum, bool allowResponse)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool UI_AllowScriptMenuResponse(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_CloseInGameMenu(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_CloseAllMenus(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Menu_IsMenuOpenAndVisible(const int localClientNum, const char* menuName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_OpenMenu(int localClientNum, const char* menuName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_CloseMenu(int localClientNum, const char* menuName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_EscMenu(int localClientNum, const char* menuName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_CloseXenonHudWaitScreen(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_ShowReadingSaveDevicePopup(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_HideReadingSaveDevicePopup(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool UI_ShouldDrawCrosshair()
{

}

#endif // __UNIMPLEMENTED__
