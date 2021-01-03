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

// Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.Setup Button
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class USetting_Button_C*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USetting_Button_C* USettingsItem_GraphicsToggle_C::Setup_Button(const struct FText& ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.Setup Button");

	USettingsItem_GraphicsToggle_C_Setup_Button_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.GetBrush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush USettingsItem_GraphicsToggle_C::GetBrush()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.GetBrush");

	USettingsItem_GraphicsToggle_C_GetBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsItem_GraphicsToggle_C::SetSelected(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.SetSelected");

	USettingsItem_GraphicsToggle_C_SetSelected_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USettingsItem_GraphicsToggle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.Construct");

	USettingsItem_GraphicsToggle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USettingsItem_GraphicsToggle_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.PreConstruct");

	USettingsItem_GraphicsToggle_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.Create Buttons
// (BlueprintCallable, BlueprintEvent)
void USettingsItem_GraphicsToggle_C::Create_Buttons()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.Create Buttons");

	USettingsItem_GraphicsToggle_C_Create_Buttons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.On Button Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USetting_Button_C*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsItem_GraphicsToggle_C::On_Button_Clicked(bool bSelected, class USetting_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.On Button Clicked");

	USettingsItem_GraphicsToggle_C_On_Button_Clicked_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.ExecuteUbergraph_SettingsItem_GraphicsToggle
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsItem_GraphicsToggle_C::ExecuteUbergraph_SettingsItem_GraphicsToggle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.ExecuteUbergraph_SettingsItem_GraphicsToggle");

	USettingsItem_GraphicsToggle_C_ExecuteUbergraph_SettingsItem_GraphicsToggle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.OnButtonClick2__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonNumber                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USettingsItem_GraphicsToggle_C* ToggleItem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsItem_GraphicsToggle_C::OnButtonClick2__DelegateSignature(int ButtonNumber, class USettingsItem_GraphicsToggle_C* ToggleItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.OnButtonClick2__DelegateSignature");

	USettingsItem_GraphicsToggle_C_OnButtonClick2__DelegateSignature_Params params;
	params.ButtonNumber = ButtonNumber;
	params.ToggleItem = ToggleItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.OnButtonClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonNumber                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsItem_GraphicsToggle_C::OnButtonClick__DelegateSignature(int ButtonNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.OnButtonClick__DelegateSignature");

	USettingsItem_GraphicsToggle_C_OnButtonClick__DelegateSignature_Params params;
	params.ButtonNumber = ButtonNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
