//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_bg_animation_mp()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static long BG_StringHashValue(const char* fname)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_AnimParseError(const char* msg, <NoType> )
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_AnimationIndexForString(const char* string)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct animation_s* BG_AnimationForString(const char* string)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_IndexForString(const char* token, struct animStringItem_t* strings, int allowFail)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static char* BG_CopyStringIntoBuffer(const char* string, char* buffer, unsigned int bufSize, unsigned int* offset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_InitWeaponString(int index, const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_InitWeaponStrings()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct loadAnim_t* BG_LoadAnimForAnimIndex(int iAnimIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_SetupAnimNoteTypes(struct animScriptData_t* scriptData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_FinalizePlayerAnims()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_ParseConditionBits(const char** text_pp, struct animStringItem_t* stringTable, int condIndex, unsigned int* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int BG_ParseConditions(const char** text_pp, struct animScriptItem_t* scriptItem)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_ParseCommands(const char** input, struct animScriptItem_t* scriptItem, struct animScriptData_t* scriptData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_AnimParseAnimScript(struct animScriptData_t* scriptData, struct loadAnim_t* pLoadAnims, unsigned int* piNumAnims)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static char* GetMoveTypeName(int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static char* GetWeaponTypeName(int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int GetValueForBitfield(unsigned int bitfield)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int BG_EvaluateConditions(struct clientInfo_t* ci, struct animScriptItem_t* scriptItem)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static char* GetBodyPart(int bodypart)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct animScriptItem_t* BG_FirstValidItem(int client, struct animScript_t* script)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_PlayAnim(struct playerState_s* ps, int animNum, enum animBodyPart_t bodyPart, int forceDuration, int setTimer, int isContinue, int force)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_PlayAnimName(struct playerState_s* ps, char* animName, enum animBodyPart_t bodyPart, int setTimer, int isContinue, int force)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_ExecuteCommand(struct playerState_s* ps, struct animScriptCommand_t* scriptCommand, int setTimer, int isContinue, int force)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_AnimScriptAnimation(struct playerState_s* ps, enum aistateEnum_t state, enum scriptAnimMoveTypes_t movetype, int force)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_AnimScriptEvent(struct playerState_s* ps, enum scriptAnimEventTypes_t event, int isContinue, int force)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

char* BG_GetAnimString(int client, int anim)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* BG_GetConditionString(int condition, int value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_SetConditionValue(int client, int condition, unsigned __int64 value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_SetConditionBit(int client, int condition, int value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int BG_GetConditionValue(const struct clientInfo_t* ci, const int condition)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int BG_GetConditionBit(const struct clientInfo_t* ci, const int condition)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct animation_s* BG_GetAnimationForIndex(int client, int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_AnimUpdatePlayerStateConditions(struct pmove_t* pmove)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_IsCrouchingAnim(const struct clientInfo_t* ci, int animNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_IsAds(const struct clientInfo_t* ci, int animNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_IsProneAnim(const struct clientInfo_t* ci, int animNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_IsKnifeMeleeAnim(const struct clientInfo_t* ci, int animNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_IsMantleAnim(struct clientInfo_t* ci, int animNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_SetNewAnimation(int localClientNum, struct clientInfo_t* ci, struct lerpFrame_t* lf, int newAnimation, const struct entityState_s* es)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_RunLerpFrameRate(int localClientNum, struct clientInfo_t* ci, struct lerpFrame_t* lf, int newAnimation, const struct entityState_s* es)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_PlayerAnimation_VerifyAnim(struct XAnimTree_s* pAnimTree, struct lerpFrame_t* lf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_SwingAngles(float destination, float swingTolerance, float clampTolerance, float speed, float* angle, int* swinging)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_PlayerAngles(const struct entityState_s* es, struct clientInfo_t* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_AnimPlayerConditions(const struct entityState_s* es, struct clientInfo_t* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_Player_DoControllersInternal(const struct entityState_s* es, const struct clientInfo_t* ci, struct controller_info_t* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_LerpAngles(float* angles_goal, float maxAngleChange, float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_LerpOffset(float* offset_goal, float maxOffsetChange, float* offset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_Player_DoControllersSetup(const struct entityState_s* es, struct clientInfo_t* ci, int frametime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_PlayerAnimation(int localClientNum, const struct entityState_s* es, struct clientInfo_t* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_UpdatePlayerDObj(int localClientNum, struct DObj_s* pDObj, struct entityState_s* es, struct clientInfo_t* ci, int attachIgnoreCollision)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_FindAnims()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct scr_animtree_t BG_FindAnimTree(const char* filename, int bEnforceExists)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_FindAnimTrees()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_LoadAnim()
{

}

#endif // __UNIMPLEMENTED__
