//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void G_RegisterMissileDvars()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_RegisterMissileDebugDvars()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CalcMissileNoDrawTime(float speed)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MissileLandAngles(struct gentity_s* ent, struct trace_t* trace, float* vAngles, int bForceAlign)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MissileLandAnglesFlat(struct gentity_s* ent, struct trace_t* trace, float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MissileLandAnglesFlatMaintainingDirection(struct gentity_s* ent, struct trace_t* trace, float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CheckCrumpleMissile(struct gentity_s* ent, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CheckGrenadeDanger(struct gentity_s* grenadeEnt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int BounceMissile(struct gentity_s* ent, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool GrenadeDud(struct gentity_s* ent, struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool JavelinProjectile(struct gentity_s* ent, struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool JavelinDud(struct gentity_s* ent, struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int GetSplashMethodOfDeath(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MissileImpact(struct gentity_s* ent, struct trace_t* trace, float* dir, float* endpos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_TimedObjectThink(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_ExplodeMissile(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_MissileTrace(struct trace_t* results, const float* start, const float* end, int passEntityNum, int contentmask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Missile_PenetrateGlass(struct trace_t* results, struct gentity_s* ent, const float* start, const float* end, int damage, bool predicted)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DrawMissileDebug(float* start, float* end)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float RunMissile_GetPerturbation(float destabilizationCurvatureMax)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void TRACK_missile_attractors()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Missile_InitAttractors()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Missile_FreeAttractorRefs(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Missile_SaveAttractors(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Missile_LoadAttractors(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int Missile_GetFreeAttractor()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_MissileCreateAttractorEnt()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_MissileCreateAttractorOrigin()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_MissileCreateRepulsorEnt()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_MissileCreateRepulsorOrigin()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Scr_MissileDeleteAttractor()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Missile_ApplyAttractorsRepulsors(struct gentity_s* missile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RunMissile_Destabilize(struct gentity_s* missile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RunMissile_CreateWaterSplash(const struct gentity_s* missile, const struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool IsMissileLockedOn(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MissileHorzSteerToTarget(struct gentity_s* ent, const float* currentRight, const float* toTargetRelative, float currentHorzSpeed, float* steer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MissileVerticalSteerToTarget(struct gentity_s* ent, const float* toTargetHorzRelDir, float horzDistToTarg, float vertDistToTarg, float currentHorzSpeed, float* steer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MissileVerticalSteering(struct gentity_s* ent, const float* toTargetRelative, float currentHorzSpeed, float* steer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool MissileIsReadyForSteering(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GetTargetPosition(struct gentity_s* ent, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool JavelinClimbExceededAngle(struct gentity_s* ent, const float* targetPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool JavelinClimbWithinDistance(struct gentity_s* ent, const float* targetPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void JavelinClimbOffset(struct gentity_s* ent, float* targetPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float JavelinMaxDPS(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VecToQuat(const float* vec, float* quat)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float JavelinRotateDir(struct gentity_s* ent, const float* currentDir, const float* targetDir, float* resultDir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void JavelinRotateVelocity(struct gentity_s* ent, const float* currentVel, const float* targetDir, float* resultVel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float JavelinClimbCeiling(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool JavelinClimbIsAboveCeiling(struct gentity_s* ent, const float* targetPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool JavelinClimbEnd(struct gentity_s* ent, const float* targetPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void JavelinSteering(struct gentity_s* ent, struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GuidedMissileSteering(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MissileTrajectory(struct gentity_s* ent, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_MakeMissilePickupItem(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_RunMissile(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_InitGrenadeEntity(struct gentity_s* parent, struct gentity_s* grenade)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_InitGrenadeMovement(struct gentity_s* grenade, const float* start, const float* dir, int rotate)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void InitGrenadeTimer(const struct gentity_s* parent, struct gentity_s* grenade, const struct WeaponDef* weapDef, int time)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct gentity_s* G_FireGrenade(struct gentity_s* parent, float* start, float* dir, int grenadeWPID, unsigned char grenModel, int rotate, int time)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void InitRocketTimer(struct gentity_s* bolt, struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct gentity_s* G_FireRocket(struct gentity_s* parent, unsigned int weaponIndex, float* start, float* dir, const float* gunVel, struct gentity_s* target, const float* targetOffset)
{

}

#endif // __UNIMPLEMENTED__
