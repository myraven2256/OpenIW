//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void R_SetTexFilter()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetInitialContextState(struct D3DDevice* device)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ShutdownCmdBufState(struct GfxCmdBufState* state)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_DepthHackNearClipChanged(struct GfxCmdBufSourceState* source)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ChangeDepthHackNearClip(struct GfxCmdBufSourceState* source, unsigned int depthHackFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ChangeObjectPlacement(struct GfxCmdBufSourceState* source, const struct GfxScaledPlacement* placement)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_GetMatrixConstantVersion(struct GfxCmdBufSourceState* source, unsigned int codeConstIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_IsMatrixConstantUpToDate(struct GfxCmdBufSourceState* source, unsigned int codeConstIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_FlagMatrixConstantAsUpToDate(struct GfxCmdBufSourceState* source, unsigned int codeConstIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_DeriveViewMatrix(struct GfxCmdBufSourceState* source)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_DeriveWorldViewMatrix(struct GfxCmdBufSourceState* source)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_DeriveProjectionMatrix(struct GfxCmdBufSourceState* source)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_DeriveViewProjectionMatrix(struct GfxCmdBufSourceState* source)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_DeriveWorldViewProjectionMatrix(struct GfxCmdBufSourceState* source)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_DeriveShadowLookupMatrix(struct GfxCmdBufSourceState* source)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GenerateWorldOutdoorLookupMatrix(struct GfxCmdBufSourceState* source, float* outMatrix[0x4])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_DeriveCodeMatrix(struct GfxCmdBufSourceState* source, struct GfxCodeMatrices* activeMatrices, unsigned int baseIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const float* R_GetCodeMatrix(struct GfxCmdBufSourceState* source, unsigned int sourceIndex, unsigned int firstRow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct GfxImage* R_GetTextureFromCode(struct GfxCmdBufSourceState* source, unsigned int codeTexture, unsigned char* samplerState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_TextureFromCodeError(struct GfxCmdBufSourceState* source, unsigned int codeTexture)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct GfxImage* R_OverrideGrayscaleImage(const struct dvar_s* dvar)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetLightmap(struct GfxCmdBufContext context, unsigned int lmapIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetReflectionProbe(struct GfxCmdBufContext context, unsigned int reflectionProbeIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float R_GetClipDepthNear(enum GfxDepthRangeType depthRangeType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float R_GetClipDepthFar(enum GfxDepthRangeType depthRangeType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ChangeDepthRange(struct GfxCmdBufState* state, enum GfxDepthRangeType depthRangeType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_BeginMaterial(struct GfxCmdBufState* state, const struct Material* material, enum MaterialTechniqueType techType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ChangeIndices(struct GfxCmdBufPrimState* state, struct D3DIndexBuffer* ib)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ChangeStreamSource(struct GfxCmdBufPrimState* state, int streamIndex, struct D3DVertexBuffer* vb, unsigned int vertexOffset, unsigned int vertexStride)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ClearAllStreamSources(struct GfxCmdBufPrimState* state)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_DrawIndexedPrimitive(struct GfxCmdBufPrimState* state, const struct GfxDrawPrimArgs* args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_DrawIndexedPrimitiveUP(struct GfxCmdBufState* state, const struct GfxDrawPrimArgs* args)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ChangeState_0(struct GfxCmdBufState* state, unsigned int stateBits0)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ChangeState_1(struct GfxCmdBufState* state, unsigned int stateBits1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetSampler(struct GfxCmdBufContext context, unsigned int samplerIndex, unsigned char samplerState, const struct GfxImage* image)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetSamplerState(struct GfxCmdBufState* state, unsigned int samplerIndex, unsigned char samplerState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ForceSetBlendState(struct D3DDevice* device, unsigned int stateBits0)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ForceSetStencilState(struct D3DDevice* device, unsigned int stateBits1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_PixStartNamedRenderTarget(enum GfxRenderTargetId renderTargetId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_PixEndNamedRenderTarget()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_GetViewport(struct GfxCmdBufSourceState* source, struct GfxViewport* outViewport)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetViewport(struct GfxCmdBufState* state, const struct GfxViewport* viewport)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetViewportStruct(struct GfxCmdBufSourceState* source, const struct GfxViewport* viewport)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetViewportValues(struct GfxCmdBufSourceState* source, int x, int y, int width, int height)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetFullViewport(struct GfxCmdBufSourceState* source)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_UpdateViewport(struct GfxCmdBufSourceState* source, struct GfxViewport* viewport)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_UpdateStatsTarget(int newTargetId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum GfxViewportBehavior R_ViewportBehaviorForRenderTarget(enum GfxRenderTargetId renderTargetId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_DisableSampler(struct GfxCmdBufState* state, unsigned int samplerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_UnbindImage(struct GfxCmdBufState* state, const struct GfxImage* image)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetRenderTargetSize(struct GfxCmdBufSourceState* source, enum GfxRenderTargetId newTargetId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetRenderTarget(struct GfxCmdBufContext context, enum GfxRenderTargetId newTargetId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ClearScreenInternal(struct D3DDevice* device, unsigned char whichToClear, const float* color, float depth, unsigned char stencil, const struct GfxViewport* viewport)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ClearScreen(struct D3DDevice* device, unsigned char whichToClear, const float* color, float depth, unsigned char stencil, const struct GfxViewport* viewport)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ForceSetPolygonOffset(struct D3DDevice* device, unsigned int stateBits1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetMeshStream(struct GfxCmdBufState* state, struct GfxMeshData* mesh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetCompleteState(struct D3DDevice* device, const unsigned int* stateBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_DrawCall(function * callback, const void* userData, struct GfxCmdBufSourceState* source, const struct GfxViewInfo* viewInfo, const struct GfxDrawSurfListInfo* info, const struct GfxViewParms* viewParms, struct GfxCmdBuf* cmdBuf, struct GfxCmdBuf* prepassCmdBuf)
{

}

#endif // __UNIMPLEMENTED__
