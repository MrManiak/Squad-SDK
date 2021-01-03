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

// Function BP_ControlledCamera.BP_ControlledCamera_C.Can Become View Target
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Can_View                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ControlledCamera_C::Can_Become_View_Target(bool* Can_View)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCamera.BP_ControlledCamera_C.Can Become View Target");

	ABP_ControlledCamera_C_Can_Become_View_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Can_View != nullptr)
		*Can_View = params.Can_View;

}


// Function BP_ControlledCamera.BP_ControlledCamera_C.Init Camera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_ControlledCamera_C::Init_Camera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCamera.BP_ControlledCamera_C.Init Camera");

	ABP_ControlledCamera_C_Init_Camera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ControlledCamera.BP_ControlledCamera_C.Check Soldier Wound
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_ControlledCamera_C::Check_Soldier_Wound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCamera.BP_ControlledCamera_C.Check Soldier Wound");

	ABP_ControlledCamera_C_Check_Soldier_Wound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ControlledCamera.BP_ControlledCamera_C.Create Stabilisation Point
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_ControlledCamera_C::Create_Stabilisation_Point()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCamera.BP_ControlledCamera_C.Create Stabilisation Point");

	ABP_ControlledCamera_C_Create_Stabilisation_Point_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ControlledCamera.BP_ControlledCamera_C.Update Follow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_ControlledCamera_C::Update_Follow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCamera.BP_ControlledCamera_C.Update Follow");

	ABP_ControlledCamera_C_Update_Follow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ControlledCamera.BP_ControlledCamera_C.Find Vehicle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Found_Vehicle                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ControlledCamera_C::Find_Vehicle(bool* Found_Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCamera.BP_ControlledCamera_C.Find Vehicle");

	ABP_ControlledCamera_C_Find_Vehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Found_Vehicle != nullptr)
		*Found_Vehicle = params.Found_Vehicle;

}


// Function BP_ControlledCamera.BP_ControlledCamera_C.Update Zoom
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_ControlledCamera_C::Update_Zoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCamera.BP_ControlledCamera_C.Update Zoom");

	ABP_ControlledCamera_C_Update_Zoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ControlledCamera.BP_ControlledCamera_C.Clamp Camera Rotation
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_ControlledCamera_C::Clamp_Camera_Rotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCamera.BP_ControlledCamera_C.Clamp Camera Rotation");

	ABP_ControlledCamera_C_Clamp_Camera_Rotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ControlledCamera.BP_ControlledCamera_C.Add Camera Movement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          X_Delta                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Y_Delta                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ControlledCamera_C::Add_Camera_Movement(float X_Delta, float Y_Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCamera.BP_ControlledCamera_C.Add Camera Movement");

	ABP_ControlledCamera_C_Add_Camera_Movement_Params params;
	params.X_Delta = X_Delta;
	params.Y_Delta = Y_Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ControlledCamera.BP_ControlledCamera_C.Add Zoom Delta
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_ControlledCamera_C::Add_Zoom_Delta()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCamera.BP_ControlledCamera_C.Add Zoom Delta");

	ABP_ControlledCamera_C_Add_Zoom_Delta_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ControlledCamera.BP_ControlledCamera_C.InpActEvt_LeanLeft_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_ControlledCamera_C::InpActEvt_LeanLeft_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCamera.BP_ControlledCamera_C.InpActEvt_LeanLeft_K2Node_InputActionEvent_5");

	ABP_ControlledCamera_C_InpActEvt_LeanLeft_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ControlledCamera.BP_ControlledCamera_C.InpActEvt_Sprint_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_ControlledCamera_C::InpActEvt_Sprint_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCamera.BP_ControlledCamera_C.InpActEvt_Sprint_K2Node_InputActionEvent_4");

	ABP_ControlledCamera_C_InpActEvt_Sprint_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ControlledCamera.BP_ControlledCamera_C.InpActEvt_Sprint_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_ControlledCamera_C::InpActEvt_Sprint_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCamera.BP_ControlledCamera_C.InpActEvt_Sprint_K2Node_InputActionEvent_3");

	ABP_ControlledCamera_C_InpActEvt_Sprint_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ControlledCamera.BP_ControlledCamera_C.InpActEvt_ToggleStabilization_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_ControlledCamera_C::InpActEvt_ToggleStabilization_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCamera.BP_ControlledCamera_C.InpActEvt_ToggleStabilization_K2Node_InputActionEvent_2");

	ABP_ControlledCamera_C_InpActEvt_ToggleStabilization_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ControlledCamera.BP_ControlledCamera_C.InpActEvt_Interact_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_ControlledCamera_C::InpActEvt_Interact_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCamera.BP_ControlledCamera_C.InpActEvt_Interact_K2Node_InputActionEvent_1");

	ABP_ControlledCamera_C_InpActEvt_Interact_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ControlledCamera.BP_ControlledCamera_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ControlledCamera_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCamera.BP_ControlledCamera_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1");

	ABP_ControlledCamera_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ControlledCamera.BP_ControlledCamera_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ControlledCamera_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCamera.BP_ControlledCamera_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2");

	ABP_ControlledCamera_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ControlledCamera.BP_ControlledCamera_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ControlledCamera_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCamera.BP_ControlledCamera_C.ReceiveTick");

	ABP_ControlledCamera_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ControlledCamera.BP_ControlledCamera_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_ControlledCamera_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCamera.BP_ControlledCamera_C.ReceiveBeginPlay");

	ABP_ControlledCamera_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ControlledCamera.BP_ControlledCamera_C.Toggle View
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ControlledCamera_C::Toggle_View(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCamera.BP_ControlledCamera_C.Toggle View");

	ABP_ControlledCamera_C_Toggle_View_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ControlledCamera.BP_ControlledCamera_C.K2_OnBecomeViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*       PC                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ControlledCamera_C::K2_OnBecomeViewTarget(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCamera.BP_ControlledCamera_C.K2_OnBecomeViewTarget");

	ABP_ControlledCamera_C_K2_OnBecomeViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ControlledCamera.BP_ControlledCamera_C.K2_OnEndViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*       PC                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ControlledCamera_C::K2_OnEndViewTarget(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCamera.BP_ControlledCamera_C.K2_OnEndViewTarget");

	ABP_ControlledCamera_C_K2_OnEndViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ControlledCamera.BP_ControlledCamera_C.Disable Cam
// (BlueprintCallable, BlueprintEvent)
void ABP_ControlledCamera_C::Disable_Cam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCamera.BP_ControlledCamera_C.Disable Cam");

	ABP_ControlledCamera_C_Disable_Cam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ControlledCamera.BP_ControlledCamera_C.ExecuteUbergraph_BP_ControlledCamera
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ControlledCamera_C::ExecuteUbergraph_BP_ControlledCamera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCamera.BP_ControlledCamera_C.ExecuteUbergraph_BP_ControlledCamera");

	ABP_ControlledCamera_C_ExecuteUbergraph_BP_ControlledCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ControlledCamera.BP_ControlledCamera_C.Created Button__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_CamControlButton_C*   Cam_Button                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ControlledCamera_C::Created_Button__DelegateSignature(class UW_CamControlButton_C* Cam_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlledCamera.BP_ControlledCamera_C.Created Button__DelegateSignature");

	ABP_ControlledCamera_C_Created_Button__DelegateSignature_Params params;
	params.Cam_Button = Cam_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
