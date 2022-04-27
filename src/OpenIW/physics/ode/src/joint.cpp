//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static void dBodyAddTorque(struct dxBody* b, float fx, float fy, float fz)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void dBodyAddForce(struct dxBody* b, float fx, float fy, float fz)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void setBall(struct dxJoint* joint, struct dxJoint::Info2* info, float* anchor1, float* anchor2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void setFixedOrientation(struct dxJoint* joint, struct dxJoint::Info2* info, float* qrel, int start_row)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void setAnchors(struct dxJoint* j, float x, float y, float z, float* anchor1, float* anchor2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void setAxes(struct dxJoint* j, float x, float y, float z, float* axis1, float* axis2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void getAnchor(struct dxJoint* j, float* result, float* anchor1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void getAnchor2(struct dxJoint* j, float* result, float* anchor2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void getAxis(struct dxJoint* j, float* result, float* axis1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void getAxis2(struct dxJoint* j, float* result, float* axis2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float getHingeAngleFromRelativeQuat(const float* qrel, const float* axis)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float getHingeAngle(const struct dxBody* body1, const struct dxBody* body2, const float* axis, const float* q_initial)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void dxJointLimitMotor::init(struct dxWorld* world)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void dxJointLimitMotor::set(int num, float value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public float dxJointLimitMotor::get(int num)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public int dxJointLimitMotor::testRotationalLimit(float angle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public int dxJointLimitMotor::addLimot(struct dxJoint* joint, struct dxJoint::Info2* info, int row, float* ax1, int rotational)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ballInit(struct dxJointBall* j)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ballGetInfo1(const struct dxJointBall* __formal, struct dxJoint::Info1* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ballGetInfo2(struct dxJointBall* joint, struct dxWorldStepInfo* stepInfo, struct dxJoint::Info2* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointSetBallAnchor(struct dxJointBall* joint, float x, float y, float z)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointGetBallAnchor(struct dxJointBall* joint, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointGetBallAnchor2(struct dxJointBall* joint, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void hingeInit(struct dxJointHinge* j)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void hingeGetInfo1(const struct dxJointHinge* j, struct dxJoint::Info1* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void hingeGetInfo2(struct dxJointHinge* joint, struct dxWorldStepInfo* stepInfo, struct dxJoint::Info2* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void hingeComputeInitialRelativeRotation(struct dxJointHinge* joint)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointSetHingeAnchor(struct dxJointHinge* joint, float x, float y, float z)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointSetHingeAxis(struct dxJointHinge* joint, float x, float y, float z)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointGetHingeAnchor(struct dxJointHinge* joint, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointGetHingeAnchor2(struct dxJointHinge* joint, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointGetHingeAxis(struct dxJointHinge* joint, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointSetHingeParam(struct dxJointHinge* joint, int parameter, float value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float dJointGetHingeParam(struct dxJointHinge* joint, int parameter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float dJointGetHingeAngle(struct dxJointHinge* joint)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float dJointGetHingeAngleRate(struct dxJointHinge* joint)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointAddHingeTorque(struct dxJointHinge* joint, float torque)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void sliderInit(struct dxJointSlider* j)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float dJointGetSliderPosition(const struct dxJointSlider* joint)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float dJointGetSliderPositionRate(struct dxJointSlider* joint)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void sliderGetInfo1(const struct dxJointSlider* j, struct dxJoint::Info1* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void sliderGetInfo2(struct dxJointSlider* joint, struct dxWorldStepInfo* stepInfo, struct dxJoint::Info2* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointSetSliderAxis(struct dxJointSlider* joint, float x, float y, float z)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointGetSliderAxis(struct dxJointSlider* joint, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointSetSliderParam(struct dxJointSlider* joint, int parameter, float value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float dJointGetSliderParam(struct dxJointSlider* joint, int parameter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointAddSliderForce(struct dxJointSlider* joint, float force)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void contactInit(struct dxJointContact* j)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void contactGetInfo1(const struct dxJointContact* j, struct dxJoint::Info1* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void pr(const char* txt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void dumpJointInfo2(struct dxJointContact* j, struct dxJoint::Info2* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void contactGetInfo2(struct dxJointContact* j, struct dxWorldStepInfo* stepInfo, struct dxJoint::Info2* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void universalInit(struct dxJointUniversal* j)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void getUniversalAxes(const struct dxJointUniversal* joint, float* ax1, float* ax2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float getUniversalAngle1(const struct dxJointUniversal* joint)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float getUniversalAngle2(const struct dxJointUniversal* joint)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void universalGetInfo1(const struct dxJointUniversal* j, struct dxJoint::Info1* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void universalGetInfo2(struct dxJointUniversal* joint, struct dxWorldStepInfo* stepInfo, struct dxJoint::Info2* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void universalComputeInitialRelativeRotations(struct dxJointUniversal* joint)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointSetUniversalAnchor(struct dxJointUniversal* joint, float x, float y, float z)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointSetUniversalAxis1(struct dxJointUniversal* joint, float x, float y, float z)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointSetUniversalAxis2(struct dxJointUniversal* joint, float x, float y, float z)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointGetUniversalAnchor(struct dxJointUniversal* joint, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointGetUniversalAnchor2(struct dxJointUniversal* joint, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointGetUniversalAxis1(struct dxJointUniversal* joint, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointGetUniversalAxis2(struct dxJointUniversal* joint, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointSetUniversalParam(struct dxJointUniversal* joint, int parameter, float value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float dJointGetUniversalParam(struct dxJointUniversal* joint, int parameter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float dJointGetUniversalAngle1(struct dxJointUniversal* joint)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float dJointGetUniversalAngle2(struct dxJointUniversal* joint)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float dJointGetUniversalAngle1Rate(struct dxJointUniversal* joint)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float dJointGetUniversalAngle2Rate(struct dxJointUniversal* joint)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointAddUniversalTorques(struct dxJointUniversal* joint, float torque1, float torque2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void amotorInit(struct dxJointAMotor* j)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void amotorComputeGlobalAxes(const struct dxJointAMotor* joint, float* ax[0x4])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void amotorComputeEulerAngles(const struct dxJointAMotor* joint, float* ax[0x4], float* angle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void amotorSetEulerReferenceVectors(struct dxJointAMotor* j)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void amotorGetInfo1(const struct dxJointAMotor* j, struct dxJoint::Info1* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void amotorGetInfo2(struct dxJointAMotor* joint, struct dxWorldStepInfo* stepInfo, struct dxJoint::Info2* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointSetAMotorNumAxes(struct dxJointAMotor* joint, int num)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointSetAMotorAxis(struct dxJointAMotor* joint, int anum, int rel, float x, float y, float z)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointSetAMotorParam(struct dxJointAMotor* joint, int parameter, float value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointSetAMotorMode(struct dxJointAMotor* joint, int mode)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int dJointGetAMotorNumAxes(struct dxJointAMotor* joint)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointGetAMotorAxis(struct dxJointAMotor* joint, int anum, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int dJointGetAMotorAxisRel(struct dxJointAMotor* joint, int anum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float dJointGetAMotorAngleRate(struct dxJointAMotor* __formal, int __formal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float dJointGetAMotorParam(struct dxJointAMotor* joint, int parameter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int dJointGetAMotorMode(struct dxJointAMotor* joint)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointAddAMotorTorques(struct dxJointAMotor* joint, float torque1, float torque2, float torque3)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void fixedInit(struct dxJointFixed* j)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void fixedGetInfo1(const struct dxJointFixed* __formal, struct dxJoint::Info1* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void fixedGetInfo2(struct dxJointFixed* joint, struct dxWorldStepInfo* stepInfo, struct dxJoint::Info2* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dJointSetFixed(struct dxJointFixed* joint)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void nullGetInfo1(const struct dxJointNull* __formal, struct dxJoint::Info1* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void nullGetInfo2(struct dxJointNull* __formal, struct dxWorldStepInfo* stepInfo, struct dxJoint::Info2* __formal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void jointInit(struct dxJoint* joint)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void jointGetInfo1(const struct dxJoint* joint, struct dxJoint::Info1* info)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void jointGetInfo2(struct dxJoint* joint, struct dxWorldStepInfo* stepInfo, struct dxJoint::Info2* info)
{

}

#endif // __UNIMPLEMENTED__
