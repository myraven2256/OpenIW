//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_scr_debugger()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static char* Scr_FindBreakpointInfo(const char* codePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_AddBreakpoint(const unsigned char* codePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_RemoveBreakpoint(unsigned char* codePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_AddManualBreakpoint(unsigned char* codePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_RemoveManualBreakpoint(unsigned char* codePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_AddAssignmentBreakpoint(unsigned char* codePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_RemoveAssignmentBreakpoint(unsigned char* codePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_InitBreakpoints()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct Scr_Breakpoint* Scr_AllocBreakpoint()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_FreeBreakpoint(struct Scr_Breakpoint* breakpoint)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void* Scr_ScriptWindow::operator new(unsigned int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptWindow::operator delete(void* ptr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptWindow::SetScriptFile(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptWindow::SetCurrentLine(int line)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public const char* Scr_ScriptWindow::GetFilename()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptWindow::AddBreakpoint(struct Scr_Breakpoint** pBreakpoint, char* codePos, int builtinIndex, struct Scr_WatchElement_s* element, unsigned char type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_WriteElement(struct Scr_WatchElement_s* element)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct Scr_WatchElement_s* Scr_ReadElement()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_FreeLineBreakpoint(struct Scr_Breakpoint* breakpoint, bool deleteElement)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptWindow::GetSourcePos(unsigned int* start, unsigned int* end)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public bool Scr_ScriptWindow::AddBreakpointAtSourcePos(struct Scr_WatchElement_s* element, unsigned char breakpointType, bool user, struct Scr_Breakpoint** pBreakpoint, unsigned int startSourcePos, unsigned int endSourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptWindow::ToggleBreakpointInternal(struct Scr_WatchElement_s* element, bool force, bool overwrite, unsigned char breakpointType, bool user)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public const char* Scr_ScriptWindow::GetBreakpointCodePos()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_ToggleBreakpointRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_ResumeBreakpoints()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_MonitorCommand(const char* text)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_SetTempBreakpoint(const char* codePos, unsigned int threadId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_Step()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_StepRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptWindow::RunToCursor()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_RunToCursorRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptWindow::EnterCallInternal()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_EnterCallRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptWindow::Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void* Scr_AllocDebugMem(int size, const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_FreeDebugMem(void* ptr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_AbstractScriptList::Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_AbstractScriptList::Shutdown()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptList::AddFile(const char* filename, struct Scr_AddFileInfo* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Scr_CompareScriptWindowsNames(const void* a, const void* b)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptList::Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptList::Shutdown()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptCallStack::UpdateStack()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_SelectScriptLineRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct Scr_WatchElement_s* Scr_GetElementRoot(struct Scr_WatchElement_s* element)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public struct Scr_WatchElement_s* Scr_ScriptWatch::GetElementWithId_r(struct Scr_WatchElement_s* element, int id)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public struct Scr_WatchElement_s* Scr_ScriptWatch::GetElementWithId(int id)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public struct Scr_WatchElement_s** Scr_ScriptWatch::GetElementRef(struct Scr_WatchElement_s* element)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public struct Scr_WatchElement_s* Scr_ScriptWatch::GetElementPrev(struct Scr_WatchElement_s* element)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_UpdateWatchHeightRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Scr_IsSortWatchElement(struct Scr_WatchElement_s* element)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptWatch::ToggleExpandElement(struct Scr_WatchElement_s* element)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptWatch::ExpandElement(struct Scr_WatchElement_s* element, bool expand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_SelectElementRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_ExpandElementRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_ToggleExpandElementRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public struct Scr_WatchElement_s* Scr_ScriptWatch::CreateBreakpointElement(struct Scr_WatchElement_s* element, unsigned int bufferIndex, unsigned int sourcePos, bool user)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public struct Scr_WatchElement_s* Scr_ScriptWatch::PasteNonBreakpointElement(struct Scr_WatchElement_s* element, const char* text, bool user)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_PasteElementRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_InsertElementRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public struct Scr_WatchElement_s* Scr_ScriptWatch::DeleteElementInternal(struct Scr_WatchElement_s* element)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_DeleteElementRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public struct Scr_WatchElement_s* Scr_ScriptWatch::BackspaceElementInternal(struct Scr_WatchElement_s* element)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_BackspaceElementRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptWatch::Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptWatch::Shutdown()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct Scr_WatchElement_s* Scr_CreateWatchElement(const char* text, struct Scr_WatchElement_s** prevElem, const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_RemoveValue(struct Scr_WatchElement_s* element)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_FreeWatchElementChildrenStrict(struct Scr_WatchElement_s* element)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_FreeWatchElementText(struct Scr_WatchElement_s* element)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_FreeWatchElementChildren(struct Scr_WatchElement_s* element)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_FreeWatchElementChildrenRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptWatch::FreeWatchElement(struct Scr_WatchElement_s* element)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CompareArrayIndices(const void* arg1, const void* arg2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CompareThreadIndices(const void* arg1, const void* arg2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* Scr_GetElementThreadPos(struct Scr_WatchElement_s* element)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_PostSetText(struct Scr_WatchElement_s* element)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_SetElementObjectTypeRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_SetElementThreadStartRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_DeltaElementValueText(struct Scr_WatchElement_s* element, const char* oldValueText)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_SetElementValueTextRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_SetNonFieldElementRefText(struct Scr_WatchElement_s* element)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_SetNonFieldRefTextRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_SetElementRefText(struct Scr_WatchElement_s* element, char* fieldText)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_DeltaElementRefText(struct Scr_WatchElement_s* element, const char* oldRefText, char* fieldText)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_SetElementRefTextRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CompareThreadElements(const void* arg1, const void* arg2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_ConnectElementChildren(struct Scr_WatchElement_s* parentElement)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_SortElementChildren(struct Scr_WatchElement_s* parentElement)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_SortElementChildrenRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptWatch::EvaluateWatchChildren(struct Scr_WatchElement_s* parentElement)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_SetChildCountRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public bool Scr_ScriptWatch::PostEvaluateWatchElement(struct Scr_WatchElement_s* element, struct VariableValue* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public bool Scr_ScriptWatch::EvaluateWatchChildElement(struct Scr_WatchElement_s* element, unsigned int fieldName, struct Scr_WatchElement_s* childElement, bool hardcodedField)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptWatch::EvaluateWatchElementExpression(struct Scr_WatchElement_s* element, struct VariableValue* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptWatch::EvaluateWatchElement(struct Scr_WatchElement_s* element)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public struct Scr_WatchElement_s* Scr_ScriptWatch::CreateWatchElement(const char* text, struct Scr_WatchElement_s** prevElem, const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_AddTextRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptWatch::AddElement(struct Scr_WatchElement_s* element, const char* text)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public struct Scr_WatchElement_s* Scr_ScriptWatch::CloneElement(struct Scr_WatchElement_s* element)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CloneElementRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptWatch::Evaluate()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_Evaluate()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Scr_AllowBreakpoint(const char* pos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_SpecialBreakpoint(struct VariableValue* top, const char* pos, unsigned int localId, int opcode, int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_CheckBreakonNotify(unsigned int notifyListOwnerId, unsigned int stringValue, struct VariableValue* top, const char* pos, unsigned int localId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptWatch::DisplayThreadPos(struct Scr_WatchElement_s* element)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_DisplayThreadPosRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_BreakOnAllAssignmentPos()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_UnbreakAllAssignmentPos()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Scr_IsVariableBreakpoint(unsigned int id)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_AddDebugRefCountChildren(struct Scr_WatchElement_s* element, unsigned short* refCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_AddDebugRefCount(unsigned short* refCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Scr_RefToVariable(unsigned int id, int isObject)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptWatch::UpdateBreakpoints(bool add)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public struct Scr_WatchElement_s* Scr_ScriptWatch::AddBreakpoint(struct Scr_WatchElement_s* element, unsigned char type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public struct Scr_WatchElement_s* Scr_ScriptWatch::RemoveBreakpoint(struct Scr_WatchElement_s* element)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptWatch::ToggleWatchElementBreakpoint(struct Scr_WatchElement_s* element, unsigned char type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptWatch::ToggleBreakpointInternal(struct Scr_WatchElement_s* element, unsigned char type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_ToggleWatchElementBreakpointRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void Scr_ScriptWatch::SortHitBreakpointsTop()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_InitDebuggerMain()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_ShutdownDebuggerMain()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_InitDebugger()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_ShutdownDebugger()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_InitDebuggerSystem()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_ShutdownDebuggerSystem(int restart)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_ConnectRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_ShutdownRemoteClient(int restart)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_AddAssignmentPos(char* codePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_ResetAbortDebugger()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_DisplayDebuggerRemoteInternal()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_DisplayDebuggerRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_UpdateRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_DisplayDebugger()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_RemoveElementValue(struct Scr_WatchElement_s* element)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_RemoveElementValues()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_RemoveDebuggerRefs()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_AddDebuggerRefs()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_RunDebuggerRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_RunDebugger()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_DisplayHitBreakpointRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_WatchElementHitBreakpoint(struct Scr_WatchElement_s* element, bool enabled)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Scr_ConditionalExpression(struct Scr_WatchElement_s* element, unsigned int localId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_ShowConsole()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_HitBreakpointInternal()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Scr_HitBreakpoint(struct VariableValue* top, const char* pos, unsigned int localId, int hitBreakpoint)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_HitBuiltinBreakpoint(struct VariableValue* top, const char* pos, unsigned int localId, int opcode, int builtinIndex, unsigned int outparamcount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_DebugKillThread(unsigned int threadId, const char* codePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_DebugTerminateThread(int topThread)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_HitBreakpointRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Scr_WatchElementHasSameValue(struct Scr_WatchElement_s* element, struct VariableValue* newValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_WatchElementHitBreakpointRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_KeepAliveRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_SortHitBreakpointsTopRemote()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_ProcessDebugMessages()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Sys_ConsolePrintRemote(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Scr_UpdateDebugSocket()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_UpdateRemoteDebugger()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_UpdateDebugger()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Scr_HitAssignmentBreakpoint(struct VariableValue* top, const char* pos, unsigned int localId, int forceBreak)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_EnableBreakpoints(bool enable)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Scr_IgnoreErrors()
{

}

#endif // __UNIMPLEMENTED__
