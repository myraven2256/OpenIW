//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_cm_world()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned short CM_AllocWorldSector(float* mins, float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_ClearWorld()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CM_LinkWorld()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_ValidateEntity(struct svEntity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_ValidateEntities(struct svEntity_s* entities)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_ValidateStaticModel(struct cStaticModel_s* staticModel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_ValidateStaticModels(struct cStaticModel_s* staticModels)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_ValidateTree(unsigned short nodeIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CM_ValidateWorld()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CM_UnlinkEntity(struct svEntity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_AddEntityToNode(struct svEntity_s* ent, unsigned short childNodeIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_AddStaticModelToNode(struct cStaticModel_s* staticModel, unsigned short childNodeIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_SortNode(unsigned short nodeIndex, float* mins, float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CM_LinkEntity(struct svEntity_s* ent, float* absmin, float* absmax, unsigned int clipHandle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_LinkStaticModel(struct cStaticModel_s* staticModel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_LinkAllStaticModels()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_AreaEntities_r(unsigned int nodeIndex, struct areaParms_t* ap)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CM_AreaEntities(const float* mins, const float* maxs, int* entityList, int maxcount, int contentmask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_PointTraceStaticModels_r(struct locTraceWork_t* tw, unsigned short nodeIndex, const float* p1_, const float* p2, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CM_PointTraceStaticModels(struct trace_t* results, const float* start, const float* end, int contentmask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_PointTraceStaticModelsComplete_r(const struct staticmodeltrace_t* clip, unsigned short nodeIndex, const float* p1_, const float* p2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CM_PointTraceStaticModelsComplete(const float* start, const float* end, int contentmask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_ClipMoveToEntities_r(const struct moveclip_t* clip, unsigned short nodeIndex, const float* p1, const float* p2, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CM_ClipMoveToEntities(struct moveclip_t* clip, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_ClipSightTraceToEntities_r(const struct sightclip_t* clip, unsigned short nodeIndex, const float* p1, const float* p2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CM_ClipSightTraceToEntities(struct sightclip_t* clip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_PointTraceToEntities_r(struct pointtrace_t* clip, unsigned short nodeIndex, const float* p1, const float* p2, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CM_PointTraceToEntities(struct pointtrace_t* clip, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_PointSightTraceToEntities_r(struct sightpointtrace_t* clip, unsigned short nodeIndex, const float* p1, const float* p2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CM_PointSightTraceToEntities(struct sightpointtrace_t* clip)
{

}

#endif // __UNIMPLEMENTED__
