//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static void CG_LockLightingOrigin(struct centity_s* cent, float* lightingOrigin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_General(int localClientNum, struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_Item(int localClientNum, struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_AddEntityLoopSound(int localClientNum, const struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_EntityEffects(int localClientNum, struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct XAnim_s* CG_GetMG42Anims(struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct XAnim_s* CG_GetHelicopterAnims(struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_Player_PreControllers(struct DObj_s* obj, struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_mg42_PreControllers(struct DObj_s* obj, struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_mg42(int localClientNum, struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_Missile(int localClientNum, struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CG_VecLessThan(float* a, float* b)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_UpdateBModelWorldBounds(int localClientNum, struct centity_s* cent, int forceFilter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_ScriptMover(int localClientNum, struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_AdjustPositionForMover(int localClientNum, const float* in, int moverNum, int fromTime, int toTime, float* out, float* outDeltaAngles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_SetFrameInterpolation(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_ProcessClientNoteTracks(struct cg_s* cgameGlob, int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_UpdateClientDobjPartBits(struct centity_s* cent, int entnum, int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_AddPacketEntity(int localClientNum, int entnum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_AddPacketEntities(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_DObjUpdateInfo(const struct cg_s* cgameGlob, struct DObj_s* obj, bool notify)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct DObjAnimMat* CG_DObjGetLocalBoneMatrix(const struct cpose_t* pose, struct DObj_s* obj, int boneIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct DObjAnimMat* CG_DObjGetLocalTagMatrix(const struct cpose_t* pose, struct DObj_s* obj, unsigned int tagName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_DObjGetWorldBoneMatrix(const struct cpose_t* pose, struct DObj_s* obj, int boneIndex, float* tagMat[0x3], float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_DObjGetWorldTagMatrix(const struct cpose_t* pose, struct DObj_s* obj, unsigned int tagName, float* tagMat[0x3], float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_DObjGetWorldTagPos(const struct cpose_t* pose, struct DObj_s* obj, unsigned int tagName, float* pos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct cpose_t* CG_GetPose(int localClientNum, int handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_SoundBlend(int localClientNum, struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct FxEffect* CG_StartFx(int localClientNum, struct centity_s* cent, int startAtTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_Fx(int localClientNum, struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_LoopFx(int localClientNum, struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_ClampPrimaryLightOrigin(struct GfxLight* light, const struct ComPrimaryLight* refLight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_ClampPrimaryLightDir(struct GfxLight* light, const struct ComPrimaryLight* refLight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_PrimaryLight(int localClientNum, struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_InterpolateEntityPosition(struct cg_s* cgameGlob, struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_CreatePhysicsObject(int localClientNum, struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_UpdatePhysicsPose(struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CG_ExpiredLaunch(int localClientNum, struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_CalcEntityPhysicsPositions(int localClientNum, struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_CreateRagdollObject(int localClientNum, struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_UpdateRagdollPose(struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_CalcEntityRagdollPositions(int localClientNum, struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_CalcEntityLerpPositions(int localClientNum, struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct XAnim_s* CG_GetAnimations(int localClientNum, int entIndex, int entType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void* CG_AllocAnimTree(int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct DObj_s* CG_PreProcess_GetDObj(int localClientNum, int entIndex, int entType, struct XModel* model)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_DObjCalcBone(const struct cpose_t* pose, struct DObj_s* obj, int boneIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_ClearUnion(int localClientNum, struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_SetUnionType(int localClientNum, struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_UpdatePoseUnion(int localClientNum, struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_ProcessEntity(int localClientNum, struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_GetPoseOrigin(const struct cpose_t* pose, float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_GetPoseAngles(const struct cpose_t* pose, float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const float* CG_GetEntityOrigin(int localClientNum, unsigned int entnum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short* CG_GetPoseLightingHandle(const struct cpose_t* pose)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_PredictiveSkinCEntity(struct GfxSceneEntity* sceneEnt)
{

}

#endif // __UNIMPLEMENTED__
