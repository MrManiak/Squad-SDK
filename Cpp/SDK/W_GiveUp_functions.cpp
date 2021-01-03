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

// Function W_GiveUp.W_GiveUp_C.Update Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           is_visible                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_GiveUp_C::Update_Visibility(bool* is_visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GiveUp.W_GiveUp_C.Update Visibility");

	UW_GiveUp_C_Update_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (is_visible != nullptr)
		*is_visible = params.is_visible;

}


// Function W_GiveUp.W_GiveUp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_GiveUp_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GiveUp.W_GiveUp_C.Construct");

	UW_GiveUp_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GiveUp.W_GiveUp_C.Refresh
// (BlueprintCallable, BlueprintEvent)
void UW_GiveUp_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GiveUp.W_GiveUp_C.Refresh");

	UW_GiveUp_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GiveUp.W_GiveUp_C.Confirm GiveUp
// (BlueprintCallable, BlueprintEvent)
void UW_GiveUp_C::Confirm_GiveUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GiveUp.W_GiveUp_C.Confirm GiveUp");

	UW_GiveUp_C_Confirm_GiveUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GiveUp.W_GiveUp_C.BndEvt__GiveUpButton_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GiveUp_C::BndEvt__GiveUpButton_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GiveUp.W_GiveUp_C.BndEvt__GiveUpButton_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature");

	UW_GiveUp_C_BndEvt__GiveUpButton_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GiveUp.W_GiveUp_C.ExecuteUbergraph_W_GiveUp
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_GiveUp_C::ExecuteUbergraph_W_GiveUp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GiveUp.W_GiveUp_C.ExecuteUbergraph_W_GiveUp");

	UW_GiveUp_C_ExecuteUbergraph_W_GiveUp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GiveUp.W_GiveUp_C.Hide Confirmation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_GiveUp_C::Hide_Confirmation__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GiveUp.W_GiveUp_C.Hide Confirmation__DelegateSignature");

	UW_GiveUp_C_Hide_Confirmation__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_GiveUp.W_GiveUp_C.GiveUpPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_GiveUp_C::GiveUpPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_GiveUp.W_GiveUp_C.GiveUpPressed__DelegateSignature");

	UW_GiveUp_C_GiveUpPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
