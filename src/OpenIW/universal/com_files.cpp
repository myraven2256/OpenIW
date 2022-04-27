//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static void* FS_AllocMem(int bytes)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FS_FreeMem(void* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FS_CheckRemotePCShare()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FS_InitRemotePCPath_FromStoredUser()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FS_InitRemotePCPath_StoreUser()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FS_InitRemotePCPaths()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool FS_IsUsingRemotePCSharing()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* FS_GetRemotePCPath(const char* relativePath)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FS_CopyFileToRemotePCShare(const char* fileName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int FS_FOpenFileReadRemote(const char* filename, const char* remoteDirectory, void** file)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int FS_ReadRemoteFile(const char* qpath, const char* remoteDirectory, void** buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* FS_FOpenFileWriteRemote(const char* filename, const char* remoteDirectory)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int FS_WriteRemoteFile(const char* qpath, const char* remoteDirectory, const void* buffer, int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int FS_DeleteRemote(const char* filename)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FS_CheckFileSystemStarted()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int FS_LoadStack()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

long FS_HashFileName(const char* fname, int hashSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int FS_filelength(void* f)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FS_ReplaceSeparators(char* path)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FS_BuildOSPathForThread(const char* base, const char* game, const char* qpath, char* ospath, enum FsThread thread)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FS_BuildOSPath(const char* base, const char* game, const char* qpath, char* ospath)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int FS_CreatePath(char* OSPath)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FS_FCloseFile(void* h)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FS_FCloseLogFile(void* h)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* FS_FOpenFileWrite(const char* filename)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* FS_FOpenTextFileWrite(const char* filename)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* FS_FOpenFileAppend(const char* filename)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int FS_FOpenFileReadForThread(const char* filename, void** file, enum FsThread thread)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int FS_FOpenFileReadStream(const char* filename, void** file)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int FS_FOpenFileReadDatabase(const char* filename, void** file)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int FS_FOpenFileRead(const char* filename, void** file)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int FS_FOpenFileReadCurrentThread(const char* filename, void** file)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int FS_Delete(const char* filename)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int FS_Read(void* buffer, int len, void* h)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int FS_Write(const void* buffer, int len, void* h)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned long LogWriteThread(void* lpParameter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int FS_WriteLog(const void* buffer, int len, void* h)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FS_FinishAsyncronousWrites(void* h)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FS_Printf(void* h, const char* fmt, <NoType> )
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int FS_Seek(void* f, long offset, int origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int FS_ReadFile(const char* qpath, void** buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FS_ResetFiles()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FS_FreeFile(void* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int FS_WriteFile(const char* qpath, const void* buffer, int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FS_FreeFileList(const char** list, int allocTrackType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FS_ConvertPath(char* s)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FS_InitFilesystem()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FS_InitLogThread()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int FS_FOpenFileByMode(const char* qpath, void** f, enum fsMode_t mode)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FS_Flush(void* f)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Com_GetBspFilename(char* filename, int size, const char* mapname)
{

}

#endif // __UNIMPLEMENTED__
