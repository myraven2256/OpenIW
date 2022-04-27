//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static float R_ShadowedSpotLightScore(const struct GfxViewParms* viewParms, const struct GfxLight* light)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_AddPotentiallyShadowedLight(const struct GfxViewInfo* viewInfo, unsigned int shadowableLightIndex, struct GfxCandidateShadowedLight* candidateLights, unsigned int candidateLightCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddShadowsForLight(struct GfxViewInfo* viewInfo, unsigned int shadowableLightIndex, float spotShadowFade)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddShadowedLightToShadowHistory(struct GfxShadowedLightHistory* shadowHistory, unsigned int shadowableLightIndex, float fadeDelta)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_FadeOutShadowHistoryEntries(struct GfxShadowedLightHistory* shadowHistory, float fadeDelta)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ClearShadowedPrimaryLightHistory(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddDynamicShadowableLight(struct GfxViewInfo* viewInfo, const struct GfxLight* visibleLight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_IsDynamicShadowedLight(unsigned int shadowableLightIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_IsPrimaryLight(unsigned int shadowableLightIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ChooseShadowedLights(struct GfxViewInfo* viewInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_GetPrimaryLightEntityShadowBit(unsigned int localClientNum, unsigned int entnum, unsigned int primaryLightIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_GetPrimaryLightDynEntShadowBit(unsigned int entnum, unsigned int primaryLightIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_LinkSphereEntityToPrimaryLights(unsigned int localClientNum, unsigned int entityNum, const float* origin, float radius)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_LinkBoxEntityToPrimaryLights(unsigned int localClientNum, unsigned int entityNum, const float* mins, const float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_LinkDynEntToPrimaryLights(unsigned int dynEntId, enum DynEntityDrawType drawType, const float* mins, const float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_UnlinkEntityFromPrimaryLights(unsigned int localClientNum, unsigned int entityNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_UnlinkDynEntFromPrimaryLights(unsigned int dynEntId, enum DynEntityDrawType drawType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_IsEntityVisibleToPrimaryLight(unsigned int localClientNum, unsigned int entityNum, unsigned int primaryLightIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_IsDynEntVisibleToPrimaryLight(unsigned int dynEntId, enum DynEntityDrawType drawType, unsigned int primaryLightIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_IsEntityVisibleToShadowedPrimaryLight(unsigned int baseBitIndex, unsigned int shadowableLightIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_IsEntityVisibleToAnyShadowedPrimaryLight(const struct GfxViewInfo* viewInfo, unsigned int entityNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_IsDynEntVisibleToShadowedPrimaryLight(unsigned int baseBitIndex, enum DynEntityDrawType drawType, unsigned int shadowableLightIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_IsDynEntVisibleToAnyShadowedPrimaryLight(const struct GfxViewInfo* viewInfo, unsigned int dynEntId, enum DynEntityDrawType drawType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int R_GetNonSunPrimaryLightForBox(const struct GfxViewInfo* viewInfo, const float* boxMidPoint, const float* boxHalfSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int R_GetNonSunPrimaryLightForSphere(const struct GfxViewInfo* viewInfo, const float* origin, float radius)
{

}

#endif // __UNIMPLEMENTED__
