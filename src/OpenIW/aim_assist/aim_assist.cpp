//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_aim_assist()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float AimAssist_LerpDvars(const struct dvar_s* from, const struct dvar_s* to, float frac)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float AimAssist_GetClipWidthFromVirtualWidth(int localClientNum, float virtualWidth)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float AimAssist_GetClipHeightFromVirtualHeight(int localClientNum, float virtualHeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void AimAssist_UpdateTweakables(const struct AimInput* input)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void AimAssist_UpdateAdsLerp(const struct AimInput* input)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void AimAssist_RegisterDvars()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void AimAssist_Init(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void AimAssist_Setup(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void AimAssist_FovScale(struct AimAssistGlobals* aaGlob, float tanHalfFovY)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void AimAssist_CreateScreenMatrix(struct AimAssistGlobals* aaGlob, float tanHalfFovX, float tanHalfFovY)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool AimAssist_XfmWorldPointToClipSpace(const struct AimAssistGlobals* aaGlob, const float* in, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool AimAssist_ConvertToClipBounds(const struct AimAssistGlobals* aaGlob, const float* bounds[0x3], const float* mtx[0x3], float* clipBounds[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float AimAssist_GetCrosshairDistSqr(const float* clipMins, const float* clipMaxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool AimAssist_DoBoundsIntersectCenterBox(const float* clipMins, const float* clipMaxs, float clipHalfWidth, float clipHalfHeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int AimAssist_GetWeaponIndex(int localClientNum, const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool AimAssist_IsPlayerUsingOffhand(const struct AimInput* input)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int AimAssist_CompareTargets(const struct AimScreenTarget* screenTargetA, const struct AimScreenTarget* screenTargetB)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void AimAssist_AddToTargetList(struct AimAssistGlobals* aaGlob, const struct AimScreenTarget* screenTarget)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int AimTarget_GetTagPos(int localClientNum, const struct centity_s* cent, unsigned int tagName, float* pos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int AimAssist_CalcAimPos(int localClientNum, const struct centity_s* targetEnt, const struct AimTarget* target, float* aimPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void AimAssist_UpdateScreenTargets(int localClientNum, const float* viewOrg, const float* viewAngles, float tanHalfFovX, float tanHalfFovY)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int AimAssist_GetScreenTargetCount(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int AimAssist_GetScreenTargetEntity(int localClientNum, int targetIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void AimAssist_ClearEntityReference(int localClientNum, int entIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const struct AimScreenTarget* AimAssist_GetTargetFromEntity(const struct AimAssistGlobals* aaGlob, int entIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const struct AimScreenTarget* AimAssist_GetBestTarget(const struct AimAssistGlobals* aaGlob, float range, float regionWidth, float regionHeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const struct AimScreenTarget* AimAssist_GetPrevOrBestTarget(const struct AimAssistGlobals* aaGlob, float range, float regionWidth, float regionHeight, int prevTargetEnt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void AimAssist_CalcAdjustedAxis(const struct AimInput* input, float* pitchAxis, float* yawAxis)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int AimAssist_IsSlowdownActive(const struct AimInput* input)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void AimAssist_CalcSlowdown(const struct AimInput* input, float* pitchScale, float* yawScale)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void AimAssist_ApplyTurnRates(const struct AimInput* input, struct AimOutput* output)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void AimAssist_ClearAutoAimTarget(struct AimAssistGlobals* aaGlob)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool AimAssist_UpdateAutoAimTarget(struct AimAssistGlobals* aaGlob)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void AimAssist_SetAutoAimTarget(struct AimAssistGlobals* aaGlob, const struct AimScreenTarget* screenTarget)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void AimAssist_ApplyAutoAim(const struct AimInput* input, struct AimOutput* output)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void AimAssist_ClearAutoMeleeTarget(struct AimAssistGlobals* aaGlob)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool AimAssist_UpdateAutoMeleeTarget(struct AimAssistGlobals* aaGlob)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void AimAssist_SetAutoMeleeTarget(struct AimAssistGlobals* aaGlob, const struct AimScreenTarget* screenTarget)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void AimAssist_ApplyAutoMelee(const struct AimInput* input, struct AimOutput* output)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void AimAssist_ApplyLockOn(const struct AimInput* input, struct AimOutput* output)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void AimAssist_ApplyMeleeCharge(const struct AimInput* input, struct AimOutput* output)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void AimAssist_UpdateGamePadInput(const struct AimInput* input, struct AimOutput* output)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void AimAssist_UpdateMouseInput(const struct AimInput* input, struct AimOutput* output)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void AimAssist_DrawCenterBox(const struct AimAssistGlobals* aaGlob, float clipHalfWidth, float clipHalfHeight, const float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void AimAssist_DrawTargets(int localClientNum, const struct playerState_s* ps, const float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void AimAssist_DrawDebugOverlay(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__
