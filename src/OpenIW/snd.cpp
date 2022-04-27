//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_snd()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_DebugAliasPrint(bool condition, const struct snd_alias_t* alias, const char* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_GetEntChannelCount()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool SND_IsStreamChannelLoading(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool SND_HasFreeVoice(int entchannel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_AddVoice(int entchannel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_RemoveVoice(int entchannel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_GetPriority(int entchannel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool SND_IsRestricted(int entchannel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool SND_IsAliasChannel3D(int entchannel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool SND_IsPausable(int entchannel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* SND_GetEntChannelName(int entchannel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_GetEntChannelFromName(const char* channelName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool SND_ValidateEnvEffectsPriorityValue(const char* priorityName, int* priority)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int SND_RoomtypeFromString(const char* string)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_SetEnvironmentEffects_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_DeactivateEnvironmentEffects_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum SND_EQTYPE SND_EqTypeFromString(const char* typeString)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool SND_ParseChannelAndBand_f(int* entchannel, int* eqIndex, int* band)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_SetEq_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_SetEqFreq_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_SetEqType_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_SetEqGain_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_SetEqQ_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_DeactivateEq_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int SND_LocalClientNumFromSndEntHandle(union SndEntHandle sndEnt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool SND_AnyActiveListeners()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_GetListenerIndexNearestToOrigin(const float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_DisconnectListener(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_SetListener(int localClientNum, int clientNum, const float* origin, const float* axis[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_SaveListeners(struct snd_listener* listeners)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_RestoreListeners(struct snd_listener* listeners)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_SetPlaybackIdNotPlayed(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_AcquirePlaybackId(int index, int totalMsec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DoLengthNotify(int msec, void* lengthNotifyData, enum SndLengthId id)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool SND_AddLengthNotify(int playbackId, void* lengthNotifyData, enum SndLengthId id)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool SND_GetKnownLength(int playbackId, int* msec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_LengthNotify(int index, int totalMsec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float SND_GetLerpedSlavePercentage(float baseSlavePercentage)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float SND_Attenuate(struct SndCurve* volumeFalloffCurve, float radius, float mindist, float maxdist)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_GetCurrent3DPosition(union SndEntHandle sndEnt, const float* offset, float* pos_out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_ResetChannelInfo(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_SetChannelStartInfo(int index, struct SndStartAliasInfo* SndStartAliasInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_SetSoundFileChannelInfo(int index, int srcChannelCount, int baserate, int total_msec, int start_msec, enum SndFileLoadingState loadingState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int SND_FindReplaceableChannel(struct SndStartAliasInfo* startAliasInfo, int entchannel, int first, int count)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_FindFree2DChannel(struct SndStartAliasInfo* startAliasInfo, int entchannel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_FindFree3DChannel(struct SndStartAliasInfo* startAliasInfo, int entchannel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int SND_FindFreeStreamChannel(struct SndStartAliasInfo* startAliasInfo, int entchannel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_StopEntityChannel(union SndEntHandle sndEnt, int entchannel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int SND_StartAliasSample(struct SndStartAliasInfo* startAliasInfo, int* pChannel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int SND_StartAliasStream(struct SndStartAliasInfo* startAliasInfo, int* pChannel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_Archive(struct snd_channel_info_t* chaninfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_Unarchive(struct snd_channel_info_t* chaninfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DB_SaveSounds()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DB_LoadSounds()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_ChoosePitchAndVolume(const struct snd_alias_t* alias0, const struct snd_alias_t* alias1, float lerp, float volumeScale, float* volume, float* pitch)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_ContinueLoopingSound_Internal(int chanIndex, float lerp, float volumeScale, int* pChannel, function * setPlaybackRateFunc)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool SND_ContinueLoopingSound(const struct snd_alias_t* alias0, const struct snd_alias_t* alias1, float lerp, float volumeScale, union SndEntHandle sndEnt, const float* org, int* pChannel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int SND_IsNullSoundFile(const struct SoundFile* soundFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int SND_PlaySoundAlias_Internal(const struct snd_alias_t* alias0, const struct snd_alias_t* alias1, float lerp, float volumeScale, union SndEntHandle sndEnt, const float* org, int* pChannel, int timeshift, bool treatAsMaster, bool useTimescale, enum snd_alias_system_t system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_FindPlaybackId(union SndEntHandle sndEnt, const char* aliasName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void StopSoundAliasesOnEnt(union SndEntHandle sndEnt, const char* aliasName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_StopSoundAliasOnEnt(union SndEntHandle sndEnt, const char* aliasName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_StopSoundsOnEnt(union SndEntHandle sndEnt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_InitFXSounds()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_AddPlayFXSoundAlias(struct snd_alias_t* alias, union SndEntHandle sndEnt, const float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Snd_AssertAliasValid(struct snd_alias_t* alias)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_PlayFXSounds()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_PlaySoundAlias(const struct snd_alias_t* alias, union SndEntHandle sndEnt, const float* org, int timeshift, enum snd_alias_system_t system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_PlaySoundAliasAsMaster(const struct snd_alias_t* alias, union SndEntHandle sndEnt, const float* org, int timeshift, enum snd_alias_system_t system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool SND_ValidateSoundAliasBlend(const struct snd_alias_t* alias0, const struct snd_alias_t* alias1, bool bReport)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_PlayBlendedSoundAliases(const struct snd_alias_t* alias0, const struct snd_alias_t* alias1, float lerp, float volumeScale, union SndEntHandle sndEnt, const float* org, int timeshift, enum snd_alias_system_t system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int SND_PlayLocalSoundAlias(int localClientNum, const struct snd_alias_t* alias, enum snd_alias_system_t system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_PlayLocalSoundAliasFromList(int localClientNum, struct snd_alias_list_t* aliasList, enum snd_alias_system_t system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_PlayLocalSoundAliasByName(int localClientNum, const char* aliasname, enum snd_alias_system_t system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_SetPauseSettings(const bool* pauseSettings)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_ResetPauseSettingsToDefaults()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_PauseSounds()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_UnpauseSounds()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_UpdatePause()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_StartBackground(int localClientNum, int track, const struct snd_alias_t* alias, int fadetime, float fraction, bool useTimescale, enum snd_alias_system_t system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_StopBackground(int track, int fadetime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_PlayMusicAlias(int localClientNum, const struct snd_alias_t* alias, bool useTimescale, enum snd_alias_system_t system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_StopMusic(int fadetime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_PlayAmbientAlias(int localClientNum, const struct snd_alias_t* alias, int fadetime, enum snd_alias_system_t system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_StopAmbient(int localClientNum, int fadetime, enum snd_alias_system_t system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_FadeAllSounds(float volume, int fadetime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_SetChannelVolumes(int priority, const float* channelvolume, int fademsec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_DeactivateChannelVolumes(int priority, int fademsec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_UpdateLoopingSounds()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool SND_UpdateBackgroundVolume(int track, int frametime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_UpdateVolume(struct snd_volume_info_t* volinfo, int frametime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_UpdateMasterVolumes(int frametime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool SND_Is2DChannelPlaying(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool SND_Is3DChannelPlaying(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool SND_IsStreamChannelPlaying(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_UpdateSlaveLerp(int frametime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_UpdateAllChannels(int frametime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_SetEnvironmentEffects(int priority, const char* roomstring, float drylevel, float wetlevel, int fademsec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_DeactivateEnvironmentEffects(int priority, int fademsec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_UpdateReverbs()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_UpdateRoomEffects(int frametime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_SetEq(const char* channelName, int eqIndex, int band, enum SND_EQTYPE type, float gain, float freq, float q)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_DeactivateAllEq(int eqIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_DeactivateChannelEq(const char* channelName, int eqIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_DeactivateEq(const char* channelName, int eqIndex, int band)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_UpdateTimeScale()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float FontSizeForDistance(float distance)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DebugDrawWorldSound3D(int idx, int debugDrawStyle, int* offsets, int* closestId, float* closestIdDotProd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DebugDrawWorldSounds(int debugDrawStyle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_UpdatePhysics()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool SND_ShouldGiveCpuWarning()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_Update()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool SND_IsAmbientChannel(int chan)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_StopSounds(enum snd_stopsounds_arg_t which)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RelativeToListener(const struct snd_listener* listener, float yaw, float pitch, float dist, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_PlayLocal_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool SND_BooleanFromString(const char* value, const char* trueValue, const char* falseValue, bool defaultValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_ParseEntChannelFile(const char* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_InitEntChannels()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_MapInit()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_Shutdown()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_ShutdownChannels()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_ErrorCleanup()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_SaveSoundAlias(const struct snd_alias_t* alias, struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct snd_alias_t* SND_RestoreSoundAlias(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_SaveLengthNotifyInfo(const struct sndLengthNotifyInfo* info, struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_RestoreLengthNotifyInfo(struct MemoryFile* memFile, struct sndLengthNotifyInfo* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_CopySndLengthInfo(const struct sndLengthNotifyInfo* from, struct sndLengthNotifyInfo* to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_SaveChanInfo(const struct snd_channel_info_t* chaninfo, struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_RestoreChanInfo(struct snd_channel_info_t* chaninfo, struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_Save3DChannel(int chanIndex, struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool SND_Restore3DChannel(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_Save2DChannel(int chanIndex, struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool SND_Restore2DChannel(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_SaveStreamChannel(int chanIndex, struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool SND_RestoreStreamChannel(int channel, struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_Save(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_Restore(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_RestoreEventually(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int SND_GetSoundOverlay2D(struct snd_overlay_info_t* info, int maxcount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int SND_GetSoundOverlay3D(struct snd_overlay_info_t* info, int maxcount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int SND_GetSoundOverlayStream(struct snd_overlay_info_t* info, int maxcount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_GetSoundOverlay(enum snd_overlay_type_t type, struct snd_overlay_info_t* info, int maxcount, int* cpu)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void StopChannel(int chanId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_StopChannelAndPlayChainAlias(int chanId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_AddPhysicsSound(struct snd_alias_list_t* aliasList, const float* org)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_Amplify(const float* org, const int min_r, const int max_r, const float min_vol, const float max_vol, const float falloff)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_StopAmplify()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float SND_CalcAmplifyFactor(const float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float SND_GetVolume()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float SND_GetVolumeNormalized()
{

}

#endif // __UNIMPLEMENTED__
