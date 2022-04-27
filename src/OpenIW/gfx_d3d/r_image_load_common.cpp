//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static void Image_GetMipmapResolution(int baseWidth, int baseHeight, int mipmap, unsigned short* mipWidth, unsigned short* mipHeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Image_GetPlatformScreenWidth(int platform, int screenWidth)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Image_GetPlatformScreenHeight(int platform, int screenHeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Image_TrackMemory(struct GfxImage* image, int platform, int memory)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Image_TrackFullscreenTexture(struct GfxImage* image, int fullscreenWidth, int fullscreenHeight, int picmip, enum _D3DFORMAT format)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Image_TrackTexture(struct GfxImage* image, int imageFlags, enum _D3DFORMAT format, int width, int height, int depth)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int Image_GetCardMemoryAmount(unsigned int imageFlags, enum _D3DFORMAT format, unsigned int width, unsigned int height, unsigned int depth)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned char* Image_MipLevelBaseAddress(const struct GfxImage* image, enum _D3DFORMAT format, enum _D3DCUBEMAP_FACES face, unsigned int mipLevel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Image_Upload2D_CopyData_Xbox(const struct GfxImage* image, enum _D3DFORMAT format, enum _D3DCUBEMAP_FACES face, unsigned int mipLevel, const unsigned char* src)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Image_Upload3D_CopyData_Xbox(const struct GfxImage* image, enum _D3DFORMAT format, unsigned int mipLevel, const unsigned char* src)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Image_UploadData(const struct GfxImage* image, enum _D3DFORMAT format, enum _D3DCUBEMAP_FACES face, unsigned int mipLevel, const unsigned char* src)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Image_AllocCubePixels_Xbox(struct GfxImage* image, int mipmapCount, enum _D3DFORMAT imageFormat)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Image_Alloc3DPixels_Xbox(struct GfxImage* image, int mipmapCount, enum _D3DFORMAT imageFormat)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Image_Alloc2DPixels_Xbox(struct GfxImage* image, int mipmapCount, enum _D3DFORMAT imageFormat)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void* Image_AllocTextureObject(unsigned int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Image_Setup(struct GfxImage* image, int width, int height, int depth, int imageFlags, enum _D3DFORMAT imageFormat, const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Image_SetupAndLoad(struct GfxImage* image, int width, int height, int depth, int imageFlags, enum _D3DFORMAT imageFormat, const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum _D3DCUBEMAP_FACES Image_CubemapFace(unsigned int faceIndex)
{

}

#endif // __UNIMPLEMENTED__
