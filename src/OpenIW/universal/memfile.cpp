//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static void MemFile_WriteDataForArchive(struct MemoryFile* memFile, int bytes, void* data)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MemFile_CommonInit(struct MemoryFile* memFile, int size, void* buffer, bool errorOnOverflow, bool compress)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void TRACK_memfile()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum MemFileThread GetThreadID()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SetStreamMode(enum MemFileMode mode)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void AssertStreamMode(enum MemFileMode mode)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MemFile_InitForReading(struct MemoryFile* memFile, int size, void* buffer, bool compress)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MemFile_InitForWriting(struct MemoryFile* memFile, int size, void* buffer, bool errorOnOverflow, bool compress)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MemFile_Shutdown(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MemFile_deflateInit(void* next_out, int avail_out, bool compress)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MemFile_deflateEnd(bool compress)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MemFile_StartSegment(struct MemoryFile* memFile, int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MemFile_EndSegment(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MemFile_inflateInit(void* next_in, int len, bool compress)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MemFile_inflateEnd(bool compress)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const unsigned char* MemFile_GetSegmentAddess(struct MemoryFile* memFile, int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MemFile_AtEnd(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MemFile_MoveToSegment(struct MemoryFile* memFile, int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MemFile_CopySegments(struct MemoryFile* memFile, int index, void* buf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MemFile_Cleanup()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool MemFile_IsReading(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool MemFile_IsWriting(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MemFile_WriteError(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MemFile_WriteDataInternal(struct MemoryFile* memFile, int bytes, int nonZeroCount, int cacheBufferLen, unsigned int nextByte)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MemFile_GetUsedSize(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MemFile_WriteData(struct MemoryFile* memFile, int byteCount, const void* p)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MemFile_WriteCString(struct MemoryFile* memFile, const char* string)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* MemFile_ReadCString(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned char MemFile_ReadByteInternal(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MemFile_ReadData(struct MemoryFile* memFile, int byteCount, void* p)
{

}

#endif // __UNIMPLEMENTED__
