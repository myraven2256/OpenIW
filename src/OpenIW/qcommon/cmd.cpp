//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_cmd()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Cmd_Wait_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Cbuf_Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void memcpy_noncrt(void* dst, const void* src, unsigned int length)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int strlen_noncrt(const char* str)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Cbuf_AddText(int localClientNum, const char* text)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Cbuf_InsertText(int localClientNum, const char* text)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Cbuf_AddServerText_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Cmd_ExecuteServerString(const char* text)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Cbuf_SV_Execute()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Cmd_AddServerCommandInternal(const char* cmdName, function * function, struct cmd_function_s* allocedCmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Cbuf_ExecuteBuffer(int localClientNum, int controllerIndex, const char* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Cbuf_ExecuteInternal(int localClientNum, int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Cbuf_Execute(int localClientNum, int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Cmd_ExecFromDisk(int localClientNum, int controllerIndex, const char* filename)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Cmd_ExecFromFastFile(int localClientNum, int controllerIndex, const char* filename)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Cmd_IsMainConfigFile(const char* filename)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Cmd_Exec_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Cmd_Vstr_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Cmd_Echo_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_Cmd_ArgvBuffer(int arg, char* buffer, int bufferLength)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Cmd_ArgsBuffer(int start, char* buffer, int bufLength)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Cmd_IsWhiteSpaceChar(char letter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Cmd_EmitChar(char letter, struct CmdArgsPrivate* argsPriv)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Cmd_TokenizeStringInternal(const char* text_in, int max_tokens, const char** argv, struct CmdArgsPrivate* argsPriv)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void AssertCmdArgsConsistency(const struct CmdArgs* args, const struct CmdArgsPrivate* argsPriv)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Cmd_TokenizeStringKernel(const char* text_in, int max_tokens, struct CmdArgs* args, struct CmdArgsPrivate* argsPriv)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Cmd_EndTokenizedStringKernel(struct CmdArgs* args, struct CmdArgsPrivate* argsPriv)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Cmd_TokenizeStringWithLimit(const char* text_in, int max_tokens)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Cmd_TokenizeString(const char* text_in)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Cmd_EndTokenizedString()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_Cmd_TokenizeString(const char* text_in)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_Cmd_EndTokenizedString()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct cmd_function_s* Cmd_FindCommand(const char* cmdName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Cmd_AddCommandInternal(const char* cmdName, function * function, struct cmd_function_s* allocedCmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Cmd_RemoveCommand(const char* cmdName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Cmd_SetAutoComplete(const char* cmdName, const char* dir, const char* ext)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Cmd_Shutdown()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Cmd_ForEach(function * callback)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Cmd_ResetArgs(struct CmdArgs* args, struct CmdArgsPrivate* argsPriv)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Cmd_ComErrorCleanup()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Cmd_ExecuteSingleCommand(int localClientNum, int controllerIndex, const char* text)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_Cmd_ExecuteString(int localClientNum, int controllerIndex, const char* text)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Cmd_List_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Cmd_Init()
{

}

#endif // __UNIMPLEMENTED__
