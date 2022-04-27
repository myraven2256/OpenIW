//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void R_InitLocalCmdBufState(struct GfxCmdBufState* state)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ShutdownLocalCmdBufState(struct GfxCmdBufState* state)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_InitGlobalCmdBufState()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetDepthRange(struct GfxCmdBufState* state, enum GfxDepthRangeType depthRangeType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetDefaultDepthRange(const struct GfxCmdBufContext context)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_MakeShaderConstantDirty(unsigned __int64* constant)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetObjectPlacement(struct GfxCmdBufSourceState* source, const struct GfxScaledPlacement* placement)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ClearObjectPlacement(struct GfxCmdBufSourceState* source)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetManualObjectPlacement(struct GfxCmdBufSourceState* source)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_IsChangeablePixelShaderConst(unsigned int constant)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_DirtyCodeConstant(struct GfxCmdBufSourceState* source, unsigned int constant)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_DirtyCodeConstantBlock(struct GfxCmdBufState* state, unsigned int dest)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_DirtyMatrixConstant(struct GfxCmdBufState* state, unsigned int dest)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetInputCodeConstant(struct GfxCmdBufInput* input, unsigned int constant, float x, float y, float z, float w)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetInputCodeConstantFromVec4(struct GfxCmdBufInput* input, unsigned int constant, const float* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetCodeConstant(struct GfxCmdBufSourceState* source, unsigned int constant, float x, float y, float z, float w)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetCodeConstantFromVec4(struct GfxCmdBufSourceState* source, unsigned int constant, const float* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_UpdateCodeConstant(struct GfxCmdBufSourceState* source, unsigned int constant, float x, float y, float z, float w)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_UpdateCodeConstantFromVec4(struct GfxCmdBufSourceState* source, unsigned int constant, const float* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_UpdateShadowLookupMatrix(struct GfxCmdBufSourceState* source, unsigned int shadowableLightIndex, const struct GfxMatrix* lookupMatrix)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetCodeImageSamplerState(struct GfxCmdBufSourceState* source, unsigned int codeTexture, unsigned char samplerState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetInputCodeImageTexture(struct GfxCmdBufInput* input, unsigned int codeTexture, const struct GfxImage* image)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetCodeImageTexture(struct GfxCmdBufSourceState* source, unsigned int codeTexture, const struct GfxImage* image)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetVertexShaderConstantFromLiteral(struct GfxCmdBufState* state, unsigned int dest, const float* literal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetPixelShaderConstantFromLiteral(struct GfxCmdBufState* state, unsigned int dest, const float* literal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetIndices(struct GfxCmdBufPrimState* primState, struct D3DIndexBuffer* ib)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetStreamSource(struct GfxCmdBufPrimState* primState, struct D3DVertexBuffer* vb, unsigned int vertexOffset, unsigned int vertexStride)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetDoubleStreamSource(struct GfxCmdBufPrimState* primState, struct D3DVertexBuffer* vb0, unsigned int vertexOffset0, unsigned int vertexStride0, struct D3DVertexBuffer* vb1, unsigned int vertexOffset1, unsigned int vertexStride1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetVertexDecl(struct GfxCmdBufPrimState* primState, const struct MaterialVertexDeclaration* vertexDecl)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetVertexDeclType(struct GfxCmdBufPrimState* primState, enum MaterialVertexDeclType vertDeclType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetAlphaTestFunction(struct GfxCmdBufState* state, unsigned int stateBits0)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetDefaultAlphaTestFunction(struct GfxCmdBufState* state)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetState(struct GfxCmdBufState* state, const unsigned int* stateBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_HW_SetRenderTarget(struct GfxCmdBufState* state, enum GfxRenderTargetId newTargetId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int R_DecodeSamplerState(unsigned char samplerState)
{

}

#endif // __UNIMPLEMENTED__
