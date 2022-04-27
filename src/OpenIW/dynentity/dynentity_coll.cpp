//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_DynEntityCollWorld()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct DynEntityCollWorld* DynEnt_GetCollWorld(enum DynEntityCollType collType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct DynEntityCollSector* DynEnt_GetCollSector(enum DynEntityCollType collType, unsigned int sectorIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEnt_ClearCollWorld(enum DynEntityCollType collType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DynEnt_Validate(enum DynEntityCollType collType, const struct DynEntityColl* dynEntColl)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DynEnt_ValidateWorldSector_r(enum DynEntityCollType collType, unsigned short sectorIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEnt_ValidateCollWorld()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned short DynEnt_AllocCollSector(enum DynEntityCollType collType, const float* mins, const float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DynEnt_AddToCollSector(enum DynEntityCollType collType, unsigned short dynEntId, unsigned short sectorIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DynEnt_SortCollSector(enum DynEntityCollType collType, unsigned short sectorIndex, const float* mins, const float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEnt_UnlinkEntity(enum DynEntityCollType collType, unsigned short dynEntId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEnt_LinkEntity(enum DynEntityCollType collType, unsigned short dynEntId, const float* absMins, const float* absMaxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DynEnt_GetContents(const struct DynEntityDef* dynEntDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEnt_GetLocalBounds(const struct DynEntityDef* dynEntDef, float* mins, float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEnt_GetWorldBounds(const struct DynEntityPose* dynEntPose, float* mins, float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float DynEnt_GetRadiusDistSqr(const struct DynEntityPose* dynEntPose, const float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool DynEnt_IsInCone(const struct DynEntityDef* dynEntDef, const struct GfxPlacement* pose, const float* origin, float coneAngleCos, const float* coneDir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float DynEnt_GetCylindricalRadiusDistSqr(const struct DynEntityPose* dynEntPose, const float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool DynEnt_EntityInArea(const struct DynEntityDef* dynEntDef, const struct DynEntityPose* dynEntPose, const float* mins, const float* maxs, int contentMask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEnt_PointTraceToModel(const struct DynEntityDef* dynEntDef, const struct DynEntityPose* dynEntPose, const struct pointtrace_t* clip, struct trace_t* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEnt_PointTraceToBrush(const struct DynEntityDef* dynEntDef, const struct DynEntityPose* dynEntPose, const struct pointtrace_t* clip, struct trace_t* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEnt_ClipMoveTraceToBrush(const struct DynEntityDef* dynEntDef, const struct DynEntityPose* dynEntPose, const struct moveclip_t* clip, struct trace_t* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEnt_SetPhysObjCollision(const struct DynEntityDef* dynEntDef, int physId)
{

}

#endif // __UNIMPLEMENTED__
