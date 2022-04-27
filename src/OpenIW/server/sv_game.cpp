//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_sv_game()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_NumForGentity(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct gentity_s* SV_GentityNum(int num)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct playerState_s* SV_GameClientNum(int num)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct svEntity_s* SV_SvEntityForGentity(const struct gentity_s* gEnt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct gentity_s* SV_GEntityForSvEntity(struct svEntity_s* svEnt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_GameSendServerCommand(int clientNum, enum svscmd_type type, const char* text)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_GameDropClient(int clientNum, const char* reason)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_SetMapCenter(float* mapCenter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_SetGameEndTime(int gameEndTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool SV_SetBrushModel(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_inSnapshot(const float* origin, int iEntityNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_EntityContact(const float* mins, const float* maxs, const struct gentity_s* gEnt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_GetServerinfo(char* buffer, int bufferSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* SV_Hunk_Alloc(int size, const char* name, int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* SV_Hunk_AllocAlign(int size, int alignment, const char* name, int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_LocateGameData(struct gentity_s* gEnts, int numGEntities, int sizeofGEntity_t, struct playerState_s* clients, int sizeofGameClient)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_GetUsercmd(int clientNum, struct usercmd_s* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void* SV_AllocXModelPrecache(int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void* SV_AllocXModelPrecacheColl(int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct XModel* SV_XModelGet(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_DObjDumpInfo(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_ResetSkeletonCache()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static char* SV_AllocSkelMemory(unsigned int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_DObjCreateSkelForBone(struct DObj_s* obj, int boneIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_DObjCreateSkelForBones(struct DObj_s* obj, int* partBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_DObjUpdateServerTime(struct gentity_s* ent, float dtime, int bNotify)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_DObjInitServerTime(struct gentity_s* ent, float dtime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_DObjNumBones(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_DObjGetBoneIndex(const struct gentity_s* ent, unsigned int boneName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct DObjAnimMat* SV_DObjGetMatrixArray(const struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_DObjDisplayAnim(struct gentity_s* ent, const char* header)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct DObjAnimMat* SV_DObjGetRotTransArray(const struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_DObjSetRotTransIndex(const struct gentity_s* ent, int* partBits, int boneIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_DObjSetControlRotTransIndex(struct gentity_s* ent, int* partBits, int boneIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_DObjGetBounds(struct gentity_s* ent, float* mins, float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct XAnimTree_s* SV_DObjGetTree(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_XModelDebugBoxes(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_MapExists(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_DObjExists(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_track_shutdown()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_GetGuid(int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_GetClientPing(int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_IsLocalClient(int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_ShutdownGameProgs()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_SetGametype()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SV_InitGameVM(int restart, int savepersist)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_RestartGameProgs(int savepersist)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_InitGameProgs(int savepersist)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_GameCommand()
{

}

#endif // __UNIMPLEMENTED__
