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

// Function MainMenu_ExitButtons.MainMenu_ExitButtons_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UMainMenu_ExitButtons_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_ExitButtons.MainMenu_ExitButtons_C.GetVisibility_1");

	UMainMenu_ExitButtons_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MainMenu_ExitButtons.MainMenu_ExitButtons_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenu_ExitButtons_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_ExitButtons.MainMenu_ExitButtons_C.Tick");

	UMainMenu_ExitButtons_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenu_ExitButtons.MainMenu_ExitButtons_C.BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenu_ExitButtons_C::BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_ExitButtons.MainMenu_ExitButtons_C.BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	UMainMenu_ExitButtons_C_BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenu_ExitButtons.MainMenu_ExitButtons_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenu_ExitButtons_C::BndEvt__ButtonExit_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_ExitButtons.MainMenu_ExitButtons_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature");

	UMainMenu_ExitButtons_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenu_ExitButtons.MainMenu_ExitButtons_C.ExecuteUbergraph_MainMenu_ExitButtons
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenu_ExitButtons_C::ExecuteUbergraph_MainMenu_ExitButtons(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_ExitButtons.MainMenu_ExitButtons_C.ExecuteUbergraph_MainMenu_ExitButtons");

	UMainMenu_ExitButtons_C_ExecuteUbergraph_MainMenu_ExitButtons_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
