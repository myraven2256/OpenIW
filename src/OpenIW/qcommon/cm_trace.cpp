//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

unsigned short Trace_GetEntityHitId(const struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short Trace_GetDynEntHitId(const struct trace_t* trace, enum DynEntityDrawType* drawType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_GetTraceThreadInfo(struct TraceThreadInfo* threadInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_GetBox(struct cbrush_t** box_brush, struct cmodel_t** box_model)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int CM_TempBoxModel(const float* mins, const float* maxs, int contents)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CM_ClipHandleIsValid(unsigned int handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct cmodel_t* CM_ClipHandleToModel(unsigned int handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CM_ContentsOfModel(unsigned int handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float CM_RadiusOfModel(unsigned int handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RotatePoint(float* point, const float* matrix[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void TransposeMatrix(const float* matrix[0x3], float* transpose[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_TestBoxInBrush(const struct traceWork_t* tw, struct cbrush_t* brush, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_TestInLeafBrushNode_r(const struct traceWork_t* tw, struct cLeafBrushNode_s* node, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_TestInLeafBrushNode(struct traceWork_t* tw, struct cLeaf_t* leaf, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_TestInLeaf(struct traceWork_t* tw, struct cLeaf_t* leaf, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_TestCapsuleInCapsule(const struct traceWork_t* tw, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_PositionTest(struct traceWork_t* tw, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_TraceThroughBrush(const struct traceWork_t* tw, struct cbrush_t* brush, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_TraceThroughLeafBrushNode_r(const struct traceWork_t* tw, struct cLeafBrushNode_s* node, const float* p1_, const float* p2, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CM_TraceThroughLeafBrushNode(const struct traceWork_t* tw, struct cLeaf_t* leaf, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_TraceThroughLeaf(const struct traceWork_t* tw, struct cLeaf_t* leaf, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_TraceSphereThroughSphere(const struct traceWork_t* tw, const float* vStart, const float* vEnd, const float* vStationary, float radius, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_TraceCylinderThroughCylinder(const struct traceWork_t* tw, const float* vStationary, float fStationaryHalfHeight, float radius, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_TraceCapsuleThroughCapsule(const struct traceWork_t* tw, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_TraceThroughTree(const struct traceWork_t* tw, int num, const float* p1_, const float* p2, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_SetAxialCullOnly(struct traceWork_t* tw)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_Trace(struct trace_t* results, const float* start, const float* end, const float* mins, const float* maxs, unsigned int model, int brushmask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CM_BoxTrace(struct trace_t* results, const float* start, const float* end, const float* mins, const float* maxs, unsigned int model, int brushmask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CM_TransformedBoxTraceRotated(struct trace_t* results, const float* start, const float* end, const float* mins, const float* maxs, unsigned int model, int brushmask, const float* origin, const float* matrix[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CM_TransformedBoxTrace(struct trace_t* results, const float* start, const float* end, const float* mins, const float* maxs, unsigned int model, int brushmask, const float* origin, const float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CM_TransformedBoxTraceExternal(struct trace_t* results, const float* start, const float* end, const float* mins, const float* maxs, unsigned int model, int brushmask, const float* origin, const float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_SightTraceThroughBrush(const struct traceWork_t* tw, struct cbrush_t* brush)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_SightTraceThroughLeafBrushNode_r(const struct traceWork_t* tw, struct cLeafBrushNode_s* node, const float* p1_, const float* p2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_SightTraceThroughLeafBrushNode(const struct traceWork_t* tw, struct cLeaf_t* leaf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_SightTraceThroughLeaf(const struct traceWork_t* tw, struct cLeaf_t* leaf, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_SightTraceSphereThroughSphere(const struct traceWork_t* tw, const float* vStart, const float* vEnd, const float* vStationary, float radius, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_SightTraceCylinderThroughCylinder(const struct traceWork_t* tw, const float* vStationary, float fStationaryHalfHeight, float radius, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_SightTraceCapsuleThroughCapsule(const struct traceWork_t* tw, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_SightTraceThroughTree(const struct traceWork_t* tw, int num, const float* p1_, const float* p2, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CM_BoxSightTrace(int oldHitNum, const float* start, const float* end, const float* mins, const float* maxs, unsigned int model, int brushmask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CM_TransformedBoxSightTrace(int hitNum, const float* start, const float* end, const float* mins, const float* maxs, unsigned int model, int brushmask, const float* origin, const float* angles)
{

}

#endif // __UNIMPLEMENTED__
