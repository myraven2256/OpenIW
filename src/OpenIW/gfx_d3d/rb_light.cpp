//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_r_light()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ShowGridOrigin(const float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ShowGridBox(const unsigned int* pos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ShowGridCorner(unsigned int x, unsigned int y, unsigned int z, float halfSize, const float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ShowLightGrid(const struct GfxLightGrid* lightGrid, const unsigned int* pos, const float* samplePos, const struct GfxLightGridEntry** cornerEntry, bool* suppressEntry, bool honorSuppression)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_AddSortedHistoryEntry(int x, int y, int z, int pos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_SortedHistoryEntry(int x, int y, int z, enum GfxSortedHistoryAdd addMode)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ShowLightVisCachePoints(const float* viewOrigin, const struct DpvsPlane* clipPlanes, int clipPlaneCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_UpdateVisHistory(const struct GfxLightGrid* lightGrid, const unsigned int* pos, const struct GfxLightGridEntry** cornerEntry)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned char R_GetPackedSunWeightFromFloat(float sunWeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AverageLightGridColors(const struct GfxLightGridColors* colors, float sunWeight, unsigned char* outColor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetLightGridColors(const struct GfxLightGridColors* colors, unsigned char packedSunWeight, unsigned char* pixels)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetLightGridColorsFromIndex(const struct GfxLightGrid* lightGrid, unsigned int colorsIndex, float primaryLightWeight, unsigned char* dest)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ScaleLightGridColors(const struct GfxLightGridColors* colors, unsigned short fixedPointWeight, unsigned short* scaled)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_WeightedAccumulateLightGridColors(const struct GfxLightGridColors* colors, unsigned short fixedPointWeight, unsigned short* accumulated)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_PackAccumulatedLightGridColors(const unsigned short* accumulated, struct GfxLightGridColors* packed)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GetLightGridColorsFixedPointBlendWeights(const float* colorsWeight, unsigned int colorsCount, float weightNormalizeScale, unsigned short* fixedPointWeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_FixedPointBlendLightGridColors(const struct GfxLightGrid* lightGrid, const unsigned short* colorsIndex, const unsigned short* fixedPointWeight, unsigned int colorsCount, struct GfxLightGridColors* outPacked)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_BlendLightGridColors(const struct GfxLightGrid* lightGrid, const unsigned short* colorsIndex, const float* colorsWeight, unsigned int colorsCount, float weightNormalizeScale, struct GfxLightGridColors* outPacked)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_BlendAndAverageLightGridColors(const struct GfxLightGrid* lightGrid, const unsigned short* colorsIndex, const float* colorsWeight, unsigned int colorsCount, float primaryLightWeight, float weightNormalizeScale, unsigned char* outAverage)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_BlendAndSetLightGridColors(const struct GfxLightGrid* lightGrid, const unsigned short* colorsIndex, const float* colorsWeight, unsigned int colorsCount, float primaryLightWeight, float weightNormalizeScale, unsigned char* dest)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetDefaultLightGridColors(const struct GfxLightGrid* lightGrid, unsigned char* dest)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned char R_ExtrapolateLightingAtPoint(const struct GfxLightGrid* lightGrid, unsigned char* dest, enum GfxModelLightExtrapolation extrapolateBehavior, unsigned int defaultGridEntry)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_AddLightGridSample(unsigned short* sampleColors, float* sampleWeight, unsigned int sampleCount, unsigned short sampleColorsAdd, float sampleWeightAdd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GetLightGridSampleEntryQuad(const struct GfxLightGrid* lightGrid, const unsigned int* pos, const struct GfxLightGridEntry** entries, unsigned int* defaultGridEntry)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_IsBetterPrimaryLight(unsigned char oldPrimaryLightIndex, unsigned char newPrimaryLightIndex, float oldWeight, float newWeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_IsValidLightGridSample(const struct GfxLightGrid* lightGrid, const struct GfxLightGridEntry* entry, int cornerIndex, const unsigned int* pos, const float* samplePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned char R_LightGridLookup(const struct GfxLightGrid* lightGrid, const float* samplePos, float* cornerWeight, const struct GfxLightGridEntry** cornerEntry, unsigned int* defaultGridEntry)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned char R_GetPrimaryLightFromGrid(const struct GfxLightGrid* lightGrid, const float* samplePos, unsigned char sunPrimaryLightIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_CanLightInfluenceLightGridCorner(const struct GfxLightGrid* lightGrid, const struct ComPrimaryLight* light, const float* samplePos, unsigned int cornerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int R_GetLightingAtPoint(const struct GfxLightGrid* lightGrid, const float* samplePos, unsigned int nonSunPrimaryLightIndex, unsigned char* dest, enum GfxModelLightExtrapolation extrapolateBehavior)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_GetAverageLightingAtPoint(const float* samplePos, unsigned char* outColor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_LightVisHistoryFilename(const char* bspName, char* filename)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_InitLightVisHistory(const char* bspName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SaveLightVisHistory()
{

}

#endif // __UNIMPLEMENTED__
