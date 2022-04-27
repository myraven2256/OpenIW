//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void G_VehRegisterDvars()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct vehicle_info_t* VEH_GetVehicleInfo(short index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void TRACK_g_scr_vehicle()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct VehicleRideSlot_t* RideTagFirst(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct VehicleRideSlot_t* RideTagNext(struct gentity_s* ent, struct VehicleRideSlot_t* inTag)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool VehicleHasSeatFree(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int VehicleEntDriver(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int VehicleEntPassenger(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int VehicleEntGunner(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VehicleClearRideSlotForPlayer(struct gentity_s* ent, int playerEntNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_VehPlayerRideSlot(struct gentity_s* vehicle, int playerEntNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_Strcpy(unsigned char* pMember, const char* pKeyValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_DebugLine(float* start, float* end, float r, float g, float b)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_DebugBox(float* pos, float width, float r, float g, float b)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VEH_DebugCapsule(float* pos, float rad, float height, float r, float g, float b)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int VEH_ParseSpecificField(unsigned char* pStruct, const char* pValue, const int fieldType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int G_LoadVehicle(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int VEH_GetVehicleInfoFromName(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_GetWheelOrigin(struct gentity_s* ent, int idx, float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VEH_SetPosition(struct gentity_s* ent, const float* origin, const float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool VEH_DObjHasRequiredTags(struct gentity_s* ent, int infoIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_InitModelAndValidateTags(struct gentity_s* ent, int* infoIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_InitPhysics(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VEH_JoltBody(struct gentity_s* ent, const float* dir, float intensity, float speedFrac, float decel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_ClipVelocity(float* in, float* normal, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_GroundTrace(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int VEH_SlideMove(struct gentity_s* ent, int gravity, float frameTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_StepSlideMove(struct gentity_s* ent, int gravity, float frameTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_GroundMove(struct gentity_s* ent, float frameTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_AirMove(struct gentity_s* ent, int gravity, float frameTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_GroundPlant(struct gentity_s* ent, int gravity, float frameTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_BackupPosition(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void InflictDamage(struct gentity_s* vehEnt, struct gentity_s* target, const float* dir, int damage)
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

static void VEH_PushEntity(struct gentity_s* ent, struct gentity_s* target, float frameTime, float* pushDir, float* deltaOrigin, float* deltaAngles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_TouchEntities(struct gentity_s* ent, float frameTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UpdateTurret(struct gentity_s* ent, float frameTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_UpdateBody(struct gentity_s* ent, float frameTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_UpdateSteering(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_UpdateMaterialTime(struct gentity_s* ent, float frameTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FillWeaponParms(struct gentity_s* vehEnt, struct gentity_s* player, struct weaponParms* wp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FireTurret(struct gentity_s* ent, struct gentity_s* player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_UpdateWeapon(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VEH_UpdateSounds(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static char VEH_PlayerRotation(struct gentity_s* player, struct vehicle_physic_t* phys)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_UpdateClientPassenger(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_UpdateClientGunner(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_UpdateClientDriver(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_UpdateClients(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DebugDrawVelocity(const float* origin, const float* velocity, const float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CarTravelingForward(struct vehicle_physic_t* phys)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool DriverBreaking(struct vehicle_physic_t* phys, float driverAccel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PositionAccelForces(struct vehicle_physic_t* phys, float driverAccel, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RotationAccelForces(struct vehicle_physic_t* phys, float driverSteering, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GetAccelerationForces(struct gentity_s* ent, float frameTime, float* resultPosition, float* resultRotation)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void AdvanceVehiclePosition(struct gentity_s* ent, float frameTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void AdvanceVehicleRotation(struct gentity_s* ent, float frameTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CapMaxMPH(struct vehicle_physic_t* phys)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void IntegratePosAndRot(struct gentity_s* ent, float frameTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UpdateSimulation(struct gentity_s* ent, float frameTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LinkPlayerToVehicle(struct gentity_s* ent, struct gentity_s* player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_VehUnlinkPlayer(struct gentity_s* ent, struct gentity_s* player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void InitInfos(int restarting)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_VehiclesInit(int restarting)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct gentity_s* GetCollisionMap(const char* modelname)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SetupCollisionMap(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_VehiclesSetupSpawnedEnts()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void InitVehicleTags(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void InitEntityVehicleVars(struct gentity_s* ent, struct scr_vehicle_s* veh, int infoIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void InitEntityVars(struct gentity_s* ent, struct scr_vehicle_s* veh, int infoIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SpawnVehicle(struct gentity_s* ent, const char* typeName, int load)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_VehFreeEntity(struct gentity_s* vehEnt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_VehUsable(struct gentity_s* vehicle, struct gentity_s* player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_VehImmuneToDamage(struct gentity_s* ent, int mod, int damageFlags, int weapon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void InitFirstThink(struct gentity_s* pSelf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_VehEntHandler_Think(struct gentity_s* pSelf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_VehEntHandler_Touch(struct gentity_s* pSelf, struct gentity_s* pOther, int bTouched)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_VehEntHandler_Use(struct gentity_s* pEnt, struct gentity_s* pOther, struct gentity_s* pActivator)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_VehEntHandler_Pain(struct gentity_s* pSelf, struct gentity_s* pAttacker, int damage, const float* point, const int mod, const float* dir, const enum hitLocation_t hitLoc, const int weaponIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_VehEntHandler_Die(struct gentity_s* pSelf, struct gentity_s* pInflictor, struct gentity_s* pAttacker, const int damage, const int mod, const int weapon, const float* dir, const enum hitLocation_t hitLoc, int psTimeOffset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_VehEntHandler_Controller(const struct gentity_s* pSelf, int* partBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_VehSpawner(struct gentity_s* pSelf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_VehCollmapSpawner(struct gentity_s* pSelf)
{

}

#endif // __UNIMPLEMENTED__
