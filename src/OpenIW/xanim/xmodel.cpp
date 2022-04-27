//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

int XModelBad(const struct XModel* model)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void TRACK_xmodel()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct XModel* XModelFindExisting(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct XModel* XModelPrecache_FastFile(const char* name, function * Alloc, function * AllocColl)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct XModel* XModelPrecache(const char* name, function * Alloc, function * AllocColl)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short* XModelBoneNames(struct XModel* model)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float XModelGetRadius(const struct XModel* model)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XModelGetBounds(const struct XModel* model, float* mins, float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LocalMatrixTransformVector(const float* in, const float* mat[0x3], float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LocalMatrixTransposeTransformVector(const float* in1, const float* in2[0x3], float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int XModelGetMemUsage(const struct XModel* model)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int XModelTraceLine(const struct XModel* model, struct trace_t* results, const float* localStart, const float* localEnd, int contentmask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int XModelTraceLineAnimated(const struct DObj_s* obj, unsigned int modelIndex, int baseBoneIndex, struct trace_t* results, const struct DObjAnimMat* boneMtxList, float* localStart, float* localEnd, int contentmask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XModelTraceLineAnimatedPartBits(const struct DObj_s* obj, unsigned int modelIndex, int baseBoneIndex, int contentmask, int* partBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XSurfaceVisitTrianglesInAabb_ConvertAabb(const struct XSurfaceCollisionTree* tree, const float* aabbMins, const float* aabbMaxs, int* mins, int* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PrefetchArray<GfxPackedVertex>(const struct GfxPackedVertex* mem, unsigned int elementCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool XSurfaceVisitTrianglesInAabb_ProcessVertices(struct XSurfaceGetTriCandidatesLocals& locals)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool XSurfaceVisitTrianglesInAabb_ProcessTriangles(struct XSurfaceGetTriCandidatesLocals& locals)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool XSurfaceVisitTrianglesInAabb_ProcessLeaf(struct XSurfaceGetTriCandidatesLocals& locals)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool XSurfaceVisitTrianglesInAabb_ProcessNode(struct XSurfaceGetTriCandidatesLocals& locals)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool XSurfaceVisitTrianglesInAabb(const struct XSurface* surface, unsigned int vertListIndex, const float* aabbMins, const float* aabbMaxs, function * visitorFunc, void* visitorContext)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int XModelGetBoneIndex(const struct XModel* model, unsigned int name, unsigned int offset, unsigned char* index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XModelWriteInfoHeader(void* fileHandle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XModelWriteInfo(union XAssetHeader header, void* data)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XModelDumpInfo()
{

}

#endif // __UNIMPLEMENTED__
