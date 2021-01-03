#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function SettingsComboboxItem.SettingsComboboxItem_C.SetSelectedIndex
struct USettingsComboboxItem_C_SetSelectedIndex_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsComboboxItem.SettingsComboboxItem_C.SetSelected
struct USettingsComboboxItem_C_SetSelected_Params
{
	struct FString                                     Option;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function SettingsComboboxItem.SettingsComboboxItem_C.SetOptions
struct USettingsComboboxItem_C_SetOptions_Params
{
	TArray<struct FString>                             NewOptions;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SettingsComboboxItem.SettingsComboboxItem_C.Get_SpacerImg_Brush_1
struct USettingsComboboxItem_C_Get_SpacerImg_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function SettingsComboboxItem.SettingsComboboxItem_C.Construct
struct USettingsComboboxItem_C_Construct_Params
{
};

// Function SettingsComboboxItem.SettingsComboboxItem_C.BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_289_OnSelectionChangedEvent__DelegateSignature
struct USettingsComboboxItem_C_BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_289_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsComboboxItem.SettingsComboboxItem_C.ExecuteUbergraph_SettingsComboboxItem
struct USettingsComboboxItem_C_ExecuteUbergraph_SettingsComboboxItem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsComboboxItem.SettingsComboboxItem_C.OnValueChanged__DelegateSignature
struct USettingsComboboxItem_C_OnValueChanged__DelegateSignature_Params
{
	struct FString                                     Option;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
