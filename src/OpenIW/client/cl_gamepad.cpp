//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

int CL_GetLastGamePadEventTime()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_ResetLastGamePadEventTime()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_InitGamepadCommands()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_InitGamepadAxisBindings()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum GamepadPhysicalAxis Gamepad_StringToPhysicalAxis(const char* axisName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum GamepadVirtualAxis Axis_StringToVirtualAxis(const char* axisName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* Axis_NumToAxisString(enum GamepadPhysicalAxis axis)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* Gamepad_VirtualAxisName(enum GamepadVirtualAxis axis)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum GamepadMapping Gamepad_InputTypeStringToId(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* Gamepad_InputTypeName(enum GamepadMapping mapType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Gamepad_BindAxis(struct GpadAxesGlob* gaGlob, enum GamepadPhysicalAxis realIndex, enum GamepadVirtualAxis axisIndex, enum GamepadMapping mapType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Axis_Bind_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Axis_Unbindall_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Gamepad_WriteBindings(int localClientNum, void* f)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CL_GamepadAnalogToButtonScrollEvent(int localClientNum, int portIndex, int physicalAxis, int time, int positiveDir, int down)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CL_GamepadGenerateAPad(int localClientNum, int portIndex, int physicalAxis, int time)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_GamepadEvent(int portIndex, int physicalAxis, int value, int time)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float CL_GamepadAxisValue(int localClientNum, int virtualAxis)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CL_CheckForIgnoreDueToRepeat(int localClientNum, int key, int repeatCount, int time)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_GamepadRepeatScrollingButtons(int localClientNum, int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool IsGamepadKey(int key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_GamepadResetMenuScrollTime(int localClientNum, int key, int down, unsigned int time)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_GamepadButtonEvent(int localClientNum, int controllerIndex, int key, int down, unsigned int time)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_GamepadButtonEventForPort(int portIndex, int key, int down, unsigned int time)
{

}

#endif // __UNIMPLEMENTED__
