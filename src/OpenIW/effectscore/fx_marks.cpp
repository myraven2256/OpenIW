//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_fx_marks()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_InitMarksSystem(struct FxMarksSystem* marksSystem)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_ClearMarks(struct FxMarksSystem* marksSystem)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_FreeMarkTriGroups(struct FxMarksSystem* marksSystem, struct FxMark* mark)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_FreeMarkPointGroups(struct FxMarksSystem* marksSystem, struct FxMark* mark)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_FreeMarkFromList(struct FxMarksSystem* marksSystem, struct FxMark* mark, unsigned short* listHead)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_FreeMark(struct FxMarksSystem* marksSystem, struct FxMark* mark)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_FreeLruMark(struct FxMarksSystem* marksSystem)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int FX_AllocMarkTris(struct FxMarksSystem* marksSystem, const struct FxMarkTri* markTris, int triCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int FX_AllocMarkPoints(struct FxMarksSystem* marksSystem, int pointCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_LinkMarkIntoList(struct FxMarksSystem* marksSystem, unsigned short* head, struct FxMark* mark)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_CopyMarkTris(struct FxMarksSystem* marksSystem, const struct FxMarkTri* srcTris, int dstGroupHandle, int triCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_CopyMarkPoints(struct FxMarksSystem* marksSystem, const struct FxMarkPoint* srcPoints, int dstGroupHandle, int pointCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned short FX_FindModelHead(struct FxMarksSystem* marksSystem, unsigned short modelIndex, int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int FX_MarkContextsCompare(const struct GfxMarkContext* context0, const struct GfxMarkContext* context1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_CompareMarkTris(const struct FxMarkTri& tri0, const struct FxMarkTri& tri1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_AllocAndConstructMark(int localClientNum, int triCount, int pointCount, struct Material* material, struct FxMarkTri* markTris, const struct FxMarkPoint* markPoints, const float* origin, float radius, const float* texCoordAxis, const unsigned char* nativeColor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_ImpactMark_Generate_AddEntityBrush(int localClientNum, struct MarkInfo* markInfo, unsigned int entityIndex, const float* origin, float radius)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_ImpactMark_Generate_AddEntityModel(int localClientNum, struct MarkInfo* markInfo, unsigned int entityIndex, const float* origin, float radius)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_ImpactMark_Generate_Callback(void* context, int triCount, struct FxMarkTri* tris, int pointCount, struct FxMarkPoint* points, const float* markOrigin, const float* markTexCoordAxis)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_ImpactMark_Generate(int localClientNum, enum MarkFragmentsAgainstEnum markAgainst, struct Material* material, const float* origin, const float* axis[0x3], float orientation, const unsigned char* nativeColor, float radius, unsigned int markEntnum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_ImpactMark(int localClientNum, struct Material* worldMaterial, struct Material* modelMaterial, const float* origin, const float* quat, float orientation, const unsigned char* nativeColor, float radius, unsigned int markEntnum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_BeginMarks(int clientIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_CreateImpactMark(int localClientNum, const struct FxElemDef* elemDef, const struct FxSpatialFrame* spatialFrame, int randomSeed, unsigned int markEntnum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_MarkEntDetachAll(int localClientNum, int entnum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_MarkEntDetachAllOfType(int localClientNum, int entnum, int markType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_MarkEntDetachMatchingBones(struct FxMarksSystem* marksSystem, int entnum, const unsigned int* unsetHidePartBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_MarkEntUpdateHidePartBits(const unsigned int* oldHidePartBits, const unsigned int* newHidePartBits, int localClientNum, int entnum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_MarkEntUpdateBegin(struct FxMarkDObjUpdateContext* context, struct DObj_s* obj, bool isBrush, unsigned short brushIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_MarkEntDetachModel(struct FxMarksSystem* marksSystem, int entnum, int oldModelIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_MarkEntUpdateEndDObj(struct FxMarkDObjUpdateContext* context, int localClientNum, int entnum, struct DObj_s* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_MarkEntUpdateEnd(struct FxMarkDObjUpdateContext* context, int localClientNum, int entnum, struct DObj_s* obj, bool isBrush, unsigned short brushIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void setTexCoordAndLMap<GfxWorldVertex>(struct GfxWorldVertex* outVert, const float* texCoord, const float* lmapCoord)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_ExpandMarkVerts_NoTransform<GfxWorldVertex>(struct FxMarksSystem* marksSystem, const struct FxMark* mark, unsigned short baseVertex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_ExpandMarkVerts_Transform<GfxWorldVertex>(struct FxMarksSystem* marksSystem, const struct FxMark* mark, unsigned short baseVertex, const float* matrixTransform[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_AddMarkTrisToScene(const struct FxActiveMarkSurf* outSurf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_EmitMarkTri(struct FxMarksSystem* marksSystem, const unsigned short* indices, const struct GfxMarkContext* markContext, unsigned short baseVertex, struct FxActiveMarkSurf* outSurf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_DrawMarkTris(struct FxMarksSystem* marksSystem, const struct FxMark* mark, unsigned short baseVertex, unsigned short* indices, struct FxActiveMarkSurf* outSurf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_GenerateMarkVertsForMark_Begin(struct FxMarksSystem* marksSystem, struct FxMark* mark, unsigned int* indexCount, unsigned short* outBaseVertex, struct FxActiveMarkSurf* outDrawSurf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_GenerateMarkVertsForMark_SetLightHandle(struct FxActiveMarkSurf* drawSurf, unsigned short lightHandleOverride)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_GenerateMarkVertsForMark_SetReflectionProbeIndex(struct FxActiveMarkSurf* drawSurf, unsigned char reflectionProbeIndexOverride)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_GenerateMarkVertsForMark_FinishNonAnimated(struct FxMarksSystem* marksSystem, struct FxMark* mark, unsigned short baseVertex, struct FxActiveMarkSurf* drawSurf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_GenerateMarkVertsForMark_FinishAnimated(struct FxMarksSystem* marksSystem, struct FxMark* mark, unsigned short baseVertex, struct FxActiveMarkSurf* drawSurf, const float* transform[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_GenerateMarkVertsForMark_MatrixFromPlacement(const struct GfxPlacement* placement, const float* viewOffset, float* outTransform[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_GenerateMarkVertsForMark_MatrixFromScaledPlacement(const struct GfxScaledPlacement* placement, const float* viewOffset, float* outTransform[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_GenerateMarkVertsForMark_MatrixFromAnim(struct FxMark* mark, const struct DObj_s* dobj, const struct DObjAnimMat* boneMtxList, const float* viewOffset, float* outTransform[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_GenerateMarkVertsForList_EntDObj(struct FxMarksSystem* marksSystem, unsigned short head, const struct FxCamera* camera, unsigned int* indexCount, unsigned short lightHandleOverride, unsigned char reflectionProbeIndexOverride, const struct DObj_s* dobj, const struct DObjAnimMat* boneMtxList, unsigned int* hidePartBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_GenerateMarkVertsForList_EntXModel(struct FxMarksSystem* marksSystem, unsigned short head, const struct FxCamera* camera, unsigned int* indexCount, unsigned short lightHandleOverride, unsigned char reflectionProbeIndexOverride, const struct GfxScaledPlacement* placement)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_GenerateMarkVertsForList_EntBrush(struct FxMarksSystem* marksSystem, unsigned short head, const struct FxCamera* camera, unsigned int* indexCount, const struct GfxPlacement* placement, unsigned char reflectionProbeIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_GenerateMarkVertsForList_WorldXModel(struct FxMarksSystem* marksSystem, unsigned short head, const struct FxCamera* camera, unsigned int* indexCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_GenerateMarkVertsForList_WorldBrush(struct FxMarksSystem* marksSystem, unsigned short head, const struct FxCamera* camera, unsigned int* indexCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_BeginGeneratingMarkVerts(struct FxMarksSystem* marksSystem, unsigned int* indexCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_FinishGeneratingMarkVerts(struct FxMarksSystem* marksSystem)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_BeginGeneratingMarkVertsForEntModels(int localClientNum, unsigned int* indexCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_GenerateMarkVertsForEntXModel(int localClientNum, int entId, unsigned int* indexCount, unsigned short lightHandle, unsigned char reflectionProbeIndex, const struct GfxScaledPlacement* placement)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_GenerateMarkVertsForEntDObj(int localClientNum, int entId, unsigned int* indexCount, unsigned short lightHandle, unsigned char reflectionProbeIndex, const struct DObj_s* dobj, const struct cpose_t* pose)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_GenerateMarkVertsForEntBrush(int localClientNum, int entId, unsigned int* indexCount, unsigned char reflectionProbeIndex, const struct GfxPlacement* placement)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_EndGeneratingMarkVertsForEntModels(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_GenerateMarkVertsForStaticModels(int localClientNum, int smodelCount, const unsigned char* smodelVisLods)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_GenerateMarkVertsForWorld(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__
