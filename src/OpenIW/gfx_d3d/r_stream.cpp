//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static void R_StreamUpdateForDist(float distSq, unsigned int slot, unsigned int frame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_StreamClassifyPriority(float distSq)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_StreamLoadFileSynchronously(const char* filename, unsigned int bytesToRead, unsigned char* outData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StreamLoadImage_Taint(unsigned char* buffer, unsigned int size, int increment)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StreamLoadImage(struct GfxImage* image, float imageDistSq)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_Stream_AllocCallback_Flush(struct GfxImage* image, int oldPriority)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_Stream_AllocCallback_GetNewState(struct GfxImage* image, int oldPriority)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StreamTouchImagesFromMaterial(const struct Material* material, float distSq, unsigned int frame, struct GfxImage* excludedImage)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float PointDistSqFromBounds(const float* v, const float* mins, const float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_StreamInit()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Stream_Sync()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_StreamSyncThenFlush()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_StreamSyncThenSetEnable(bool enabled)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Stream_ShowVolume(const float* mins, const float* maxs, const float* axis[0x3], const float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StreamUpdateForXModel(const float* viewPos, unsigned int frame, const struct XModel* model, const float* axis[0x3], const float* origin, float maxDistSq, struct GfxImage* excludedImage)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StreamUpdateDynamicModels(struct GfxImage* excludedImage, const float* viewPos, float maxDistSq, unsigned int frame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StreamUpdateStaticModel(int staticModelIndex, struct GfxImage* excludedImage, const float* viewPos, float maxDistSq, unsigned int frame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StreamUpdateWorldSurface(int surfId, struct GfxImage* excludedImage, const float* viewPos, float maxDistSq, unsigned int frame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StreamUpdateAabbNode_r<1>(int aabbTreeNode, struct GfxImage* excludedImage, const float* viewPos, float maxDistSq, unsigned int frame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StreamUpdateStatic_Internal(struct GfxImage* excludedImage, const float* viewPos, float maxDistSq, unsigned int frame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StreamUpdateStatic(struct GfxImage* excludedImage, const float* viewPos, float maxDistSq, unsigned int frame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool BoundsInBounds(float* bigMins, float* bigMaxs, float* lilMins, float* lilMaxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_CheckHighmipAabbs_r(struct GfxWorld* world, int aabbTreeNode, float* mins, float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_CheckHighmipAabbs()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_StreamUpdate_FindImageAndOptimize(const float* viewPos, unsigned int frame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_StreamUpdate(const float* viewPos, unsigned int frame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_StreamExecuteRead()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_StreamBeginUsingBufferForMoviePlayback(int size, void** outPointer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_StreamEndUsingBufferForMoviePlayback()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool R_StreamUsingBufferForMoviePlayback()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StreamUpdateStats_CopyAccumulateAndClear(float* src, float* copyTgt, float* accumTgt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_StreamUpdateStats(struct StreamStatShot* stats)
{

}

#endif // __UNIMPLEMENTED__
