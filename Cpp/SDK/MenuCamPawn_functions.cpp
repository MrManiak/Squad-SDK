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
// Functions
//---------------------------------------------------------------------------

// Function MenuCamPawn.MenuCamPawn_C.GetTeamId
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int AMenuCamPawn_C::GetTeamId()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuCamPawn.MenuCamPawn_C.GetTeamId");

	AMenuCamPawn_C_GetTeamId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MenuCamPawn.MenuCamPawn_C.Move Camera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuCameraScreen> New_Camera                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenuCamPawn_C::Move_Camera(TEnumAsByte<EMenuCameraScreen> New_Camera, bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuCamPawn.MenuCamPawn_C.Move Camera");

	AMenuCamPawn_C_Move_Camera_Params params;
	params.New_Camera = New_Camera;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuCamPawn.MenuCamPawn_C.Find Menu Cameras
// (Public, BlueprintCallable, BlueprintEvent)
void AMenuCamPawn_C::Find_Menu_Cameras()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuCamPawn.MenuCamPawn_C.Find Menu Cameras");

	AMenuCamPawn_C_Find_Menu_Cameras_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuCamPawn.MenuCamPawn_C.Stop Menu Camera Movement
// (Public, BlueprintCallable, BlueprintEvent)
void AMenuCamPawn_C::Stop_Menu_Camera_Movement()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuCamPawn.MenuCamPawn_C.Stop Menu Camera Movement");

	AMenuCamPawn_C_Stop_Menu_Camera_Movement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuCamPawn.MenuCamPawn_C.Animate Move
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenuCamPawn_C::Animate_Move()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuCamPawn.MenuCamPawn_C.Animate Move");

	AMenuCamPawn_C_Animate_Move_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuCamPawn.MenuCamPawn_C.OnTeamChange
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PreviousTeam                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenuCamPawn_C::OnTeamChange(int PreviousTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuCamPawn.MenuCamPawn_C.OnTeamChange");

	AMenuCamPawn_C_OnTeamChange_Params params;
	params.PreviousTeam = PreviousTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuCamPawn.MenuCamPawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenuCamPawn_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuCamPawn.MenuCamPawn_C.ReceiveTick");

	AMenuCamPawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuCamPawn.MenuCamPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMenuCamPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuCamPawn.MenuCamPawn_C.ReceiveBeginPlay");

	AMenuCamPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MenuCamPawn.MenuCamPawn_C.ExecuteUbergraph_MenuCamPawn
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenuCamPawn_C::ExecuteUbergraph_MenuCamPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuCamPawn.MenuCamPawn_C.ExecuteUbergraph_MenuCamPawn");

	AMenuCamPawn_C_ExecuteUbergraph_MenuCamPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
