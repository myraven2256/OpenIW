//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_bg_weapons()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_StringCopy(unsigned char* member, const char* keyValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_ParsePenetrationDepthTable(const char* penetrateType, float* depthTable, const char* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_LoadPenetrationDepthTable()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_AdvanceTrace(struct BulletFireParams* bp, struct BulletTraceResults* br, float dist)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float BG_GetSurfacePenetrationDepth(const struct WeaponDef* weapDef, int surfaceType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_ShutdownWeaponDefFiles()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_FillInWeaponItems(unsigned int weapIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_SetupAmmoIndexes(unsigned int weapIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_SetupSharedAmmoIndexes(unsigned int weapIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_SetupClipIndexes(unsigned int weapIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_SetupWeaponAlts(unsigned int weapIndex, function * regWeap)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_ClearWeaponDef()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_SetupWeaponIndex(unsigned int weapIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int BG_SetupWeaponDef(struct WeaponDef* weapDef, function * regWeap)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_FillInAllWeaponItems()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PM_StartWeaponAnim(struct playerState_s* ps, int anim)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_ContinueWeaponAnim(struct playerState_s* ps, int anim)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct WeaponDef* BG_GetWeaponDef(unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int BG_GetWeaponIndex(const struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int BG_GetNumWeapons()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int BG_GetNumAmmoTypes()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int BG_GetNumAmmoClips()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_GetSharedAmmoCapSize(int capIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* BG_GetSharedAmmoCapName(int capIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* BG_GetAmmoTypeName(int ammoIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* BG_GetAmmoClipName(int clipIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_GetAmmoTypeForName(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_GetAmmoClipForName(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_FindWeaponIndexForName(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_GetWeaponIndexForName(const char* name, function * regWeap)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_GetWeaponIndexForName(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_GetViewmodelWeaponIndex(const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_GetFirstAvailableOffhand(const struct playerState_s* ps, int offhandClass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_GetFirstEquippedOffhand(const struct playerState_s* ps, int offhandClass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_IsAimDownSightWeapon(unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_CanPlayerHaveWeapon(unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_ValidateWeaponNumber(unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_ValidateWeaponNumberOffhand(unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_IsWeaponValid(const struct playerState_s* ps, unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_WeaponBlocksProne(unsigned int weapIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int AmmoAfterWeaponRemoved(const struct playerState_s* ps, unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_TakePlayerWeapon(struct playerState_s* ps, unsigned int weaponIndex, int takeAwayAmmo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_GetAmmoPlayerMax(const struct playerState_s* ps, unsigned int weaponIndex, unsigned int weaponIndexToSkip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_GetMaxPickupableAmmo(const struct playerState_s* ps, unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_GetTotalAmmoReserve(const struct playerState_s* ps, unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_GetSpreadForWeapon(const struct playerState_s* ps, const struct WeaponDef* weapDef, float* minSpread, float* maxSpread)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PM_IsAdsAllowed(struct playerState_s* ps, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PM_UpdateAimDownSightFlag(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PM_ExitAimDownSight(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PM_UpdateAimDownSightLerp(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_StartHoldBreath(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_EndHoldBreath(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_HoldBreathFire(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_UpdateHoldBreath(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_UsingSniperScope(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PM_InteruptWeaponWithProneMove(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_ClipForWeapon(int weapon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_AmmoForWeapon(int weapon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_WeaponIsClipOnly(int weapon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_WeaponAmmo(const struct playerState_s* ps, int weapon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_ReloadClip(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool WeaponValidForSustainAmmoCheat(int weapIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_WeaponUseAmmo(struct playerState_s* ps, int wp, int amount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PM_WeaponAmmoAvailable(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PM_WeaponClipEmpty(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_FinishRechamber(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PM_Weapon_CheckForRechamber(struct playerState_s* ps, int delayedAction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_SetWeaponReloadAddAmmoDelay(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_SetReloadingState(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_BeginWeaponReload(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_BeginWeaponChange(struct playerState_s* ps, unsigned int newweapon, bool quick)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_BeginWeaponRaise(struct playerState_s* ps, unsigned int anim, unsigned int time, float aim, int altSwitch)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_TakeClipOnlyWeaponIfEmpty(struct playerState_s* ps, int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_SwitchWeaponsIfEmpty(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_FinishWeaponChange(struct pmove_t* pm, bool quick)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_FinishWeaponRaise(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PM_Weapon_AllowReload(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_ReloadDelayedAction(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_FinishReloadStart(struct pmove_t* pm, int delayedAction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_FinishReload(struct pmove_t* pm, int delayedAction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_FinishReloadEnd(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_CheckForReload(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PM_AdjustAimSpreadScale(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool ShotLimitReached(struct playerState_s* ps, struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool BurstFirePending(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool WeaponUsesBurstCooldown(unsigned int weaponIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UpdatePendingTriggerPull(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PM_Weapon_WeaponTimeAdjust(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_CheckForChangeWeapon(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PM_GetWeaponFireButton(unsigned int weapon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PM_Weapon_ShouldBeFiring(struct pmove_t* pm, int delayedAction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_StartFiring(struct playerState_s* ps, int delayedAction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PM_Weapon_GetAmmoRequired(int iWeapon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PM_Weapon_CheckFiringAmmo(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_SetFPSFireAnim(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_AddFiringAimSpreadScale(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_FireWeapon(struct playerState_s* ps, int delayedAction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PM_WeaponHasChargeMelee(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_MeleeEnd(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_MeleeFire(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_MeleeInit(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_CheckForMelee(struct pmove_t* pm, int delayedAction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_Idle(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_OffHandInit(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_OffHandPrepare(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_OffHandHold(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_OffHandStart(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_OffHand(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_OffHandEnd(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_SendEmtpyOffhandEvent(struct playerState_s* ps, enum OffhandClass offhandClass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PM_Weapon_IsHoldingGrenade(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_CheckForOffHand(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PM_UpdateGrenadeThrow(struct playerState_s* ps, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PM_Weapon_CheckGrenadeHold(struct pmove_t* pm, int delayedAction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_CheckForDetonation(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_CheckForGrenadeThrowCancel(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Detonate(struct playerState_s* ps, int delayedAction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_CheckForNightVision(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_FinishNightVisionWear(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_FinishNightVisionRemove(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Sprint_State_Raise(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Sprint_State_Loop(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Sprint_State_Drop(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_CheckForSprint(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ViewModelOverride(struct playerState_s* ps, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PM_Weapon(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PM_ResetWeaponState(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_WeaponFireRecoil(const struct playerState_s* ps, float* vGunSpeed, float* kickAVel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float BG_GetBobCycle(const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float BG_GetVerticalBobFactor(const struct playerState_s* ps, float cycle, float speed, float maxAmp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float BG_GetHorizontalBobFactor(const struct playerState_s* ps, float cycle, float speed, float maxAmp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_CalculateWeaponPosition_BasePosition_angles(struct weaponState_t* ws, float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_CalculateWeaponPosition_BaseAngles(struct weaponState_t* ws, float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_CalculateWeaponPosition_IdleAngles(struct weaponState_t* ws, float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_CalculateWeaponPosition_BobOffset(struct weaponState_t* ws, float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_CalculateWeaponPosition_DamageKick(struct weaponState_t* ws, float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int BG_CalculateWeaponPosition_GunRecoil_SingleAngle(float* fOffset, float* speed, float fTimeStep, float fOfsCap, float fGunKickAccel, float fGunKickSpeedMax, float fGunKickSpeedDecay, float fGunKickStaticDecay)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_CalculateWeaponPosition_GunRecoil(struct weaponState_t* ws, float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_CalculateWeaponAngles(struct weaponState_t* ws, float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_CalculateView_DamageKick(struct viewState_t* vs, float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_CalculateView_IdleAngles(struct viewState_t* vs, float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_CalculateView_BobAngles(struct viewState_t* vs, float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_CalculateView_Velocity(struct viewState_t* vs, float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_CalculateViewAngles(struct viewState_t* vs, float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_CalculateWeaponPosition_Sway(const struct playerState_s* ps, float* swayViewAngles, float* swayOffset, float* swayAngles, float ssSwayScale, int frametime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_PlayerWeaponCountPrimaryTypes(const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_PlayerWeaponsFull_Primaries(const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_PlayerHasCompatibleWeapon(const struct playerState_s* ps, unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_ThrowingBackGrenade(const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct WeaponDef* BG_LoadWeaponDef_FastFile(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct WeaponDef* BG_LoadWeaponDef(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_AssertOffhandIndexOrNone(int offHandIndex)
{

}

#endif // __UNIMPLEMENTED__
