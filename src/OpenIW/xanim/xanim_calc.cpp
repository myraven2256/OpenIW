//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void XAnim_SetTime(const float time, const int frameCount, struct XAnimTime* animTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnim_GetTimeIndex<unsigned char>(const struct XAnimTime* animTime, const unsigned char* indices, const int tableSize, int* keyFrameIndex, float* keyFrameLerpFrac)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool IsInfoAdditive(const struct XAnimInfo* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimClearRotTransArray(const struct DObj_s* obj, struct DObjAnimMat* rotTransArray, struct XAnimCalcAnimInfo* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimWeightedAccumLerpedRot(const struct __vector4& fromVec, const struct __vector4& toVec, float keyFrameLerpFrac, float weightScale, struct DObjAnimMat* totalRotTrans)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimWeightedAccumRot(const struct __vector4 frameVec, float weightScale, struct DObjAnimMat* totalRotTrans)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimWeightedAccumLerpedTrans(const struct __vector4 fromVec, const struct __vector4 toVec, float keyFrameLerpFrac, float weightScale, int* dataInt, struct DObjAnimMat* totalRotTrans)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimWeightedAccumTrans(float weightScale, int* dataInt, struct DObjAnimMat* totalRotTrans)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimMovePastFrameIndices(unsigned int tableSize, unsigned char** dataByte, short** dataShort, int useSmallIndices)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimCalcNonLoopEnd(const struct XAnimParts* parts, const unsigned char* animToModel, float weightScale, struct DObjAnimMat* rotTransArray, const class bitarray<128>* ignorePartBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool XAnimGetKeyFrame<unsigned char>(const class bitarray<128>* ignorePartBits, int modelPartIndex, int tableSize, struct XAnimTime* animTime, unsigned char** dataByte, short** dataShort, unsigned char** indices, int* keyFrameIndex, float* keyFrameLerpFrac)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool XAnimGetKeyFrame<unsigned short>(const class bitarray<128>* ignorePartBits, int modelPartIndex, int tableSize, struct XAnimTime* animTime, unsigned char** dataByte, short** dataShort, unsigned short** indices, int* keyFrameIndex, float* keyFrameLerpFrac)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimCalcParts<unsigned char>(const struct XAnimParts* parts, const unsigned char* animToModel, const float time, const float weightScale, struct DObjAnimMat* rotTransArray, const class bitarray<128>* ignorePartBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimCalcLeaf(struct XAnimInfo* info, float weightScale, struct DObjAnimMat* rotTransArray, struct XAnimCalcAnimInfo* animInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct DObjAnimMat* XAnimGetCalcBuffer(struct XAnimCalcAnimInfo* info, const struct DObj_s* obj, int* rotTransArrayIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimScaleRotTransArray(int numBones, const struct XAnimCalcAnimInfo* info, struct DObjAnimMat* rotTransArray)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimNormalizeRotScaleTransArray(int numBones, const struct XAnimCalcAnimInfo* info, float weightScale, struct DObjAnimMat* rotTransArray)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimMadRotTransArray(int numBones, const struct XAnimCalcAnimInfo* info, float weightScale, const struct DObjAnimMat* rotTrans, struct DObjAnimMat* totalRotTrans)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimApplyAdditives(struct DObjAnimMat* rotTransArray, struct DObjAnimMat* additiveArray, float weight, int boneCount, struct XAnimCalcAnimInfo* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimCalc(const struct DObj_s* obj, struct XAnimInfo* info, float weightScale, bool bClear, bool bNormQuat, struct XAnimCalcAnimInfo* animInfo, int rotTransArrayIndex, struct DObjAnimMat* rotTransArray)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjCalcAnim(const struct DObj_s* obj, int* partBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnim_CalcRotDeltaDuring<unsigned char>(const struct XAnimDeltaPart* animDelta, const float time, const int frameCount, float* rotDelta)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnim_CalcPosDeltaDuring<unsigned char>(const struct XAnimDeltaPart* animDelta, const float time, const int frameCount, struct __vector4& posDelta)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnim_CalcRotDeltaEntire(const struct XAnimDeltaPart* animDelta, float* rotDelta)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnim_CalcPosDeltaEntire(const struct XAnimDeltaPart* animDelta, struct __vector4& posDelta)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XAnim_CalcDeltaForTime(const struct XAnimParts* anim, const float time, float* rotDelta, struct __vector4& posDelta)
{

}

#endif // __UNIMPLEMENTED__
