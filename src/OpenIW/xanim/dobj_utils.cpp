//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

struct DObjAnimMat* DObjGetRotTransArray(const struct DObj_s* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjGetNumModels(const struct DObj_s* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjGetSurfaces(const struct DObj_s* obj, int* partBits, const char* lods)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjGetSurfaceData(const struct DObj_s* obj, const float* origin, const float scale, char* lods)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjGetBoneInfo(const struct DObj_s* obj, struct XBoneInfo** boneInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjNumBones(const struct DObj_s* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjGetLodForDist(const struct DObj_s* obj, int modelIndex, float dist)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjGetSetBones(const struct DObj_s* obj, int* setPartBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int DObjGetRootBoneCount(const struct DObj_s* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjSetRotTransIndex(const struct DObj_s* obj, const int* partBits, int boneIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool DObjSetSkelRotTransIndex(const struct DObj_s* obj, const int* partBits, int boneIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjSetControlTagAngles(const struct DObj_s* obj, int* partBits, unsigned int boneIndex, float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct XModel* DObjGetModel(const struct DObj_s* obj, int modelIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjSetLocalTag(const struct DObj_s* obj, int* partBits, unsigned int boneIndex, const float* trans, const float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjSetLocalTagInternal(const struct DObj_s* obj, const float* trans, const float* angles, int boneIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjSetAngles(struct DObjAnimMat* rotTrans, const float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjClearAngles(struct DObjAnimMat* rotTrans)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjSetTrans(struct DObjAnimMat* rotTrans, const float* trans)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjCompleteHierarchyBits(const struct DObj_s* obj, int* partBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjSetControlRotTransIndex(const struct DObj_s* obj, const int* partBits, int boneIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjSkelExists(const struct DObj_s* obj, int timeStamp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjClearSkel(const struct DObj_s* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjSkelAreBonesUpToDate(const struct DObj_s* obj, int* partBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjSkelSetSkel(const struct DObj_s* obj, int* partBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjGetAllocSkelSize(const struct DObj_s* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjCreateSkel(const struct DObj_s* obj, char* buf, int timeStamp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct DObjAnimMat* I_dmaGetDObjSkel(const struct DObj_s* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjGetHidePartBits(const struct DObj_s* obj, unsigned int* partBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjLock(const struct DObj_s* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjUnlock(const struct DObj_s* obj)
{

}

#endif // __UNIMPLEMENTED__
