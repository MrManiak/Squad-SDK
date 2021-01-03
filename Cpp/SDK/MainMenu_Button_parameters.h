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

// Function MainMenu_Button.MainMenu_Button_C.OnKeyDown
struct UMainMenu_Button_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function MainMenu_Button.MainMenu_Button_C.Refresh Line
struct UMainMenu_Button_C_Refresh_Line_Params
{
};

// Function MainMenu_Button.MainMenu_Button_C.Setup Button
struct UMainMenu_Button_C_Setup_Button_Params
{
};

// Function MainMenu_Button.MainMenu_Button_C.Update Button
struct UMainMenu_Button_C_Update_Button_Params
{
};

// Function MainMenu_Button.MainMenu_Button_C.Bind_TextColor
struct UMainMenu_Button_C_Bind_TextColor_Params
{
	struct FSlateColor                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function MainMenu_Button.MainMenu_Button_C.Bind_LineColor
struct UMainMenu_Button_C_Bind_LineColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenu_Button.MainMenu_Button_C.SetText
struct UMainMenu_Button_C_SetText_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainMenu_Button.MainMenu_Button_C.UpdateColors
struct UMainMenu_Button_C_UpdateColors_Params
{
};

// Function MainMenu_Button.MainMenu_Button_C.SetSelected
struct UMainMenu_Button_C_SetSelected_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MainMenu_Button.MainMenu_Button_C.Tick
struct UMainMenu_Button_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenu_Button.MainMenu_Button_C.BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
struct UMainMenu_Button_C_BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainMenu_Button.MainMenu_Button_C.PreConstruct
struct UMainMenu_Button_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MainMenu_Button.MainMenu_Button_C.Construct
struct UMainMenu_Button_C_Construct_Params
{
};

// Function MainMenu_Button.MainMenu_Button_C.ExecuteUbergraph_MainMenu_Button
struct UMainMenu_Button_C_ExecuteUbergraph_MainMenu_Button_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenu_Button.MainMenu_Button_C.OnDoubleClicked__DelegateSignature
struct UMainMenu_Button_C_OnDoubleClicked__DelegateSignature_Params
{
};

// Function MainMenu_Button.MainMenu_Button_C.OnHover__DelegateSignature
struct UMainMenu_Button_C_OnHover__DelegateSignature_Params
{
	bool                                               bHovered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MainMenu_Button.MainMenu_Button_C.OnClicked__DelegateSignature
struct UMainMenu_Button_C_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
