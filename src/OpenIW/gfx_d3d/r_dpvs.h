//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void R_SetDpvsPlaneSides(struct DpvsPlane* plane)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetDpvsPlaneDist(const float* pointOnPlane, float epsilon, struct DpvsPlane* plane)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_FinishBuildingDpvsPlane(const float* pointOnPlane, float epsilon, struct DpvsPlane* plane)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float R_DpvsPlaneDistToPoint(const struct DpvsPlane* plane, const float* point)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float R_DpvsPlaneMaxSignedDistToBox(const struct DpvsPlane* plane, const float* minmax)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float R_DpvsPlaneMinSignedDistToBox(const struct DpvsPlane* plane, const float* minmax)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_BoxEntirelyBehindPlane(const float* minmax, const struct DpvsPlane* plane)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_SphereEntirelyBehindPlane(const float* origin, float radius, const struct DpvsPlane* plane)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_CullBoxDpvs(const float* minmax, const struct DpvsPlane* planes, int planeCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_CullSphereDpvs(const float* origin, float radius, const struct DpvsPlane* planes, int planeCount)
{

}

#endif // __UNIMPLEMENTED__
