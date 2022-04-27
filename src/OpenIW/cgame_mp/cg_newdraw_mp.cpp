//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void CG_AntiBurnInHUD_RegisterDvars()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_ShouldDrawHud(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float CG_FadeHudMenu(int localClientNum, const struct dvar_s* fadeDvar, int displayStartTime, int duration)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CG_GetSelectedWeaponIndex(const struct cg_s* cgameGlob)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_CheckPlayerForLowAmmoSpecific(const struct cg_s* cgameGlob, unsigned int weapIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_CheckPlayerForLowAmmo(const struct cg_s* cgameGlob)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_CheckPlayerForLowClipSpecific(const struct cg_s* cgameGlob, unsigned int weapIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_CheckPlayerForLowClip(const struct cg_s* cgameGlob)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_DrawPlayerAmmoBackdrop(int localClientNum, const struct rectDef_s* rect, const float* color, struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_DrawPlayerAmmoValue(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float scale, float* color, struct Material* material, int textStyle, int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_DrawPlayerWeaponName(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float scale, float* color, int textStyle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_DrawPlayerWeaponNameBack(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float scale, const float* color, struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_CalcPlayerSprintColor(const struct cg_s* cgameGlob, const struct playerState_s* ps, float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CalcSplitScreenStanceScale(float* w, float* h)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CalcSplitScreenStanceOffset(float* x, float* y)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_DrawStanceIcon(int localClientNum, const struct rectDef_s* rect, float* drawColor, float x, float y, float fadeAlpha)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_DrawStanceHintPrints(int localClientNum, const struct rectDef_s* rect, float x, const float* color, float fadeAlpha, struct Font_s* font, float scale, int textStyle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_DrawPlayerStance(int localClientNum, const struct rectDef_s* rect, const float* color, struct Font_s* font, float scale, int textStyle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_DrawPlayerSprintBack(int localClientNum, const struct rectDef_s* rect, struct Material* material, float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_DrawPlayerSprintMeter(int localClientNum, const struct rectDef_s* rect, struct Material* material, float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float CG_CalcPlayerHealth(const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_DrawPlayerBarHealth(int localClientNum, const struct rectDef_s* rect, struct Material* material, float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_DrawPlayerBarHealthBack(int localClientNum, const struct rectDef_s* rect, struct Material* material, float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float CG_FadeLowHealthOverlay(const struct cg_s* cgameGlob)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_PulseLowHealthOverlay(struct cg_s* cgameGlob, float healthRatio)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_ResetLowHealthOverlay(struct cg_s* cgameGlob)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_DrawPlayerLowHealthOverlay(int localClientNum, const struct rectDef_s* rect, struct Material* material, float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_ServerMaterialName(int localClientNum, int index, char* materialName, unsigned int maxLen)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct Material* CG_ObjectiveIcon(int localClientNum, int icon, int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_UpdateCursorHints(struct cg_s* cgameGlob)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* CG_GetWeaponUseString(int localClientNum, const char** secondaryString)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* CG_GetUseString(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_DrawCursorhint(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float fontscale, float* color, int textStyle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_DrawHoldBreathHint(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float fontscale, int textStyle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_DrawMantleHint(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float fontscale, const float* color, int textStyle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_OwnerDrawVisible(int flags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* CG_ScriptMainMenu(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_DrawInvalidCmdHint(int localClientNum, const struct rectDef_s* rect, struct Font_s* font, float fontscale, float* color, int textStyle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_DrawTalkerNum(int localClientNum, const int num, struct rectDef_s* rect, struct Font_s* font, float* color, float textScale, int style)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_OwnerDraw(int localClientNum, struct rectDef_s parentRect, float x, float y, float w, float h, int horzAlign, int vertAlign, float text_x, float text_y, int ownerDraw, int ownerDrawFlags, int align, float special, struct Font_s* font, float scale, float* color, struct Material* material, int textStyle, int textAlignMode)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_ArchiveState(int localClientNum, struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__
