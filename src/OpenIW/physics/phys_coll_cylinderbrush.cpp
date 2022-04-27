//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static void Phys_AddContactForPlane(struct Results* results, const float* pt, const float* plane, const float* normal, int surfaceFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int Phys_ClipLineSegmentAgainstCylinderRadius(const float* pt1, const float* pt2, const struct objInfo* info, float* result[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Phys_ClipPolygonAgainstCylinderRadius(const struct Poly* poly, const struct objInfo* info, float* result[0x3], unsigned int maxVerts)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_PushPolyOutOfCylinderEndcapPlane(struct Results* results, const struct Poly* poly, const float* polyNormal, const struct objInfo* info, int surfaceFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Phys_CylinderFaceTestAxis(const float* polyNormal, const struct Poly* poly, const struct objInfo* info, const float* axis, float depthEpsilon, struct SeparatingAxisInfo* axisInfo, unsigned int axisNumber, bool testForRejectionOnly)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Phys_TestCircleToEdgeAxis(const float* polyNormal, const struct Poly* poly, const float* pt1, const float* edge, const struct objInfo* info, const float* circleCenter, struct SeparatingAxisInfo* axisInfo, unsigned int axisNumber)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Phys_CylinderFaceTestSeparatingAxes(const float* polyPlane, const struct Poly* poly, const struct objInfo* info, struct SeparatingAxisInfo* axisInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_ClipCylinderEdgeToPoly(struct SeparatingAxisInfo* axisInfo, const float* polyPlane, const struct Poly* poly, const struct objInfo* info, int surfaceFlags, struct Results* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int Phys_IntersectionOfCircleWithPlane(const float* plane, const float* circleCenter, const float* circleAxis, float circleRadius, float* pt1, float* pt2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_PushEdgeAwayFromCylinderCircle(const float* ptOnEdge, const float* pt2OnEdge, const float* edge, const float* contactNormal, const struct objInfo* info, int surfaceFlags, struct Results* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_ClipCylinderEndcapToPoly(const float* polyPlane, const struct Poly* poly, const struct objInfo* info, int surfaceFlags, struct Results* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_PushLinesAway(const float* p1, const float* dir1, const float* p2, const float* dir2, const float* contactNormal, float depth, struct Results* results, int surfaceFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_CollideCylinderWithFace(const float* polyPlane, const struct Poly* poly, const struct objInfo* info, int surfaceFlags, struct Results* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Phys_DistanceOfCylinderFromPlane(const float* plane, const struct objInfo* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_CollideCylinderWithBrush(const struct cbrush_t* brush, const struct objInfo* info, struct Results* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_CollideCylinderWithTriangleList(const unsigned short* a_indices, const float* verts[0x3], unsigned int triCount, const struct objInfo* info, int surfaceFlags, struct Results* results)
{

}

#endif // __UNIMPLEMENTED__
