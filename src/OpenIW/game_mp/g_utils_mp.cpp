//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_g_utils()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_FindConfigstringIndex(const char* name, int start, int max, int create, const char* errormsg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_LocalizedStringIndex(const char* string)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_MaterialIndex(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_ModelIndex(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct XModel* G_GetModel(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool G_GetModelBounds(int index, float* outMins, float* outMaxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_XModelBad(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int G_ModelName(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_TagIndex(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_EffectIndex(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_ShellShockIndex(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned char G_SoundAliasIndex(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_RumbleIndex(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_DObjUpdate(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_SetModel(struct gentity_s* ent, const char* modelName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void G_ReplaceModel_FastFile(const char* originalName, const char* replacementName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_OverrideModel(int modelIndex, const char* defaultModelName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_EntAttach(struct gentity_s* ent, const char* modelName, unsigned int tagName, int ignoreCollision)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_EntDetach(struct gentity_s* ent, const char* modelName, unsigned int tagName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_EntDetachAll(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int G_EntLinkToInternal(struct gentity_s* ent, struct gentity_s* parent, unsigned int tagName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_EntLinkTo(struct gentity_s* ent, struct gentity_s* parent, unsigned int tagName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_EntLinkToWithOffset(struct gentity_s* ent, struct gentity_s* parent, unsigned int tagName, const float* originOffset, const float* anglesOffset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_EntUnlink(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_EntIsLinkedTo(struct gentity_s* ent, struct gentity_s* parent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_UpdateTagInfo(struct gentity_s* ent, int bParentHasDObj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_UpdateTagInfoOfChildren(struct gentity_s* parent, int bHasDObj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_CalcTagParentAxis(struct gentity_s* ent, float* parentAxis[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_CalcTagParentRelAxis(struct gentity_s* ent, float* parentRelAxis[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_CalcTagAxis(struct gentity_s* ent, int bAnglesOnly)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_SetFixedLink(struct gentity_s* ent, int eAngles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_GeneralLink(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_SafeDObjFree(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_DObjUpdateServerTime(struct gentity_s* ent, int bNotify)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_DObjCalcPose(struct gentity_s* ent, int* partBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_DObjCalcBone(const struct gentity_s* ent, int boneIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct DObjAnimMat* G_DObjGetLocalTagMatrix(struct gentity_s* ent, unsigned int tagName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_DObjGetWorldTagMatrix(struct gentity_s* ent, unsigned int tagName, float* tagMat[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_DObjGetWorldTagPos(struct gentity_s* ent, unsigned int tagName, float* pos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct DObjAnimMat* G_DObjGetLocalBoneIndexMatrix(struct gentity_s* ent, int boneIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_DObjGetWorldBoneIndexPos(struct gentity_s* ent, int boneIndex, float* pos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_DObjGetWorldBoneIndexMatrix(struct gentity_s* ent, int boneIndex, float* tagMat[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct gentity_s* G_Find(struct gentity_s* from, int fieldofs, unsigned short match)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct gentity_s* G_FindStr(struct gentity_s* from, int fieldofs, const char* match)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_InitGentity(struct gentity_s* e)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_PrintEntities()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool G_MaySpawnEntity(struct gentity_s* e)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct gentity_s* G_Spawn()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct gentity_s* G_SpawnPlayerClone()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_FreeEntityRefs(struct gentity_s* ed)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_FreeEntity(struct gentity_s* ed)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_FreeEntityDelay(struct gentity_s* ed)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_BroadcastEntity(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_FreeEntityAfterEvent(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct gentity_s* G_TempEntity(const float* origin, int event)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_KillBox(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_AddPredictableEvent(struct gentity_s* ent, int event, unsigned int eventParm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_AddEvent(struct gentity_s* ent, int event, unsigned int eventParm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_PlaySoundAliasAtPoint(const float* origin, unsigned char index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_PlaySoundAlias(struct gentity_s* ent, unsigned char index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_PlaySoundAliasAsMaster(struct gentity_s* ent, unsigned char index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_AnimScriptSound(int client, struct snd_alias_list_t* aliasList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_SetOrigin(struct gentity_s* ent, const float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_SetAngle(struct gentity_s* ent, const float* angle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int infront(struct gentity_s* self, struct gentity_s* other)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DebugLine(float* start, float* end, int color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_SetConstString(unsigned short* to, const char* from)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* G_GetEntityTypeName(const struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_rand()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float G_flrand(float min, float max)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_irand(int min, int max)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float G_random()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float G_crandom()
{

}

#endif // __UNIMPLEMENTED__
