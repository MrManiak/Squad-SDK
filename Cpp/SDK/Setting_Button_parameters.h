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

// Function Setting_Button.Setting_Button_C.OnKeyDown
struct USetting_Button_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Setting_Button.Setting_Button_C.Refresh Line
struct USetting_Button_C_Refresh_Line_Params
{
};

// Function Setting_Button.Setting_Button_C.Setup Button
struct USetting_Button_C_Setup_Button_Params
{
};

// Function Setting_Button.Setting_Button_C.Update Button
struct USetting_Button_C_Update_Button_Params
{
};

// Function Setting_Button.Setting_Button_C.Bind_TextColor
struct USetting_Button_C_Bind_TextColor_Params
{
	struct FSlateColor                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Setting_Button.Setting_Button_C.Bind_LineColor
struct USetting_Button_C_Bind_LineColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Setting_Button.Setting_Button_C.SetText
struct USetting_Button_C_SetText_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Setting_Button.Setting_Button_C.UpdateColors
struct USetting_Button_C_UpdateColors_Params
{
};

// Function Setting_Button.Setting_Button_C.SetSelected
struct USetting_Button_C_SetSelected_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Setting_Button.Setting_Button_C.Tick
struct USetting_Button_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Setting_Button.Setting_Button_C.BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
struct USetting_Button_C_BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Setting_Button.Setting_Button_C.PreConstruct
struct USetting_Button_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Setting_Button.Setting_Button_C.Construct
struct USetting_Button_C_Construct_Params
{
};

// Function Setting_Button.Setting_Button_C.ExecuteUbergraph_Setting_Button
struct USetting_Button_C_ExecuteUbergraph_Setting_Button_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Setting_Button.Setting_Button_C.OnDoubleClicked__DelegateSignature
struct USetting_Button_C_OnDoubleClicked__DelegateSignature_Params
{
};

// Function Setting_Button.Setting_Button_C.OnHover__DelegateSignature
struct USetting_Button_C_OnHover__DelegateSignature_Params
{
	bool                                               bHovered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Setting_Button.Setting_Button_C.OnClicked__DelegateSignature
struct USetting_Button_C_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USetting_Button_C*                           Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
