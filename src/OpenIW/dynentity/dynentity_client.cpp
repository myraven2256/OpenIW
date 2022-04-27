//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void DynEntCl_RegisterDvars()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float DynEntCl_UpdateBModelWorldBounds(const struct DynEntityDef* dynEntDef, const struct GfxPlacement* pose)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DynEntCl_LinkModel(unsigned short dynEntId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DynEntCl_LinkBrush(unsigned short dynEntId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEntCl_InitEntities(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEntCl_ProcessEntities(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEntCl_Shutdown(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEntCl_UnlinkEntity(unsigned short dynEntId, enum DynEntityDrawType drawType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DynEntCl_PointTrace_r(enum DynEntityDrawType drawType, const struct pointtrace_t* clip, unsigned int sectorIndex, float* p1, float* p2, struct trace_t* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEntCl_PointTrace(const struct pointtrace_t* clip, struct trace_t* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DynEntCl_ClipMoveTrace_r(const struct moveclip_t* clip, unsigned int sectorIndex, float* p1, float* p2, struct trace_t* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEntCl_ClipMoveTrace(const struct moveclip_t* clip, struct trace_t* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DynEntCl_AreaEntities_r(enum DynEntityDrawType drawType, unsigned int sectorIndex, struct DynEntityAreaParms* areaParms)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short DynEntCl_AreaEntities(enum DynEntityDrawType drawType, const float* mins, const float* maxs, int contentMask, unsigned short dynEntMaxCount, unsigned short* dynEntList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int DynEntCl_CreatePhysObj(const struct DynEntityDef* dynEntDef, const struct GfxPlacement* pose)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DynEntCl_PlayEventFx(const struct FxEffectDef* def, const float* origin, const float* axis[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DynEntCl_PlayImpactEffects(int localClientNum, int sourceEntityNum, int surfType, const float* hitPos, const float* hitNormal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DynEntCl_Damage(int localClientNum, unsigned short dynEntId, enum DynEntityDrawType drawType, const float* hitPos, const float* hitDir, int damage)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool DynEntCl_EventNeedsProcessed(int localClientNum, int sourceEntityNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEntCl_EntityImpactEvent(const struct trace_t* trace, int localClientNum, int sourceEntityNum, const float* start, const float* hitPos, bool isMelee)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DynEntCl_TestPhysicsEntities(int localClientNum, int sourceEntityNum, const float* start, const float* end, bool isMelee)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool DynEntCl_DynEntImpactEvent(int localClientNum, int sourceEntityNum, const float* start, const float* end, int damage, bool isMelee)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEntCl_MeleeEvent(int localClientNum, int sourceEntityNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool DynEntCl_CompareDynEntsForExplosion(const struct DynEntSortStruct& ent1, const struct DynEntSortStruct& ent2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int DynEntCl_GetClosestEntities(enum DynEntityDrawType drawType, const float* radiusMins, const float* radiusMaxs, const float* origin, unsigned short* hitEnts, bool isCylinder)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEntCl_ExplosionEvent(int localClientNum, bool isCylinder, const float* origin, float innerRadius, float outerRadius, const float* impulse, float inScale, int innerDamage, int outerDamage)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEntCl_JitterEvent(int localClientNum, const float* origin, float innerRadius, float outerRadius, float minDisplacement, float maxDisplacement)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEntCl_DestroyEvent(int localClientNum, unsigned short dynEntId, enum DynEntityDrawType drawType, const float* hitPos, const float* hitDir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEntCl_WakeUpAroundPlayer(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__
