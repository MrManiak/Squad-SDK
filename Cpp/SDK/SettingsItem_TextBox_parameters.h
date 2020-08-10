#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function SettingsItem_TextBox.SettingsItem_TextBox_C.SetTextBoxText
struct USettingsItem_TextBox_C_SetTextBoxText_Params
{
	struct FText                                       NewTextBoxString;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SettingsItem_TextBox.SettingsItem_TextBox_C.Get_SpacerImg_Brush_1
struct USettingsItem_TextBox_C_Get_SpacerImg_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function SettingsItem_TextBox.SettingsItem_TextBox_C.Construct
struct USettingsItem_TextBox_C_Construct_Params
{
};

// Function SettingsItem_TextBox.SettingsItem_TextBox_C.BndEvt__TextBox_K2Node_ComponentBoundEvent_27_OnEditableTextBoxCommittedEvent__DelegateSignature
struct USettingsItem_TextBox_C_BndEvt__TextBox_K2Node_ComponentBoundEvent_27_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsItem_TextBox.SettingsItem_TextBox_C.BndEvt__TextBox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature
struct USettingsItem_TextBox_C_BndEvt__TextBox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SettingsItem_TextBox.SettingsItem_TextBox_C.PreConstruct
struct USettingsItem_TextBox_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SettingsItem_TextBox.SettingsItem_TextBox_C.ExecuteUbergraph_SettingsItem_TextBox
struct USettingsItem_TextBox_C_ExecuteUbergraph_SettingsItem_TextBox_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsItem_TextBox.SettingsItem_TextBox_C.OnValueChanged__DelegateSignature
struct USettingsItem_TextBox_C_OnValueChanged__DelegateSignature_Params
{
	struct FText                                       NewText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
