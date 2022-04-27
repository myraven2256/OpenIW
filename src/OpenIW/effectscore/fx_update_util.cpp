//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static void FX_TransformPosFromLocalToWorld(const struct FxSpatialFrame* frame, const float* posLocal, float* posWorld)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_OffsetSpawnOrigin(const struct FxSpatialFrame* effectFrame, const struct FxElemDef* elemDef, int randomSeed, float* spawnOrigin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_GetOriginForTrailElem(struct FxEffect* effect, const struct FxElemDef* elemDef, const struct FxSpatialFrame* effectFrameWhenPlayed, int randomSeed, float* outOrigin, float* outRight, float* outUp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_GetSpawnOrigin(const struct FxSpatialFrame* effectFrame, const struct FxElemDef* elemDef, int randomSeed, float* spawnOrigin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_SpatialFrameToOrientation(const struct FxSpatialFrame* frame, struct orientation_t* orient)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_OrientationDirToWorldDir(const struct orientation_t* orient, const float* dir, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_GetOrientation(const struct FxElemDef* elemDef, const struct FxSpatialFrame* frameAtSpawn, const struct FxSpatialFrame* frameNow, int randomSeed, struct orientation_t* orient)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_GetVelocityAtTimeInFrame(const struct FxElemVelStateInFrame* statePrev, const struct FxElemVelStateInFrame* stateNext, const float* rangeLerp, const float* weight, float* velocity)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_GetVelocityAtTime(const struct FxElemDef* elemDef, int randomSeed, float msecLifeSpan, float msecElapsed, const struct orientation_t* orient, const float* baseVel, float* velocity)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_OrientationPosToWorldPos(const struct orientation_t* orient, const float* pos, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_OrientationPosFromWorldPos(const struct orientation_t* orient, const float* pos, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_AddVisBlocker(struct FxSystem* system, const float* posWorld, float radius, float opacity)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_ToggleVisBlockerFrame(struct FxSystem* system, struct FxSystem* remoteSystem)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool FX_CullSphere(const struct FxCamera* camera, unsigned int frustumPlaneCount, const float* posWorld, float radius)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_AnglesToOrientedAxis(const float* anglesInRad, const struct orientation_t* orient, float* axisOut[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_GetElemAxis(const struct FxElemDef* elemDef, int randomSeed, const struct orientation_t* orient, float msecElapsed, float* axis[0x3])
{

}

#endif // __UNIMPLEMENTED__
