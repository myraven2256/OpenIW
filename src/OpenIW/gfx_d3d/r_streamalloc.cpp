//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static void R_StreamAlloc_GetSlotIdAndSlotInTree(const struct StreamAllocBlockInfo* block, int* outSlot, int* outSlotInTree)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StreamAlloc_GetChildren(const struct StreamAllocBlockInfo* block, struct StreamAllocBlockInfo** outL, struct StreamAllocBlockInfo** outR)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_StreamAlloc_GetParent(const struct StreamAllocBlockInfo* block, struct StreamAllocBlockInfo** outParent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StreamAlloc_GetSibling(const struct StreamAllocBlockInfo* block, struct StreamAllocBlockInfo** outSibling)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_StreamAlloc_GetBlockSizeCategory(struct StreamAllocBlockInfo* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_StreamAlloc_GetSizeCategory(unsigned int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StreamAlloc_BufferSlotForBlockInfo(const struct StreamAllocBlockInfo* block, unsigned int* outSlot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StreamAlloc_BlockInfoForBufferSlot(unsigned int slot, struct StreamAllocBlockInfo** outBlock)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StreamAlloc_ListPushBack(struct StreamAllocBlockInfo* listHead, struct StreamAllocBlockInfo* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StreamAlloc_ListPop(struct StreamAllocBlockInfo* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_StreamAlloc_StateAdd(struct StreamAllocBlockInfo* block, int priority, int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_StreamAlloc_StateRemove(struct StreamAllocBlockInfo* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_StreamAlloc_StateChange(struct StreamAllocBlockInfo* block, int newPriority, int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_StreamAlloc_FindSuitableBlock(int sizeCategory, int priority, struct StreamAllocBlockInfo** outBlock, int* outBlockSizeCategory)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StreamAlloc_DestroyImage(struct GfxImage** image)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StreamAlloc_ReprioritizeBlockAndAncestors(int sizeCategory, struct StreamAllocBlockInfo* block, const int priority)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct StreamAllocBlockInfo* R_StreamAlloc_ShaveBlock(int sizeCategory, struct StreamAllocBlockInfo* block, const int neededSizeCategory, const int priority)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StreamAlloc_DestroyBlock_r(struct StreamAllocBlockInfo* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StreamAlloc_MakeBlockIntoEmptyAtom(struct StreamAllocBlockInfo* block)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_StreamAlloc_Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool R_StreamAlloc_Alloc(unsigned int size, int priority, struct StreamAllocBlockInfo** outBlock, unsigned int* outSlot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_StreamAlloc_BackoutAlloc(unsigned int bufferSlot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_StreamAlloc_SetImage(struct StreamAllocBlockInfo* block, unsigned int streamSlot, struct GfxImage* image)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StreamAlloc_VisitAtomBlocks_r<void __cdecl(StreamAllocBlockInfo *,int)>(struct StreamAllocBlockInfo* block, int sizeCat, function * blockFunc)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StreamAlloc_RunOptimize_Block(struct StreamAllocBlockInfo* block, int sizeCat)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_StreamAlloc_RunOptimizationTask(int frame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StreamAlloc_Flush_Block(struct StreamAllocBlockInfo* block, int sizeCat)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_StreamAlloc_Flush()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* R_StreamAllocShowStateLeadingChars(int howmany)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StreamAllocAccumulateStats_r(struct StreamAllocBlockInfo* block, struct StreamStatShot* statShot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StreamAllocShowStateBlocks_r(struct StreamAllocBlockInfo* block, int deep)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_StreamAllocShowState()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_StreamAlloc_AssertEmpty()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_StreamAlloc_Lock()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_StreamAlloc_Unlock()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_StreamAlloc_UpdateStats(struct StreamStatShot* stats)
{

}

#endif // __UNIMPLEMENTED__
