//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_CheckBinkError()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CinematicHunk_Open(struct CinematicHunk* hunk, void* memory, int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CinematicHunk_Close(struct CinematicHunk* hunk)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CinematicHunk_IsOpen(struct CinematicHunk* hunk)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CinematicHunk_Reset(struct CinematicHunk* hunk)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CinematicHunk_IsEmpty(struct CinematicHunk* hunk)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CinematicHunk_GetFreeSpace(struct CinematicHunk* hunk)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void* CinematicHunk_Alloc(struct CinematicHunk* hunk, int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void* CinematicHunk_Alloc_Back(struct CinematicHunk* hunk, int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int GpuTextureAlign(unsigned int amt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void* CinematicHunk_Alloc_GpuAligned(struct CinematicHunk* hunk, int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_HunksAllocate(int activeTexture, unsigned int playbackFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_HunksOpen(int activeTexture, unsigned int playbackFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_HunksReset(int activeTexture, unsigned int playbackFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_Cinematic_AreHunksOpen()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_HunksClose()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_MakeBinkTexture(struct GfxImage* image, unsigned int width, unsigned int height, int textureSetIndex, unsigned int* out_pitch, unsigned int* out_size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_CinematicThread_BeginBinkAsync()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_CinematicThread_EndBinkAsync()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_InitBinkTextures()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_BlackRendererImages()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void commitToMemory(void* ptr, unsigned int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_SetRendererImagesToFrame(int frameToSetTo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_UpdateRendererImages()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_Cinematic_GetPercentageFull_FromBinkRealtime(const struct BINKREALTIME* binkRealtime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_Cinematic_GetPercentageFull()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_SeizeIO()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_RelinquishIO()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_UpdateTimeInMsec(const struct BINKREALTIME* binkRealtime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_Cinematic_Advance()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void* R_Cinematic_Bink_Alloc(unsigned int bytes)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_Bink_Free(void* ptr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_StopPlayback_Now()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_Cinematic_BinkOpenPath_MemoryResident(const char* filename, const void** outPtr, char* errText, int errTextSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_Cinematic_BinkOpenPath(const char* filepath, unsigned int playbackFlags, char* errText, int errTextSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_Cinematic_BinkOpen(const char* filename, unsigned int playbackFlags, char* errText, int errTextSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_Cinematic_InitBinkVolumes(struct BINK* bink)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_Cinematic_StartPlayback_Now(const char* filename, unsigned int playbackFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_ReserveMemory()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_UpdateFrame_Core(bool localTargetChanged, const char* localTargetCinematic, unsigned int localPlaybackFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_UpdateFrame_Core2()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_StartPlayback_Internal(const char* name, unsigned int playbackFlags, float volume)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_Cinematic_IsNextReady_Internal()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_CinematicThread_WaitForHostEvent()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_Thread(unsigned int threadContext)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_Cinematic_ThreadFinish(bool midBinkIsOkay)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_Cinematic_Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_Cinematic_Shutdown()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_Cinematic_StartPlayback(const char* name, unsigned int playbackFlags, float volume)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_Cinematic_StartNextPlayback()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_Cinematic_SetNextPlayback(const char* name, unsigned int playbackFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_Cinematic_UnsetNextPlayback()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_Cinematic_StopPlayback()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_Cinematic_SetPaused(enum CinematicEnum paused)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_Cinematic_UpdateFrame()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_Cinematic_SyncNow()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_Cinematic_DrawStretchPic(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_Cinematic_DrawStretchPic_Letterboxed(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool R_Cinematic_GetFilenameAndTimeInMsec(char* outName, int outNameSize, unsigned int* outTimeInMsec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool R_Cinematic_IsFinished()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool R_Cinematic_IsStarted()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool R_Cinematic_IsPending()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool R_Cinematic_IsNextReady()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool R_Cinematic_IsUnderrun()
{

}

#endif // __UNIMPLEMENTED__
