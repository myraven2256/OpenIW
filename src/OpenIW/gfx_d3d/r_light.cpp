//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static struct GfxLightDef* R_RegisterLightDef_FastFile(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct GfxLightDef* R_RegisterLightDef(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_InitLightDefs()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ShutdownLightDefs()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_LightImportanceGreaterEqual(const struct GfxLight* light0, const struct GfxLight* light1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_MostImportantLights(const struct GfxLight** lights, int lightCount, int keepCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_GetPointLightPartitions(const struct GfxLight** visibleLights)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_SortBspLightSurfaces(struct GfxSurface* surface0, struct GfxSurface* surface1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_BoxInPlanes(const float* planes[0x4], const float* mins, const float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_SphereInPlanes(const float* planes[0x4], const float* center, const float radius)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_AllowBspSpotLightShadows(int surfIndex, void* bspLightCallbackAsVoid)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_AllowBspSpotLight(int surfIndex, void* bspLightCallbackAsVoid)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_CalcPlaneFromPointDir(float* plane, const float* origin, const float* dir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ComputeSpotLightCrossDirs(const struct GfxLight* light, float* crossDirs[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_CalcPlaneFromCosSinPointDirs(float* plane, float fCos, float fSin, const float* origin, const float* forward, const float* lateral)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_CalcSpotLightPlanes(const struct GfxLight* light, float* planes[0x4])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_AllowBspOmniLight(int surfIndex, void* bspLightCallbackAsVoid)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GetBspOmniLightSurfs(const struct GfxLight* light, const int lightIndex, struct GfxBspDrawSurfData* surfData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GetBspSpotLightSurfs(const struct GfxLight* light, int lightIndex, struct GfxBspDrawSurfData* surfData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_GetBspLightSurfs(const struct GfxLight** visibleLights, int visibleCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_AllowStaticModelOmniLight(int smodelIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_AllowStaticModelSpotLight(int smodelIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_GetStaticModelLightSurfs(const struct GfxLight** visibleLights, int visibleCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_SpotLightIsAttachedToDobj(const struct DObj_s* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_GetSceneEntLightSurfs(const struct GfxLight** visibleLights, int visibleCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum MaterialTechniqueType R_GetTechniqueForLightType(const struct GfxLight* light, const struct GfxViewInfo* viewInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_EmitPointLightPartitionSurfs(struct GfxViewInfo* viewInfo, const struct GfxLight** visibleLights, int visibleCount, const float* viewOrigin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_EmitShadowedLightPartitionSurfs(struct GfxViewInfo* viewInfo, int lightDrawSurfCount, const union GfxDrawSurf* lightDrawSurfs, struct GfxDrawSurfListInfo* info)
{

}

#endif // __UNIMPLEMENTED__
