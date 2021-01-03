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

// Function W_CamControlButton.W_CamControlButton_C.Validate Vehicle Action
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Allowed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_CamControlButton_C::Validate_Vehicle_Action(bool* Allowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CamControlButton.W_CamControlButton_C.Validate Vehicle Action");

	UW_CamControlButton_C_Validate_Vehicle_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Allowed != nullptr)
		*Allowed = params.Allowed;

}


// Function W_CamControlButton.W_CamControlButton_C.Get Tooltip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UW_CamControlButton_C::Get_Tooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CamControlButton.W_CamControlButton_C.Get Tooltip");

	UW_CamControlButton_C_Get_Tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_CamControlButton.W_CamControlButton_C.Can Use Button
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_CamControlButton_C::Can_Use_Button(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CamControlButton.W_CamControlButton_C.Can Use Button");

	UW_CamControlButton_C_Can_Use_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;

}


// Function W_CamControlButton.W_CamControlButton_C.Update Remote Camera Button
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_CamControlButton_C::Update_Remote_Camera_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CamControlButton.W_CamControlButton_C.Update Remote Camera Button");

	UW_CamControlButton_C_Update_Remote_Camera_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CamControlButton.W_CamControlButton_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_CamControlButton_C::BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CamControlButton.W_CamControlButton_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UW_CamControlButton_C_BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CamControlButton.W_CamControlButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CamControlButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CamControlButton.W_CamControlButton_C.Tick");

	UW_CamControlButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CamControlButton.W_CamControlButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_CamControlButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CamControlButton.W_CamControlButton_C.Construct");

	UW_CamControlButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CamControlButton.W_CamControlButton_C.Remove Camera Button
// (BlueprintCallable, BlueprintEvent)
void UW_CamControlButton_C::Remove_Camera_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CamControlButton.W_CamControlButton_C.Remove Camera Button");

	UW_CamControlButton_C_Remove_Camera_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CamControlButton.W_CamControlButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_CamControlButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CamControlButton.W_CamControlButton_C.PreConstruct");

	UW_CamControlButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CamControlButton.W_CamControlButton_C.Fail Message
// (BlueprintCallable, BlueprintEvent)
void UW_CamControlButton_C::Fail_Message()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CamControlButton.W_CamControlButton_C.Fail Message");

	UW_CamControlButton_C_Fail_Message_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CamControlButton.W_CamControlButton_C.ExecuteUbergraph_W_CamControlButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CamControlButton_C::ExecuteUbergraph_W_CamControlButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CamControlButton.W_CamControlButton_C.ExecuteUbergraph_W_CamControlButton");

	UW_CamControlButton_C_ExecuteUbergraph_W_CamControlButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CamControlButton.W_CamControlButton_C.Cam State Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_ControlledCamera_C*  Cam                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CamControlButton_C::Cam_State_Changed__DelegateSignature(bool Active, class ABP_ControlledCamera_C* Cam)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CamControlButton.W_CamControlButton_C.Cam State Changed__DelegateSignature");

	UW_CamControlButton_C_Cam_State_Changed__DelegateSignature_Params params;
	params.Active = Active;
	params.Cam = Cam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
