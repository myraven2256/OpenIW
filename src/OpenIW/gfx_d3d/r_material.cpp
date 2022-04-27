//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_r_material()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* Material_Alloc(int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Load_CreateMaterialVertexShader(struct GfxVertexShaderLoadDef* loadDef, struct MaterialVertexShader* mtlShader)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Load_CreateMaterialPixelShader(struct GfxPixelShaderLoadDef* loadDef, struct MaterialPixelShader* mtlShader)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void AssertValidVertexDeclOffsets(const struct stream_source_info_t* streamTable)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct D3DVertexDeclaration* Material_BuildVertexDecl(const struct MaterialStreamRouting* routingData, int streamCount, const struct stream_source_info_t* sourceTable)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Load_BuildVertexDecl(struct MaterialVertexDeclaration** mtlVertDecl)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Load_BindVertexShader(struct MaterialVertexShader** pVertexShader, struct MaterialPass* pass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct MaterialTechniqueSet* Material_FindTechniqueSet_FastFile(const char* name, enum MtlTechSetNotFoundBehavior notFoundBehavior)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct MaterialTechniqueSet* Material_FindTechniqueSet(const char* name, enum MtlTechSetNotFoundBehavior notFoundBehavior)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Material_DirtySort()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Material_IsDefault(const struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct Material* Material_Register_FastFile(const char* name, int imageTrack)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct Material* Material_Register(const char* name, int imageTrack)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct Material* Material_LoadRawImage(const char* name, int imageTrack)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct Material* Material_RegisterHandle(const char* name, int imageTrack)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct Material* Material_RegisterRawImage(const char* name, int imageTrack)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_GetMaterialMemory(struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GetMaterialList(union XAssetHeader header, void* data)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_MaterialCompare(const struct MaterialMemory& material0, const struct MaterialMemory& material1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_MaterialList_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Material_GetName(struct Material* handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Material_GetNameWithoutPrefix(struct Material* handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Material_LoadBuiltIn(const struct BuiltInMaterialTable* mtlTable, int mtlTableCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Material_Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Material_FinishLoading()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Material_CollateTechniqueSets(union XAssetHeader header, void* userData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Material_ForEachTechniqueSet_FastFile(function * callback)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Material_ForEachTechniqueSet(function * callback)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool IsValidMaterialHandle(struct Material* const handle)
{

}

#endif // __UNIMPLEMENTED__
