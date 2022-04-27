//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void PMem_EnableSoundAlloc()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PMem_DisableSoundAlloc()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PMem_AllowDatabaseAlloc()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void* Sound_PhysicalAlloc(const unsigned int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Sound_PhysicalFree(void* ptr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void* Sound_Alloc(const unsigned int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Sound_Free(void* ptr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PMem_SoundInit()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PMem_InitPhysicalMemory(struct PhysicalMemory* pmem, void* memory, unsigned int memorySize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PMem_Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PMem_BeginAllocInPrim(struct PhysicalMemoryPrim* prim, const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PMem_BeginAlloc(const char* name, unsigned int allocType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PMem_EndAllocInPrim(struct PhysicalMemoryPrim* prim, const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PMem_EndAlloc(const char* name, unsigned int allocType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PMem_FreeIndex(struct PhysicalMemoryPrim* prim, unsigned int allocIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PMem_FreeInPrim(struct PhysicalMemoryPrim* prim, const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PMem_Free(const char* name, unsigned int allocType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PMem_AddFragment(unsigned int pos, unsigned int type, unsigned int allocType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum CriticalSection PMem_GetAllocCriticalSection(unsigned int type, unsigned int allocType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PMem_IsOutOfMemory(unsigned int lowPos, unsigned int highPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PMem_GetOverAllocatedSize()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* PMem_Alloc(unsigned int size, unsigned int alignment, unsigned int type, unsigned int allocType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PMem_Cleanup()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int PMem_GetFreeAmount()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float ConvertToMB(int bytes)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PMem_DumpMemStats()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int PMem_GetAllocType()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* XMemAlloc(unsigned long dwSize, unsigned long dwAllocAttributes)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned long XMemSize(void* pAddress, unsigned long dwAllocAttributes)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XMemFree(void* pAddress, unsigned long dwAllocAttributes)
{

}

#endif // __UNIMPLEMENTED__
