//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_dvar()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Dvar_CompareNames(const struct dvar_s* dvar0, const struct dvar_s* dvar1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Dvar_Sort()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_ForEach(function * callback, void* userData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_ForEachName(function * callback)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct dvar_s* Dvar_GetAtIndex(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetInAutoExec(bool inAutoExec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Dvar_IsSystemActive()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static long generateHashValue(const char* fname)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Dvar_IsValidName(const char* dvarName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* Dvar_AllocNameString(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Dvar_FreeNameString(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Dvar_CopyString(const char* string, union DvarValue* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Dvar_WeakCopyString(const char* string, union DvarValue* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Dvar_ShouldFreeCurrentString(struct dvar_s* dvar)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Dvar_ShouldFreeLatchedString(struct dvar_s* dvar)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Dvar_ShouldFreeResetString(struct dvar_s* dvar)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Dvar_FreeString(union DvarValue* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Dvar_AssignCurrentStringValue(struct dvar_s* dvar, union DvarValue* dest, const char* string)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Dvar_AssignLatchedStringValue(struct dvar_s* dvar, union DvarValue* dest, const char* string)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Dvar_AssignResetStringValue(struct dvar_s* dvar, union DvarValue* dest, const char* string)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Dvar_EnumToString(const struct dvar_s* dvar)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Dvar_IndexStringToEnumString(const struct dvar_s* dvar, const char* indexString)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* Dvar_ValueToString(const struct dvar_s* dvar, union DvarValue value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Dvar_StringToBool(const char* string)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Dvar_StringToInt(const char* string)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Dvar_StringToFloat(const char* string)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Dvar_StringToVec2(const char* string, float* vector)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Dvar_StringToVec3(const char* string, float* vector)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Dvar_StringToVec4(const char* string, float* vector)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Dvar_StringToEnum(const union DvarLimits* domain, const char* string)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Dvar_StringToColor(const char* string, unsigned char* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static union DvarValue Dvar_StringToValue(const unsigned char type, const union DvarLimits domain, const char* string)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Dvar_DisplayableValue(const struct dvar_s* dvar)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Dvar_DisplayableResetValue(const struct dvar_s* dvar)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Dvar_DisplayableLatchedValue(const struct dvar_s* dvar)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Dvar_ClampVectorToDomain(float* vector, int components, float min, float max)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Dvar_VectorInDomain(const float* vector, int components, float min, float max)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static union DvarValue Dvar_ClampValueToDomain(unsigned char type, union DvarValue value, const union DvarValue resetValue, const union DvarLimits domain)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Dvar_ValueInDomain(unsigned char type, union DvarValue value, union DvarLimits domain)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Dvar_VectorDomainToString(int components, union DvarLimits domain, char* outBuffer, int outBufferLen)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* Dvar_DomainToString_Internal(unsigned char type, union DvarLimits domain, char* outBuffer, int outBufferLen, int* outLineCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Dvar_DomainToString(unsigned char type, union DvarLimits domain, char* outBuffer, int outBufferLen)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Dvar_DomainToString_GetLines(unsigned char type, union DvarLimits domain, char* outBuffer, int outBufferLen, int* outLineCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_PrintDomain(unsigned char type, union DvarLimits domain)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Dvar_ValuesEqual(unsigned char type, union DvarValue val0, union DvarValue val1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Dvar_SetLatchedValue(struct dvar_s* dvar, union DvarValue value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Dvar_HasLatchedValue(const struct dvar_s* dvar)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Dvar_SetVariant(struct dvar_s* dvar, union DvarValue value, enum DvarSetSource source)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct dvar_s* Dvar_FindMalleableVar(const char* dvarName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct dvar_s* Dvar_FindVar(const char* dvarName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_ClearModified(const struct dvar_s* dvar)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetModified(const struct dvar_s* dvar)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_UpdateEnumDomain(const struct dvar_s* dvar, const char** stringTable)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Dvar_GetBool(const char* dvarName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Dvar_GetInt(const char* dvarName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float Dvar_GetFloat(const char* dvarName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_GetVec3(const char* dvarName, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Dvar_GetString(const char* dvarName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Dvar_GetVariantString(const char* dvarName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_GetUnpackedColor(const struct dvar_s* dvar, float* expandedColor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_GetUnpackedColorByName(const char* dvarName, float* expandedColor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_Shutdown()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Dvar_PerformUnregistration(struct dvar_s* dvar)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Dvar_UpdateResetValue(struct dvar_s* dvar, union DvarValue value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_ChangeResetValue(const struct dvar_s* dvar, union DvarValue value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Dvar_UpdateValue(struct dvar_s* dvar, union DvarValue value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Dvar_MakeExplicitType(struct dvar_s* dvar, const char* dvarName, unsigned char type, unsigned short flags, union DvarValue resetValue, union DvarLimits domain)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static union DvarValue Dvar_GetReinterpretedResetValue(struct dvar_s* __formal, union DvarValue value, unsigned char type, unsigned short flags, union DvarLimits domain)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Dvar_ReinterpretDvar(struct dvar_s* dvar, const char* dvarName, unsigned char type, unsigned short flags, union DvarValue value, union DvarLimits domain)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_MakeLatchedValueCurrent(const struct dvar_s* dvar)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_ClearLatchedValue(const struct dvar_s* dvar)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Dvar_Reregister(struct dvar_s* dvar, const char* dvarName, unsigned char type, unsigned short flags, union DvarValue resetValue, union DvarLimits domain, const char* description)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const struct dvar_s* Dvar_RegisterNew(const char* dvarName, unsigned char type, unsigned short flags, union DvarValue value, union DvarLimits domain, const char* description)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const struct dvar_s* Dvar_RegisterVariant(const char* dvarName, unsigned char type, unsigned short flags, union DvarValue value, union DvarLimits domain, const char* description)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct dvar_s* Dvar_RegisterBool(const char* dvarName, bool value, unsigned short flags, const char* description)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct dvar_s* Dvar_RegisterInt(const char* dvarName, int value, int min, int max, unsigned short flags, const char* description)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct dvar_s* Dvar_RegisterFloat(const char* dvarName, float value, float min, float max, unsigned short flags, const char* description)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct dvar_s* Dvar_RegisterVec2(const char* dvarName, float x, float y, float min, float max, unsigned short flags, const char* description)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct dvar_s* Dvar_RegisterVec3(const char* dvarName, float x, float y, float z, float min, float max, unsigned short flags, const char* description)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct dvar_s* Dvar_RegisterVec4(const char* dvarName, float x, float y, float z, float w, float min, float max, unsigned short flags, const char* description)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct dvar_s* Dvar_RegisterString(const char* dvarName, const char* value, unsigned short flags, const char* description)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct dvar_s* Dvar_RegisterEnum(const char* dvarName, const char** valueList, int defaultIndex, unsigned short flags, const char* description)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct dvar_s* Dvar_RegisterColor(const char* dvarName, float r, float g, float b, float a, unsigned short flags, const char* description)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetBoolFromSource(const struct dvar_s* dvar, bool value, enum DvarSetSource source)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetIntFromSource(const struct dvar_s* dvar, int value, enum DvarSetSource source)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetFloatFromSource(const struct dvar_s* dvar, float value, enum DvarSetSource source)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetVec2FromSource(const struct dvar_s* dvar, float x, float y, enum DvarSetSource source)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetVec3FromSource(const struct dvar_s* dvar, float x, float y, float z, enum DvarSetSource source)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetVec4FromSource(const struct dvar_s* dvar, float x, float y, float z, float w, enum DvarSetSource source)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Dvar_SetStringFromSource(const struct dvar_s* dvar, const char* string, enum DvarSetSource source)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetColorFromSource(const struct dvar_s* dvar, float r, float g, float b, float a, enum DvarSetSource source)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetBool(const struct dvar_s* dvar, bool value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetInt(const struct dvar_s* dvar, int value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetFloat(const struct dvar_s* dvar, float value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetVec2(const struct dvar_s* dvar, float x, float y)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetVec3(const struct dvar_s* dvar, float x, float y, float z)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetVec4(const struct dvar_s* dvar, float x, float y, float z, float w)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetString(const struct dvar_s* dvar, const char* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetColor(const struct dvar_s* dvar, float r, float g, float b, float a)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Dvar_SetFromStringFromSource(const struct dvar_s* dvar, const char* string, enum DvarSetSource source)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetFromString(const struct dvar_s* dvar, const char* string)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetBoolByName(const char* dvarName, bool value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetIntByName(const char* dvarName, int value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetFloatByName(const char* dvarName, float value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetVec2ByName(const char* dvarName, float x, float y)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetVec3ByName(const char* dvarName, float x, float y, float z)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetVec4ByName(const char* dvarName, float x, float y, float z, float w)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetStringByName(const char* dvarName, const char* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetColorByName(const char* dvarName, float r, float g, float b, float a)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct dvar_s* Dvar_SetFromStringByNameFromSource(const char* dvarName, const char* string, enum DvarSetSource source)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetFromStringByName(const char* dvarName, const char* string)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetCommand(const char* dvarName, const char* string)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_AddFlags(const struct dvar_s* dvar, int flags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_Reset(const struct dvar_s* dvar, enum DvarSetSource setSource)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SetCheatState()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_ResetScriptInfo()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Dvar_AnyLatchedValues()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_SaveDvars(struct MemoryFile* memFile, unsigned int filter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_LoadDvars(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Dvar_ResetDvars(unsigned int filter, enum DvarSetSource setSource)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Com_SaveDvarsToBuffer(const char** dvarnames, unsigned int numDvars, char* buffer, unsigned int bufsize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Com_LoadDvarsFromBuffer(const char** dvarnames, unsigned int numDvars, const char* buffer, const char* filename)
{

}

#endif // __UNIMPLEMENTED__
