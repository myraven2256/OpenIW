//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

public void dxSphere::dxSphere(struct dxSpace* space, struct dxBody* body, float _radius)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void dxSphere::computeAABB()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct dxGeom* dCreateSphere(struct dxSpace* space, struct dxBody* body, float radius)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dGeomSphereSetRadius(struct dxGeom* g, float radius)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float dGeomSphereGetRadius(struct dxGeom* g)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float dGeomSpherePointDepth(struct dxGeom* g, float x, float y, float z)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void dxBox::dxBox(struct dxSpace* space, struct dxBody* body, float lx, float ly, float lz)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void dxBox::computeAABB()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct dxGeom* ODE_AllocateGeom()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct dxGeom* dCreateBox(struct dxSpace* space, struct dxBody* body, float lx, float ly, float lz)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dGeomBoxSetLengths(struct dxGeom* g, float lx, float ly, float lz)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dGeomBoxGetLengths(struct dxGeom* g, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float dGeomBoxPointDepth(struct dxGeom* g, float x, float y, float z)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void dxCCylinder::dxCCylinder(struct dxSpace* space, struct dxBody* body, float _radius, float _length)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void dxCCylinder::computeAABB()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct dxGeom* dCreateCCylinder(struct dxSpace* space, struct dxBody* body, float radius, float length)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dGeomCCylinderSetParams(struct dxGeom* g, float radius, float length)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dGeomCCylinderGetParams(struct dxGeom* g, float* radius, float* length)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float dGeomCCylinderPointDepth(struct dxGeom* g, float x, float y, float z)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void make_sure_plane_normal_has_unit_length(struct dxPlane* g)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void dxPlane::dxPlane(struct dxSpace* space, float a, float b, float c, float d)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void dxPlane::computeAABB()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct dxGeom* dCreatePlane(struct dxSpace* space, float a, float b, float c, float d)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dGeomPlaneSetParams(struct dxGeom* g, float a, float b, float c, float d)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dGeomPlaneGetParams(struct dxGeom* g, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float dGeomPlanePointDepth(struct dxGeom* g, float x, float y, float z)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void dxRay::dxRay(struct dxSpace* space, struct dxBody* body, float _length)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void dxRay::computeAABB()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct dxGeom* dCreateRay(struct dxSpace* space, struct dxBody* body, float length)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dGeomRaySetLength(struct dxGeom* g, float length)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float dGeomRayGetLength(struct dxGeom* g)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dGeomRaySet(struct dxGeom* g, float px, float py, float pz, float dx, float dy, float dz)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dGeomRayGet(struct dxGeom* g, float* start, float* dir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dGeomRaySetParams(struct dxGeom* g, int FirstContact, int BackfaceCull)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dGeomRayGetParams(struct dxGeom* g, int* FirstContact, int* BackfaceCull)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dGeomRaySetClosestHit(struct dxGeom* g, int closestHit)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int dGeomRayGetClosestHit(struct dxGeom* g)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int intersectRectQuad(float* h, float* p, float* ret)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void cullPoints(int n, float* p, int m, int i0, int* iret)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int dBoxBox(const float* p1, const float* R1, const float* side1, const float* p2, const float* R2, const float* side2, float* normal, float* depth, int* return_code, int maxc, struct dContactGeom* contact, int skip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int dCollideSphereSphere(struct dxGeom* o1, struct dxGeom* o2, int __formal, struct dContactGeom* contact, int __formal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int dCollideSphereBox(struct dxGeom* o1, struct dxGeom* o2, int __formal, struct dContactGeom* contact, int skip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int dCollideSpherePlane(struct dxGeom* o1, struct dxGeom* o2, int __formal, struct dContactGeom* contact, int skip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int dCollideBoxBox(struct dxGeom* o1, struct dxGeom* o2, int flags, struct dContactGeom* contact, int skip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int dCollideBoxPlane(struct dxGeom* o1, struct dxGeom* o2, int flags, struct dContactGeom* contact, int skip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int dCollideCCylinderSphere(struct dxGeom* o1, struct dxGeom* o2, int __formal, struct dContactGeom* contact, int skip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int ODE_CollideCapsuleBox(const float* boxPos, const float* boxRot, float* boxLengths, const float* capPos, const float* capRot, float capRadius, float capHalfHeight, int maxc, struct dContactGeom* contact, int skip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int dCollideCCylinderBox(struct dxGeom* o1, struct dxGeom* o2, int flags, struct dContactGeom* contact, int skip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int dCollideCCylinderCCylinder(struct dxGeom* o1, struct dxGeom* o2, int flags, struct dContactGeom* contact, int skip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int dCollideCCylinderPlane(struct dxGeom* o1, struct dxGeom* o2, int flags, struct dContactGeom* contact, int skip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int ray_sphere_helper(struct dxRay* ray, float* sphere_pos, float radius, struct dContactGeom* contact, int mode)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int dCollideRaySphere(struct dxGeom* o1, struct dxGeom* o2, int __formal, struct dContactGeom* contact, int skip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int dCollideRayBox(struct dxGeom* o1, struct dxGeom* o2, int __formal, struct dContactGeom* contact, int skip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int dCollideRayCCylinder(struct dxGeom* o1, struct dxGeom* o2, int __formal, struct dContactGeom* contact, int skip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int dCollideRayPlane(struct dxGeom* o1, struct dxGeom* o2, int __formal, struct dContactGeom* contact, int skip)
{

}

#endif // __UNIMPLEMENTED__
