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

// Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.Setup Button
struct USettingsItem_GraphicsToggle_C_Setup_Button_Params
{
	struct FText                                       ButtonText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	class USetting_Button_C*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.GetBrush
struct USettingsItem_GraphicsToggle_C_GetBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.SetSelected
struct USettingsItem_GraphicsToggle_C_SetSelected_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.Construct
struct USettingsItem_GraphicsToggle_C_Construct_Params
{
};

// Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.PreConstruct
struct USettingsItem_GraphicsToggle_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.Create Buttons
struct USettingsItem_GraphicsToggle_C_Create_Buttons_Params
{
};

// Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.On Button Clicked
struct USettingsItem_GraphicsToggle_C_On_Button_Clicked_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USetting_Button_C*                           Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.ExecuteUbergraph_SettingsItem_GraphicsToggle
struct USettingsItem_GraphicsToggle_C_ExecuteUbergraph_SettingsItem_GraphicsToggle_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.OnButtonClick2__DelegateSignature
struct USettingsItem_GraphicsToggle_C_OnButtonClick2__DelegateSignature_Params
{
	int                                                ButtonNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USettingsItem_GraphicsToggle_C*              ToggleItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsItem_GraphicsToggle.SettingsItem_GraphicsToggle_C.OnButtonClick__DelegateSignature
struct USettingsItem_GraphicsToggle_C_OnButtonClick__DelegateSignature_Params
{
	int                                                ButtonNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
