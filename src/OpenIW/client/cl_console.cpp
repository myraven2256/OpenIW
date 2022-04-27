//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_cl_console()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_ToggleConsole()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_OpenConsole(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_OpenConsoleOutput(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_CloseConsole(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_ChatModePublic_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_ChatModeTeam_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_GetTextCopy(char* text, int maxSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_ResetMessageWindowTimes(struct MessageWindow* msgwnd, int serverTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_TimeJumped(int localClientNum, int serverTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_NudgeMessageWindowTimes(struct MessageWindow* msgwnd, int serverTimeNudge, int serverTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_TimeNudged(int localClientNum, int serverTimeNudge)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_ClearMessageWindow(struct MessageWindow* msgwnd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_ClearNotify(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_ClearMiniConsole(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_ClearErrors(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_CheckResize()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_InitMessageWindow(struct MessageWindow* msgwnd, struct Message* messages, struct MessageLine* lines, char* text, int lineCount, int padding, int textPoolSize, int scrollTime, int fadeIn, int fadeOut)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_Clear_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_Shutdown()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_InitClientAssets()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_ShutdownClientAssets()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Con_GetDefaultMsgDuration(enum print_msg_dest_t dest)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_UpdateMessage(int localClientNum, struct MessageWindow* msgwnd, int duration)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_FreeFirstMessageWindowLine(struct MessageWindow* msgwnd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Con_NeedToFreeMessageWindowLine(struct MessageWindow* msgwnd, int charCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_CopyCurrentConsoleLineText(struct MessageWindow* msgwnd, struct MessageLine* msgLine)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int LatestActiveTypewrittenLineIdx(struct MessageWindow* msgwnd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PrintableCharsCount(const struct MessageWindow* msgwnd, struct MessageLine* line)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PrintTimeTotal(struct MessageWindow* msgwnd, struct MessageLine* line)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PrintTimeWriteOut(struct MessageWindow* msgwnd, struct MessageLine* line)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int GetNextValidPrintTimeForLine(int localClientNum, struct MessageWindow* msgwnd, int flags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_UpdateMessageWindowLine(int localClientNum, struct MessageWindow* msgwnd, int linefeed, int flags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct MessageWindow* Con_GetDestWindow(int localClientNum, enum print_msg_dest_t dest)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_UpdateNotifyMessageWindow(int localClientNum, int channel, int duration, int flags, enum print_msg_dest_t dest)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_UpdateNotifyMessage(int localClientNum, int channel, int duration, int flags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_UpdateNotifyLineWindow(int localClientNum, int channel, bool lineFeed, int flags, enum print_msg_dest_t dest)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_UpdateNotifyLine(int localClientNum, int channel, bool lineFeed, int flags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_Linefeed(int localClientNum, int channel, int flags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_InitMessageBuffer()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_OneTimeInit()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* CL_TextLineWrapPosition(const char* txt, int bufferSize, int pixelsAvailable, struct Font_s* font, float scale, int lineBroken)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static char CL_ConsolePrint_AddLine(int localClientNum, int channel, const char* txt, int duration, int pixelWidth, char color, int flags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_ConsolePrint(int localClientNum, int channel, const char* txt, int duration, int pixelWidth, int flags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_ConsoleFixPosition()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CL_AddDeathMessageChar(char* deathMsg, unsigned int deathMsgLen, unsigned int deathMsgMaxLen, char c)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CL_AddDeathMessageString(char* deathMsg, unsigned int deathMsgLen, unsigned int deathMsgMaxLen, const char* string)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned char CL_DeathMessageIconDimension(float size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CL_AddDeathMessageIcon(char* deathMsg, unsigned int deathMsgLen, unsigned int deathMsgMaxLen, struct Material* iconShader, float iconWidth, float iconHeight, bool horzFlipIcon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_DeathMessagePrint(int localClientNum, const char* attackerName, char attackerColorIndex, const char* victimName, char victimColorIndex, struct Material* iconShader, float iconWidth, float iconHeight, bool horzFlipIcon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_AutoCompleteFromList(const char** strings, unsigned int stringCount, const char* prefix, char* completed, unsigned int sizeofCompleted)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Con_TokenizeInput()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Con_AnySpaceAfterCommand()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int ConDrawInput_TextHeight(struct Font_s* font)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int ConDrawInput_TextWidth(const char* text)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ConDrawInput_Text(const char* str, const float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ConDrawInput_TextLimitChars(const char* str, int maxChars, const float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ConDrawInput_Newline()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ConDrawInput_Over(int amount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ConDrawInput_TextAndOver(const char* str, const float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ConDraw_Box(float x, float y, float w, float h, const float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ConDrawInput_Box(int lines, const float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Con_GetAutoCompleteColorCodedStringDiscontiguous(const char* query, const char* matchToText, int matchTextLen, char* colorCoded)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Con_GetAutoCompleteColorCodedStringContiguous(const char* query, const char* matchToText, int matchTextLen, char* colorCoded)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Con_GetAutoCompleteColorCodedString(const char* query, const char* matchToText, int matchTextLen, bool isDvarCommand, const char* originalCommand, char* colorCoded)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Con_IsAutoCompleteMatch(const char* query, const char* matchToText, int matchTextLen)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ConDrawInput_StringMatchesInputText(const char* str)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ConDrawInput_IncrMatchCounter(const char* str)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ConDrawInput_DvarMatch(const char* str)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int ConDrawInput_CompareStrings(const void* e0, const void* e1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int ConDrawInput_TextFieldFirstArgChar()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ConDrawInput_AutoCompleteArg(const char** stringList, int stringCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int ConDrawInput_GetDvarDescriptionLines(const struct dvar_s* dvar)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ConDrawInput_DetailedDvarMatch(const char* str)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ConDrawInput_DetailedCmdMatch(const char* str)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ConDrawInput_CmdMatch(const char* str)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_DrawAutoCompleteChoice(int localClientNum, bool isDvarCommand, const char* originalCommand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_DrawInputPrompt(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Con_HasTooManyMatchesToShow()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Con_IsDvarCommand(const char* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_DrawInput(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Con_CycleAutoComplete(int step)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Con_HasActiveAutoComplete()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Con_CommitToAutoComplete()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Con_CancelAutoComplete()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_AllowAutoCompleteCycling(bool isAllowed)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool LineVisible(const struct MessageWindow* msgwnd, int lineIdx, int time)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void TypewriterSounds(int localClientNum, const struct MessageWindow* msgwnd, struct MessageLine* line)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_DrawMessageLineOnHUD(int localClientNum, const struct ScreenPlacement* scrPlace, int x, int y, int charHeight, int horzAlign, int vertAlign, struct Font_s* font, const struct MessageWindow* msgwnd, int lineIdx, float* color, int textStyle, float msgwndScale, int textAlignMode)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_CullFinishedLines(int serverTime, struct MessageWindow* msgwnd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Con_GetMessageAlpha(struct Message* message, struct MessageWindow* msgwnd, int serverTime, bool scrollsIntoPlace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_DrawMessageWindowNewToOld(int localClientNum, struct MessageWindow* msgwnd, int x, int y, int hudCharHeight, int horzAlign, int vertAlign, bool up, struct Font_s* font, float* color, int textStyle, float msgwndScale, int textAlignMode)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_DrawMessageWindowOldToNew(int localClientNum, struct MessageWindow* msgwnd, int x, int y, int charHeight, int horzAlign, int vertAlign, bool up, struct Font_s* font, float* color, int textStyle, float msgwndScale, int textAlignMode)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CL_ShouldntDrawMessageWindow(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_DrawMessageWindow(int localClientNum, struct MessageWindow* msgwnd, int x, int y, int charHeight, int horzAlign, int vertAlign, struct Font_s* font, float* color, int textStyle, float msgwndScale, enum msgwnd_mode_t mode, int textAlignMode)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_DrawGameMessageWindow(int localClientNum, int windowIndex, int xPos, int yPos, int horzAlign, int vertAlign, struct Font_s* font, float fontScale, float* color, int textStyle, int textAlignMode, enum msgwnd_mode_t mode)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_DrawMiniConsole(int localClientNum, int xPos, int yPos, float alpha)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_DrawErrors(int localClientNum, int xPos, int yPos, float alpha)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Con_IsValidGameMessageWindow(int windowIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Con_IsGameMessageWindowActive(int localClientNum, int windowIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_DrawSay(int localClientNum, int x, int y)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_ToggleConsoleOutput()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_DrawOutputScrollBar(float x, float y, float width, float height)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_DrawOutputText(float x, float y, float width, float height)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* Con_GetVersionString()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_DrawOutputVersion(float x, float y, float width, float height)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_DrawOuputWindow()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Con_DrawSolidConsole(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_DrawConsole(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_PageUp()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_PageDown()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_Top()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_Bottom()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Con_Close(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Con_IsActive(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_PlayTextFXPulseSounds(int localClientNum, int currentTime, int strLength, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int* soundTimeKeeper)
{

}

#endif // __UNIMPLEMENTED__
