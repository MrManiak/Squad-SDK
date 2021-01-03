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

// Function SettingsComboboxItem.SettingsComboboxItem_C.SetSelectedIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsComboboxItem_C::SetSelectedIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsComboboxItem.SettingsComboboxItem_C.SetSelectedIndex");

	USettingsComboboxItem_C_SetSelectedIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsComboboxItem.SettingsComboboxItem_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Option                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void USettingsComboboxItem_C::SetSelected(const struct FString& Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsComboboxItem.SettingsComboboxItem_C.SetSelected");

	USettingsComboboxItem_C_SetSelected_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsComboboxItem.SettingsComboboxItem_C.SetOptions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         NewOptions                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void USettingsComboboxItem_C::SetOptions(TArray<struct FString>* NewOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsComboboxItem.SettingsComboboxItem_C.SetOptions");

	USettingsComboboxItem_C_SetOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewOptions != nullptr)
		*NewOptions = params.NewOptions;

}


// Function SettingsComboboxItem.SettingsComboboxItem_C.Get_SpacerImg_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush USettingsComboboxItem_C::Get_SpacerImg_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsComboboxItem.SettingsComboboxItem_C.Get_SpacerImg_Brush_1");

	USettingsComboboxItem_C_Get_SpacerImg_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SettingsComboboxItem.SettingsComboboxItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USettingsComboboxItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsComboboxItem.SettingsComboboxItem_C.Construct");

	USettingsComboboxItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsComboboxItem.SettingsComboboxItem_C.BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_289_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsComboboxItem_C::BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_289_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsComboboxItem.SettingsComboboxItem_C.BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_289_OnSelectionChangedEvent__DelegateSignature");

	USettingsComboboxItem_C_BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_289_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsComboboxItem.SettingsComboboxItem_C.ExecuteUbergraph_SettingsComboboxItem
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsComboboxItem_C::ExecuteUbergraph_SettingsComboboxItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsComboboxItem.SettingsComboboxItem_C.ExecuteUbergraph_SettingsComboboxItem");

	USettingsComboboxItem_C_ExecuteUbergraph_SettingsComboboxItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsComboboxItem.SettingsComboboxItem_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Option                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsComboboxItem_C::OnValueChanged__DelegateSignature(const struct FString& Option, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsComboboxItem.SettingsComboboxItem_C.OnValueChanged__DelegateSignature");

	USettingsComboboxItem_C_OnValueChanged__DelegateSignature_Params params;
	params.Option = Option;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
