//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void BG_RegisterShockVolumeDvars()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_RegisterDvars()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* BG_GetEntityTypeName(const int eType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct gitem_s* BG_FindItemForWeapon(int weapon, int model)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct gitem_s* G_FindItem(const char* pickupName, int model)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_PlayerTouchesItem(const struct playerState_s* ps, const struct entityState_s* item, int atTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool HaveRoomForAmmo(const struct playerState_s* ps, unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_PlayerCanPickUpWeaponType(const struct WeaponDef* weapDef, const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool WeaponEntCanBeGrabbed(const struct entityState_s* weaponEntState, const struct playerState_s* ps, int touched, unsigned int weapIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_CanItemBeGrabbed(const struct entityState_s* ent, const struct playerState_s* ps, int touched)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_PlayerHasRoomForEntAllAmmoTypes(const struct entityState_s* ent, const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_EvaluateTrajectory(const struct trajectory_t* tr, int atTime, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_EvaluateTrajectoryDelta(const struct trajectory_t* tr, int atTime, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_GetMarkDir(const float* dir, const float* normal, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_AddPredictableEventToPlayerstate(int newEvent, unsigned int eventParm, struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_PlayerToEntityEventParm(struct playerState_s* ps, struct entityState_s* s)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_PlayerToEntityProcessEvents(struct playerState_s* ps, struct entityState_s* s, unsigned char handler)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_PlayerToEntitySetFlags(struct playerState_s* ps, struct entityState_s* s)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_PlayerToEntitySetPitchAngles(struct playerState_s* ps, struct entityState_s* s)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_PlayerToEntitySetMisc(struct playerState_s* ps, struct entityState_s* s)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_PlayerToEntitySetTrajectory(struct playerState_s* ps, struct entityState_s* s, int snap)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_PlayerStateToEntityState(struct playerState_s* ps, struct entityState_s* s, int snap, unsigned char handler)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_CheckProneValid(int passEntityNum, const float* vPos, const float fSize, const float fHeight, const float fYaw, float* pfTorsoPitch, float* pfWaistPitch, bool isAlreadyProne, bool isOnGround, bool groundIsWalkable, unsigned char handler, enum proneCheckType_t proneCheckType, float prone_feet_dist)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_GetPlayerViewOrigin(const struct playerState_s* ps, float* origin, int time)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_GetPlayerViewDirection(const struct playerState_s* ps, float* forward, float* right, float* up)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_CheckProne(int passEntityNum, const float* vPos, const float fSize, const float fHeight, const float fYaw, float* pfTorsoPitch, float* pfWaistPitch, bool isAlreadyProne, bool isOnGround, bool groundIsWalkable, unsigned char handler, enum proneCheckType_t proneCheckType, float prone_feet_dist)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_LerpHudColors(const struct hudelem_s* elem, int time, union hudelem_color_t* toColor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_LoadShellShockDvars(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_SetShellShockParmsFromDvars(struct shellshock_parms_t* parms)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_SaveShellShockDvars(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct shellshock_parms_t* BG_GetShellshockParms(const int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_CreateXAnim(struct XAnim_s* anims, unsigned int animIndex, const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_CheckThread()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_GetMaxSprintTime(const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__
