//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void Phys_DrawPoly(const struct Poly* poly, const float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_DrawPolyTransformed(const struct Poly* poly, const float* color, const float* pos, const float* R[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct dContactGeomExt* AddContact(struct Results* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Phys_AddContactData(struct Results* results, float depth, const float* normal, const float* pos, int surfaceFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CircularRemoveRange(float* xyz[0x3], int pointCount, int begin, int end)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void InsertPoint(float* xyz[0x3], int pointCount, int maxPoints, int insertAfter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum PolyOrientation GetPolyOrientation(const float* polyNormal, const float* poly[0x3], unsigned int ptCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Phys_GetChoppingPlaneForPolyEdge(const float* polyNormal, const float* pt1, const float* pt2, bool clockwise, float* outPlane)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int Phys_ClipLineSegmentAgainstPlane(float* pt1, float* pt2, const float* choppingPlane)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int Phys_ClipPolyAgainstPlane(float* poly[0x3], unsigned int polyCount, unsigned int maxCount, const float* choppingPlane)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int ClipPolys(const float* polyNormal, const float* poly1[0x3], unsigned int poly1Count, const float* poly2[0x3], unsigned int poly2Count, float* result[0x3], const unsigned int maxCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int Phys_ClipLineSegmentAgainstPoly(const float* polyNormal, const float* poly[0x3], unsigned int polyCount, float* pt1, float* pt2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_ProjectBoxFaceOntoBrushFaceAndClip(const struct objInfo* info, int boxAxis, int boxSign, const float* brushPlane, const struct Poly* winding, int surfaceFlags, struct Results* results, const float* collisionNormal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ProjectFaceOntoFaceAndClip(const float* referencePlane, const struct Poly* referencePoly, const struct Poly* poly2, int surfaceFlags, struct Results* results, const float* collisionNormal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int GetClosestBrushFace(const float* normal, const struct cbrush_t* brush, const struct Poly* brushWindings, float* outBrushPlane)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int GetClosestOrientedBrushFace(const float* normal, const struct cbrush_t* brush, const struct Poly* brushPolys, const float* orientedPlanes[0x4], float* outBrushPlane)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GetClosestBoxFace(const struct objInfo* info, const float* normal, int* minAxis, int* minSign)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int IntersectPlanesSinglePrecision(const float* plane[0x4], float* xyz)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_GetWindingForBrushFace(const struct cbrush_t* brush, const float* inPlanes[0x4], unsigned int brushSide, struct Poly* outWinding, int maxVerts, const float* axialPlanes[0x4])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_GetWindingForBrushFace2(const struct cbrush_t* brush, unsigned int brushSide, struct Poly* outWinding, int maxVerts, const float* axialPlanes[0x4])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int Phys_BuildWindingsForBrush(const struct cbrush_t* brush, const float* planes[0x4], struct Poly* outPolys, unsigned int maxPolys, float* outVerts[0x3], unsigned int maxVerts)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int Phys_BuildWindingsForBrush2(const struct cbrush_t* brush, struct Poly* outPolys, unsigned int maxPolys, float* outVerts[0x3], unsigned int maxVerts)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Phys_TestBoxAgainstEachBrushPlane(const struct cbrush_t* brush, const struct objInfo* info, float* outBrushPlane, int* outSideIndex, float* outMaxSeparation)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_CollideBoxWithBrushFace(const struct cbrush_t* brush, int brushSideIndex, const float* bestBrushPlane, const struct Poly* brushWinding, const struct objInfo* info, struct Results* results, float* collisionNormal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Phys_DoesPolyIntersectBox(const struct Poly* poly, const struct objInfo* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_CollideBoxWithBrush(const struct cbrush_t* brush, const struct objInfo* info, struct Results* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Phys_TestVertsAgainstPlane(const float* verts[0x3], unsigned int vertCount, const float* plane)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Phys_TestVertsAgainstPlane_Wrapper(const float* plane, const struct Poly* verts)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Phys_TestTriangleAgainstBrushPlane(const float* brushPlane, const float* triangle[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Phys_TestVertsAgainstPlanes(const float* verts[0x3], unsigned int vertCount, const struct cbrush_t* brushContainingThePlanes, const float* planes[0x4], float* outPlane, int* outSideIndex, float* outMaxSeparation)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_TransformPlane(const float* normal, float dist, const float* translate, const float* rotate[0x3], float* outPlane)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_CollideOrientedBrushAgainstFixedBrushFace(const struct cbrush_t* fixedBrush, int fixedBrushSideIndex, float* bestFixedBrushPlane, const struct Poly* fixedBrushPolys, const struct cbrush_t* orientedBrush, const struct Poly* orientedBrushPolys, const float* transformedPlanes[0x4], struct Results* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Phys_CollideBrushAgainstBrushFace(const struct cbrush_t* brush, const struct Poly* brushPolys, const struct cbrush_t* referenceBrush, int referenceBrushSideIndex, float* referenceBrushPlane, const struct Poly* referenceBrushPolys, struct Results* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Phys_DoesPolyIntersectOrientedBrush(const struct Poly* poly, const float* transformedPlanes[0x4], unsigned int brushSides)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_CollideOrientedBrushWithBrush(const struct cbrush_t* orientedBrush, const struct cbrush_t* fixedBrush, const struct objInfo* input, struct Results* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_CollideOrientedBrushWithBrush_Wrapper(const struct cbrush_t* orientedBrush, void* userData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_CollideOrientedBrushModelWithBrush(const struct cbrush_t* fixedBrush, const struct objInfo* info, struct Results* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_CollideFixedBrushWithTriangle(const struct cbrush_t* brush, float* triangle[0x3], struct BrushTrimeshData* data)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_CollideOrientedBrushWithTriangle(const struct cbrush_t* orientedBrush, const float* tri0, const float* tri1, const float* tri2, struct BrushTrimeshData* data)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_CollideOrientedBrushWithTriangleList(const struct cbrush_t* orientedBrush, const unsigned short* indices, const float* verts[0x3], int triCount, const struct objInfo* input, int surfaceFlags, struct Results* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_CollideOrientedBrushWithTriangleList_Wrapper(const struct cbrush_t* orientedBrush, void* userData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_CollideOrientedBrushModelWithTriangleList(const unsigned short* indices, const float* verts[0x3], int triCount, const struct objInfo* info, int surfaceFlags, struct Results* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_CollideBoxWithTriangleList(const unsigned short* indices, const float* verts[0x3], unsigned int triCount, const struct objInfo* info, int surfaceFlags, struct Results* results)
{

}

#endif // __UNIMPLEMENTED__
