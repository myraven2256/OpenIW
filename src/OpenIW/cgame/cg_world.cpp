//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static int CG_GetEntityBModelContents(const struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_GetEntityBModelBounds(const struct centity_s* cent, float* mins, float* maxs, float* absMins, float* absMaxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_GetEntityDobjBounds(const struct centity_s* cent, const struct DObj_s* dobj, float* mins, float* maxs, float* absMins, float* absMaxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct DObj_s* CG_LocationalTraceDObj(int localClientNum, int entIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_LocationTraceDobjCalcPose(const struct DObj_s* dobj, const struct cpose_t* pose, int* partBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_IsEntityLinked(int localClientNum, int entIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_EntityNeedsLinked(int localClientNum, int entIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_UnlinkEntity(int localClientNum, int entIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_LinkEntity(int localClientNum, int entIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_ClipMoveToEntity(const struct moveclip_t* clip, int entIndex, struct trace_t* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_ClipMoveToEntities_r(const struct moveclip_t* clip, unsigned short sectorIndex, const float* p1, const float* p2, struct trace_t* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_ClipMoveToEntities(const struct moveclip_t* clip, struct trace_t* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_PointTraceToEntity(const struct pointtrace_t* clip, int entIndex, struct trace_t* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_PointTraceToEntities_r(const struct pointtrace_t* clip, unsigned short sectorIndex, const float* p1, const float* p2, struct trace_t* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_PointTraceToEntities(const struct pointtrace_t* clip, struct trace_t* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_Trace(struct trace_t* results, const float* start, const float* mins, const float* maxs, const float* end, int passEntityNum, int contentMask, bool locational, bool staticModels)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_LocationalTrace(struct trace_t* results, const float* start, const float* end, int passEntityNum, int contentMask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_LocationalTraceEntitiesOnly(struct trace_t* results, const float* start, const float* end, int passEntityNum, int contentMask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_TraceCapsule(struct trace_t* results, const float* start, const float* mins, const float* maxs, const float* end, int passEntityNum, int contentMask)
{

}

#endif // __UNIMPLEMENTED__
