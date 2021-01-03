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

// Function SettingsItem_TickBox.SettingsItem_TickBox_C.Update Tick Box
struct USettingsItem_TickBox_C_Update_Tick_Box_Params
{
};

// Function SettingsItem_TickBox.SettingsItem_TickBox_C.Bind_TextColor
struct USettingsItem_TickBox_C_Bind_TextColor_Params
{
	struct FSlateColor                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function SettingsItem_TickBox.SettingsItem_TickBox_C.Bind_LineColor
struct USettingsItem_TickBox_C_Bind_LineColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsItem_TickBox.SettingsItem_TickBox_C.SetText
struct USettingsItem_TickBox_C_SetText_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SettingsItem_TickBox.SettingsItem_TickBox_C.UpdateColors
struct USettingsItem_TickBox_C_UpdateColors_Params
{
};

// Function SettingsItem_TickBox.SettingsItem_TickBox_C.SetSelected
struct USettingsItem_TickBox_C_SetSelected_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SettingsItem_TickBox.SettingsItem_TickBox_C.PreConstruct
struct USettingsItem_TickBox_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SettingsItem_TickBox.SettingsItem_TickBox_C.BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
struct USettingsItem_TickBox_C_BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SettingsItem_TickBox.SettingsItem_TickBox_C.Construct
struct USettingsItem_TickBox_C_Construct_Params
{
};

// Function SettingsItem_TickBox.SettingsItem_TickBox_C.ExecuteUbergraph_SettingsItem_TickBox
struct USettingsItem_TickBox_C_ExecuteUbergraph_SettingsItem_TickBox_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsItem_TickBox.SettingsItem_TickBox_C.OnHover__DelegateSignature
struct USettingsItem_TickBox_C_OnHover__DelegateSignature_Params
{
	bool                                               bHovered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SettingsItem_TickBox.SettingsItem_TickBox_C.OnClicked__DelegateSignature
struct USettingsItem_TickBox_C_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USettingsItem_TickBox_C*                     Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
