//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_r_rendercmds()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_PerformanceCounters()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_InitRenderCommands()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_InitDynamicMesh(struct GfxMeshData* mesh, unsigned int indexCount, unsigned int vertCount, unsigned int vertSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_InitRenderBuffers()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_InitRenderThread()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SyncRenderThread()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ClearCmdList()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_UpdateSkinCacheUsage()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_SkinCacheReachedThreshold()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ReleaseThreadOwnership()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ToggleSmpFrameCmd(unsigned int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool MayRenderFromBackend()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_HandOffToBackend(unsigned int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_IssueRenderCommands(unsigned int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AbortRenderCommands()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void* R_GetCommandBuffer(enum GfxRenderCommand renderCmd, int bytes)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void* R_GrowCommandBuffer(int additionalByteCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_BeginClientCmdList2D()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ClearClientCmdList2D()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_BeginSharedCmdList()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdEndOfList()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ToggleSmpFrame()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct GfxViewParms* R_AllocViewParms()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const struct Material* R_RenderCommandMaterial(struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdDrawStretchPic(float x, float y, float w, float h, float s0, float t0, float s1, float t1, const float* color, struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdDrawStretchPicFlipST(float x, float y, float w, float h, float s0, float t0, float s1, float t1, const float* color, struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdDrawStretchPicRotateXY(float x, float y, float w, float h, float s0, float t0, float s1, float t1, float angle, const float* color, struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdDrawStretchPicRotateST(float x, float y, float w, float h, float centerS, float centerT, float radiusST, float scaleFinalS, float scaleFinalT, float angle, const float* color, struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdDrawStretchRaw(int x, int y, int w, int h, int cols, int rows, const unsigned char* data, int client, int dirty)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct GfxCmdDrawText2D* AddBaseDrawTextCmd(const char* text, int maxChars, struct Font_s* font, float x, float y, float xScale, float yScale, float rotation, const float* color, int style, int cursorPos, char cursor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdDrawTextWithCursor(const char* text, int maxChars, struct Font_s* font, float x, float y, float xScale, float yScale, float rotation, const float* color, int style, int cursorPos, char cursor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool SetDrawText2DGlowParms(struct GfxCmdDrawText2D* cmd, const float* color, const float* glowColor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool SetDrawText2DPulseFXParms(struct GfxCmdDrawText2D* cmd, struct Material* fxMaterial, struct Material* fxMaterialGlow, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdDrawText(const char* text, int maxChars, struct Font_s* font, float x, float y, float xScale, float yScale, float rotation, const float* color, int style)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdDrawTextSubtitle(const char* text, int maxChars, struct Font_s* font, float x, float y, float xScale, float yScale, float rotation, const float* color, int style, const float* glowColor, bool cinematic)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdDrawTextWithEffects(const char* text, int maxChars, struct Font_s* font, float x, float y, float xScale, float yScale, float rotation, const float* color, int style, const float* glowColor, struct Material* fxMaterial, struct Material* fxMaterialGlow, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdDrawTextInSpace(const char* text, struct Font_s* font, const float* org, const float* xPixelStep, const float* yPixelStep, const float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CopyPoolTextToCmd(const char* textPool, int poolSize, int firstChar, int charCount, struct GfxCmdDrawText2D* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct GfxCmdDrawText2D* AddBaseDrawConsoleTextCmd(const char* textPool, int poolSize, int firstChar, int charCount, struct Font_s* font, float x, float y, float xScale, float yScale, const float* color, int style)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdDrawConsoleText(const char* textPool, int poolSize, int firstChar, int charCount, struct Font_s* font, float x, float y, float xScale, float yScale, const float* color, int style)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdDrawConsoleTextSubtitle(const char* textPool, int poolSize, int firstChar, int charCount, struct Font_s* font, float x, float y, float xScale, float yScale, const float* color, int style, const float* glowColor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdDrawConsoleTextPulseFX(const char* textPool, int poolSize, int firstChar, int charCount, struct Font_s* font, float x, float y, float xScale, float yScale, const float* color, int style, const float* glowColor, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration, struct Material* fxMaterial, struct Material* fxMaterialGlow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdDrawQuadPic(const float* verts[0x2], const float* color, struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdDrawFullScreenColoredQuad(float s0, float t0, float s1, float t1, const float* color, struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdSetMaterialColor(const float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdSetViewportValues(int x, int y, int width, int height)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_LightTweaksModified()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetTestLods()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_AreAnyImageOverridesActive()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetOutdoorFeatherConst()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_EnvMapOverrideConstants()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_UpdateFrontEndDvarOptions()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_BeginFrame()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_EndFrame()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdClearScreen(int whichToClear, const float* color, float depth, unsigned char stencil)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdSaveScreen(int screenTimerId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdSaveScreenSection(float viewX, float viewY, float viewWidth, float viewHeight, int screenTimerId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdBlendSavedScreenShockBlurred(int fadeMsec, float viewX, float viewY, float viewWidth, float viewHeight, int screenTimerId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdBlendSavedScreenShockFlashed(float intensityWhiteout, float intensityScreengrab, float viewX, float viewY, float viewWidth, float viewHeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddCmdDrawPoints(short pointCount, unsigned char size, unsigned char dimensions, const struct GfxPointVertex* verts)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdDrawPoints2D(short pointCount, unsigned char size, const struct GfxPointVertex* verts)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdDrawPoints3D(short pointCount, unsigned char size, const struct GfxPointVertex* verts)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddCmdDrawLines(short lineCount, unsigned char width, unsigned char dimensions, const struct GfxPointVertex* verts)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdDrawLines2D(short lineCount, unsigned char width, const struct GfxPointVertex* verts)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdDrawLines3D(short lineCount, unsigned char width, const struct GfxPointVertex* verts)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdDrawTriangles(struct Material* materialHandle, enum MaterialTechniqueType techType, short indexCount, const unsigned short* indices, short vertexCount, const float* xyzw[0x4], const float* normal[0x3], const unsigned char* color[0x4], const float* st[0x2])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdDrawProfile()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddCmdProjectionSet(enum GfxProjectionTypes projection)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdProjectionSet2D()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCmdProjectionSet3D()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_BeginRemoteScreenUpdate()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_EndRemoteScreenUpdate()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_PushRemoteScreenUpdate(int remoteScreenUpdateNesting)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_PopRemoteScreenUpdate()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_IsInRemoteScreenUpdate()
{

}

#endif // __UNIMPLEMENTED__
