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

// Function SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C.GetBrush_1
struct USettingsItem_AntiAliasToggle_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C.SetSelected
struct USettingsItem_AntiAliasToggle_C_SetSelected_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C.Setup Button
struct USettingsItem_AntiAliasToggle_C_Setup_Button_Params
{
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C.Construct
struct USettingsItem_AntiAliasToggle_C_Construct_Params
{
};

// Function SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C.OnClicked_Event
struct USettingsItem_AntiAliasToggle_C_OnClicked_Event_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C.PreConstruct
struct USettingsItem_AntiAliasToggle_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C.ExecuteUbergraph_SettingsItem_AntiAliasToggle
struct USettingsItem_AntiAliasToggle_C_ExecuteUbergraph_SettingsItem_AntiAliasToggle_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsItem_AntiAliasToggle.SettingsItem_AntiAliasToggle_C.OnButtonClick__DelegateSignature
struct USettingsItem_AntiAliasToggle_C_OnButtonClick__DelegateSignature_Params
{
	int                                                ButtonNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
