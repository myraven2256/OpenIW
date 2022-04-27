//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

int FX_GetClientForSystem(const struct FxSystem* system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short FX_EffectToHandle(struct FxSystem* system, struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct FxEffect* FX_EffectFromHandle(struct FxSystem* system, unsigned short handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct FxEffect* FX_EffectFromIndex(struct FxSystem* system, volatile long index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short FX_EffectHandleFromIndex(unsigned int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int FX_IndexFromEffectHandle(unsigned short handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short FX_PoolToHandle_Generic<FxTrailElem,2048>(struct FxPool<FxTrailElem>* poolArray, struct FxTrailElem* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct FxTrailElem* FX_PoolFromHandle_Generic<FxTrailElem,2048>(struct FxPool<FxTrailElem>* poolArray, unsigned short handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short FX_ElemToHandle(struct FxSystem* system, struct FxElem* elem)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct FxElem* FX_ElemFromHandle(struct FxSystem* system, unsigned short handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short FX_TrailElemToHandle(struct FxSystem* system, struct FxTrailElem* trailElem)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct FxTrailElem* FX_TrailElemFromHandle(struct FxSystem* system, unsigned short handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short FX_TrailToHandle(struct FxSystem* system, struct FxTrail* trail)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct FxTrail* FX_TrailFromHandle(struct FxSystem* system, unsigned short handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_AddRefToEffect(struct FxSystem* __formal, struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_DelRefToEffect(struct FxSystem* system, struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct FxEffectDef* FX_GetEffectDef(const struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct FxElemDef* FX_GetEffectElemDef(const struct FxEffect* effect, int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_AcquireEffectLock(struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_ReleaseEffectLock(struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_BeginIteratingOverEffects_Cooperative(struct FxSystem* system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_EndIteratingOverEffects_Cooperative(struct FxSystem* system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_WaitBeginIteratingOverEffects_Exclusive(struct FxSystem* system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool FX_BeginIteratingOverEffects_Exclusive(struct FxSystem* system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_EndIteratingOverEffects_Exclusive(struct FxSystem* system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_UnpackColor565(unsigned short packed, unsigned char* outR, unsigned char* outG, unsigned char* outB)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_PackColor565(unsigned char r, unsigned char g, unsigned char b, unsigned short* outPacked)
{

}

#endif // __UNIMPLEMENTED__
