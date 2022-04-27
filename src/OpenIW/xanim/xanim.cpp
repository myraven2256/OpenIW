//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static bool IsLeafNode(const struct XAnimEntry* anim)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool IsNodeAdditive(const struct XAnimEntry* node)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int XAnimGetTreeHighMemUsage()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int XAnimGetTreeMemUsage()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void TRACK_xanim()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int XAnimGetTreeMaxMemUsage()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XAnimInit()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XAnimShutdown()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct XAnimParts* XAnimFindData_FastFile(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct XAnimParts* XAnimFindData(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XAnimCreate(struct XAnim_s* anims, unsigned int animIndex, const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XAnimBlend(struct XAnim_s* anims, unsigned int animIndex, const char* name, unsigned int children, unsigned int num, unsigned int flags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct XAnim_s* XAnimCreateAnims(const char* debugName, int size, function * Alloc)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XAnimFreeAnims(struct XAnim_s* anims, function * Free)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XAnimFreeList(struct XAnim_s* anims)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XAnimDisableLeakCheck()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int XAnimTreeSize(int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct XAnimTree_s* XAnimCreateTree(struct XAnim_s* anims, function * Alloc)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XAnimFreeTree(struct XAnimTree_s* tree, function * Free)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimCheckTreeLeak()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct XAnim_s* XAnimGetAnims(const struct XAnimTree_s* tree)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimInitModelMap(struct XModel* const* models, unsigned int numModels, struct XModelNameMap* modelMap)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int XAnimGetAnimMap(const struct XAnimParts* parts, const struct XModelNameMap* modelMap)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void TransformToQuatRefFrame(const float* rot, float* trans)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimCalcRelDeltaParts(const struct XAnimParts* parts, const float weightScale, const float time1, const float time2, struct XAnimSimpleRotPos* rotPos, int quatIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimCalcAbsDeltaParts(const struct XAnimParts* parts, const float weightScale, const float time, struct XAnimSimpleRotPos* rotPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimClearServerNotify(struct XAnimInfo* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimFreeInfo(struct XAnimTree_s* tree, unsigned int infoIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimCheckFreeInfo(struct XAnimTree_s* tree, unsigned int infoIndex, int hasWeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float XAnimGetAverageRateFrequency(const struct XAnimTree_s* tree, unsigned int infoIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned short XAnimGetNextNotifyIndex(const struct XAnimParts* parts, float time)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float XAnimGetNotifyFracLeaf(const struct XAnimState* state, const struct XAnimState* nextState, float time, float dtime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct XAnimParts* XAnimGetParts(const struct XAnimTree_s* tree, struct XAnimInfo* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float XAnimGetNextServerNotifyFrac(const struct DObj_s* obj, struct XAnimInfo* info, const struct XAnimState* syncState, const struct XAnimState* nextSyncState, float dtime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimAddClientNotify(unsigned int notetrackName, float frac, unsigned int notifyType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimProcessClientNotify(struct XAnimInfo* info, float dtime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimUpdateInfoSync(const struct DObj_s* obj, unsigned int infoIndex, bool bNotify, struct XAnimState* syncState, float dtime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimUpdateTimeAndNotetrackLeaf(const struct DObj_s* obj, const struct XAnimParts* parts, unsigned int infoIndex, float dtime, bool bNotify)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimUpdateTimeAndNotetrackSyncSubTree(const struct DObj_s* obj, unsigned int infoIndex, float dtime, bool bNotify)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimUpdateTimeAndNotetrack(const struct DObj_s* obj, unsigned int infoIndex, float dtime, bool bNotify)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimInitInfo(struct XAnimInfo* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int XAnimTransfer_r(const struct XAnimTree_s* from, struct XAnimTree_s* to, unsigned int fromInfoIndex, unsigned int toInfoIndex, unsigned int toInfoParentIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimTransfer(const struct XAnimTree_s* from, struct XAnimTree_s* to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimResetTimeInternal(unsigned int infoIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimResetTime(unsigned int infoIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int XAnimCloneInitTime(struct XAnimTree_s* tree, unsigned int infoIndex, unsigned int parentIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int XAnimInitTime(struct XAnimTree_s* tree, unsigned int infoIndex, float goalTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimUpdateOldTime(struct DObj_s* obj, unsigned int infoIndex, struct XAnimState* syncState, float dtime, bool parentHasWeight, bool* childHasTimeForParent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void NotifyServerNotetrack(const struct DObj_s* obj, unsigned int notifyName, unsigned int notetrackName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float XAnimGetServerNotifyFracSyncTotal(const struct DObj_s* obj, struct XAnimInfo* info, const struct XAnimState* syncState, const struct XAnimState* nextSyncState, float dtime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float XAnimFindServerNoteTrackLeafNode(const struct DObj_s* obj, struct XAnimInfo* info, float dtime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float XAnimFindServerNoteTrackSyncSubTree(const struct DObj_s* obj, struct XAnimInfo* info, float dtime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float XAnimFindServerNoteTrack(const struct DObj_s* obj, unsigned int infoIndex, float dtime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimProcessServerNotify(const struct DObj_s* obj, struct XAnimInfo* info, float time)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimResetAnimMapLeaf(const struct XModelNameMap* modelMap, unsigned int infoIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimResetAnimMap_r(struct XModelNameMap* modelMap, unsigned int infoIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XAnimResetAnimMap(const struct DObj_s* obj, unsigned int infoIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimDisplay(const struct XAnimTree_s* tree, unsigned int infoIndex, int depth, char* buffer, int bufferSize, int* bufferPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimCalcDeltaTree(const struct DObj_s* obj, const unsigned int infoIndex, const float weightScale, const struct XAnimDeltaInfo deltaInfo, struct XAnimSimpleRotPos* rotPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float XAnimGetLength(const struct XAnim_s* anims, unsigned int animIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int XAnimGetLengthMsec(const struct XAnim_s* anims, unsigned int anim)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int XAnimGetInfoIndex_r(const struct XAnimTree_s* tree, unsigned int animIndex, unsigned int infoIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int XAnimGetInfoIndex(const struct XAnimTree_s* tree, unsigned int animIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float XAnimGetTime(const struct XAnimTree_s* tree, unsigned int animIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float XAnimGetWeight(const struct XAnimTree_s* tree, unsigned int animIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool XAnimHasFinished(const struct XAnimTree_s* tree, unsigned int animIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int XAnimGetNumChildren(const struct XAnim_s* anims, unsigned int animIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int XAnimGetChildAt(const struct XAnim_s* anims, unsigned int animIndex, unsigned int childIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* XAnimGetAnimName(const struct XAnim_s* anims, unsigned int animIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool XAnimIsDefault(struct XAnimParts* animParts)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* XAnimGetAnimDebugName(const struct XAnim_s* anims, unsigned int animIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* XAnimGetAnimTreeDebugName(const struct XAnim_s* anims)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int XAnimGetAnimTreeSize(const struct XAnim_s* anims)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjTransfer(const struct DObj_s* fromObj, struct DObj_s* toObj, float dtime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjInitServerTime(struct DObj_s* obj, float dtime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjUpdateClientInfo(struct DObj_s* obj, float dtime, bool notify)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjUpdateServerInfo(struct DObj_s* obj, float dtime, int bNotify)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjGetClientNotifyList(struct XAnimNotify_s** notifyList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjDisplayAnimToBuffer(const struct DObj_s* obj, const char* header, char* buffer, int bufferSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjDisplayAnim(const struct DObj_s* obj, const char* header)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XAnimCalcDelta(struct DObj_s* obj, unsigned int animIndex, float* rot, float* trans, bool bUseGoalWeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XAnimCalcAbsDelta(struct DObj_s* obj, unsigned int animIndex, float* rot, float* trans)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XAnimGetRelDelta(const struct XAnim_s* anims, unsigned int animIndex, float* rot, float* trans, float time1, float time2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XAnimGetAbsDelta(const struct XAnim_s* anims, unsigned int animIndex, float* rot, float* trans, float time)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int XAnimAllocInfoWithParent(struct XAnimTree_s* tree, unsigned int animToModel, unsigned int animIndex, unsigned int parentInfoIndex, int after)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int XAnimEnsureGoalWeightParent(struct DObj_s* obj, unsigned int animIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int XAnimAllocInfoIndex(struct DObj_s* obj, unsigned int animIndex, int after)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct XAnimInfo* XAnimAllocInfo(struct DObj_s* obj, unsigned int animIndex, int after)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimClearGoalWeightInternal(struct XAnimTree_s* tree, unsigned int infoIndex, float blendTime, int forceBlendTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XAnimClearGoalWeight(struct XAnimTree_s* tree, unsigned int animIndex, float blendTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimClearTreeGoalWeightsInternal(struct XAnimTree_s* tree, unsigned int infoIndex, float blendTime, int forceBlendTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XAnimClearTreeGoalWeights(struct XAnimTree_s* tree, unsigned int animIndex, float blendTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XAnimClearTreeGoalWeightsStrict(struct XAnimTree_s* tree, unsigned int animIndex, float blendTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimClearGoalWeightKnobInternal(struct XAnimTree_s* tree, unsigned int infoIndex, float goalWeight, float goalTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int XAnimSetCompleteGoalWeightNode(struct XAnimTree_s* tree, unsigned int infoIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, unsigned int notifyType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int XAnimSetCompleteGoalWeightKnob(struct DObj_s* obj, unsigned int animIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, int bRestart)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int XAnimSetGoalWeightKnobAll(struct DObj_s* obj, unsigned int animIndex, unsigned int rootIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, int bRestart)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int XAnimSetCompleteGoalWeightKnobAll(struct DObj_s* obj, unsigned int animIndex, unsigned int rootIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, int bRestart)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int XAnimSetGoalWeightKnob(struct DObj_s* obj, unsigned int animIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, int bRestart)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XAnimClearChildGoalWeights(struct XAnimTree_s* tree, unsigned int animIndex, float blendTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XAnimClearTree(struct XAnimTree_s* tree)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int XAnimGetDescendantWithGreatestWeight(const struct XAnimTree_s* tree, unsigned int infoIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int XAnimSetGoalWeightNode(struct XAnimTree_s* tree, unsigned int infoIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, unsigned int notifyType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimFillInSyncNodes_r(struct XAnim_s* anims, unsigned int animIndex, bool bLoop)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimSetupSyncNodes_r(struct XAnim_s* anims, unsigned int animIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XAnimSetupSyncNodes(struct XAnim_s* anims)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool XAnimHasTime(const struct XAnim_s* anims, unsigned int animIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool XAnimIsPrimitive(struct XAnim_s* anims, unsigned int animIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XAnimSetTime(struct XAnimTree_s* tree, unsigned int animIndex, float time)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned char XAnimGetAssetType(struct XAnimTree_s* tree, unsigned int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimUpdateServerNotifyIndex(struct XAnimInfo* info, const struct XAnimParts* parts)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int XAnimRestart(struct XAnimTree_s* tree, unsigned int infoIndex, float goalTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int XAnimSetGoalWeight(struct DObj_s* obj, unsigned int animIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, unsigned int notifyType, int bRestart)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XAnimSetAnimRate(struct XAnimTree_s* tree, unsigned int animIndex, float rate)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool XAnimIsLooped(const struct XAnim_s* anims, unsigned int animIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int XAnimIsLeafNode(const struct XAnim_s* anims, unsigned int animIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool XAnimNotetrackExists(const struct XAnim_s* anims, unsigned int animIndex, unsigned int name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XAnimAddNotetrackTimesToScriptArray(const struct XAnim_s* anims, unsigned int animIndex, unsigned int name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int XAnimSetCompleteGoalWeight(struct DObj_s* obj, unsigned int animIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, unsigned int notifyType, int bRestart)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimCloneAnimInfo(const struct XAnimInfo* from, struct XAnimInfo* to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimCloneAnimTree_r(const struct XAnimTree_s* from, struct XAnimTree_s* to, unsigned int fromInfoIndex, unsigned int toInfoParentIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XAnimCloneAnimTree(const struct XAnimTree_s* from, struct XAnimTree_s* to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimCloneClientAnimInfo(const struct XAnimInfo* from, struct XAnimInfo* to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void XAnimCloneClientAnimTree_r(const struct XAnimTree_s* from, struct XAnimTree_s* to, unsigned int fromInfoIndex, unsigned int toInfoParentIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void XAnimCloneClientAnimTree(const struct XAnimTree_s* from, struct XAnimTree_s* to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct XAnimInfo* GetAnimInfo(int infoIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct XAnimInfo* GetAnimInfoBase()
{

}

#endif // __UNIMPLEMENTED__
