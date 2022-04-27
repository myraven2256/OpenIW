//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_fx_draw()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned char FX_InterpolateColor(const struct FxElemVisStateSample* refState, float valueLerp, float valueLerpInv, float sampleLerp, float sampleLerpInv, int channel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float FX_IntegrateRotationFromZero(const struct FxElemVisStateSample* refState, int randomSeed, enum FxRandKey randomKey, float sampleLerp, float msecLifeSpan)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_EvaluateVisAlpha(struct FxElemPreVisualState* preVisState, struct FxElemVisualState* visState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_SetupVisualState(const struct FxElemDef* elemDef, const struct FxEffect* effect, int randomSeed, float normTimeUpdateEnd, struct FxElemPreVisualState* preVisState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_EvaluateSize(struct FxElemPreVisualState* preVisState, struct FxElemVisualState* visState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_EvaluateVisualState_DoLighting(struct FxElemPreVisualState* preVisState, struct FxElemVisualState* visState, const struct FxElemDef* elemDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_EvaluateVisualState(struct FxElemPreVisualState* preVisState, float msecLifeSpan, struct FxElemVisualState* visState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_GetSpriteTexCoords(const struct FxDrawState* draw, float* s0, float* ds, float* t0, float* dt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_GenSpriteVerts(struct FxDrawState* draw, const float* tangent, const float* binormal, const float* normal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_GenTrail_IndsForSegment(struct FxDrawState* draw, unsigned short reservedBaseVertex, struct r_double_index_t* outIndices)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Fx_GenTrail_PopulateSegmentDrawState(struct FxDrawState* draw, float spawnDist, float uCoordOffset, const float* basis[0x3], struct FxTrailSegmentDrawState* outState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_GenTrail_VertsForSegment(const struct FxTrailSegmentDrawState* segmentDrawState, struct GfxPackedVertex* remoteVerts)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int FX_CullElementForDraw_FrustumPlaneCount(const struct FxDrawState* draw)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_CullElementForDraw_Sprite(const struct FxDrawState* draw)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_DrawElem_BillboardSprite(struct FxDrawState* draw)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_DrawElem_OrientedSprite(struct FxDrawState* draw)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float FX_GetMsecForSamplingAxis(float msecElapsed, float msecLifeSpan, int atRestFraction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_SetPlacement(const struct FxDrawState* draw, struct GfxScaledPlacement* placement)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_CullCylinder(const struct FxCamera* camera, unsigned int frustumPlaneCount, const float* posWorld0, const float* posWorld1, float radius)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_CullElementForDraw_Tail(const struct FxDrawState* draw)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_DrawElem_Tail(struct FxDrawState* draw)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float FX_InterpolateScale(const struct FxElemVisStateSample* refState, int randomSeed, enum FxRandKey randomKey, float sampleLerp, float sampleLerpInv)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float FX_ClampRangeLerp(const float dist, const struct FxFloatRange* range)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_EvaluateDistanceFade(struct FxDrawState* draw)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_CullElementForDraw_Cloud(const struct FxDrawState* draw)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_DrawElem_Cloud(struct FxDrawState* draw)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_SetPlacementFromPhysics(const struct FxDrawState* draw, struct GfxPlacement* placement)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_DrawElem_Model(struct FxDrawState* draw)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_CullElementForDraw_Light(const struct FxDrawState* draw)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_DrawElem_Light(struct FxDrawState* draw)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_DrawElem_SpotLight(struct FxDrawState* draw)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_DrawElement_Setup<1>(struct FxSystem* system, struct FxDrawState* draw, int elemMsecBegin, int elemSequence, const float* elemOrigin, float* outRealNormTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_DrawElement(struct FxSystem* system, const struct FxElemDef* elemDef, const struct FxElem* elem, struct FxDrawState* draw)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_DrawTrail(struct FxSystem* system, struct FxDrawState* draw, struct FxTrail* trail)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_DrawTrailsForEffect(struct FxSystem* system, struct FxEffect* effect, int drawTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_DrawSpriteEffect(struct FxSystem* system, struct FxEffect* effect, int drawTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_DrawSpotLightEffect(struct FxSystem* system, struct FxEffect* effect, int drawTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_DrawNonSpriteEffect(struct FxSystem* system, struct FxEffect* effect, unsigned int elemClass, int drawTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_DrawNonSpriteElems(struct FxSystem* system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_DrawSpotLight(struct FxSystem* system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_DrawSpriteElems(struct FxSystem* system, int drawTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_GenerateVerts(struct FxGenerateVertsCmd* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_FillGenerateVertsCmd(int localClientNum, struct FxGenerateVertsCmd* cmd)
{

}

#endif // __UNIMPLEMENTED__
