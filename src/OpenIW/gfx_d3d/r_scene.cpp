//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_r_scene()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int R_AllocSceneDObj()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int R_AllocSceneModel()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int R_AllocSceneBrush()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct GfxBrushModel* R_GetBrushModel(unsigned int modelIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddBrushModelToSceneFromAngles(const struct GfxBrushModel* bmodel, const float* origin, const float* angles, unsigned int entnum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddDObjToScene(const struct DObj_s* obj, const struct cpose_t* pose, unsigned int entnum, unsigned int renderFxFlags, float* lightingOrigin, float materialTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct GfxParticleCloud* R_AddParticleCloudToScene(struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddOmniLightToScene(const float* org, float radius, float r, float g, float b)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddSpotLightToScene(const float* org, const float* dir, float radius, float r, float g, float b)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned char LerpByte(unsigned char from, unsigned char to, float frac)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_UpdateFrameFog()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float R_GetDefaultNearClip()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetupProjection(float tanHalfFovX, float tanHalfFovY, struct GfxViewParms* viewParms)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetupViewProjectionMatrices(struct GfxViewParms* viewParms)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetAllowShadowMaps(const bool allowShadowMaps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_GetAllowShadowMaps()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum ShadowType R_DynamicShadowType()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddBModelSurfacesCamera(struct BModelDrawInfo* bmodelInfo, const struct GfxBrushModel* bmodel, union GfxDrawSurf** drawSurfs, union GfxDrawSurf** lastDrawSurfs, unsigned int reflectionProbeIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

union GfxDrawSurf* R_AddBModelSurfaces(struct BModelDrawInfo* bmodelInfo, const struct GfxBrushModel* bmodel, enum MaterialTechniqueType techType, union GfxDrawSurf* drawSurf, union GfxDrawSurf* lastDrawSurf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct XSurface* R_GetXSurface(const void* modelSurf, enum surfaceType_t surfType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddXModelDebugString(const float* origin, const char* string)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddXModelSurfacesCamera(struct XModelDrawInfo* modelInfo, const struct XModel* model, float* origin, unsigned int gfxEntIndex, unsigned int lightingHandle, unsigned int primaryLightIndex, int isShadowReceiver, int depthHack, union GfxDrawSurf** drawSurfs, union GfxDrawSurf** lastDrawSurfs, unsigned int reflectionProbeIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

union GfxDrawSurf* R_AddXModelSurfaces(struct XModelDrawInfo* modelInfo, const struct XModel* model, enum MaterialTechniqueType techType, union GfxDrawSurf* drawSurf, union GfxDrawSurf* lastDrawSurf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddDObjSurfacesCamera(struct GfxSceneEntity* sceneEnt, unsigned int lightingHandle, unsigned int primaryLightIndex, union GfxDrawSurf** drawSurfs, union GfxDrawSurf** lastDrawSurfs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

union GfxDrawSurf* R_AddDObjSurfaces(struct GfxSceneEntity* sceneEnt, enum MaterialTechniqueType techType, union GfxDrawSurf* drawSurf, union GfxDrawSurf* lastDrawSurf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_ShouldDrawDLights()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetDepthOfField(struct GfxViewInfo* viewInfo, const struct GfxSceneParms* sceneParms)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_UpdateColorManipulation(struct GfxViewInfo* viewInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetFilmInfo(struct GfxViewInfo* viewInfo, const struct GfxSceneParms* sceneParms)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetGlowInfo(struct GfxViewInfo* viewInfo, const struct GfxSceneParms* sceneParms)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetFullSceneViewMesh(int viewInfoIndex, struct GfxViewInfo* viewInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_EndFencePending()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_FinishedEndFence()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetEndTime(int endTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_WaitEndTime()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GenerateSortedSunShadowDrawSurfs(struct GfxViewInfo* viewInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GenerateSortedShadowCookieDrawSurfs(const struct GfxViewParms* viewParmsDpvs, const struct GfxViewParms* viewParmsDraw, struct GfxViewInfo* viewInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddEmissiveSpotLight(struct GfxViewInfo* viewInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GenerateMarkVertsForDynamicModels()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_GetVisibleDLights(const struct GfxLight** visibleLights)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GetLightSurfs(int visibleLightCount, const struct GfxLight** visibleLights)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GetPointLightShadowSurfs(struct GfxViewInfo* viewInfo, struct GfxVisibleLight* visibleLights, const struct GfxLight** lights)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum MaterialTechniqueType R_GetEmissiveTechnique(const struct GfxViewInfo* viewInfo, enum MaterialTechniqueType baseTech)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetSunShadowConstants(struct GfxCmdBufInput* input, const struct GfxSunShadowProjection* sunProj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetSunConstants(struct GfxCmdBufInput* input)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_ShouldDrawFxModelVerts()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_DrawCineWarning()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GenerateSortedDrawSurfs(const struct GfxSceneParms* sceneParms, const struct GfxViewParms* viewParmsDpvs, const struct GfxViewParms* viewParmsDraw)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_InitScene()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ClearScene(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_GetLocalClientNum()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetViewParmsForScene(const struct refdef_s* refdef, struct GfxViewParms* viewParms)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetSceneParms(const struct refdef_s* refdef, struct GfxSceneParms* sceneParms)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_LerpDir(const float* dirBegin, const float* dirEnd, const int beginLerpTime, const int endLerpTime, const int currTime, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_UpdateFrameSun()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetLodRamp(struct GfxLodRamp* lodRamp, float lodScale, float lodBias, float invFovScale)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_UpdateLodParms(const struct refdef_s* refdef, struct GfxLodParms* lodParms)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetLodOrigin(const struct refdef_s* refdef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_CorrectLodScale(const struct refdef_s* refdef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_RenderScene(const struct refdef_s* refdef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_LinkDObjEntity(unsigned int localClientNum, unsigned int entnum, float* origin, float radius)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_LinkBModelEntity(unsigned int localClientNum, unsigned int entnum, struct GfxBrushModel* bmodel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_UnlinkEntity(unsigned int localClientNum, unsigned int entnum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_LinkDynEnt(unsigned int dynEntId, enum DynEntityDrawType drawType, float* mins, float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_UnlinkDynEnt(unsigned int dynEntId, enum DynEntityDrawType drawType)
{

}

#endif // __UNIMPLEMENTED__
