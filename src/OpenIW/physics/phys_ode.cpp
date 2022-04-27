//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_phys()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ODE_ForEachBody<void (__cdecl*)(dxBody *)>(struct dxWorld* world, function * func)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_EnableGeom(struct dxBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_Go_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_DisableBodyAndGeom(struct dxBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_Stop_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_BodyGetRotation(struct dxBody* body, float* outRotation[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_BodyGetCenterOfMass(struct dxBody* body, float* outPosition)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_BodyGetPointVelocity(struct dxBody* body, float* point, float* outVelocity)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_GetStateFromBody(struct dxBody* body, struct BodyState* state)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_ObjGetPositionFromCenterOfMass(struct dxBody* body, const float* rotation[0x3], const float* centerOfGravity, float* objPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_AdjustForNewCenterOfMass(struct dxBody* body, const float* newRelCenterOfMass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_MassSetBrushTotal(struct dMass* m, float totalMass, const float* momentsOfInertia, const float* productsOfInertia)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_BodyAddGeomAndSetMass(enum PhysWorld worldIndex, struct dxBody* body, float totalMass, const struct GeomState* geomState, const float* centerOfMass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct dxBody* Phys_CreateBodyFromState(enum PhysWorld worldIndex, const struct BodyState* state)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Phys_ObjCreateAxis(enum PhysWorld worldIndex, const float* position, const float* axis[0x3], const float* velocity, const struct PhysPreset* physPreset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Phys_ObjCreate(enum PhysWorld worldIndex, const float* position, const float* quat, const float* velocity, const struct PhysPreset* physPreset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSetOrientation(enum PhysWorld worldIndex, int id, const float* newPosition, const float* newOrientation)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjAddGeomBox(enum PhysWorld worldIndex, int id, const float* boxMin, const float* boxMax)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjAddGeomBoxRotated(enum PhysWorld worldIndex, int id, const float* center, const float* halfLengths, const float* orientation[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjAddGeomBrushModel(enum PhysWorld worldIndex, int id, unsigned short brushModel, const struct PhysMass* physMass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjAddGeomBrush(enum PhysWorld worldIndex, int id, const struct cbrush_t* brush, const struct PhysMass* physMass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjAddGeomCylinder(enum PhysWorld worldIndex, int id, const float* boxMin, const float* boxMax)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjAddGeomCylinderDirection(enum PhysWorld worldIndex, int id, const int direction, const float radius, const float halfHeight, const float* centerOfMass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjAddGeomCylinderRotated(enum PhysWorld worldIndex, int id, const int direction, const float radius, const float halfHeight, const float* center, const float* orientation[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjAddGeomCapsule(enum PhysWorld worldIndex, int id, const int direction, const float radius, const float halfHeight, const float* centerOfMass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSetCollisionFromXModel(const struct XModel* model, enum PhysWorld worldIndex, int physId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSetAngularVelocity(int id, const float* angularVel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSetAngularVelocityRaw(int id, const float* angularVel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSetVelocity(int id, const float* velocity)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjGetPosition(int id, float* outPosition, float* outRotation[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjGetCenterOfMass(int id, float* outPosition)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjDestroy(enum PhysWorld worldIndex, int id)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjAddForce(enum PhysWorld worldIndex, int id, const float* worldPos, const float* impulse)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_TweakBulletImpact(float* worldPos, float* bulletDir, const float* centerOfMass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjBulletImpact(enum PhysWorld worldIndex, int id, const float* worldPosRaw, const float* bulletDirRaw, float bulletSpeed, float scale)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_PlayCollisionSound(int localClientNum, struct dxBody* body, int sndClass, struct ContactList* contactList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_NearCallback(void* userData, struct dxGeom* geom1, struct dxGeom* geom2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_ObjDraw(struct dxBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_CheckIfAliveTooLong(struct dxBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_ObjCountIfActive(struct dxBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int Phys_DrawDebugTextForWorld(unsigned int worldIndex, const char* worldText, float* x, float* y, float charHeight, const struct ScreenPlacement* scrPlace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_DrawDebugText(const struct ScreenPlacement* scrPlace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Phys_DoBodyOncePerFrame(unsigned int worldIndex, struct dxBody* body, float deltaT)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_RunFrame(int localClientNum, enum PhysWorld worldIndex, float seconds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dxPostProcessIslands(enum PhysWorld worldIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_BodyGrabSnapshot(struct dxBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_GeomUserGetAAContainedBox(struct dxGeom* geom, float* mins, float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_ObjTraceNewPos(struct dxBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_DoBodyOncePerRun(struct dxBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Phys_GetSnapshotTime(enum PhysWorld worldIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Phys_GetCurrentTime(enum PhysWorld worldIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Phys_ObjGetSnapshot(enum PhysWorld worldIndex, int id, float* outPos, float* outMat[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_RewindCurrentTime(enum PhysWorld worldIndex, int timeNow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_GetPerformance(float* average, int* mintime, int* maxtime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_PerformanceEndFrame()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_PerformanceAddTime(int time)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_RunToTime(int localClientNum, enum PhysWorld worldIndex, int timeNow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjGetInterpolatedState(enum PhysWorld worldIndex, int id, float* outPos, float* outQuat)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSetMass(int id, float totalMass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSetInertialTensor(int id, const struct PhysMass* physMass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSetFriction(int id, float friction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSetBounce(int id, float bounce)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Phys_ObjIsAsleep(int id)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_Shutdown()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ArchiveState(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSave(int id, struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Phys_ObjLoad(enum PhysWorld worldIndex, struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_InitJoints()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_SetHingeParams(enum PhysWorld worldIndex, int id, float motorSpeed, float motorMaxForce, float lowStop, float highStop)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Phys_CreateHinge(enum PhysWorld worldIndex, int obj1, int obj2, const float* anchor, const float* axis, float motorSpeed, float motorMaxForce, float lowStop, float highStop)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Phys_CreateBallAndSocket(enum PhysWorld worldIndex, int obj1, int obj2, const float* anchor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_SetAngularMotorParams(enum PhysWorld worldIndex, int id, const float* motorSpeeds, const float* motorFMaxs, const float* lowStops, const float* highStops)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Phys_CreateAngularMotor(enum PhysWorld worldIndex, int obj1, int obj2, int numAxes, const float* axes[0x3], const float* motorSpeeds, const float* motorFMaxs, const float* lowStops, const float* highStops)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_JointDestroy(enum PhysWorld worldIndex, int id)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_SetCollisionCallback(enum PhysWorld worldIndex, function * callback)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_JointGetLimitAxis(enum PhysWorld worldIndex, int id, float* axis[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_AddJitterRegion(enum PhysWorld worldIndex, const float* origin, float innerRadius, float outerRadius, float minDisplacement, float maxDisplacement)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSetContactCentroid(int id, const float* worldPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_SetWorldUsesContactCentroids(enum PhysWorld world, bool useCentroids)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Phys_GetWorldUsesContactCentroids(enum PhysWorld world)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSetDebugContacts(int id, bool debug)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_SetGravityDir(const float* down)
{

}

#endif // __UNIMPLEMENTED__
