//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_r_marks()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_RegisterMarkDvars()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_LerpModelMarkPoints(const struct FxModelMarkPoint* from, const struct FxModelMarkPoint* to, float lerp, struct FxModelMarkPoint* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_ChopPolyBehindPlane(int inPointCount, const struct FxModelMarkPoint* inPoints, struct FxModelMarkPoint* outPoints, const float* plane)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_LerpWorldMarkPoints(const struct FxWorldMarkPoint* from, const struct FxWorldMarkPoint* to, float lerp, struct FxWorldMarkPoint* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_ChopWorldPolyBehindPlane(int inPointCount, const struct FxWorldMarkPoint* inPoints, struct FxWorldMarkPoint* outPoints, const float* plane)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_Mark_MaterialAllowsMarks(const struct Material* markReceiverMaterialHandle, const struct Material* markMaterialHandle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_AllowMarks(int surfIndex, void* markMaterialAsVoid)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_AllowSmodelMarks(int smodelIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AABBTreeSurfaces_r(struct GfxAabbTree* tree, const float* mins, const float* maxs, function * allowSurf, void* callbackContext, struct GfxSurface** surfList, unsigned int surfListSize, unsigned int* surfCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AABBTreeSurfacesTwoLists_r(struct GfxAabbTree* tree, const float* mins, const float* maxs, function ** allowSurf, void* callbackContext, struct GfxSurface*** surfLists, unsigned int surfListSize, unsigned int* surfCounts)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_OutsideFrustumPlanes(const struct DpvsPlane* planes, unsigned int planeCount, const float* minmax)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AABBTreeCylinderSurfaces_r(struct GfxAabbTree* tree, const struct DpvsPlane* planes, unsigned int planeCount, function * allowSurf, void* callbackContext, struct GfxSurface** surfList, unsigned int surfListSize, unsigned int* surfCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddStaticModelToList(int smodelIndex, unsigned short* smodelList, int* smodelCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AABBTreeStaticModels_r(struct GfxAabbTree* tree, const float* mins, const float* maxs, function * allowSModel, unsigned short* smodelList, int smodelListSize, int* smodelCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddSurfaceToList(struct GfxSurface* surf, struct GfxSurface** surfList, unsigned int* surfCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_CellSurfaces(int cellIndex, const float* mins, const float* maxs, function * allowSurf, void* callbackContext, struct GfxSurface** surfList, unsigned int surfListSize, unsigned int* surfCount, unsigned char* cellBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_CellSurfacesTwoLists(int cellIndex, const float* mins, const float* maxs, function ** allowSurf, void* callbackContext, struct GfxSurface*** surfLists, unsigned int surfListSize, unsigned int* surfCounts, unsigned char* cellBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_CellCylinderSurfaces(int cellIndex, const struct DpvsPlane* planes, unsigned int planeCount, function * allowSurf, void* callbackContext, struct GfxSurface** surfList, unsigned int surfListSize, unsigned int* surfCount, unsigned char* cellBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_CellStaticModels(int cellIndex, const float* mins, const float* maxs, function * allowSModel, unsigned short* smodelList, int smodelListSize, int* smodelCount, unsigned char* cellBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_BoxSurfaces_r(struct mnode_t* node, const float* mins, const float* maxs, function ** allowSurf, void* callbackContext, struct GfxSurface*** surfLists, unsigned int surfListSize, unsigned int* surfCounts, unsigned int listCount, unsigned char* cellBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_BoxStaticModels_r(struct mnode_t* node, const float* mins, const float* maxs, function * allowSModel, unsigned short* smodelList, int smodelListSize, int* smodelCount, unsigned char* cellBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_CylinderSurfaces_r(struct mnode_t* node, const float* start, const float* end, float radius, const struct DpvsPlane* planes, unsigned int planeCount, function * allowSurf, void* callbackContext, struct GfxSurface** surfList, unsigned int surfListSize, unsigned int* surfCount, unsigned char* cellBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_BoxSurfaces(const float* mins, const float* maxs, function ** allowSurf, void* callbackContext, struct GfxSurface*** surfLists, unsigned int surfListSize, unsigned int* surfCounts, unsigned int listCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_BoxStaticModels(const float* mins, const float* maxs, function * allowSModel, unsigned short* smodelList, int smodelListSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int R_CylinderSurfaces(const float* start, const float* end, float radius, const struct DpvsPlane* planes, unsigned int planeCount, function * allowSurf, void* callbackContext, struct GfxSurface** surfList, unsigned int surfListSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_AddMarkFragment<1>(struct FxModelMarkPoint* clipPoints[0x9], const float* planes[0x4], const struct GfxMarkContext* markContext, int baseIndex, int maxTris, struct FxMarkTri* tris, int maxPoints, const struct GfxPackedVertex** triVerts, const float* transformNormalMatrix[0x3], struct FxMarkPoint* points)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GetMarkFragmentBounds(const float* origin, const float* axis[0x3], float radius, float* mins, float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GetMarkFragmentClipPlanes(const float* origin, const float* axis[0x3], float radius, float* planes[0x4])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_MarkFragment_IsTriangleRejected(const float* markNormal, const float* xyz0, const float* xyz1, const float* xyz2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_MarkFragment_SetupWorldClipPoints(const struct GfxWorldVertex* triVerts0, const unsigned short* indices, struct FxWorldMarkPoint* clipPoints[0x9])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_MarkFragment_DoTriangle<1>(struct MarkInfo* markInfo, const float* clipPlanes[0x4], const struct GfxMarkContext* markContext, const struct GfxPackedVertex** triVerts, const float* transformNormalMatrix[0x3], struct FxModelMarkPoint* clipPoints[0x9])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_MarkFragments_BrushSurface(struct MarkInfo* markInfo, struct GfxMarkContext* markContext, const float* clipPlanes[0x4], const float* markDir, const struct GfxSurface* surface, bool* anyMarks)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_MarkFragments_WorldBrushes(struct MarkInfo* markInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Mark_TransformClipPlanes(const float* inClipPlanes[0x4], float* matrix[0x3], float* outClipPlanes[0x4])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_MarkFragments_EntBrushes(struct MarkInfo* markInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_MarkFragments_Brushes(struct MarkInfo* markInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_MarkModelCoreCallback<1>(void* contextAsVoid, const struct GfxPackedVertex** triVerts0, const struct GfxPackedVertex** triVerts1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_MarkFragments_XModelSurface_Basic(struct MarkInfo* markInfo, const struct XSurface* surface, const float* modelAxis[0x3], const float* modelOrigin, float modelScale, struct GfxMarkContext* markContext)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_MarkFragments_EntirelyRigidXModel(struct MarkInfo* markInfo, const struct XModel* xmodel, const float* modelAxis[0x3], const float* modelOrigin, float modelScale, struct GfxMarkContext* markContext)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_MarkFragments_AnimatedXModel_VertList(struct MarkInfo* markInfo, int vertListIndex, const struct DObjAnimMat* poseBone, const struct DObjAnimMat* baseBone, struct GfxMarkContext* markContext, struct XSurface* surface)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_MarkFragments_AnimatedXModel(struct MarkInfo* markInfo, const struct XModel* model, const unsigned int* hidePartBits, int boneIndex, const struct DObjAnimMat* boneMtxList, int boneCount, struct GfxMarkContext* markContext)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_MarkUtil_GetDObjAnimMatAndHideParts(const struct DObj_s* dobj, const struct cpose_t* pose, const struct DObjAnimMat** outBoneMtxList, unsigned int* outHidePartBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_MarkFragments_SceneDObjs(struct MarkInfo* markInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_MarkFragments_StaticModels(struct MarkInfo* markInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_MarkFragments_Models(struct MarkInfo* markInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_MarkFragments_Begin(struct MarkInfo* markInfo, enum MarkFragmentsAgainstEnum markAgainst, const float* origin, const float* axis[0x3], float radius, const float* viewOffset, struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool R_MarkFragments_AddDObj(struct MarkInfo* markInfo, struct DObj_s* dObj, struct cpose_t* pose, unsigned short entityIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool R_MarkFragments_AddBModel(struct MarkInfo* markInfo, struct GfxBrushModel* brushModel, struct cpose_t* pose, unsigned short entityIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_MarkFragments_Go(struct MarkInfo* markInfo, function * callback, void* callbackContext, int maxTris, struct FxMarkTri* tris, int maxPoints, struct FxMarkPoint* points)
{

}

#endif // __UNIMPLEMENTED__
