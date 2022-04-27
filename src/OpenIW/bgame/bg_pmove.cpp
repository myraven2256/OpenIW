//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void PM_trace(struct pmove_t* pm, struct trace_t* results, const float* start, const float* mins, const float* maxs, const float* end, int passEntityNum, int contentMask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PM_playerTrace(struct pmove_t* pm, struct trace_t* results, const float* start, const float* mins, const float* maxs, const float* end, int passEntityNum, int contentMask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PM_AddEvent(struct playerState_s* ps, int newEvent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PM_AddTouchEnt(struct pmove_t* pm, int entityNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PM_ClipVelocity(const float* in, const float* normal, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PM_ProjectVelocity(const float* velIn, const float* normal, float* velOut)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PM_GetEffectiveStance(const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum PmStanceFrontBack PM_GetStanceEx(int stance, int backward)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PM_GetSprintLeft(const struct playerState_s* ps, const int gametime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PM_GetSprintLeftLastTime(const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool PM_IsSprinting(const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_StartSprint(struct playerState_s* ps, struct pmove_t* pm, const struct pml_t* pml, int sprintLeft)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_EndSprint(struct playerState_s* ps, struct pmove_t* pm, const struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PM_SprintStartInterferingButtons(const struct playerState_s* ps, const int forwardSpeed, const int buttons)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PM_SprintEndingButtons(const struct playerState_s* ps, const int forwardSpeed, const int buttons)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PM_CanStand(struct playerState_s* ps, struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_UpdateSprint(struct pmove_t* pm, const struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Friction(struct playerState_s* ps, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PM_DoPlayerInertia(const struct playerState_s* ps, float accelspeed, const float* wishdir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float PM_PlayerInertia(const struct playerState_s* ps, float accelspeed, const float* wishdir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Accelerate(struct playerState_s* ps, const struct pml_t* pml, const float* wishdir, float wishspeed, float accel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float PM_MoveScale(struct playerState_s* ps, float fmove, float rmove, float umove)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float PM_CmdScale(struct playerState_s* ps, struct usercmd_s* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float PM_CmdScaleForStance(const struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float PM_CmdScale_Walk(struct pmove_t* pm, struct usercmd_s* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float PM_DamageScale_Walk(int damage_timer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_SetMovementDir(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PM_GroundSurfaceType(struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_FlyMove(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_AirMove(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_WalkMove(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_DeadMove(struct playerState_s* ps, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_NoclipMove(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_UFOMove(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PM_FootstepType(struct playerState_s* ps, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PM_LightLandingForSurface(struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PM_MediumLandingForSurface(struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PM_HardLandingForSurface(struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PM_DamageLandingForSurface(struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_CrashLand(struct playerState_s* ps, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PM_CorrectAllSolid(struct pmove_t* pm, struct pml_t* pml, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_GroundTraceMissed(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_GroundTrace(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PM_GetViewHeightLerpTime(const struct playerState_s* ps, int iTarget, int bDown)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float PM_ViewHeightTableLerp(int iFrac, struct viewLerpWaypoint_s* pTable, float* pfPosOfs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float PM_GetViewHeightLerp(const struct pmove_t* pm, int iFromHeight, int iToHeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_ViewHeightAdjust(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool PlayerProneAllowed(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PM_IsPlayerFrozenByWeapon(const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_CheckDuck(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PM_FootstepEvent(struct pmove_t* pm, struct pml_t* pml, int iOldBobCycle, int iNewBobCycle, int bFootStep)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PM_ShouldMakeFootsteps(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PM_GetFlinchAnim(int flinchAnimDir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PM_Footsteps_TurnAnim(struct clientInfo_t* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum scriptAnimMoveTypes_t PM_GetNotMovingAnim(int stance, int turnAdjust)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PM_ShouldFlinch(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Footstep_LadderMove(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Footsteps_NotMoving(struct pmove_t* pm, int stance)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float PM_GetMaxSpeed(struct pmove_t* pm, int walking, int sprinting)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float PM_GetBobMove(enum PmStanceFrontBack stance, float xyspeed, float fMaxSpeed, int walking, int sprinting)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum scriptAnimMoveTypes_t PM_GetStanceIdleAnim(int stanceFlag)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum scriptAnimMoveTypes_t PM_GetMoveAnim(struct playerState_s* ps, enum PmStanceFrontBack stance, int walking, int sprinting)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_SetStrafeCondition(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Footstep_NotTryingToMove(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Footsteps(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_FoliageSounds(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_DropTimers(struct playerState_s* ps, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PM_UpdateLean(struct playerState_s* ps, float msec, struct usercmd_s* cmd, function * capsuleTrace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int BG_CheckProneTurned(struct playerState_s* ps, float newProneYaw, unsigned char handler)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_UpdateViewAngles_Clamp(struct playerState_s* ps, struct usercmd_s* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_UpdateViewAngles_RangeLimited(struct playerState_s* ps, const float oldYaw)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_UpdateViewAngles_LadderClamp(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_UpdateViewAngles_ProneYawClamp(struct playerState_s* ps, float delta, int proneBlocked, float oldViewYaw, float newViewYaw)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_UpdateViewAngles_PronePitchClamp(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_UpdateViewAngles_Prone(struct playerState_s* ps, float msec, struct usercmd_s* cmd, unsigned char handler, float oldViewYaw)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PM_UpdateViewAngles(struct playerState_s* ps, float msec, struct usercmd_s* cmd, unsigned char handler)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PM_UpdatePronePitch(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PM_SetProneMovementOverride(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_UpdatePlayerWalkingFlag(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_SetLadderFlag(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_ClearLadderFlag(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_CheckLadderMove(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_LadderMove(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_MeleeChargeClear(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PM_MeleeChargeStart(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_MeleeChargeUpdate(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void TurretNVGTrigger(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PmoveSingle(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Pmove(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float BG_GetSpeed(const struct playerState_s* ps, int time)
{

}

#endif // __UNIMPLEMENTED__
