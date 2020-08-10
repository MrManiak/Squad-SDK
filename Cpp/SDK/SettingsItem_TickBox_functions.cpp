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

// Function SettingsItem_TickBox.SettingsItem_TickBox_C.Update Tick Box
// (Public, BlueprintCallable, BlueprintEvent)
void USettingsItem_TickBox_C::Update_Tick_Box()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_TickBox.SettingsItem_TickBox_C.Update Tick Box");

	USettingsItem_TickBox_C_Update_Tick_Box_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_TickBox.SettingsItem_TickBox_C.Bind_TextColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor USettingsItem_TickBox_C::Bind_TextColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_TickBox.SettingsItem_TickBox_C.Bind_TextColor");

	USettingsItem_TickBox_C_Bind_TextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SettingsItem_TickBox.SettingsItem_TickBox_C.Bind_LineColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor USettingsItem_TickBox_C::Bind_LineColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_TickBox.SettingsItem_TickBox_C.Bind_LineColor");

	USettingsItem_TickBox_C_Bind_LineColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SettingsItem_TickBox.SettingsItem_TickBox_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void USettingsItem_TickBox_C::SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_TickBox.SettingsItem_TickBox_C.SetText");

	USettingsItem_TickBox_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_TickBox.SettingsItem_TickBox_C.UpdateColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void USettingsItem_TickBox_C::UpdateColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_TickBox.SettingsItem_TickBox_C.UpdateColors");

	USettingsItem_TickBox_C_UpdateColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_TickBox.SettingsItem_TickBox_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USettingsItem_TickBox_C::SetSelected(bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_TickBox.SettingsItem_TickBox_C.SetSelected");

	USettingsItem_TickBox_C_SetSelected_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_TickBox.SettingsItem_TickBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USettingsItem_TickBox_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_TickBox.SettingsItem_TickBox_C.PreConstruct");

	USettingsItem_TickBox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_TickBox.SettingsItem_TickBox_C.BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void USettingsItem_TickBox_C::BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_TickBox.SettingsItem_TickBox_C.BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	USettingsItem_TickBox_C_BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_TickBox.SettingsItem_TickBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USettingsItem_TickBox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_TickBox.SettingsItem_TickBox_C.Construct");

	USettingsItem_TickBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_TickBox.SettingsItem_TickBox_C.ExecuteUbergraph_SettingsItem_TickBox
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsItem_TickBox_C::ExecuteUbergraph_SettingsItem_TickBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_TickBox.SettingsItem_TickBox_C.ExecuteUbergraph_SettingsItem_TickBox");

	USettingsItem_TickBox_C_ExecuteUbergraph_SettingsItem_TickBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_TickBox.SettingsItem_TickBox_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHovered                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USettingsItem_TickBox_C::OnHover__DelegateSignature(bool bHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_TickBox.SettingsItem_TickBox_C.OnHover__DelegateSignature");

	USettingsItem_TickBox_C_OnHover__DelegateSignature_Params params;
	params.bHovered = bHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsItem_TickBox.SettingsItem_TickBox_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USettingsItem_TickBox_C* Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsItem_TickBox_C::OnClicked__DelegateSignature(bool bSelected, class USettingsItem_TickBox_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsItem_TickBox.SettingsItem_TickBox_C.OnClicked__DelegateSignature");

	USettingsItem_TickBox_C_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
