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

// Function SettingsItem_ControlList.SettingsItem_ControlList_C.Is Action Key Valid
struct USettingsItem_ControlList_C_Is_Action_Key_Valid_Params
{
	bool                                               Key_Is_Valid;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SettingsItem_ControlList.SettingsItem_ControlList_C.Get Axis Map to Edit
struct USettingsItem_ControlList_C_Get_Axis_Map_to_Edit_Params
{
	struct FInputAxisKeyMapping                        Map;                                                       // (Parm, OutParm)
	bool                                               Valid;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SettingsItem_ControlList.SettingsItem_ControlList_C.RebindAxisKey
struct USettingsItem_ControlList_C_RebindAxisKey_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SettingsItem_ControlList.SettingsItem_ControlList_C.RebindActionKey
struct USettingsItem_ControlList_C_RebindActionKey_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SettingsItem_ControlList.SettingsItem_ControlList_C.GetMappedKeys
struct USettingsItem_ControlList_C_GetMappedKeys_Params
{
	TArray<struct FKey>                                Keys;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function SettingsItem_ControlList.SettingsItem_ControlList_C.TranslateKey
struct USettingsItem_ControlList_C_TranslateKey_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FString                                     Text;                                                      // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function SettingsItem_ControlList.SettingsItem_ControlList_C.GetMappedAxisKeys
struct USettingsItem_ControlList_C_GetMappedAxisKeys_Params
{
	TArray<struct FKey>                                Keys;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function SettingsItem_ControlList.SettingsItem_ControlList_C.GetMappedActionKeys
struct USettingsItem_ControlList_C_GetMappedActionKeys_Params
{
	TArray<struct FKey>                                Keys;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function SettingsItem_ControlList.SettingsItem_ControlList_C.OnMouseButtonDown
struct USettingsItem_ControlList_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function SettingsItem_ControlList.SettingsItem_ControlList_C.OnInput
struct USettingsItem_ControlList_C_OnInput_Params
{
	struct FKey                                        InputKey;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SettingsItem_ControlList.SettingsItem_ControlList_C.FinishInputCapture
struct USettingsItem_ControlList_C_FinishInputCapture_Params
{
	struct FKey                                        newKey;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SettingsItem_ControlList.SettingsItem_ControlList_C.StartInputCapture
struct USettingsItem_ControlList_C_StartInputCapture_Params
{
	int                                                KeyId;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsItem_ControlList.SettingsItem_ControlList_C.UpdateKeys
struct USettingsItem_ControlList_C_UpdateKeys_Params
{
};

// Function SettingsItem_ControlList.SettingsItem_ControlList_C.Init
struct USettingsItem_ControlList_C_Init_Params
{
	class UControlsWindow_C*                           ControlsWindow;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ActionName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       FriendlyName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SettingsItem_ControlList.SettingsItem_ControlList_C.BndEvt__NewKey1_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature
struct USettingsItem_ControlList_C_BndEvt__NewKey1_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature_Params
{
	bool                                               bHovered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SettingsItem_ControlList.SettingsItem_ControlList_C.BndEvt__NewKey2_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature
struct USettingsItem_ControlList_C_BndEvt__NewKey2_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature_Params
{
	bool                                               bHovered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SettingsItem_ControlList.SettingsItem_ControlList_C.BindInputCaptureEvents
struct USettingsItem_ControlList_C_BindInputCaptureEvents_Params
{
};

// Function SettingsItem_ControlList.SettingsItem_ControlList_C.OnInput_Event_1
struct USettingsItem_ControlList_C_OnInput_Event_1_Params
{
	struct FKey                                        InputKey;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function SettingsItem_ControlList.SettingsItem_ControlList_C.BndEvt__NewKey1_K2Node_ComponentBoundEvent_355_OnClicked__DelegateSignature
struct USettingsItem_ControlList_C_BndEvt__NewKey1_K2Node_ComponentBoundEvent_355_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UGlowingButton_12_C*                         Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsItem_ControlList.SettingsItem_ControlList_C.BndEvt__NewKey2_K2Node_ComponentBoundEvent_364_OnClicked__DelegateSignature
struct USettingsItem_ControlList_C_BndEvt__NewKey2_K2Node_ComponentBoundEvent_364_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UGlowingButton_12_C*                         Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsItem_ControlList.SettingsItem_ControlList_C.BndEvt__NewKey_JoystickGamepad_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature
struct USettingsItem_ControlList_C_BndEvt__NewKey_JoystickGamepad_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature_Params
{
	bool                                               bHovered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SettingsItem_ControlList.SettingsItem_ControlList_C.BndEvt__NewKey_JoystickGamepad_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct USettingsItem_ControlList_C_BndEvt__NewKey_JoystickGamepad_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UGlowingButton_12_C*                         Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SettingsItem_ControlList.SettingsItem_ControlList_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_223_OnButtonHoverEvent__DelegateSignature
struct USettingsItem_ControlList_C_BndEvt__Button_4_K2Node_ComponentBoundEvent_223_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SettingsItem_ControlList.SettingsItem_ControlList_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_244_OnButtonHoverEvent__DelegateSignature
struct USettingsItem_ControlList_C_BndEvt__Button_4_K2Node_ComponentBoundEvent_244_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SettingsItem_ControlList.SettingsItem_ControlList_C.ExecuteUbergraph_SettingsItem_ControlList
struct USettingsItem_ControlList_C_ExecuteUbergraph_SettingsItem_ControlList_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
