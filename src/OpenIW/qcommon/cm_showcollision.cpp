//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_cm_showcollision()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_GetShowCollisionColor(float* colorFloat, int colorCounter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CM_BrushInView(const struct cbrush_t* brush, struct cplane_s* frustumPlanes, int frustumPlaneCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_AddSimpleBrushPoint(const struct cbrush_t* brush, const float* axialPlanes[0x4], const short* sideIndices, const float* xyz, int ptCount, struct ShowCollisionBrushPt* brushPts)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CM_GetPlaneVec4Form(const struct cbrushside_t* sides, const float* axialPlanes[0x4], int index, float* expandedPlane)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_ForEachBrushPlaneIntersection(const struct cbrush_t* brush, const float* axialPlanes[0x4], struct ShowCollisionBrushPt* brushPts)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_PointInList(const float* point, const float* xyzList[0x3], int xyzCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_GetXyzList(int sideIndex, const struct ShowCollisionBrushPt* pts, int ptCount, float* xyz[0x3], int xyzLimit)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_PickProjectionAxes(const float* normal, int* i, int* j)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float CM_SignedAreaForPointsProjected(const float* pt0, const float* pt1, const float* pt2, int i, int j)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_AddColinearExteriorPointToWindingProjected(struct winding_t* w, const float* pt, int i, int j, int index0, int index1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_AddExteriorPointToWindingProjected(struct winding_t* w, const float* pt, int i, int j)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float CM_RepresentativeTriangleFromWinding(const struct winding_t* w, const float* normal, int* i0, int* i1, int* i2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_ReverseWinding(struct winding_t* w)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CM_BuildBrushWindingForSide(struct winding_t* winding, float* planeNormal, int sideIndex, const struct ShowCollisionBrushPt* pts, int ptCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CM_ShowSingleBrushCollision(const struct cbrush_t* brush, const float* color, function * drawCollisionPoly)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CM_ShowBrushCollision(int contentMask, struct cplane_s* frustumPlanes, int frustumPlaneCount, function * drawCollisionPoly)
{

}

#endif // __UNIMPLEMENTED__
