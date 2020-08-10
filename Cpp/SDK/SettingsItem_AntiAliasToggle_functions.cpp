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

// Function SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C.GetBrush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush USettingsItem_AntiAliasToggle_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C.GetBrush_1");

	USettingsItem_AntiAliasToggle_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsItem_AntiAliasToggle_C::SetSelected(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C.SetSelected");

	USettingsItem_AntiAliasToggle_C_SetSelected_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C.Setup Button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsItem_AntiAliasToggle_C::Setup_Button(class UMainMenu_Button_C* Button, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C.Setup Button");

	USettingsItem_AntiAliasToggle_C_Setup_Button_Params params;
	params.Button = Button;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USettingsItem_AntiAliasToggle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C.Construct");

	USettingsItem_AntiAliasToggle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C.OnClicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsItem_AntiAliasToggle_C::OnClicked_Event(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C.OnClicked_Event");

	USettingsItem_AntiAliasToggle_C_OnClicked_Event_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USettingsItem_AntiAliasToggle_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C.PreConstruct");

	USettingsItem_AntiAliasToggle_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C.ExecuteUbergraph_SettingsItem_AntiAliasToggle
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsItem_AntiAliasToggle_C::ExecuteUbergraph_SettingsItem_AntiAliasToggle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C.ExecuteUbergraph_SettingsItem_AntiAliasToggle");

	USettingsItem_AntiAliasToggle_C_ExecuteUbergraph_SettingsItem_AntiAliasToggle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C.OnButtonClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonNumber                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsItem_AntiAliasToggle_C::OnButtonClick__DelegateSignature(int ButtonNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C.OnButtonClick__DelegateSignature");

	USettingsItem_AntiAliasToggle_C_OnButtonClick__DelegateSignature_Params params;
	params.ButtonNumber = ButtonNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
