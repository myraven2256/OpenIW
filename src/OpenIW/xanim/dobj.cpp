//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void DObjInit()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjShutdown()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjDumpInfo(const struct DObj_s* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool DObjIgnoreCollision(const struct DObj_s* obj, int modelIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DObjDumpCreationInfo(struct DObjModel_s* dobjModels, unsigned int numModels)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DObjCreateDuplicateParts(struct DObj_s* obj, struct DObjModel_s* dobjModels, unsigned int numModels)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjGetHierarchyBits(const struct DObj_s* obj, int boneIndex, int* partBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjSkelIsBoneUpToDate(struct DObj_s* obj, int boneIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjSetTree(struct DObj_s* obj, struct XAnimTree_s* tree)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DObjComputeBounds(struct DObj_s* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjCreate(struct DObjModel_s* dobjModels, unsigned int numModels, struct XAnimTree_s* tree, char* buf, unsigned int entnum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjClone(const struct DObj_s* from, char* buf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjFree(struct DObj_s* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjGetCreateParms(const struct DObj_s* obj, struct DObjModel_s* dobjModels, unsigned short* numModels, struct XAnimTree_s** tree, unsigned short* entnum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjArchive(struct DObj_s* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjUnarchive(struct DObj_s* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjSkelExistsConst(const struct DObj_s* obj, int timeStamp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjSkelClear(const struct DObj_s* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjGetBounds(const struct DObj_s* obj, float* mins, float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjPhysicsGetBounds(const struct DObj_s* obj, float* mins, float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjPhysicsSetCollisionFromXModel(const struct DObj_s* obj, enum PhysWorld worldIndex, int physId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float DObjGetRadius(const struct DObj_s* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct PhysPreset* DObjGetPhysPreset(const struct DObj_s* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* DObjGetName(const struct DObj_s* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjGetNumSurfaces(const struct DObj_s* obj, char* lods)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* DObjGetBoneName(const struct DObj_s* obj, int boneIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* DObjGetModelParentBoneName(const struct DObj_s* obj, int modelIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct XAnimTree_s* DObjGetTree(const struct DObj_s* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LocalInvMatrixTransformVectorQuatTrans(const float* in, const struct DObjAnimMat* mat, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjTraceline(struct DObj_s* obj, float* start, float* end, unsigned char* priorityMap, struct DObjTrace_s* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjTracelinePartBits(struct DObj_s* obj, int* partBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjGeomTraceline(struct DObj_s* obj, float* localStart, float* localEnd, int contentmask, struct DObjTrace_s* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjGeomTracelinePartBits(struct DObj_s* obj, int contentmask, int* partBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjHasContents(struct DObj_s* obj, int contentmask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjGetContents(const struct DObj_s* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjSetLocalBoneIndex(struct DObj_s* obj, int* partBits, int boneIndex, const float* trans, const float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjGetBoneIndex(const struct DObj_s* obj, unsigned int name, unsigned char* index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjGetModelBoneIndex(const struct DObj_s* obj, const char* modelName, unsigned int name, unsigned char* index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjGetBasePoseMatrix(const struct DObj_s* obj, unsigned char boneIndex, struct DObjAnimMat* outMat)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjSetHidePartBits(struct DObj_s* obj, const unsigned int* partBits)
{

}

#endif // __UNIMPLEMENTED__
