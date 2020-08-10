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

// Function ControlsWindow.ControlsWindow_C.Unselect Mode Button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMainMenu_Button_C*      Except                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UControlsWindow_C::Unselect_Mode_Button(class UMainMenu_Button_C* Except)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlsWindow.ControlsWindow_C.Unselect Mode Button");

	UControlsWindow_C_Unselect_Mode_Button_Params params;
	params.Except = Except;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ControlsWindow.ControlsWindow_C.PopulateAxisMappings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UControlsWindow_C::PopulateAxisMappings()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlsWindow.ControlsWindow_C.PopulateAxisMappings");

	UControlsWindow_C_PopulateAxisMappings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ControlsWindow.ControlsWindow_C.PopulateActionMappings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UControlsWindow_C::PopulateActionMappings()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlsWindow.ControlsWindow_C.PopulateActionMappings");

	UControlsWindow_C_PopulateActionMappings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ControlsWindow.ControlsWindow_C.GetCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   CategoryName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*            Category                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UControlsWindow_C::GetCategory(const struct FName& CategoryName, class UVerticalBox** Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlsWindow.ControlsWindow_C.GetCategory");

	UControlsWindow_C_GetCategory_Params params;
	params.CategoryName = CategoryName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Category != nullptr)
		*Category = params.Category;

}


// Function ControlsWindow.ControlsWindow_C.PopulateControlsList
// (Public, BlueprintCallable, BlueprintEvent)
void UControlsWindow_C::PopulateControlsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlsWindow.ControlsWindow_C.PopulateControlsList");

	UControlsWindow_C_PopulateControlsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ControlsWindow.ControlsWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UControlsWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlsWindow.ControlsWindow_C.Construct");

	UControlsWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ControlsWindow.ControlsWindow_C.Control Defaults
// (BlueprintCallable, BlueprintEvent)
void UControlsWindow_C::Control_Defaults()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlsWindow.ControlsWindow_C.Control Defaults");

	UControlsWindow_C_Control_Defaults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ControlsWindow.ControlsWindow_C.BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_68_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UControlsWindow_C::BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_68_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlsWindow.ControlsWindow_C.BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_68_OnClicked__DelegateSignature");

	UControlsWindow_C_BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_68_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ControlsWindow.ControlsWindow_C.BndEvt__Button_Aircraft_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UControlsWindow_C::BndEvt__Button_Aircraft_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlsWindow.ControlsWindow_C.BndEvt__Button_Aircraft_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UControlsWindow_C_BndEvt__Button_Aircraft_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ControlsWindow.ControlsWindow_C.BndEvt__Button_Infantry_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UControlsWindow_C::BndEvt__Button_Infantry_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlsWindow.ControlsWindow_C.BndEvt__Button_Infantry_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UControlsWindow_C_BndEvt__Button_Infantry_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ControlsWindow.ControlsWindow_C.BndEvt__Button_Vehicle_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UControlsWindow_C::BndEvt__Button_Vehicle_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlsWindow.ControlsWindow_C.BndEvt__Button_Vehicle_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UControlsWindow_C_BndEvt__Button_Vehicle_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ControlsWindow.ControlsWindow_C.BndEvt__MainMenu_Button_C_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UControlsWindow_C::BndEvt__MainMenu_Button_C_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlsWindow.ControlsWindow_C.BndEvt__MainMenu_Button_C_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UControlsWindow_C_BndEvt__MainMenu_Button_C_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ControlsWindow.ControlsWindow_C.ExecuteUbergraph_ControlsWindow
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UControlsWindow_C::ExecuteUbergraph_ControlsWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlsWindow.ControlsWindow_C.ExecuteUbergraph_ControlsWindow");

	UControlsWindow_C_ExecuteUbergraph_ControlsWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
