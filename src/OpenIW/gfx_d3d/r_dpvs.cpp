//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_r_dpvs()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float R_DpvsPlaneDistToEye(const struct DpvsPlane* plane)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GetSidePlaneNormals(const float* winding[0x3], unsigned int vertexCount, float* normals[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_AddNearAndFarClipPlanes(struct DpvsPlane* planes, int planeCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float R_FurthestPointOnWinding(const float* points[0x3], int pointCount, const struct DpvsPlane* plane)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float R_NearestPointOnWinding(const float* points[0x3], int pointCount, const struct DpvsPlane* plane)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_FrustumClipPlanes(const struct GfxMatrix* viewProjMtx, const float* sidePlanes[0x4], int sidePlaneCount, struct DpvsPlane* frustumPlanes)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* R_PortalAssertMsg()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ProjectPortal(int vertexCount, const float* winding[0x3], float* mins, float* maxs, enum DpvsClipChildren* clipChildren)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_UnprojectPoint(const float* projected, float* unprojected)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_AddBevelPlanes(struct DpvsPlane* planes, unsigned int vertexCount, const float* winding[0x3], const float* windingNormals[0x3], const float* mins, const float* maxs, enum DpvsForceBevels forceBevels)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_PortalClipPlanes(struct DpvsPlane* planes, unsigned int vertexCount, const float* winding[0x3], struct GfxCell* cell, enum DpvsClipChildren* clipChildren)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_PortalClipPlanesNoFrustum(struct DpvsPlane* planes, unsigned int vertexCount, const float* winding[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_CellForPoint(const float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_PortalBehindPlane(const struct GfxPortal* portal, const struct DpvsPlane* plane)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_PortalBehindAnyPlane(const struct GfxPortal* portal, const struct DpvsPlane* planes, int planeCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const float* R_ChopPortalWinding(const float* vertsIn[0x3], int* vertexCount, const struct DpvsPlane* plane, float* vertsOut[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int R_FindNearestReflectionProbeInCell(const struct GfxWorld* world, const struct GfxCell* cell, const float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int R_FindNearestReflectionProbe(const struct GfxWorld* world, const float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int R_CalcReflectionProbeIndex(const float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddAllSceneEntSurfacesCamera(const struct GfxViewInfo* viewInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddAllSceneEntSurfacesRangeSunShadow(unsigned int partitionIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddAllSceneEntSurfacesSunShadow()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddAllSceneEntSurfacesSpotShadow(const struct GfxViewInfo* viewInfo, unsigned int spotShadowIndex, unsigned int primaryLightIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddSceneDObj(unsigned int entnum, unsigned int viewIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_DrawBModel(struct BModelDrawInfo* bmodelInfo, const struct GfxBrushModel* bmodel, const struct GfxPlacement* placement)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_CullDynBrushInCell(unsigned int cellIndex, const struct DpvsPlane* planes, int planeCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_DrawAllSceneEnt(const struct GfxViewInfo* viewInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_DrawAllDynEnt(const struct GfxViewInfo* viewInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_UnfilterEntFromCells(unsigned int localClientNum, unsigned int entnum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_UnfilterDynEntFromCells(unsigned int dynEntId, enum DynEntityDrawType drawType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddEntToCell(struct FilterEntInfo* entInfo, unsigned int cellIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddDynEntToCell(unsigned int cellIndex, unsigned int dynEntIndex, enum DynEntityDrawType drawType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_FilterEntIntoCells_r(struct FilterEntInfo* entInfo, struct mnode_t* node, const float* mins, const float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_FilterDynEntIntoCells_r(struct mnode_t* node, unsigned int dynEntIndex, enum DynEntityDrawType drawType, const float* mins, const float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_FilterXModelIntoScene(const struct XModel* model, const struct GfxScaledPlacement* placement, unsigned short renderFxFlags, unsigned short* cachedLightingHandle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_FilterDObjIntoCells(unsigned int localClientNum, unsigned int entnum, float* origin, float radius)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_FilterBModelIntoCells(unsigned int localClientNum, unsigned int entnum, struct GfxBrushModel* bmodel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_FilterDynEntIntoCells(unsigned int dynEntId, enum DynEntityDrawType drawType, float* mins, float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_FilterEntitiesIntoCells(int cameraCellIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int R_SetVisData(unsigned int viewIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCellDynBrushSurfacesInFrustumCmd(void* data)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddCellSurfacesAndCullGroupsInFrustumDelayed(const struct GfxCell* cell, const struct DpvsPlane* planes, int planeCount, int frustumPlaneCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_ParentHeapIndex(int heapIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_FirstChildHeapIndex(int heapIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AssertValidQueue()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_EnqueuePortal(struct GfxPortal* portal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct GfxPortal* R_NextQueuedPortal()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float* R_AllocHullPoints()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_FreeHullPoints(float* hullPoints[0x2])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddVertToPortalHullPoints(struct GfxPortal* portal, const float* v)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_ShouldSkipPortal(const struct GfxPortal* portal, const struct DpvsPlane* planes, int planeCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_ChopPortal(const struct GfxPortal* portal, const struct DpvsPlane* parentPlane, const struct DpvsPlane* planes, int planeCount, float* v[0x128], const float** finalVerts[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_ChopPortalAndAddHullPoints(struct GfxPortal* portal, const struct DpvsPlane* parentPlane, const struct DpvsPlane* planes, int planeCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_ChopPortalAndAddHullPointsNoFrustum(struct GfxPortal* portal, const struct DpvsPlane* parentPlane, const struct DpvsPlane* planes, int planeCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_IsCellInList(const struct GfxCell* cell, const struct GfxCell** list, int count)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_AddCellToList(const struct GfxCell* cell, const struct GfxCell** list, int count)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_GetFurtherCellList_r(const struct GfxCell* cell, const struct DpvsPlane* parentPlane, const struct DpvsPlane* planes, int planeCount, float* v[0x128], const struct GfxCell** list, int count)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetCellVisible(const struct GfxCell* cell)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_VisitAllFurtherCells(const struct GfxCell* cell, const struct DpvsPlane* parentPlane, const struct DpvsPlane* planes, int planeCount, int frustumPlaneCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetAncestorListStatus(struct GfxPortal* portal, bool isAncestor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetRecursionAncestors(struct GfxPortal* portal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ClearRecursionAncestors(struct GfxPortal* portal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_VisitPortalsForCell(const struct GfxCell* cell, struct GfxPortal* parentPortal, const struct DpvsPlane* parentPlane, const struct DpvsPlane* planes, int planeCount, int frustumPlaneCount, unsigned int recursionDepth, enum DpvsClipChildren clipChildren)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_VisitPortalsForCellNoFrustum(const struct GfxCell* cell, struct GfxPortal* parentPortal, const struct DpvsPlane* parentPlane, const struct DpvsPlane* planes, int planeCount, int frustumPlaneCount, unsigned int recursionDepth)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_VisitPortals(const struct GfxCell* cell, const struct DpvsPlane* parentPlane, const struct DpvsPlane* planes, int planeCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_VisitPortalsNoFrustum(const struct GfxCell* cell)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_GenerateShadowMapCasterCells()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetupDpvsForPoint(const struct GfxViewParms* viewParms)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddWorldSurfacesFrustumOnly()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddWorldSurfacesPortalWalk(int cameraCellIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ShowCull()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_InitSceneData(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEntCl_InitFilter()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_InitSceneBuffers()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ClearDpvsScene()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool R_CullDynamicSpotLightInCameraView()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_CullDynamicPointLightsInCameraView()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetupWorldSurfacesDpvs(const struct GfxViewParms* viewParms)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetViewFrustumPlanes(struct GfxViewInfo* viewInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddWorldSurfacesDpvs(const struct GfxViewParms* viewParms, int cameraCellIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetupShadowSurfacesDpvs(const struct GfxViewParms* viewParms, const float* sidePlanes[0x4], unsigned int sidePlaneCount, int partitionIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float R_GetFarPlaneDist()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetCullDist(float dist)
{

}

#endif // __UNIMPLEMENTED__
