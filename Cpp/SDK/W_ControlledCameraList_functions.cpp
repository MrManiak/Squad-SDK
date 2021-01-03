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

// Function W_ControlledCameraList.W_ControlledCameraList_C.Check Player Wounded
// (Public, BlueprintCallable, BlueprintEvent)
void UW_ControlledCameraList_C::Check_Player_Wounded()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ControlledCameraList.W_ControlledCameraList_C.Check Player Wounded");

	UW_ControlledCameraList_C_Check_Player_Wounded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ControlledCameraList.W_ControlledCameraList_C.Update Button Visibilities
// (Public, BlueprintCallable, BlueprintEvent)
void UW_ControlledCameraList_C::Update_Button_Visibilities()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ControlledCameraList.W_ControlledCameraList_C.Update Button Visibilities");

	UW_ControlledCameraList_C_Update_Button_Visibilities_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ControlledCameraList.W_ControlledCameraList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_ControlledCameraList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ControlledCameraList.W_ControlledCameraList_C.Construct");

	UW_ControlledCameraList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ControlledCameraList.W_ControlledCameraList_C.Add New Camera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_CamControlButton_C*   Cam_Button                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ControlledCameraList_C::Add_New_Camera(class UW_CamControlButton_C* Cam_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ControlledCameraList.W_ControlledCameraList_C.Add New Camera");

	UW_ControlledCameraList_C_Add_New_Camera_Params params;
	params.Cam_Button = Cam_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ControlledCameraList.W_ControlledCameraList_C.ExecuteUbergraph_W_ControlledCameraList
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ControlledCameraList_C::ExecuteUbergraph_W_ControlledCameraList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ControlledCameraList.W_ControlledCameraList_C.ExecuteUbergraph_W_ControlledCameraList");

	UW_ControlledCameraList_C_ExecuteUbergraph_W_ControlledCameraList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
