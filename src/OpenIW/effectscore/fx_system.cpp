//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_fx_system()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_AllocateClientMemory(int maxLocalClients)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_FreeClientMemory()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct FxSystem* FX_GetSystem(int clientIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct FxSystemBuffers* FX_GetSystemBuffers(int clientIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct FxElem* FX_AllocPool_Generic<FxElem>(volatile long* firstFreeIndex, struct FxPool<FxElem>* pool, volatile long* activeCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_FreePool_Generic<FxTrail>(struct FxTrail* item, volatile long* firstFreeIndex, struct FxPool<FxTrail>* pool, volatile long* activeCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct FxElem* FX_AllocElem(struct FxSystem* system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct FxTrailElem* FX_AllocTrailElem(struct FxSystem* system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct FxTrail* FX_AllocTrail(struct FxSystem* system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_InitPool_Generic<FxElem,2048>(volatile long* firstFree, struct FxPool<FxElem>* poolArray)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int FX_ClassForElemType(unsigned char elemType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_ResetSystem(struct FxSystem* system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_LinkSystemBuffers(struct FxSystem* system, struct FxSystemBuffers* systemBuffers)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_InitSystem(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_ShutdownSystem(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_RelocatePointer<FxVisState const >(const struct FxVisState** pointer, int relocationDistance)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_RelocateSystem(struct FxSystem* system, int relocationDistance)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_CullEffectSpawnEnabled()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_CullElemSpawnEnabled()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_CullTrailElem(const struct FxCamera* camera, const struct FxElemDef* elemDef, const float* origin, unsigned char sequence)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_CullElemForSpawn(const struct FxCamera* camera, const struct FxElemDef* elemDef, const float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_CullEffectForSpawn(const struct FxCamera* camera, const struct FxEffectDef* effectDef, const float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_EffectHasSideEffects(const struct FxElemDef* elemDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_EffectNoLongerReferenced(struct FxSystem* system, struct FxEffect* remoteEffect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_RunGarbageCollection_FreeSpotLight(struct FxSystem* system, unsigned short effectHandle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_RunGarbageCollection_FreeTrails(struct FxSystem* system, struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_RunGarbageCollection(struct FxSystem* system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_EffectAffectsGameplay(const struct FxEffectDef* remoteEffectDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_SetEffectRandomSeed(struct FxEffect* effect, const struct FxEffectDef* remoteDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_SpawnEffect_AllocTrails(struct FxSystem* system, struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_IsSpotLightEffect(struct FxSystem* system, const struct FxEffectDef* def)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_CanAllocSpotLightEffect(const struct FxSystem* system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_SpawnEffect_AllocSpotLightEffect(struct FxSystem* system, struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short FX_CalculatePackedLighting(const float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct FxEffect* FX_SpawnEffect(struct FxSystem* system, const struct FxEffectDef* remoteDef, int msecBegin, const float* origin, const float* axis[0x3], int dobjHandle, int boneIndex, int runnerSortOrder, unsigned short owner, unsigned int markEntnum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct FxEffect* FX_SpawnOrientedEffect(int localClientNum, const struct FxEffectDef* def, int msecBegin, const float* origin, const float* axis[0x3], unsigned int markEntnum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_AssertAllocatedEffect(int localClientNum, struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_PlayOrientedEffectWithMarkEntity(int localClientNum, const struct FxEffectDef* def, int startMsec, const float* origin, const float* axis[0x3], unsigned int markEntnum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_PlayOrientedEffect(int localClientNum, const struct FxEffectDef* def, int startMsec, const float* origin, const float* axis[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_NeedsBoltUpdate(const struct FxEffectDef* def)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct FxEffect* FX_SpawnBoltedEffect(int localClientNum, const struct FxEffectDef* def, int msecBegin, int dobjHandle, int boneIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_PlayBoltedEffect(int localClientNum, const struct FxEffectDef* def, int startMsec, int dobjHandle, int boneIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_GetTrailHandleList_Last(struct FxSystem* system, struct FxEffect* effect, unsigned short* outHandleList, int* outTrailCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_RetriggerEffect(int localClientNum, struct FxEffect* effect, int msecBegin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_ThroughWithEffect(int localClientNum, struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_StopEffectNonRecursive(struct FxSystem* system, struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_StopEffect(struct FxSystem* system, struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_RemoveAllEffectElems(struct FxSystem* system, struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_KillEffect(struct FxSystem* system, struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_KillEffectDef(int localClientNum, const struct FxEffectDef* def)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_KillAllEffects(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool FX_IsEffectDone(const struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_RandomlyRotateAxis(const float* axisIn[0x3], int randomSeed, float* axisOut[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_SpawnRunner(struct FxSystem* system, struct FxEffect* effect, const struct FxElemDef* remoteElemDef, const struct FxSpatialFrame* effectFrameWhenPlayed, int randomSeed, int msecWhenPlayed)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_SpawnModelPhysics(struct FxSystem* system, struct FxEffect* effect, const struct FxElemDef* elemDef, int randomSeed, struct FxElem* elem)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_GetOriginForElem(struct FxEffect* effect, const struct FxElemDef* elemDef, const struct FxSpatialFrame* effectFrameWhenPlayed, int randomSeed, float* outOrigin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_SpawnTrailElem_NoCull(struct FxSystem* system, struct FxEffect* effect, struct FxTrail* trail, const struct FxSpatialFrame* effectFrameWhenPlayed, int msecWhenPlayed, float distanceWhenPlayed)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_SpawnTrailElem_Cull(struct FxSystem* system, struct FxEffect* effect, struct FxTrail* trail, const struct FxSpatialFrame* effectFrameWhenPlayed, int msecWhenPlayed, float distanceWhenPlayed)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_SpawnSound(int localClientNumber, struct FxEffect* effect, const struct FxElemDef* elemDef, const struct FxSpatialFrame* effectFrameWhenPlayed, int randomSeed, int msecWhenPlayed)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_SpawnSpotLightElem(struct FxSystem* system, struct FxElem* elem)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_SpawnElem(struct FxSystem* system, struct FxEffect* effect, int elemDefIndex, const struct FxSpatialFrame* effectFrameWhenPlayed, int msecWhenPlayed, float distanceWhenPlayed, int sequence)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_FreeElem(struct FxSystem* system, unsigned short elemHandle, struct FxEffect* effect, unsigned int elemClass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_FreeTrailElem(struct FxSystem* system, unsigned short trailElemHandle, struct FxEffect* effect, struct FxTrail* trail)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_FreeSpotLightElem(struct FxSystem* system, unsigned short elemHandle, struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float FX_GetClientVisibility(int localClientNum, const float* start, const float* end)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float FX_GetServerVisibility(const float* start, const float* end)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int FX_GetClientEffectIndex(int clientIndex, struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct FxEffect* FX_GetClientEffectByIndex(int clientIndex, int index)
{

}

#endif // __UNIMPLEMENTED__
