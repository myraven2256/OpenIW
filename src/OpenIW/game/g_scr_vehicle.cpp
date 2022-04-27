//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static struct gentity_s* VEH_GetVehicle(int entNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct gentity_s* GScr_GetVehicle(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_SetPosition(struct gentity_s* ent, const float* origin, const float* vel, const float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VEH_InitEntity(struct gentity_s* ent, struct scr_vehicle_s* veh, int infoIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_InitPhysics(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VEH_InitVehicle(struct gentity_s* ent, struct scr_vehicle_s* veh, int infoIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_JoltBody(struct gentity_s* ent, const float* dir, float intensity, float speedFrac, float decel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VEH_CalcAccel(struct gentity_s* ent, char* move, float* bodyAccel, float* rotAccel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_ClipVelocity(float* in, float* normal, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int VEH_CorrectAllSolid(struct gentity_s* ent, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VEH_ClearGround(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_MoveTrace(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int VEH_SlideMove(struct gentity_s* ent, int gravity)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_StepSlideMove(struct gentity_s* ent, int gravity)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VEH_AirMove(struct gentity_s* ent, int gravity)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_BackupPosition(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool AttachedStickyMissile(struct gentity_s* vehicle, struct gentity_s* missile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PushAttachedStickyMissile(struct gentity_s* vehicle, struct gentity_s* missile, float* deltaOrigin, float* deltaAngles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_PushEntity(struct gentity_s* ent, struct gentity_s* target, float* pushDir, float* deltaOrigin, float* deltaAngles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_TouchEntities(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_UpdateAim(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float VEH_AccelerateSpeed(float speed, float tgtSpeed, float accel, float dt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool VEH_IsHovering(struct scr_vehicle_s* veh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_UpdateAngleAndAngularVel(int index, float desiredAngle, float accel, float decel, float overShoot, struct vehicle_physic_t* phys)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_SetHoverGoal(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float VEH_UpdateMove_GetDesiredYaw(struct scr_vehicle_s* veh, float* desiredDir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float VEH_CalcAccelFraction(float accel, int infoIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float VEH_CalcAngularAccel(float accel, float accelFraction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float VEH_CalcAngleForAccel(float accel, float accelFraction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float VEH_CalcStoppingTime(float accel, float accelFraction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_UpdateYawAndNotify(struct gentity_s* ent, float desiredYaw)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float VEH_GetAccelForAngles(struct scr_vehicle_s* veh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_AddFakeDrag(const float* velocity, float maxDragSpeed, float* accelVec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_UpdateMoveOrientation(struct gentity_s* ent, float* desiredDir, float distToGoal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_CheckHorizontalVelocityToGoal(struct scr_vehicle_s* veh, const float* vecToGoal, float accelMax, float* accelVec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_CheckVerticalVelocityToGoal(struct scr_vehicle_s* veh, float verticalDist, float* accelVec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int VEH_UpdateMove_CheckGoalReached(struct gentity_s* ent, float distToGoal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float VEH_UpdateMove_CheckStop(struct scr_vehicle_s* veh, float distToGoal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_UpdateMove_CheckNearGoal(struct gentity_s* ent, float distToGoal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_GetNewSpeedAndAccel(struct scr_vehicle_s* veh, float dt, int hovering, float* newSpeed, float* accelMax)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_UpdateMoveToGoal(struct gentity_s* ent, const float* goalPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_UpdateHover(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_UpdateAIMove(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_Vehicle_Think(struct gentity_s* pSelf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_Vehicle_Pain(struct gentity_s* pSelf, struct gentity_s* pAttacker, int damage, const float* point, const int mod, const float* dir, const enum hitLocation_t hitLoc, const int weaponIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_Vehicle_Touch(struct gentity_s* pSelf, struct gentity_s* pOther, int bTouched)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CMD_VEH_Script_SetSpeed(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_SetSpeed(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_SetSpeedImmediate(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_GetSpeed(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_GetSpeedMPH(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_GetGoalSpeedMPH(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_SetAcceleration(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_SetDeceleration(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_ResumeSpeed(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_SetYawSpeed(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_SetMaxPitchRoll(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_SetAirResitance(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_SetTurningAbility(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_SetJitterParams(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_SetHoverParams(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_SetVehicleTeam(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_NearGoalNotifyDist(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_SetGoalPos(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_SetGoalYaw(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_ClearGoalYaw(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_SetTargetYaw(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_ClearTargetYaw(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_SetTurretTargetVec(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_SetTurretTargetEnt(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_ClearTurretTargetEnt(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_SetLookAtEnt(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_ClearLookAtEnt(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_SetWeapon(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int VEH_GetTagBoneIndex(struct gentity_s* ent, int barrel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_FireWeapon(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_IsTurretReady(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CMD_VEH_ForceMaterialSpeed(struct scr_entref_t entref)
{

}

#endif // __UNIMPLEMENTED__
