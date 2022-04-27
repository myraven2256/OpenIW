//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static unsigned int R_ModelLightingIndexFromHandle(unsigned short handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_DecodeModelLightingPlacement(unsigned int entryIndex, unsigned int* x0, unsigned int* y0)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_UpdateBaseLightingCoords(float xCoord, float yCoord, float zCoord, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetModelLightingCoords(unsigned short handle, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned short R_ModelLightingIndexToHandle(unsigned int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool R_AllocStaticModelLighting(const struct GfxStaticModelDrawInst* smodelDrawInst, unsigned int smodelIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_AllocModelLighting(const float* lightingOrigin, unsigned short* cachedLightingHandle, function * GetPrimaryLightCallback, const void* userData, struct GfxLightingInfo* lightingInfoOut)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_DynEntPrimaryLightCallback(const void* userData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_GetPrimaryLightForBoxCallback(const void* userData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_GetPrimaryLightForSphereCallback(const void* userData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int R_AllocModelLighting_PrimaryLight(const float* lightingOrigin, unsigned int dynEntId, unsigned short* cachedLightingHandle, struct GfxLightingInfo* lightingInfoOut)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int R_AllocModelLighting_Box(const struct GfxViewInfo* viewInfo, const float* lightingOrigin, const float* boxMins, const float* boxMaxs, unsigned short* cachedLightingHandle, struct GfxLightingInfo* lightingInfoOut)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int R_AllocModelLighting_Sphere(const struct GfxViewInfo* viewInfo, const float* lightingOrigin, const float* origin, float radius, unsigned short* cachedLightingHandle, struct GfxLightingInfo* lightingInfoOut)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ToggleModelLightingFrame()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_GetModelLightingTextureDelta(unsigned int dx, unsigned int dy, unsigned int dz)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_GetModelLightingTextureOffset(unsigned int x0, unsigned int y0)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_GetTextureOffset(unsigned int x, unsigned int y, unsigned int z)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_VerifyModelLightingImageOffsets()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_CalcModelLighting(unsigned int entryIndex, const float* lightingOrigin, unsigned int nonSunPrimaryLightIndex, enum GfxModelLightExtrapolation extrapolateBehavior)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetModelGroundLighting(unsigned int entryIndex, const unsigned char* groundLighting)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetStaticModelLighting(unsigned int smodelIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_BeginAllStaticModelLighting()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetAllStaticModelLighting()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetModelLightingCoordsForSource(unsigned short handle, struct GfxCmdBufSourceState* source)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetStaticModelLightingCoords(unsigned int smodelIndex, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetStaticModelLightingCoordsForSource(unsigned int smodelIndex, struct GfxCmdBufSourceState* source)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetModelLightingSampleDeltas()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetModelLightingLookupScale(struct GfxCmdBufInput* input)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetupDynamicModelLighting(struct GfxCmdBufInput* input)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void* R_AllocModelLightingGlobal(unsigned int bytes)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_InitModelLightingGlobals()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ResetModelLighting()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_InitModelLightingImage()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ShutdownModelLightingImage()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_InitStaticModelLighting(unsigned int smodelCount)
{

}

#endif // __UNIMPLEMENTED__
