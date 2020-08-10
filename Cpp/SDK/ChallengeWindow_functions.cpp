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

// Function ChallengeWindow.ChallengeWindow_C.SetDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InDescription                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UChallengeWindow_C::SetDescription(const struct FText& InDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeWindow.ChallengeWindow_C.SetDescription");

	UChallengeWindow_C_SetDescription_Params params;
	params.InDescription = InDescription;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeWindow.ChallengeWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UChallengeWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeWindow.ChallengeWindow_C.Construct");

	UChallengeWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeWindow.ChallengeWindow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UChallengeWindow_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeWindow.ChallengeWindow_C.PreConstruct");

	UChallengeWindow_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeWindow.ChallengeWindow_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChallengeWindow_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeWindow.ChallengeWindow_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UChallengeWindow_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeWindow.ChallengeWindow_C.BndEvt__DenyButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChallengeWindow_C::BndEvt__DenyButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeWindow.ChallengeWindow_C.BndEvt__DenyButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UChallengeWindow_C_BndEvt__DenyButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeWindow.ChallengeWindow_C.ExecuteUbergraph_ChallengeWindow
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChallengeWindow_C::ExecuteUbergraph_ChallengeWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeWindow.ChallengeWindow_C.ExecuteUbergraph_ChallengeWindow");

	UChallengeWindow_C_ExecuteUbergraph_ChallengeWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeWindow.ChallengeWindow_C.OnRightButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UChallengeWindow_C::OnRightButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeWindow.ChallengeWindow_C.OnRightButtonClicked__DelegateSignature");

	UChallengeWindow_C_OnRightButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChallengeWindow.ChallengeWindow_C.OnLeftButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UChallengeWindow_C::OnLeftButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeWindow.ChallengeWindow_C.OnLeftButtonClicked__DelegateSignature");

	UChallengeWindow_C_OnLeftButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
