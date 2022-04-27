//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_com_math()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float random()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float crandom()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void GaussianRandom(float* f0, float* f1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int RandWithSeed(int* seed)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PointInCircleFromUniformDeviates(float radiusDeviate, float yawDeviate, float* point)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PointOnSphereFromUniformDeviates(float azimuthDeviate, float yawDeviate, float* unitVec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PointOnHemisphereFromUniformDeviates(float azimuthDeviate, float yawDeviate, float* unitVec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UniformPointsInCircle(unsigned int pointCount, void* points, unsigned int stride)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UniformPointsOnHemisphere(unsigned int pointCount, void* points, unsigned int stride)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UniformPointsOnSphere(unsigned int pointCount, void* points, unsigned int stride)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float LinearTrack(float tgt, float cur, float rate, float deltaTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float LinearTrackAngle(float tgt, float cur, float rate, float deltaTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float DiffTrack(float tgt, float cur, float rate, float deltaTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float DiffTrackAngle(float tgt, float cur, float rate, float deltaTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float GraphGetValueFromFraction(const int knotCount, const float* knots[0x2], const float fraction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Q_log2(int val)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float Q_acos(const float c)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

signed char ClampChar(const int i)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

short ClampShort(const int i)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned char DirToByte(const float* dir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ByteToDir(const int b, float* dir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int VecNCompareCustomEpsilon(const float* v0, const float* v1, float epsilon, int coordCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float Vec3DistanceSqToSegment(const float* pt, const float* segStart, const float* segDir, float segLen)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float Vec2Distance(const float* v1, const float* v2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float Vec2DistanceSq(const float* p1, const float* p2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Vec3MajorAxis(const float* dir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vec3ProjectionCoords(const float* dir, int* xCoord, int* yCoord)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float Vec2Normalize(float* v)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float Vec3NormalizeTo(const float* v, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float Vec2NormalizeTo(const float* v, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float Vec3Max(const float* in)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vec3Rotate(const float* in, const float* matrix[0x3], float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vec3RotateTranspose(const float* in, const float* matrix[0x3], float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RotatePointAroundVector(float* dst, const float* dir, const float* point, const float degrees)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RotateAroundDirection(float* axis[0x3], const float yaw)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vec3Basis_LeftHanded(const float* forward, float* right, float* up)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vec3Basis_RightHanded(const float* forward, float* left, float* up)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float vectoyaw(const float* vec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float vectosignedyaw(const float* vec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float vectopitch(const float* vec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float vectosignedpitch(const float* vec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void vectoangles(const float* vec, float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UnitQuatToAngles(const float* quat, float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void vectosignedangles(const float* vec, float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void YawVectors(const float yaw, float* forward, float* right)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void YawVectors2D(const float yaw, float* forward, float* right)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PerpendicularVector(const float* src, float* dst)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void GetPerpendicularViewVector(const float* point, const float* p1, const float* p2, float* up)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ProjectPointOntoVector(const float* point, const float* start, const float* end, float* vProj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float PointToLineDistSq(const float* point, const float* start, const float* end)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float PointToBoxDistSq(const float* pt, const float* mins, const float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float PointToLineDistSq2D(const float* point, const float* start, const float* end)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float PointToLineDistSqUsingDir(const float* pt, const float* start, const float* dir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PointOnLineClosestToPoint(const float* pt, const float* start, const float* dir, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ClosestApproachOfTwoLines(const float* p1, const float* dir1, const float* p2, const float* dir2, float* s, float* t)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MatrixIdentity33(float* out[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MatrixIdentity44(float* out[0x4])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MatrixSet44(float* out[0x4], const float* origin, const float* axis[0x3], float scale)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MatrixMultiply(const float* in1[0x3], const float* in2[0x3], float* out[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MatrixMultiplyEquals(const float* in[0x3], float* out[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MatrixMultiply34(const float* in1[0x4], const float* in2[0x4], float* out[0x4])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MatrixMultiply43(const float* in1[0x3], const float* in2[0x3], float* out[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MatrixMultiply44(const float* in1[0x4], const float* in2[0x4], float* out[0x4])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MatrixTranspose(const float* in[0x3], float* out[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MatrixTranspose44(const float* in, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MatrixInverse(const float* in[0x3], float* out[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MatrixInverseOrthogonal43(const float* in[0x3], float* out[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MatrixInverse44(const float* mat, float* dst)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MatrixTransformVector44(const float* vec, const float* mat[0x4], float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MatrixTransposeTransformVector(const float* in1, const float* in2[0x3], float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MatrixTransformVector43(const float* in1, const float* in2[0x3], float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MatrixTransposeTransformVector43(const float* in1, const float* in2[0x3], float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MatrixTransformVector43Equals(float* out, const float* in)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VectorAngleMultiply(float* vec, float angle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void QuatInverse(const float* in, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void QuatToAxis(const float* quat, float* axis[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UnitQuatToAxis(const float* quat, float* axis[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void UnitQuatToForward(const float* quat, float* forward)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void QuatSlerp(const float* from, const float* to, float frac, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float QuatEigenTrace(float* quat)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float AngleEigenTrace(float angle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float QuatRatioEigenTrace(float* quat1, float* quat2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float RotationToYaw(const float* rot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void AngleAxisToQuat(float angle, const float* axis, float* quat)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MatrixRotationX(float* mat[0x3], float degree)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MatrixRotationY(float* mat[0x3], float degree)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MatrixRotationZ(float* mat[0x3], float degree)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FinitePerspectiveMatrix(float* mtx[0x4], float tanHalfFovX, float tanHalfFovY, float zNear, float zFar)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void InfinitePerspectiveMatrix(float* mtx[0x4], float tanHalfFovX, float tanHalfFovY, float zNear)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void OrthographicMatrix(float* mtx[0x4], float width, float height, float depth)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MatrixForViewer(float* mtx[0x4], const float* origin, const float* axis[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float LerpAngle(const float from, const float to, const float frac)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void AnglesSubtract(const float* v1, const float* v2, float* v3)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float AngleNormalize360(const float angle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float AngleDelta(const float angle1, const float angle2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float RadiusFromBounds(const float* mins, const float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float RadiusFromBounds2D(const float* mins, const float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float RadiusFromBoundsSq(const float* mins, const float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float RadiusFromBounds2DSq(const float* mins, const float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ExtendBounds(float* mins, float* maxs, const float* offset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ExpandBoundsToWidth(float* mins, float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ShrinkBoundsToHeight(float* mins, float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ClearBounds(float* mins, float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool IsClearedBounds(const float* mins, const float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ClearBounds2D(float* mins, float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void AddPointToBounds(const float* v, float* mins, float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void AddPointToBounds2D(const float* v, float* mins, float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PointInBounds(const float* v, const float* mins, const float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PointInBounds2D(const float* v, const float* mins, const float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BoundsOverlap(const float* mins0, const float* maxs0, const float* mins1, const float* maxs1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BoundsOverlap2D(const float* mins0, const float* maxs0, const float* mins1, const float* maxs1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BoundsOverlapEpsilon(const float* mins0, const float* maxs0, const float* mins1, const float* maxs1, float epsilon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BoundsOverlapEpsilon2D(const float* mins0, const float* maxs0, const float* mins1, const float* maxs1, float epsilon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ExpandBounds(const float* addedmins, const float* addedmaxs, float* mins, float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ExpandBounds2D(const float* addedmins, const float* addedmaxs, float* mins, float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float BoundsVolume(const float* mins, const float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void AxisClear(float* axis[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void AxisCopy(const float* in[0x3], float* out[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void AxisTranspose(const float* in[0x3], float* out[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void AxisTransformVector(const float* axes[0x3], const float x, const float y, const float z, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void AxisTransformVec3(const float* axes[0x3], const float* vec, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void YawToAxis(float yaw, float* axis[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void AxisToAngles(const float* axis[0x3], float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void AxisToSignedAngles(const float* axis[0x3], float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int IntersectPlanes(const float** plane, float* xyz)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SnapPointToIntersectingPlanes(const float** planes, float* xyz, float snapGrid, float snapEpsilon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SnapPointToPlanes(const float* planes[0x4], int planeCount, float* xyz, float snapGrid, float snapEpsilon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int ProjectedWindingContainsCoplanarPoint(const float* verts[0x3], int vertCount, int x, int y, const float* point)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int ProjectedWindingContainsCoplanarPointEpsilon(const float* verts[0x3], int vertCount, int x, int y, const float* point, float epsilon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int ProjectedWindingSegmentFractionToEdge(const float* verts[0x3], int vertCount, int x, int y, const float* point, const float* centroid, float* fracToEdge)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PlaneFromPoints(float* plane, const float* v0, const float* v1, const float* v2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ProjectPointOnPlane(const float* p, const float* normal, float* dst)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SetPlaneSignbits(struct cplane_s* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int IsPosInsideArc(const float* pos, float posRadius, const float* arcOrigin, float arcRadius, float arcAngle0, float arcAngle1, float arcHalfHeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BoxDistSqrdExceeds(const float* absmin, const float* absmax, const float* org, const float fogOpaqueDistSqrd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float Q_rint(const float in)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float ColorNormalize(const float* in, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VectorRotateAngles(const float* vIn, const float* vRotation, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VectorRotateAnglesAroundPoint(const float* vIn, const float* vRotation, const float* vOrigin, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VectorPolar(float* v, const float radius, const float theta, const float phi)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float PitchForYawOnNormal(const float fYaw, const float* normal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void NearestPitchAndYawOnPlane(const float* angles, const float* normal, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Rand_Init(int seed)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float flrand(float min, float max)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int irand(int min, int max)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MatrixTransformVectorQuatTrans(const float* in, const struct DObjAnimMat* mat, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void AxisToQuat(const float* mat[0x3], float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void QuatLerp(const float* qa, const float* qb, float frac, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SinCosDeg(float degrees, float* s, float* c)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float FudgeFloat(float f, int lsbError, int lsbCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float SnapFloat(float f, float granularity, float epsilon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CullBoxFromCone(const float* coneOrg, const float* coneDir, float cosHalfFov, const float* boxCenter, const float* boxHalfSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CullBoxFromSphere(const float* sphereOrg, float radius, const float* boxCenter, const float* boxHalfSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CullBoxFromConicSectionOfSphere(const float* coneOrg, const float* coneDir, float cosHalfFov, float radius, const float* boxCenter, const float* boxHalfSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CullSphereFromCone(const float* coneOrg, const float* coneDir, float cosHalfFov, const float* sphereCenter, float radius)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float DistanceFromConeToPoint(const float* coneOrg, const float* coneDir, float cosHalfFov, const float* point)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float DistanceFromConicSectionOfSphereToPoint(const float* coneOrg, const float* coneDir, float cosHalfFov, float radius, const float* point)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ClosestPointOnConicSectionOfSphereToPoint(const float* coneOrg, const float* coneDir, float cosHalfFov, float radius, const float* point, float* closestPoint)
{

}

#endif // __UNIMPLEMENTED__
