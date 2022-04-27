//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_cl_keys()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Field_DrawTextOverride(int localClientNum, const struct field_t* edit, int x, int y, int horzAlign, int vertAlign, const char* str, int drawLen, int cursorPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Field_Draw(int localClientNum, struct field_t* edit, int x, int y, int horzAlign, int vertAlign)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Field_AdjustScroll(const struct ScreenPlacement* scrPlace, struct field_t* edit)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Field_Paste(int localClientNum, const struct ScreenPlacement* scrPlace, struct field_t* edit)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Field_KeyDownEvent(int localClientNum, const struct ScreenPlacement* scrPlace, struct field_t* edit, int key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Field_CharEvent(int localClientNum, const struct ScreenPlacement* scrPlace, struct field_t* edit, int ch)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FindMatches(const char* s)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PrintMatches(const char* s)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void keyConcatArgs()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ConcatRemaining(const char* src, const char* start)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ReplaceConsoleInputArgument(int replaceCount, const char* replacement)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CompleteCmdArgument()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CompleteDvarArgument()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UpdateMatches(bool searchCmds, int* matchLenAfterCmds, int* matchLenAfterDvars)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CompleteCommand()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Console_IsRconCmd(const char* commandString)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Console_IsClientDisconnected()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Console_IsScrollUpKey(int key, int isShiftDown, int isCtrlDown)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Console_IsScrollDownKey(int key, int isShiftDown, int isCtrlDown)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Console_Key(int localClientNum, int key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Message_Key(int localClientNum, int key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Key_GetOverstrikeMode(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Key_SetOverstrikeMode(int localClientNum, int state)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Key_IsDown(int localClientNum, int keynum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Key_StringToKeynum(const char* str)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Key_IsValidGamePadChar(const char key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Key_KeynumToString(int keynum, int translate)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Key_SetBinding(int localClientNum, int keynum, const char* binding)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Key_GetBinding(int localClientNum, int keynum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Key_GetCommandAssignmentInternal(int localClientNum, const char* command, int* twokeys, int gamePadOnly)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Key_GetCommandAssignment(int localClientNum, const char* command, int* twokeys)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Key_IsCommandBound(int localClientNum, const char* command)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Key_Unbind_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Key_Unbindall_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Key_Bind_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Key_WriteBindingsToBuffer(int localClientNum, char* buffer, int bufferSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Key_WriteBindings(int localClientNum, void* f)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Key_Bindlist_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_InitKeyCommands()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CL_MouseInputShouldBypassMenus(int localClientNum, int key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CL_IsDemoAbortKey(int key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_KeyEvent(int localClientNum, int key, const int down, const unsigned int time)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CL_ConsoleCharEvent(int localClientNum, int key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_CharEvent(int localClientNum, int key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Key_ClearStates(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CL_GetKeyBindingInternal(int localClientNum, const char* command, char* keyNames[0x128], int gamePadOnly)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CL_GetKeyBinding(int localClientNum, const char* command, char* keyNames[0x128])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CL_GetGamePadBinding(int localClientNum, const char* command, char* keyNames[0x128])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CL_IsKeyPressed(const int localClientNum, const char* keyName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Key_Shutdown()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Key_IsCatcherActive(int localClientNum, int mask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Key_AddCatcher(int localClientNum, int orMask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Key_RemoveCatcher(int localClientNum, int andMask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Key_SetCatcher(int localClientNum, int catcher)
{

}

#endif // __UNIMPLEMENTED__
