//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static void Phys_AddLocalContactData(float depth, const float* normal, const float* pos, int surfFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Phys_SimilarContacts(const struct LocalContactData* ca, const struct LocalContactData* cb)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Phys_ContactBetter(const struct LocalContactData* ca, const struct LocalContactData* cb)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_CancelSimilarContacts()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_CapsuleOptimizeLocalResults(struct Results* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Phys_CapsuleClipEdgeToPlane(float* p0, float* p1, float* plane)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Phys_TestAxis(struct AxisTestResults* axisResults, const struct Capsule* capsule, const float* p0, const float* p1, const float* p2, const float* inAxis, int axisNum, bool noFlip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_CalcAxis(const float* v0, const float* v1, const float* v2, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Phys_CapsuleSeparatingAxisTest(struct AxisTestResults* axisResults, const float* plane, const struct Capsule* capsule, const float* tri0, const float* tri1, const float* tri2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Phys_CapsuleSeparatingAxisTestEndEdges(struct AxisTestResults* axisResults, const float* plane, const struct Capsule* capsule, const float* tri0, const float* tri1, const float* tri2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Phys_CapsuleSeparatingAxisTestMiddleEdge(struct AxisTestResults* axisResults, const float* plane, const struct Capsule* capsule, const float* tri0, const float* tri1, const float* tri2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_CapsuleCenterEdgePts(const struct AxisTestResults* axisResults, const struct Capsule* capsule, float* edge0, float* edge1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_CapsuleBuildContactsForTri(struct Results* results, const float* plane, const struct Capsule* capsule, const float* p0, const float* p1, const float* p2, int surfaceFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_CapsuleBuildContactsForTriEndEdges(struct Results* results, const float* plane, const struct Capsule* capsule, const float* p0, const float* p1, const float* p2, int surfaceFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_CapsuleBuildContactsForTriMiddleEdge(struct Results* results, const float* plane, const struct Capsule* capsule, const float* p0, const float* p1, const float* p2, int surfaceFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Phys_TestCapsulePlane(const float* plane, const struct Capsule* capsule)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_InfoToCapsule(const struct objInfo* info, struct Capsule* capsule)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Phys_DistanceOfCapsuleFromPlane(const float* plane, const struct Capsule* capsule)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_CollideCapsuleWithBrush(const struct cbrush_t* brush, const struct objInfo* info, struct Results* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_CollideCapsuleWithTriangleList(const unsigned short* a_indices, const float* verts[0x3], unsigned int triCount, const struct objInfo* info, int surfaceFlags, struct Results* results)
{

}

#endif // __UNIMPLEMENTED__
