//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void CG_RegisterVisionSetsDvars()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_AddVisionSetMenuItem(union XAssetHeader header, void* __formal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_InitVisionSetsMenu()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* RawBufferOpen(const char* name, const char* formatFullPath)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RawBufferClose(const char* filebuf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ApplyTokenToField(int fieldNum, const char* token, struct visionSetVars_t* settings)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool LoadVisionSettingsFromBuffer(const char* buffer, const char* filename, struct visionSetVars_t* settings)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool LoadVisionFile(const char* name, struct visionSetVars_t* resultSettings)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool GetVisionSet(int localClientNum, const char* name, struct visionSetVars_t* resultSettings)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool LerpBool(bool from, bool to, const float fraction, enum visionSetLerpStyle_t style)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float LerpFloat(float from, float to, float fraction, enum visionSetLerpStyle_t style)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LerpVec3(const float* from, const float* to, float fraction, enum visionSetLerpStyle_t style, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UpdateVarsLerp(int time, const struct visionSetVars_t* from, const struct visionSetVars_t* to, struct visionSetLerpData_t* lerpData, struct visionSetVars_t* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_VisionSetsUpdate(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool VisionSetCurrent(int localClientNum, enum visionSetMode_t mode, const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_VisionSetStartLerp_To(int localClientNum, enum visionSetMode_t mode, enum visionSetLerpStyle_t style, const char* nameTo, int duration)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SetDefaultVision(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_VisionSetConfigString_Naked(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_VisionSetConfigString_Night(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_VisionSetMyChanges()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool LoadVisionFileForTweaks(struct visionSetVars_t* setVars)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_VisionSetUpdateTweaksFromFile_Glow()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_VisionSetUpdateTweaksFromFile_Film()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_LookingThroughNightVision(const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float VisionFadeValue(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FadeRefDef(struct refdef_s* rd, float brightness)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_VisionSetApplyToRefdef(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__
