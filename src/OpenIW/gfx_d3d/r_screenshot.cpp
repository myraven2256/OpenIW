//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_r_screenshot()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_LevelShot()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SaveGameShot(const char* saveName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned char R_CubemapShotCalcReflectionFactor(const int shotIndex, const int colIndex, const int rowIndex, const float n0, const float n1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_CubemapShotCopySurfaceToBuffer(unsigned char* buffer, const int bufferSizeInBytes)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_CubemapShotWriteTargaHeader(const int res, unsigned char* fileBuffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_CubemapShotCopyBufferToTarga(const unsigned char* srcBuffer, unsigned char* targa)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_CubemapShotApplyFresnelToTarga(const enum CubemapShot shotIndex, const float n0, const float n1, unsigned char* targa)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_CopyCubemapShot(enum CubemapShot shotIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_CubemapShotWriteTargaFile(const char* filename, const enum CubemapShot shotIndex, const float n0, const float n1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_CubemapShotSetInitialState()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_CubemapShotRestoreState()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_BeginCubemapShot(const int pixelWidthHeight, const int pixelBorder)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_EndCubemapShot(const enum CubemapShot shotIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SaveCubemapShot(const char* filename, const enum CubemapShot shotIndex, const float n0, const float n1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GetDirForCubemapPixel(int faceIndex, float x, float y, float* dir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_CubemapLightingForDir(float** linearColors[0x3], int width, int height, const float* dir, const float* baseColor, unsigned char* pixel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_CubemapLighting(float** linearColors[0x3], int width, int height, const float* baseColor, unsigned char** pixels)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_CubemapShotExtractLinearLight(unsigned char** pixels, int width, int height, float** linearColors[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_LightingFromCubemapShots(const float* baseColor)
{

}

#endif // __UNIMPLEMENTED__
