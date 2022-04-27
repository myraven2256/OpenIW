//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static unsigned char XA_GetSpeakerCount()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool SND_IsMultiChannel()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void TRACK_snd_driver()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned long XA_GetSampleIndexFromMsec(int msec, int sampleRate)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int XA_CalcTotalSamples(int totalMsec, int sampleRate)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XA_AlignDesiredSampleIndex(int* desiredSampleIndex, int totalMsec, int sampleRate)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float XA_CalcXAudioPitch(int playbackRate, unsigned long sampleRate)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float XA_GetDryLevel(const struct snd_alias_t* pAlias)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float XA_GetWetLevel(const struct snd_alias_t* pAlias)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct PktCacheEntry* XA_GetStreamPacket(struct XaStreamReadInfo* streamReadInfo, int offset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XA_SetStreamPacket(struct XaStreamReadInfo* streamReadInfo, int offset, unsigned char* buf, bool primed)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XA_SetStreamPacketPosition(struct IXAudioSourceVoice* voice_stream, struct XaStreamReadInfo* streamReadInfo, struct XAUDIOPACKET* packet)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool XA_SubmitStreamPacket(struct IXAudioSourceVoice* voice_stream, struct XaStreamReadInfo* streamReadInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool XA_ProcessStreamSoundFile(int streamIndex, struct XaStreamReadInfo* streamReadInfo, unsigned char* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool XA_CalculateStreamStartOffset(int streamIndex, struct XaStreamReadInfo* streamReadInfo, unsigned char* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XA_ReadStreamPacketData(int streamIndex, struct XaStreamReadInfo* streamReadInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XA_ExecuteStreamRead(int streamIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XA_StreamPacketCallback(struct XAUDIOVOICEPACKETCALLBACK* packetResult)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool XA_Init2D()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool XA_Init3D()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XA_InitChannels()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XA_InitSpatializationCurves()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct snd_listener* XA_UpdateXAudioListener(const float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XA_InitSpatializationParams()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static HRESULT QueryDSPEffectSize(const struct XAUDIOFXINIT* pInit, unsigned long* pEffectSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static HRESULT CreateDSPEffect(const struct XAUDIOFXINIT* init, struct IXAudioBatchAllocator* allocator, struct IXAudioEffect** effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XA_InitEq()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XA_SetVoiceEqParams(struct IXAudioVoice* voice, unsigned char effectIndex, int eqIndex, int band, int entchannel, int entityUseEq)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XA_InitVoiceOutputAndBaseVolumesForReverb(int index, int srcChannelCount, bool on3DChannel, struct XAUDIOCHANNELMAP* masteringMap)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct IXAudioSourceVoice* XA_GetNewSourceVoice(int index, int entchannel, struct XAUDIOSOURCEFORMAT* format)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XA_InitializeStreamVoice(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XA_ShutdownChannels()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XA_SetSpatializationCurves(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float XA_CalcOmnidirectionalPercentage(const struct snd_alias_t* alias)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XA_ApplyOmnidirectionality(float** speakers, float omniPercentage)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XA_51_SpecificVolumeCoefficientAdjustments(float lfePercentage, float centerPercentage, float omniPercentage)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XA_SpatializeChannel(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_SetEqLerp(float lerp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_SetEqParams(int entchannel, int eqIndex, int band, enum SND_EQTYPE type, float gain, float freq, float q)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_SetEqType(int entchannel, int eqIndex, int band, enum SND_EQTYPE type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_SetEqFreq(int entchannel, int eqIndex, int band, float freq)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_SetEqGain(int entchannel, int eqIndex, int band, float gain)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_SetEqQ(int entchannel, int eqIndex, int band, float q)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_DisableEq(int entchannel, int eqIndex, int band)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_SaveEq(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_RestoreEq(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_PrintEqParams()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_GetSoundEqOverlay(struct snd_eqoverlay_info_t* info, int maxcount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool SND_InitDriver()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_SetRoomtype(int roomtype)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_ShutdownDriver()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_Set3DPosition(int index, const float* org)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_Stop2DChannel(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_Pause2DChannel(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_Unpause2DChannel(int index, int timeshift)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool SND_Is2DChannelFree(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_Stop3DChannel(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_Pause3DChannel(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_Unpause3DChannel(int index, int timeshift)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool SND_Is3DChannelFree(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_StopStreamChannel(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_PauseStreamChannel(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_UnpauseStreamChannel(int index, int timeshift)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool SND_IsStreamChannelFree(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int XA_StartAliasSample(struct SndStartAliasInfo* startAliasInfo, int* pIndex, int* pTotalMsec, function * findFreeChannel, function * stopChannel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_StartAlias2DSample(struct SndStartAliasInfo* startAliasInfo, int* pChannel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_StartAlias3DSample(struct SndStartAliasInfo* startAliasInfo, int* pChannel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_StartAliasStreamOnChannel(struct SndStartAliasInfo* startAliasInfo, int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float SND_Get2DChannelVolume(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_Set2DChannelVolume(int index, float volume)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float SND_Get3DChannelVolume(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_Set3DChannelVolume(int index, float volume)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float SND_GetStreamChannelVolume(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SND_SetStreamChannelVolume(int index, float volume)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_Get2DChannelPlaybackRate(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_Set2DChannelPlaybackRate(int index, int rate)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_Get3DChannelPlaybackRate(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_Set3DChannelPlaybackRate(int index, int rate)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_GetStreamChannelPlaybackRate(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_SetStreamChannelPlaybackRate(int index, int rate)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_Update2DChannelReverb(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_Update3DChannelReverb(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_UpdateStreamChannelReverb(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_UpdateEqs()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_Get2DChannelLength(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_Get3DChannelLength(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_GetStreamChannelLength(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_Get2DChannelSaveInfo(int index, struct snd_save_2D_sample_t* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_Set2DChannelFromSaveInfo(int index, struct snd_save_2D_sample_t* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_Get3DChannelSaveInfo(int index, struct snd_save_3D_sample_t* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_GetStreamChannelSaveInfo(int index, struct snd_save_stream_t* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_SetStreamChannelFromSaveInfo(int index, struct snd_save_stream_t* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_GetSoundFileSize(const void* pSoundFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_DriverPreUpdate(int frametime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_DriverPostUpdate(int frametime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_Update2DChannel(int i, int frametime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_Update3DChannel(int i, int frametime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_UpdateStreamChannel(int i, int frametime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_GetDriverCPUPercentage()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_RawSamples(int samples, int rate, int width, int s_channels, const unsigned char* data)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SND_EndRawSamples()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SND_RawSamplesTime()
{

}

#endif // __UNIMPLEMENTED__
