//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_scr_parser()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_InitOpcodeLookup()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_ShutdownOpcodeLookup()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void AddOpcodePos(unsigned int sourcePos, int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RemoveOpcodePos()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void AddThreadStartOpcodePos(unsigned int sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Scr_GetOpcodePosOfType(unsigned int bufferIndex, unsigned int startSourcePos, unsigned int endSourcePos, int type, unsigned int* sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int Scr_GetClosestSourcePosOfType(unsigned int bufferIndex, unsigned int sourcePos, int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct OpcodeLookup* Scr_GetPrevSourcePosOpcodeLookup(const char* codePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct OpcodeLookup* Scr_GetSourcePosOpcodeLookup(const char* codePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int Scr_GetPrevSourcePos(const char* codePos, unsigned int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Scr_GetFunctionLineNumInternal(const char* buf, unsigned int sourcePos, const char** startLine)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Scr_GetLineNumInternal(const char* buf, unsigned int sourcePos, const char** startLine, int* col)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Scr_GetLineNum(unsigned int bufferIndex, unsigned int sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Scr_GetFunctionLineNum(unsigned int bufferIndex, unsigned int sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Scr_GetSourcePosOfType(const char* codePos, int type, struct Scr_SourcePos_t* pos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Scr_HasSourceFiles()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct SourceBufferInfo* Scr_GetNewSourceBuffer()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_AddSourceBufferInternal(const char* extFilename, const char* codePos, char* sourceBuf, int len, bool doEolFixup, bool archive)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_SendSource()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static char* Scr_ReadFile_FastFile(const char* filename, const char* extFilename, const char* codePos, bool archive)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static char* Scr_ReadFile(const char* filename, const char* extFilename, const char* codePos, bool archive)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

char* Scr_AddSourceBuffer(const char* filename, const char* extFilename, const char* codePos, bool archive)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_CopyFormattedLine(char* line, const char* rawLine)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Scr_GetLineInfo(const char* buf, unsigned int sourcePos, int* col, char* line)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Scr_GetFunctionInfo(const char* buf, unsigned int sourcePos, char* line)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_PrintSourcePos(int channel, const char* filename, const char* buf, unsigned int sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_PrintSourcePosSpreadSheet(int channel, const char* filename, const char* buf, unsigned int sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_PrintFunctionPosSpreadSheet(int channel, const char* filename, const char* buf, unsigned int sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_PrintSourcePosSummary(int channel, const char* filename, const char* buf, unsigned int sourcePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Scr_GetSourcePos(unsigned int bufferIndex, unsigned int sourcePos, char* outBuf, int outBufLen)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int Scr_GetSourceBuffer(const char* codePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_GetTextSourcePos(const char* buf, const char* codePos, char* line)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_PrintPrevCodePos(int channel, const char* codePos, unsigned int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Scr_PrevCodePosFileName(const char* codePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Scr_PrevCodePosFunctionName(const char* codePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Scr_PrevCodePosFileNameMatches(const char* codePos, const char* fileName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_PrintPrevCodePosSpreadSheet(int channel, const char* codePos, bool summary, bool functionSummary)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_GetCodePos(const char* codePos, unsigned int index, char* outBuf, int outBufLen)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_GetFileAndLine(const char* codePos, char** filename, int* linenum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_AddProfileTime(const char* codePos, int time, int builtInTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Scr_CompareProfileTimes(const struct OpcodeLookup& opcodeLookup1, const struct OpcodeLookup& opcodeLookup2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Scr_CompareScriptSourceProfileTimes(int index1, int index2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_CalcScriptFileProfile()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_CalcAnimscriptProfile(int* total, int* totalNonBuiltIn)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_PrintScriptProfileTimesForScriptFile()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_ScriptProfileTimesReset()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Scr_PrintProfileTimes(float minTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Scr_IgnoreLeaks()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CompileError(unsigned int sourcePos, const char* msg, <NoType> )
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CompileError2(const char* codePos, char* msg, <NoType> )
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RuntimeErrorInternal(int channel, const char* codePos, unsigned int index, const char* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RuntimeError(const char* codePos, unsigned int index, const char* msg, const char* dialogMessage)
{

}

#endif // __UNIMPLEMENTED__
