//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static void R_GetSceneExtentsAlongDir(const float* origin, const float* forward, float* nearCap, float* farCap)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GetSunAxes(float* sunAxis[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ClipSpaceToWorldSpace(const struct GfxMatrix* invViewProjMtx, const float* clipSpacePoints[0x3], int pointCount, float* worldSpacePoints[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GetFrustumNearClipPoints(const struct GfxMatrix* invViewProjMtx, float* frustumPoints[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetupSunShadowBoundingPoly(const float* frustumPointsInSunProj[0x2], const float* viewOrgInSunProj, const float* snappedViewOrgInSunProj, float maxSizeInSunProj, const float* snappedViewOrgInClipSpace, struct GfxSunShadowBoundingPoly* boundingPoly, unsigned int pointCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SunShadowMapBoundingPoly(const struct GfxSunShadowBoundingPoly* boundingPoly, float sampleSize, float* polyInClipSpace[0x2], int* pointIsNear)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_SunShadowMapClipSpaceClipPlanes(const struct GfxSunShadowBoundingPoly* boundingPoly, int partitionIndex, float sampleSize, float* boundingPolyClipSpacePlanes[0x4])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetupSunShadowMapViewMatrix(const float* snappedViewOrgInSunProj, const float* sunAxis[0x3], struct GfxSunShadowProjection* sunProj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SunShadowMapProjectionMatrix(const float* snappedViewOrgInClipSpace, float shadowSampleSize, float nearClip, float farClip, struct GfxViewParms* shadowViewParms)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetupSunShadowMapPartitionFraction(const struct GfxViewParms* viewParms, float scaleToFitUsable, struct GfxSunShadowProjection* sunProj, float* partitionFraction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GetSunShadowMapPartitionViewOrgInTextureSpace(const float* viewOrgInPixels, const float* viewOrgInSunProj, const float* snappedViewOrgInSunProj, float sampleSize, float* viewOrgInTexSpace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetupNearRegionPlane(const float* partitionFraction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetupSunShadowMapProjection(const struct GfxViewParms* viewParms, const float* sunAxis[0x3], struct GfxSunShadow* sunShadow, float* snappedViewOrgInClipSpace[0x2], float* partitionFraction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GetSunShadowLookupMatrix(const struct GfxViewParms* shadowViewParms, const struct GfxSunShadowProjection* sunProj, const float* partitionFraction, struct GfxMatrix* lookupMatrix)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetupSunShadowMaps(const struct GfxViewParms* viewParms, struct GfxSunShadow* sunShadow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SunShadowMaps(struct GfxSunShadow* sunShadow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_MergeAndEmitSunShadowMapsSurfs(struct GfxViewInfo* viewInfo)
{

}

#endif // __UNIMPLEMENTED__
