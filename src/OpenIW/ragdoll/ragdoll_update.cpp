//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static struct DObjAnimMat* Ragdoll_GetDObjLocalBoneMatrix(const struct cpose_t* pose, struct DObj_s* obj, unsigned char boneIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Ragdoll_CopyMirrorQuat(const float* src, bool mirror, float* dest)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Ragdoll_GetDObjWorldBoneOriginQuat(int localClientNum, const struct cpose_t* pose, struct DObj_s* obj, unsigned char boneIndex, float* origin, float* quat)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Ragdoll_GetDObjBaseBoneMatrix(struct DObj_s* obj, unsigned char boneIndex, struct DObjAnimMat* outMat)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Ragdoll_GetDObjBaseBoneOrigin(int localClientNum, struct DObj_s* obj, const float* offset, const float* axis[0x3], unsigned char boneIndex, float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Ragdoll_GetDObjBaseBoneOriginQuat(int localClientNum, struct DObj_s* obj, const float* offset, const float* axis[0x3], unsigned char boneIndex, float* origin, float* quat)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Ragdoll_PoseInvAxis(const struct cpose_t* pose, float* invAxis[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Ragdoll_AnimMatToMat43(const struct DObjAnimMat* mat, float* out[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Ragdoll_SnapshotBaseLerpBones(struct RagdollBody* body, struct BoneOrientation* snapshot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Ragdoll_SnapshotBonePositions(struct RagdollBody* body, struct BoneOrientation* boneSnapshot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Ragdoll_SnapshotAnimOrientations(struct RagdollBody* body, struct BoneOrientation* snapshot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Ragdoll_SetCurrentPoseFromSnapshot(struct RagdollBody* body, struct BoneOrientation* snapshot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Ragdoll_ValidateBodyObj(struct RagdollBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Ragdoll_CreatePhysObj(struct RagdollBody* body, struct BoneDef* boneDef, struct Bone* bone)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Ragdoll_CreatePhysJoint(struct RagdollBody* body, struct JointDef* jointDef, struct Joint* joint)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Ragdoll_CreatePhysJoints(struct RagdollBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Ragdoll_CreatePhysObjs(struct RagdollBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Ragdoll_DestroyPhysJoints(struct RagdollBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Ragdoll_DestroyPhysObjs(struct RagdollBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Ragdoll_SnapshotBaseLerpOffsets(struct RagdollBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Ragdoll_BodyCenterOfMass(struct RagdollBody* body, float* com)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Ragdoll_UpdateBodyContactCentroids(struct RagdollBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Ragdoll_CreateBodyPhysics(struct RagdollBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Ragdoll_RemoveBodyPhysics(struct RagdollBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Ragdoll_RebindBody(struct RagdollBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Ragdoll_ValidatePrecalcBoneDef(struct RagdollDef* def, struct BoneDef* bone)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Ragdoll_ValidatePrecalcJointDef(struct RagdollDef* def, struct JointDef* joint)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Ragdoll_ClosestPointsTwoSegs(float* s0[0x3], float* s1[0x3], float* t0, float* t1, float* direction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Ragdoll_GenBoneCapsuleSegment(struct Bone* bone, float* seg[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Ragdoll_GenBoneCapsuleSegments(struct RagdollBody* body, unsigned char* bones, float* s0[0x3], float* s1[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Ragdoll_AddSelfContact(struct RagdollBody* body, unsigned char* bones, float radius0, float radius1, float* point0, float* point1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Ragdoll_GenerateAllSelfCollisionContacts()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Ragdoll_GetTorsoPosition(struct RagdollBody* body, float* center)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Ragdoll_ExplosionEvent(int localClientNum, bool isCylinder, const float* origin, float innerRadius, float outerRadius, const float* impulse, float inScale)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Ragdoll_JitterEvent(int localClientNum, const float* origin, float innerRadius, float outerRadius, float minDisplacement, float maxDisplacement)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Ragdoll_EstimateInitialVelocities(struct RagdollBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Ragdoll_FindBoneChildren(struct RagdollBody* body, int boneIdx, int* childIndices)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Ragdoll_BoneTrace(struct trace_t* trace, struct trace_t* revTrace, const float* start, const float* end)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Ragdoll_TunnelTest(struct RagdollBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Ragdoll_PrintTunnelFail(struct RagdollBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Ragdoll_EnterTunnelTest(struct RagdollBody* body, enum BodyState prevState, enum BodyState curState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Ragdoll_UpdateVelocityCapture(struct RagdollBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Ragdoll_UpdateFriction(struct RagdollBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Ragdoll_CheckIdle(struct RagdollBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Ragdoll_EnterDead(struct RagdollBody* body, enum BodyState prevState, enum BodyState curState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Ragdoll_ExitDead(struct RagdollBody* body, enum BodyState prevState, enum BodyState curState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Ragdoll_ExitDObjWait(struct RagdollBody* body, enum BodyState prevState, enum BodyState curState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Ragdoll_ExitIdle(struct RagdollBody* body, enum BodyState curState, enum BodyState newState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Ragdoll_EnterIdle(struct RagdollBody* body, enum BodyState curState, enum BodyState newState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Ragdoll_EnterRunning(struct RagdollBody* body, enum BodyState curState, enum BodyState newState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Ragdoll_UpdateDObjWait(struct RagdollBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Ragdoll_FilterBonePositions(struct RagdollBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Ragdoll_UpdateRunning(struct RagdollBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Ragdoll_BodyNewState(struct RagdollBody* body, enum BodyState state)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Ragdoll_BodyUpdate(int msec, struct RagdollBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Ragdoll_Update(int msec)
{

}

#endif // __UNIMPLEMENTED__
