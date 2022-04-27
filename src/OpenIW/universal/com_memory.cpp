//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_com_memory()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* Z_VirtualReserve(int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Z_TryVirtualCommitInternal(void* ptr, int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Z_VirtualDecommitInternal(void* ptr, int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Z_VirtualFreeInternal(void* ptr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* Z_TryVirtualAllocInternal(int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Z_VirtualCommitInternal(void* ptr, int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Z_VirtualFree(void* ptr, int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Z_VirtualDecommit(void* ptr, int size, int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* Z_TryVirtualAlloc(int size, const char* name, int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* Z_VirtualAlloc(int size, const char* name, int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Z_VirtualCommit(void* ptr, int size, int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* CopyString(const char* in, const char* name, int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ReplaceString(const char** str, const char* in, const char* name, int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FreeString(const char* str, int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Com_Meminfo_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Com_InitHunkMemory()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Com_FreeHunkMemory()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void* Hunk_FindDataForFileInternal(int type, const char* name, int hash)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* Hunk_FindDataForFile(int type, const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Hunk_DataOnHunk(void* data)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Hunk_SetDataForFile(int type, const char* name, void* data, function * alloc)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Hunk_AddData(int type, void* data, function * alloc)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Hunk_ClearDataFor(struct fileData_s** pFileData, unsigned char* low, unsigned char* high)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Hunk_ClearData()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DB_GetAllXAssetOfType(enum XAssetType type, union XAssetHeader* assets, int maxCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DB_EnumXAssets(enum XAssetType type, function * func, void* inData, bool includeOverride)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Hunk_SetMark()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Hunk_ClearToMark(int mark)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Hunk_SetMarkLow()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Hunk_ClearToMarkLow(int mark)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Hunk_Clear()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Hunk_Used()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* Hunk_Alloc(int size, const char* name, int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* Hunk_AllocAlign(int size, int alignment, const char* name, int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* Hunk_AllocateTempMemoryHigh(int size, const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Hunk_ClearTempMemoryHigh()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* Hunk_AllocLow(int size, const char* name, int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* Hunk_AllocLowAlign(int size, int alignment, const char* name, int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* Hunk_AllocateTempMemory(int size, const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Hunk_FreeTempMemory(void* buf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Hunk_ClearTempMemory()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Hunk_CheckTempMemoryClear()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Hunk_CheckTempMemoryHighClear()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Hunk_HideTempMemory()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Hunk_ShowTempMemory(int mark)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Hunk_HideTempMemoryHigh()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Hunk_ShowTempMemoryHigh(int mark)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int LargeLocalRoundSize(int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int LargeLocalBegin(int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LargeLocalEnd(int startPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int LargeLocalBeginRight(int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LargeLocalEndRight(int startPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* LargeLocalGetBuf(int startPos, int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void LargeLocal::LargeLocal(int sizeParam)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void LargeLocal::~LargeLocal()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void* LargeLocal::GetBuf()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LargeLocalReset()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Hunk_InitDebugMemory()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Hunk_ShutdownDebugMemory()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Hunk_ResetDebugMem()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* Hunk_AllocDebugMem(int size, const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Hunk_FreeDebugMem(void* ptr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct HunkUser* Hunk_UserCreate(int maxSize, const char* name, bool fixed, bool tempMem, int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* Hunk_UserAlloc(struct HunkUser* user, int size, int alignment)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* Hunk_UserAllocAlign(struct HunkUser* user, int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* Hunk_UserAllocAlignStrict(struct HunkUser* user, int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Hunk_UserSetPos(struct HunkUser* user, void* pos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Hunk_UserReset(struct HunkUser* user)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Hunk_UserDestroy(struct HunkUser* user)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

char* Hunk_CopyString(struct HunkUser* user, const char* in)
{

}

#endif // __UNIMPLEMENTED__
