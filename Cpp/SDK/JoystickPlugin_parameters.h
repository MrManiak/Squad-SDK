#pragma once

// Name: S, Version: b

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function JoystickPlugin.JoystickInterface.JoystickUnplugged
struct UJoystickInterface_JoystickUnplugged_Params
{
	int                                                DeviceID;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function JoystickPlugin.JoystickInterface.JoystickPluggedIn
struct UJoystickInterface_JoystickPluggedIn_Params
{
	int                                                DeviceID;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function JoystickPlugin.JoystickInterface.JoystickHatChanged
struct UJoystickInterface_JoystickHatChanged_Params
{
	int                                                Hat;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EJoystickPOVDirection                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJoystickState                              State;                                                     // (Parm, NativeAccessSpecifierPublic)
};

// Function JoystickPlugin.JoystickInterface.JoystickButtonReleased
struct UJoystickInterface_JoystickButtonReleased_Params
{
	int                                                Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJoystickState                              State;                                                     // (Parm, NativeAccessSpecifierPublic)
};

// Function JoystickPlugin.JoystickInterface.JoystickButtonPressed
struct UJoystickInterface_JoystickButtonPressed_Params
{
	int                                                Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJoystickState                              State;                                                     // (Parm, NativeAccessSpecifierPublic)
};

// Function JoystickPlugin.JoystickInterface.JoystickBallMoved
struct UJoystickInterface_JoystickBallMoved_Params
{
	int                                                Ball;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Delta;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJoystickState                              State;                                                     // (Parm, NativeAccessSpecifierPublic)
};

// Function JoystickPlugin.JoystickInterface.JoystickAxisChanged
struct UJoystickInterface_JoystickAxisChanged_Params
{
	int                                                Axis;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              valuePrev;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJoystickState                              State;                                                     // (Parm, NativeAccessSpecifierPublic)
	struct FJoystickState                              prev;                                                      // (Parm, NativeAccessSpecifierPublic)
};

// Function JoystickPlugin.JoystickFunctions.RegisterForJoystickEvents
struct UJoystickFunctions_RegisterForJoystickEvents_Params
{
	class UObject*                                     Listener;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function JoystickPlugin.JoystickFunctions.POVAxis
struct UJoystickFunctions_POVAxis_Params
{
	EJoystickPOVDirection                              Direction;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function JoystickPlugin.JoystickFunctions.MapJoystickDeviceToPlayer
struct UJoystickFunctions_MapJoystickDeviceToPlayer_Params
{
	int                                                DeviceID;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function JoystickPlugin.JoystickFunctions.JoystickCount
struct UJoystickFunctions_JoystickCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function JoystickPlugin.JoystickFunctions.IgnoreGameControllers
struct UJoystickFunctions_IgnoreGameControllers_Params
{
	bool                                               bIgnore;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function JoystickPlugin.JoystickFunctions.GetPreviousJoystickState
struct UJoystickFunctions_GetPreviousJoystickState_Params
{
	int                                                DeviceID;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJoystickState                              ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function JoystickPlugin.JoystickFunctions.GetJoystickState
struct UJoystickFunctions_GetJoystickState_Params
{
	int                                                DeviceID;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJoystickState                              ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function JoystickPlugin.JoystickFunctions.GetJoystick
struct UJoystickFunctions_GetJoystick_Params
{
	int                                                DeviceID;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJoystickInfo                               ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
