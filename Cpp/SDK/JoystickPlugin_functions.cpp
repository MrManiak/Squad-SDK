// Name: Sq, Version: b21

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function JoystickPlugin.JoystickFunctions.RegisterForJoystickEvents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Listener                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJoystickFunctions::STATIC_RegisterForJoystickEvents(class UObject* Listener)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickFunctions.RegisterForJoystickEvents");

	UJoystickFunctions_RegisterForJoystickEvents_Params params;
	params.Listener = Listener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JoystickPlugin.JoystickFunctions.POVAxis
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// EJoystickPOVDirection          Direction                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UJoystickFunctions::STATIC_POVAxis(EJoystickPOVDirection Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickFunctions.POVAxis");

	UJoystickFunctions_POVAxis_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function JoystickPlugin.JoystickFunctions.MapJoystickDeviceToPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            DeviceID                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJoystickFunctions::STATIC_MapJoystickDeviceToPlayer(int DeviceID, int Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickFunctions.MapJoystickDeviceToPlayer");

	UJoystickFunctions_MapJoystickDeviceToPlayer_Params params;
	params.DeviceID = DeviceID;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JoystickPlugin.JoystickFunctions.JoystickCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UJoystickFunctions::STATIC_JoystickCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickFunctions.JoystickCount");

	UJoystickFunctions_JoystickCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function JoystickPlugin.JoystickFunctions.IgnoreGameControllers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bIgnore                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJoystickFunctions::STATIC_IgnoreGameControllers(bool bIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickFunctions.IgnoreGameControllers");

	UJoystickFunctions_IgnoreGameControllers_Params params;
	params.bIgnore = bIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JoystickPlugin.JoystickFunctions.GetPreviousJoystickState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            DeviceID                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FJoystickState          ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FJoystickState UJoystickFunctions::STATIC_GetPreviousJoystickState(int DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickFunctions.GetPreviousJoystickState");

	UJoystickFunctions_GetPreviousJoystickState_Params params;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function JoystickPlugin.JoystickFunctions.GetJoystickState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            DeviceID                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FJoystickState          ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FJoystickState UJoystickFunctions::STATIC_GetJoystickState(int DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickFunctions.GetJoystickState");

	UJoystickFunctions_GetJoystickState_Params params;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function JoystickPlugin.JoystickFunctions.GetJoystick
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            DeviceID                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FJoystickInfo           ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FJoystickInfo UJoystickFunctions::STATIC_GetJoystick(int DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickFunctions.GetJoystick");

	UJoystickFunctions_GetJoystick_Params params;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function JoystickPlugin.JoystickInterface.JoystickUnplugged
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            DeviceID                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJoystickInterface::JoystickUnplugged(int DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickInterface.JoystickUnplugged");

	UJoystickInterface_JoystickUnplugged_Params params;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JoystickPlugin.JoystickInterface.JoystickPluggedIn
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            DeviceID                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJoystickInterface::JoystickPluggedIn(int DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickInterface.JoystickPluggedIn");

	UJoystickInterface_JoystickPluggedIn_Params params;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JoystickPlugin.JoystickInterface.JoystickHatChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            Hat                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EJoystickPOVDirection          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FJoystickState          State                          (Parm, NativeAccessSpecifierPublic)
void UJoystickInterface::JoystickHatChanged(int Hat, EJoystickPOVDirection Value, const struct FJoystickState& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickInterface.JoystickHatChanged");

	UJoystickInterface_JoystickHatChanged_Params params;
	params.Hat = Hat;
	params.Value = Value;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JoystickPlugin.JoystickInterface.JoystickButtonReleased
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FJoystickState          State                          (Parm, NativeAccessSpecifierPublic)
void UJoystickInterface::JoystickButtonReleased(int Button, const struct FJoystickState& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickInterface.JoystickButtonReleased");

	UJoystickInterface_JoystickButtonReleased_Params params;
	params.Button = Button;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JoystickPlugin.JoystickInterface.JoystickButtonPressed
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FJoystickState          State                          (Parm, NativeAccessSpecifierPublic)
void UJoystickInterface::JoystickButtonPressed(int Button, const struct FJoystickState& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickInterface.JoystickButtonPressed");

	UJoystickInterface_JoystickButtonPressed_Params params;
	params.Button = Button;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JoystickPlugin.JoystickInterface.JoystickBallMoved
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// int                            Ball                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               Delta                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FJoystickState          State                          (Parm, NativeAccessSpecifierPublic)
void UJoystickInterface::JoystickBallMoved(int Ball, const struct FVector2D& Delta, const struct FJoystickState& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickInterface.JoystickBallMoved");

	UJoystickInterface_JoystickBallMoved_Params params;
	params.Ball = Ball;
	params.Delta = Delta;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JoystickPlugin.JoystickInterface.JoystickAxisChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            Axis                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          valuePrev                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FJoystickState          State                          (Parm, NativeAccessSpecifierPublic)
// struct FJoystickState          prev                           (Parm, NativeAccessSpecifierPublic)
void UJoystickInterface::JoystickAxisChanged(int Axis, float Value, float valuePrev, const struct FJoystickState& State, const struct FJoystickState& prev)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickInterface.JoystickAxisChanged");

	UJoystickInterface_JoystickAxisChanged_Params params;
	params.Axis = Axis;
	params.Value = Value;
	params.valuePrev = valuePrev;
	params.State = State;
	params.prev = prev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
