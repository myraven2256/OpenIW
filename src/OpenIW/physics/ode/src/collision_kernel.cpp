//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

struct dxGeom* GeomFromSpace(struct dxSpace* spaceID)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void space_geom_collider(void* data, struct dxGeom* o1, struct dxGeom* o2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int dCollideSpaceGeom(struct dxGeom* o1, struct dxGeom* o2, int flags, struct dContactGeom* contact, int skip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void setCollider(int i, int j, function * fn)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void setAllColliders(int i, function * fn)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void initColliders()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int dCollide(struct dxGeom* o1, struct dxGeom* o2, int flags, struct dContactGeom* contactArray, int skip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void dxGeom::dxGeom(struct dxSpace* _space, int is_placeable, struct dxBody* newBody)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void dxGeom::bodyRemove()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct dxGeom* ODE_BodyGetFirstGeom(struct dxBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct dxGeom* dGeomGetBodyNext(struct dxGeom* geom)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dGeomFree(struct dxGeom* g)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dGeomSetData(struct dxGeom* g, void* data)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* dGeomGetData(struct dxGeom* g)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ODE_GeomDestruct(struct dxGeom* g)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dGeomSetBody(struct dxGeom* g, struct dxBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct dxBody* dGeomGetBody(struct dxGeom* g)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dGeomSetPosition(struct dxGeom* g, float x, float y, float z)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dGeomSetRotation(struct dxGeom* g, const float* R)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dGeomSetQuaternion(struct dxGeom* g, const float* quat)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const float* dGeomGetPosition(struct dxGeom* g)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const float* dGeomGetRotation(struct dxGeom* g)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dGeomGetQuaternion(struct dxGeom* g, float* quat)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dGeomGetAABB(struct dxGeom* g, float* aabb)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int dGeomIsSpace(struct dxGeom* g)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct dxSpace* dGeomGetSpace(struct dxGeom* g)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int dGeomGetClass(struct dxGeom* g)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dGeomSetCategoryBits(struct dxGeom* g, unsigned long bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dGeomSetCollideBits(struct dxGeom* g, unsigned long bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned long dGeomGetCategoryBits(struct dxGeom* g)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned long dGeomGetCollideBits(struct dxGeom* g)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dGeomEnable(struct dxGeom* g)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dGeomDisable(struct dxGeom* g)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int dGeomIsEnabled(struct dxGeom* g)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void dxUserGeom::dxUserGeom(int class_num, struct dxSpace* space, struct dxBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void dxUserGeom::computeAABB()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public int dxUserGeom::AABBTest(struct dxGeom* o, float* aabb)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ODE_GeomGetAAContainedBox(struct dxGeom* geom, float* mins, float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int dCollideUserGeomWithGeom(struct dxGeom* o1, struct dxGeom* o2, int flags, struct dContactGeom* contact, int skip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int dCreateGeomClass(const struct dGeomClass* c)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* dGeomGetClassData(struct dxGeom* g)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct dxGeom* Phys_GetWorldGeom()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct dxGeom* ODE_CreateGeom(int classnum, struct dxSpace* space, struct dxBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dInitUserGeom(struct dxGeom* geom, int classnum, struct dxSpace* space, struct dxBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dCloseODE()
{

}

#endif // __UNIMPLEMENTED__
