//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static float Item_GetRectPlacementX(int alignX, float x0, float containerWidth, float selfWidth)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Item_GetTextPlacementX(int alignX, float x0, float containerWidth, float selfWidth)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Item_GetRectPlacementY(int alignY, float y0, float containerHeight, float selfHeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Item_GetTextPlacementY(int alignY, float y0, float containerHeight, float selfHeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Menu_Setup(struct UiContext* dc)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LerpColor(float* a, float* b, float* c, float t)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Color_Parse(const char** p, float* c[0x4])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int String_Parse(const char** p, char* out, int len)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GradientBar_Paint(struct rectDef_s* rect, float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Fade(int* flags, float* f, float clamp, int* nextTime, int offsetTime, int bFlags, float fadeAmount, float fadeInAmount, struct UiContext* dc)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Window_Paint(struct UiContext* dc, struct windowDef_t* w, float fadeAmount, float fadeInAmount, float fadeClamp, float fadeCycle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct itemDef_s* Menu_ClearFocus(struct UiContext* dc, struct menuDef_t* menu)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Rect_ContainsPoint(int localClientNum, const struct rectDef_s* rect, float x, float y)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Menu_ItemsMatchingGroup(struct menuDef_t* menu, const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct itemDef_s* Menu_GetMatchingItemByNumber(struct menuDef_t* menu, int index, const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_SetColor(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_SetBackground(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct itemDef_s* Menu_FindItemByName(struct menuDef_t* menu, const char* p)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_SetItemColor(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Menu_ShowItemByName(int localClientNum, struct menuDef_t* menu, const char* p, int bShow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Menu_FadeItemByName(int localClientNum, struct menuDef_t* menu, const char* p, int fadeOut)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Menus_RemoveFromStack(struct UiContext* dc, struct menuDef_t* pMenu)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Menus_AddToStack(struct UiContext* dc, struct menuDef_t* pMenu)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Menus_MenuIsInStack(struct UiContext* dc, struct menuDef_t* menu)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct menuDef_t* Menus_FindByName(const struct UiContext* dc, const char* p)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Menus_HideByName(const struct UiContext* dc, const char* menuName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Menus_ShowByName(const struct UiContext* dc, const char* windowName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Menu_LoseFocusDueToOpen(struct UiContext* dc, struct menuDef_t* menu)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Menu_CallOnFocusDueToOpen(struct UiContext* dc, struct menuDef_t* menu)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Menu_GainFocusDueToClose(struct UiContext* dc, struct menuDef_t* menu)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Menu_RunCloseScript(struct UiContext* dc, struct menuDef_t* menu)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Menus_Close(struct UiContext* dc, struct menuDef_t* menu)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Menus_CloseByName(struct UiContext* dc, const char* p)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Menus_EscByName(struct UiContext* dc, const char* p)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Menus_SetFocusToItem(struct UiContext* dc, const char* menuName, const char* itemName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Menus_CloseAll(struct UiContext* dc)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_Show(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_Hide(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_FadeIn(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_FadeOut(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_ShowMenu(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_HideMenu(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_Open(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_OpenForGameType(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_CloseForGameType(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_StatSetUsingStatsTable(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_StatBitMaskGetArgs(struct UiContext* dc, struct itemDef_s* item, const char** args, int* statNum, int* bitMask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_StatSetBitMask(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_StatClearBitMask(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_Close(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_InGameOpen(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_InGameClose(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct itemDef_s* Menu_FocusFirstSelectableItem(struct UiContext* dc, struct menuDef_t* menu)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_FocusFirstInMenu(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_SetFocus(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_SetFocusByDvar(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_SetDvar(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_ExecHandler(int localClientNum, int controllerIndex, struct itemDef_s* item, const char** args, function * textCallback)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_AddTextWrapper(int clientNum, int controllerIndex, const char* text)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_Exec(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_ExecNow(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_ConditionalExecHandler(int localClientNum, struct itemDef_s* item, const char** args, function * shouldExec, function * textCallback)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_ConditionalResponseHandler(int localClientNum, struct itemDef_s* item, const char** args, function * shouldRespond)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Script_ExecIfStringsEqual(const char* dvarValue, const char* testValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Script_ExecIfIntsEqual(const char* dvarValue, const char* testValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Script_ExecIfFloatsEqual(const char* dvarValue, const char* testValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_ExecOnDvarStringValue(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_ExecOnDvarIntValue(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_ExecOnDvarFloatValue(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_ExecNowOnDvarStringValue(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_ExecNowOnDvarIntValue(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_ExecNowOnDvarFloatValue(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_RespondOnDvarStringValue(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_RespondOnDvarIntValue(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_RespondOnDvarFloatValue(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const struct UILocalVar* Script_ParseLocalVar(struct UiContext* dc, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_SetLocalVarBool(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_SetLocalVarInt(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_SetLocalVarFloat(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_SetLocalVarString(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_FeederTop(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_FeederBottom(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_Play(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_ShowGamerCard(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Script_KickPlayer(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Script_GetKickPlayerQuestionString(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_ScriptMenuResponse(struct UiContext* dc, struct itemDef_s* item, const char** args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Item_RunScript(struct UiContext* dc, struct itemDef_s* item, const char* s)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Item_SetFocus(struct UiContext* dc, struct itemDef_s* item, float x, float y)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Item_ListBox_MaxScroll(int localClientNum, struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Item_ListBox_Viewmax(struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Item_ListBox_ThumbPosition(int localClientNum, struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Item_ListBox_ThumbDrawPosition(struct UiContext* dc, struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Item_Slider_ThumbPosition(int localClientNum, struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Item_OwnerDraw_HandleKey(struct itemDef_s* item, int key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Item_ListBox_SetCursorPos(int localClientNum, struct itemDef_s* item, int viewmax, int newCursorPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Item_ListBox_Page(int localClientNum, struct itemDef_s* item, int max, int scrollmax, int viewmax, int delta)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Item_ListBox_Scroll(int localClientNum, struct itemDef_s* item, int max, int scrollmax, int viewmax, int delta)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Item_ListBox_IsActionKey(int key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Item_ListBox_HandleKey(struct UiContext* dc, struct itemDef_s* item, int key, int down, int force)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Item_ShouldHandleKey(struct UiContext* dc, struct itemDef_s* item, int key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Item_YesNo_IsActionKey(int key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Item_YesNo_HandleKey(struct UiContext* dc, struct itemDef_s* item, int key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Item_Multi_CountSettings(struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Item_DvarEnum_CountSettings(struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Item_Multi_FindDvarByValue(struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* Item_Multi_Setting(struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Item_DvarEnum_EnumIndex(struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* Item_DvarEnum_Setting(struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Item_List_IsCountUpKey(int key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Item_List_IsCountDownKey(int key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Item_List_NextEntryForKey(int key, int current, int count)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Item_Multi_HandleKey(struct UiContext* dc, struct itemDef_s* item, int key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Item_DvarEnum_HandleKey(struct UiContext* dc, struct itemDef_s* item, int key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Item_IsTextField(const struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Item_TextField_BeginEdit(int localClientNum, struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Item_TextField_EnsureCursorVisible(int localClientNum, struct itemDef_s* item, const char* text)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Item_TextField_HandleKey(struct UiContext* dc, struct itemDef_s* item, int key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Item_Slider_IsLeftKey(int key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Item_Slider_IsRightKey(int key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Item_Slider_HandleKey(struct UiContext* dc, struct itemDef_s* item, int key, int down)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Item_HandleKey(struct UiContext* dc, struct itemDef_s* item, int key, int down)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Item_Action(struct UiContext* dc, struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct itemDef_s* Menu_SetPrevCursorItem(struct UiContext* dc, struct menuDef_t* menu)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct itemDef_s* Menu_SetNextCursorItem(struct UiContext* dc, struct menuDef_t* menu)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Menus_Open(struct UiContext* dc, struct menuDef_t* menu)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Menus_OpenByName(struct UiContext* dc, const char* p)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Menus_PrintAllLoadedMenus(struct UiContext* dc)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct rectDef_s* Item_CorrectedTextRect(int localClientNum, struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Menu_CheckOnKey(struct UiContext* dc, struct menuDef_t* menu, int key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Menu_HandleKey(struct UiContext* dc, struct menuDef_t* menu, int key, int down)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ToWindowCoords(float* x, float* y, const struct windowDef_t* window)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct Font_s* Item_GetFont(int localClientNum, const struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Item_SetTextExtents(int localClientNum, struct itemDef_s* item, const char* text)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Item_TextColor(struct UiContext* dc, struct itemDef_s* item, float* newColor[0x4])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int UI_PickWordWrapLineWidth(const char* text, int bufferSize, struct Font_s* font, float normalizedScale, int targetLineCount, int widthGuess, int widthLimit)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void _DrawWrappedText(const struct ScreenPlacement* scrPlace, const char* text, const struct rectDef_s* rect, struct Font_s* font, float x, float y, float scale, const float* color, int style, int textAlignMode, struct rectDef_s* textRect, bool subtitle, const float* subtitleGlowColor, bool cinematic)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_DrawWrappedText(const struct ScreenPlacement* scrPlace, const char* text, const struct rectDef_s* rect, struct Font_s* font, float x, float y, float scale, const float* color, int style, int textAlignMode, struct rectDef_s* textRect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_DrawWrappedTextSubtitled(const struct ScreenPlacement* scrPlace, const char* text, const struct rectDef_s* rect, struct Font_s* font, float x, float y, float scale, const float* color, int style, int textAlignMode, struct rectDef_s* textRect, const float* subtitleGlowColor, bool cinematic)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Item_Text_AutoWrapped_Paint(int localClientNum, struct itemDef_s* item, const char* text, const float* color, bool subtitle, const float* subtitleGlowColor, bool cinematic)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Item_Text_GetSubtitle(char* outText, int outTextSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Item_Text_Paint(struct UiContext* dc, struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Item_TextField_Paint(struct UiContext* dc, struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Item_YesNo_Paint(struct UiContext* dc, struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Item_Multi_Paint(struct UiContext* dc, struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Item_DvarEnum_Paint(struct UiContext* dc, struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GetPlatformCommand(const char* command, const char** consoleCommand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int UI_GetKeyBindingLocalizedString(int localClientNum, const char* command, char* keys)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Item_Slider_Paint(struct UiContext* dc, struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Item_Bind_Paint(struct UiContext* dc, struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Display_KeyBindPending()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Item_Bind_IsActionKey(struct UiContext* dc, struct itemDef_s* item, int key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Item_Bind_HandleKey(struct UiContext* dc, struct itemDef_s* item, int key, int down)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Item_GetTextAlignAdj(const int alignment, float width, float textWidth)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Item_ListBox_PaintTextElem(const int localClientNum, struct itemDef_s* item, int row, int col, int maxChars, int alignment, float x, float y, float w, float h)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Item_ListBox_PaintBackground(const int localClientNum, struct itemDef_s* item, float x, float y)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Item_ListBox_PaintHighlight(const int localClientNum, struct itemDef_s* item, float x, float y)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Item_ListBox_Paint(struct UiContext* dc, struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Item_OwnerDraw_Paint(struct UiContext* dc, struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Item_GameMsgWindow_Paint(struct UiContext* dc, struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Item_Paint(struct UiContext* dc, struct itemDef_s* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct menuDef_t* Menu_GetFocused(struct UiContext* dc)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Menu_SetFeederSelection(struct UiContext* dc, struct menuDef_t* menu, int feeder, int index, const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Menus_AnyFullScreenVisible(struct UiContext* dc)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Menu_IsVisible(struct UiContext* dc, struct menuDef_t* menu)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Menu_Paint(struct UiContext* dc, struct menuDef_t* menu)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Menu_Count(struct UiContext* dc)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Menu_PaintAll_BeginVisibleList(char* stringBegin, unsigned int stringSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Menu_PaintAll_AppendToVisibleList(char* stringBegin, unsigned int stringSize, const char* stringToAppend)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Menu_PaintAll_DrawVisibleList(char* stringBegin, struct UiContext* dc)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Menu_PaintAll(struct UiContext* dc)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void TRACK_ui_shared()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UI_AddMenu(struct UiContext* dc, struct menuDef_t* menu)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UI_AddMenuList(struct UiContext* dc, struct MenuList* menuList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int UI_PlayLocalSoundAlias(int localClientNum, struct snd_alias_list_t* aliasList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int UI_PlayLocalSoundAliasByName(int localClientNum, const char* aliasname)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int UI_GetForcedMenuScreen()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int UI_GetMenuScreen()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int UI_GetMenuScreenForError()
{

}

#endif // __UNIMPLEMENTED__
