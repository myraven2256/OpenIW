//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static float GetWeaponAnimRate(struct WeaponDef* weapDef, struct XAnim_s* anims, int animIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void StartWeaponAnim(int localClientNum, int weaponNum, struct DObj_s* obj, int animIndex, float transitionTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PlayADSAnim(float weaponPosFrac, int weaponNum, struct DObj_s* obj, int animIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_JavelinADS(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_UICheckWeapLockBlink(int localClientNum, float blinkPerSec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_UICheckWeapLockAttackTop(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_UICheckWeapLockAttackDirect(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void WeaponRunXModelAnims(int localClientNum, const struct playerState_s* ps, struct weaponInfo_s* weapInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ResetWeaponAnimTrees(int localClientNum, const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_WeaponDObjHandle(int weaponNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct XAnimTree_s* CG_CreateWeaponViewModelXAnim(struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_RegisterWeapon(int localClientNum, int weaponNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ChangeViewmodelDobj(int localClientNum, int weaponNum, unsigned char weaponModel, struct XModel* newHands, struct XModel* newGoggles, struct XModel* newRocket, struct XModel* newKnife, bool updateClientInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ViewmodelRocketShouldBeAttached(int localClientNum, struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ViewmodelKnifeShouldBeAttached(int localClientNum, struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool UpdateViewmodelAttachments(int localClientNum, int weaponNum, unsigned char weaponModel, struct weaponInfo_s* weapInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_UpdateWeaponViewmodels(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_UpdateHandViewmodels(int localClientNum, struct XModel* handModel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PlayNoteMappedSoundAliases(int localClientNum, const char* noteName, const struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ProcessWeaponNoteTracks(int localClientNum, const struct playerState_s* predictedPlayerState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_RegisterItemVisuals(int localClientNum, int weapIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_RegisterItems(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CalculateWeaponPosition_Sway(struct cg_s* cgameGlob)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CalculateWeaponPosition_SwayMovement(const struct cg_s* cgameGlob, float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CalculateWeaponPosition_BasePosition_movement(struct cg_s* cgameGlob, float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CalculateWeaponPosition_BasePosition(struct cg_s* cgameGlob, float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CalculateWeaponPosition_ToWorldPosition(const struct cg_s* cgameGlob, float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CalculateWeaponPosition_SaveOffsetMovement(struct cg_s* cgameGlob, float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CalculateWeaponPosition(struct cg_s* cgameGlob, float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CalculateWeaponPostion_PositionToADS(struct cg_s* cgameGlob, struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void WeaponFlash(int localClientNum, int dobjHandle, int weaponNum, int bViewFlash, unsigned int flashTag)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_HoldBreathInit(struct cg_s* cgameGlob)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void HoldBreathSoundLerp(int localClientNum, float lerp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void HoldBreathUpdate(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_UpdateViewModelPose(const struct DObj_s* obj, int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ShouldIgnoreHitEntity(int attackerNum, int hitEntNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool BulletTrace(int localClientNum, const struct BulletFireParams* bp, const struct WeaponDef* weapDef, const struct centity_s* attacker, struct BulletTraceResults* br, int lastSurfaceType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool IsEntityAPlayer(int localClientNum, int entityNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FireBulletPenetrate_Effect(int localClientNum, int sourceEntityNum, int targetEntityNum, int weaponIndex, const float* startPos, const float* position, const float* normal, int surfType, int event, unsigned char eventParam, int damage, int hitContents)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FireBulletPenetrate(int localClientNum, struct BulletFireParams* bp, const struct WeaponDef* weapDef, const struct centity_s* attacker, float* tracerStart, bool drawTracer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_IsPlayerCrouching(struct clientInfo_t* ci, const struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_IsPlayerProne(struct clientInfo_t* ci, const struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_IsPlayerADS(struct clientInfo_t* ci, const struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_GuessSpreadForWeapon(int localClientNum, const struct centity_s* cent, const struct WeaponDef* weapDef, float* minSpread, float* maxSpread)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float CG_GoodRandomFloat(int* idum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RandomBulletDir(int randSeed, float* x, float* y)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_BulletEndpos(int randSeed, const float spread, const float* start, float* end, float* dir, const float* forwardDir, const float* rightDir, const float* upDir, const float maxRange)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_GetPlayerViewOrigin(int localClientNum, const struct playerState_s* ps, float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DrawBulletImpacts(int localClientNum, const struct centity_s* ent, const struct WeaponDef* weaponDef, const unsigned short boneName, const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_AddPlayerWeapon(int localClientNum, const struct GfxScaledPlacement* placement, const struct playerState_s* ps, struct centity_s* cent, int bDrawGun)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_UpdateViewWeaponAnim(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_AddViewWeapon(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool WeaponCycleAllowed(struct cg_s* cgameGlob)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_NextWeapon_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_PrevWeapon_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool VerifyPlayerAltModeWeapon(int localClientNum, const struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_OutOfAmmoChange(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int NextWeapInCycle(int localClientNum, const struct playerState_s* ps, enum weapInventoryType_t type, unsigned int startWeaponIndex, bool cycleForward, bool skipEmpties, bool skipHaveNoAlts)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CycleWeapPrimary(int localClientNum, int cycleForward, int bIgnoreEmpty)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int CG_AltWeaponToggleIndex(int localClientNum, const struct cg_s* cgameGlob)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ToggleWeaponAltMode(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ActionSlotUsageAllowed(struct cg_s* cgameGlob)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ActionParms(int* slotResult)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_ActionSlotDown_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_ActionSlotUp_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_EjectWeaponBrass(int localClientNum, const struct entityState_s* ent, int event)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void TakeClipOnlyWeaponIfEmpty(int localClientNum, struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_FireWeapon(int localClientNum, struct centity_s* cent, int event, const unsigned short tagName, unsigned int weapon, const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void WhizbySound(int localClientNum, const float* start, const float* end)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_SpawnTracer(int localClientNum, const float* pstart, const float* pend)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float CalcTracerFinalScale(float tracerScaleDistRange, float dist, float tracerScale)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ScaleTracer(const float* start, const float* finish, const float* viewOrg, float* startWidth, float* finishWidth)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_DrawTracer(const float* start, const float* finish, const struct refdef_s* refdef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct cg_s* CG_GetLocalClientGlobalsForEnt(int localClientNum, int entityNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_GetViewDirection(int localClientNum, int entityNum, float* forward, float* right, float* up)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_CalcEyePoint(int localClientNum, int entityNum, float* eyePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CalcMuzzlePoint(int localClientNum, int entityNum, float* muzzle, unsigned int flashTag)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ShouldSpawnTracer(int localClientNum, int sourceEntityNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BulletTrajectoryEffects(int localClientNum, int sourceEntityNum, const float* startPos, const float* position, int surfType, unsigned int flashTag, unsigned char impactFlags, int damage)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_RandomEffectAxis(const float* forward, float* left, float* up)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_ImpactEffectForWeapon(int weaponIndex, int surfType, int impactFlags, const struct FxEffectDef** outFx, struct snd_alias_list_t** outSnd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_BulletHitEvent_Internal(int localClientNum, int sourceEntityNum, int targetEntityNum, int weaponIndex, const float* startPos, const float* position, const float* normal, int surfType, int event, unsigned char eventParam, int damage, int hitContents)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CG_BulletHitEvent_GenExitDir(int localClientNum, int sourceEntityNum, const float* position, float* outExitDir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_BulletHitEvent(int localClientNum, int sourceEntityNum, int targetEntityNum, int weaponIndex, const float* startPos, const float* position, const float* normal, int surfType, int event, unsigned char eventParam, int damage, int hitContents)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_BulletHitClientEvent(int localClientNum, int sourceEntityNum, const float* startPos, const float* position, int surfType, int event, int damage)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_MeleeBloodEvent(int localClientNum, const struct centity_s* cent, int eventParm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ParseWeaponDefFiles(const char** ppszFiles, int iNumFiles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_SetupWeaponDef(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int ValidLatestPrimaryWeapIdx(unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_SelectWeaponIndex(int localClientNum, unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_ScopeIsOverlayed(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int CG_PlayerTurretWeaponIdx(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_PlayerUsingScopedTurret(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__
