//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static const struct FxElemDef* FX_GetUpdateElemDef(const struct FxUpdateElem* update)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_LerpSpatialFrame(const struct FxSpatialFrame* fromFrame, const struct FxSpatialFrame* toFrame, float lerp, struct FxSpatialFrame* resultFrame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_SpawnTrailLoopingElems(struct FxSystem* system, struct FxEffect* effect, struct FxTrail* trail, const struct FxSpatialFrame* frameBegin, const struct FxSpatialFrame* frameEnd, int msecWhenPlayed, int msecUpdateBegin, int msecUpdateEnd, float distanceTravelledBegin, float distanceTravelledEnd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int FX_LimitStabilizeTimeForElemDef_SelfOnly(const struct FxElemDef* elemDef, bool needToSpawnSystem)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int FX_LimitStabilizeTimeForEffectDef_Recurse(const struct FxEffectDef* remoteEffectDef, int originalUpdateTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int FX_LimitStabilizeTimeForElemDef_Recurse(const struct FxElemDef* elemDef, bool needToSpawnSystem, int originalUpdateTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int FX_LimitStabilizeTimeForElemDef(const struct FxElemDef* elemDef, int originalUpdateTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_SpawnLoopingElems(struct FxSystem* system, struct FxEffect* effect, int elemDefIndex, const struct FxSpatialFrame* frameBegin, const struct FxSpatialFrame* frameEnd, int msecWhenPlayed, int msecUpdateBegin, int msecUpdateEnd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_SpawnOneShotElems(struct FxSystem* system, struct FxEffect* effect, int elemDefIndex, const struct FxSpatialFrame* frameWhenPlayed, int msecWhenPlayed)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_ProcessLooping(struct FxSystem* system, struct FxEffect* effect, int elemDefFirst, int elemDefCount, const struct FxSpatialFrame* frameBegin, const struct FxSpatialFrame* frameEnd, int msecWhenPlayed, int msecUpdateBegin, int msecUpdateEnd, float distanceTravelledBegin, float distanceTravelledEnd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_SpawnAllFutureLooping(struct FxSystem* system, struct FxEffect* effect, int elemDefFirst, int elemDefCount, const struct FxSpatialFrame* frameBegin, const struct FxSpatialFrame* frameEnd, int msecWhenPlayed, int msecUpdateBegin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_BeginLooping(struct FxSystem* system, struct FxEffect* effect, int elemDefFirst, int elemDefCount, const struct FxSpatialFrame* frameWhenPlayed, const struct FxSpatialFrame* frameNow, int msecWhenPlayed, int msecNow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_TriggerOneShot(struct FxSystem* system, struct FxEffect* effect, int elemDefFirst, int elemDefCount, const struct FxSpatialFrame* frameWhenPlayed, int msecWhenPlayed)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_StartNewEffect(struct FxSystem* system, struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_EmitEffect(struct FxSystem* system, unsigned short owner, const struct FxEffectDef* def, int msecAtSpawn, const float* origin, const float* axis[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned char FX_ProcessEmitting(struct FxSystem* system, struct FxUpdateElem* update, unsigned char emitResidual, const struct FxSpatialFrame* frameBegin, const struct FxSpatialFrame* frameEnd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_IntegrateVelocityFromZeroInSegment(const struct FxElemVelStateInFrame* statePrev, const struct FxElemVelStateInFrame* stateNext, float* weight, const float* amplitudeScale, float integralScale, float* pos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_IntegrateVelocityAcrossSegments(int elemDefFlags, const struct orientation_t* orient, const struct FxElemVelStateSample* velState0, const struct FxElemVelStateSample* velState1, float t0, float t1, const float* amplitudeScale, float integralScale, float* posLocal, float* posWorld)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_IntegrateVelocityInSegmentInFrame(const struct FxElemVelStateInFrame* statePrev, const struct FxElemVelStateInFrame* stateNext, const float* weight, const float* amplitudeScale, float integralScale, float* pos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_IntegrateVelocityInSegment(int elemDefFlags, const struct orientation_t* orient, const struct FxElemVelStateSample* velState, float t0, float t1, const float* amplitudeScale, float integralScale, float* posLocal, float* posWorld)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_IntegrateVelocity(const struct FxUpdateElem* update, float t0, float t1, float* posLocal, float* posWorld)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_NextElementPosition_NoExternalForces(struct FxUpdateElem* update, int msecUpdateBegin, int msecUpdateEnd, float* posLocal, float* posWorld)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_NextElementPosition(struct FxUpdateElem* update, int msecUpdateBegin, int msecUpdateEnd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_TraceHitSomething(const struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float FX_GetAtRestFraction(const struct FxUpdateElem* update, float msec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_SpawnImpactEffect(struct FxSystem* system, const struct FxUpdateElem* update, const struct FxEffectDef* impactEffect, int msecOnImpact, const float* impactNormal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int FX_CollisionResponse(struct FxSystem* system, struct FxUpdateElem* update, const struct trace_t* trace, int msecUpdateBegin, int msecUpdateEnd, float* xyzWorldOld)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum FxUpdateResult FX_UpdateElementPosition_CollidingStep(struct FxSystem* system, struct FxUpdateElem* update, int msecUpdateBegin, int msecUpdateEnd, float* xyzWorldOld)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum FxUpdateResult FX_UpdateElementPosition_Colliding(struct FxSystem* system, struct FxUpdateElem* update)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum FxUpdateResult FX_UpdateElementPosition_NonColliding(struct FxUpdateElem* update)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum FxUpdateResult FX_UpdateElementPosition_Local(struct FxUpdateElem* update)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum FxUpdateResult FX_UpdateElementPosition(struct FxSystem* system, struct FxUpdateElem* update)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_GetQuatForOrientation(const struct FxEffect* effect, const struct FxElemDef* elemDef, const struct FxSpatialFrame* frameNow, struct orientation_t* orient, float* quat)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_SpawnDeathEffect(struct FxSystem* system, struct FxUpdateElem* update)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_UpdateElement_SetupUpdate(struct FxEffect* effect, int msecUpdateBegin, int msecUpdateEnd, int elemDefIndex, int elemAtRestFraction, int elemMsecBegin, int elemSequence, float* elemOrigin, struct FxUpdateElem* update)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_UpdateElement_TruncateToElemEnd(struct FxUpdateElem* update, enum FxUpdateResult* outUpdateResult)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_UpdateElement_HandleEmitting(struct FxSystem* system, struct FxElem* elem, struct FxUpdateElem* update, const float* elemOriginPrev, enum FxUpdateResult* outUpdateResult)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_UpdateElement_TruncateToElemBegin(struct FxUpdateElem* update, enum FxUpdateResult* outUpdateResult)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_UpdateElement_CoreUpdate(struct FxSystem* system, struct FxUpdateElem* update, float* elemBaseVel, int elemPhysObjId, enum FxUpdateResult* outUpdateResult)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum FxUpdateResult FX_UpdateTrailElement(struct FxSystem* system, struct FxEffect* effect, struct FxTrail* trail, struct FxTrailElem* trailElem, int msecUpdateBegin, int msecUpdateEnd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum FxUpdateResult FX_UpdateElement(struct FxSystem* system, struct FxEffect* effect, struct FxElem* elem, int msecUpdateBegin, int msecUpdateEnd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int FX_GetBoltTemporalBits(int localClientNum, int dobjHandle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_GetBoneOrientation_IsDObjEntityValid(int localClientNum, int dobjHandle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool FX_GetBoneOrientation(int localClientNum, int dobjHandle, int boneIndex, struct orientation_t* orient)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_UpdateSpotLightEffectPartial(struct FxSystem* system, struct FxEffect* effect, int msecUpdateBegin, int msecUpdateEnd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_UpdateEffectPartialForClass(struct FxSystem* system, struct FxEffect* effect, int msecUpdateBegin, int msecUpdateEnd, unsigned short elemHandleStart, unsigned short elemHandleStop, unsigned int elemClass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_UpdateEffectPartialTrail(struct FxSystem* system, struct FxEffect* effect, struct FxTrail* trail, int msecUpdateBegin, int msecUpdateEnd, float distanceTravelledBegin, float distanceTravelledEnd, unsigned short trailElemHandleStart, unsigned short trailElemHandleStop, struct FxSpatialFrame* frameNow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_UpdateEffectPartial(struct FxSystem* system, struct FxEffect* effect, int msecUpdateBegin, int msecUpdateEnd, float distanceTravelledBegin, float distanceTravelledEnd, unsigned short* elemHandleStart, unsigned short* elemHandleStop, unsigned short* trailElemStart, unsigned short* trailElemStop)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_UpdateEffectBolt(struct FxSystem* system, struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_UpdateEffect(struct FxSystem* system, struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_UpdateSpotLightEffect(struct FxSystem* system, struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_ShouldProcessEffect(struct FxSystem* system, struct FxEffect* effect, bool nonBoltedEffectsOnly)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_Update(struct FxSystem* system, int localClientNum, bool nonBoltedEffectsOnly)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_UpdateSpotLight(struct FxCmd* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_UpdateNonDependent(struct FxCmd* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_RunPhysics(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_UpdateRemaining(struct FxCmd* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_BeginUpdate(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_EndUpdate(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_AddNonSpriteDrawSurfs(struct FxCmd* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_RewindTo_Setup(int localClientNum, int time)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_RewindTo_Finish(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_RewindTo(int localClientNum, int time)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DB_RestartEffects_Begin()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DB_RestartEffects_Finish()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_SetNextUpdateCamera(int localClientNum, const struct refdef_s* refdef, float zfar)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_SetNextUpdateTime(int localClientNum, int time)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_FillUpdateCmd(int localClientNum, struct FxCmd* cmd)
{

}

#endif // __UNIMPLEMENTED__
