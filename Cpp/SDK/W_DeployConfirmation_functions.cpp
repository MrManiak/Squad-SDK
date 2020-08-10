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

// Function W_DeployConfirmation.W_DeployConfirmation_C.BndEvt__DeployButton_K2Node_ComponentBoundEvent_52_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DeployConfirmation_C::BndEvt__DeployButton_K2Node_ComponentBoundEvent_52_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeployConfirmation.W_DeployConfirmation_C.BndEvt__DeployButton_K2Node_ComponentBoundEvent_52_OnClicked__DelegateSignature");

	UW_DeployConfirmation_C_BndEvt__DeployButton_K2Node_ComponentBoundEvent_52_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeployConfirmation.W_DeployConfirmation_C.Refresh
// (BlueprintCallable, BlueprintEvent)
void UW_DeployConfirmation_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeployConfirmation.W_DeployConfirmation_C.Refresh");

	UW_DeployConfirmation_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeployConfirmation.W_DeployConfirmation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_DeployConfirmation_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeployConfirmation.W_DeployConfirmation_C.Construct");

	UW_DeployConfirmation_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeployConfirmation.W_DeployConfirmation_C.Cache Player
// (BlueprintCallable, BlueprintEvent)
void UW_DeployConfirmation_C::Cache_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeployConfirmation.W_DeployConfirmation_C.Cache Player");

	UW_DeployConfirmation_C_Cache_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeployConfirmation.W_DeployConfirmation_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DeployConfirmation_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeployConfirmation.W_DeployConfirmation_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UW_DeployConfirmation_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeployConfirmation.W_DeployConfirmation_C.New Spawn Selected
// (BlueprintCallable, BlueprintEvent)
void UW_DeployConfirmation_C::New_Spawn_Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeployConfirmation.W_DeployConfirmation_C.New Spawn Selected");

	UW_DeployConfirmation_C_New_Spawn_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeployConfirmation.W_DeployConfirmation_C.Confirm Spawn
// (BlueprintCallable, BlueprintEvent)
void UW_DeployConfirmation_C::Confirm_Spawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeployConfirmation.W_DeployConfirmation_C.Confirm Spawn");

	UW_DeployConfirmation_C_Confirm_Spawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DeployConfirmation.W_DeployConfirmation_C.ExecuteUbergraph_W_DeployConfirmation
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DeployConfirmation_C::ExecuteUbergraph_W_DeployConfirmation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DeployConfirmation.W_DeployConfirmation_C.ExecuteUbergraph_W_DeployConfirmation");

	UW_DeployConfirmation_C_ExecuteUbergraph_W_DeployConfirmation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
