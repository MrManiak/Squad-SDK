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

// Function BaseRadialMenu.BaseRadialMenu_C.OnMouseButtonUp
struct UBaseRadialMenu_C_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BaseRadialMenu.BaseRadialMenu_C.SetVoiceTooltipVisibility
struct UBaseRadialMenu_C_SetVoiceTooltipVisibility_Params
{
};

// Function BaseRadialMenu.BaseRadialMenu_C.Finished Closed Animation
struct UBaseRadialMenu_C_Finished_Closed_Animation_Params
{
};

// Function BaseRadialMenu.BaseRadialMenu_C.FadeAnimation
struct UBaseRadialMenu_C_FadeAnimation_Params
{
	bool                                               Reverse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BaseRadialMenu.BaseRadialMenu_C.OnMouseButtonDoubleClick
struct UBaseRadialMenu_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry                                   InMyGeometry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BaseRadialMenu.BaseRadialMenu_C.Check Add Back Model
struct UBaseRadialMenu_C_Check_Add_Back_Model_Params
{
	class UBP_GotoMenuActionModel_C*                   Goto_Button;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseRadialMenu.BaseRadialMenu_C.Return to Previous Menu
struct UBaseRadialMenu_C_Return_to_Previous_Menu_Params
{
};

// Function BaseRadialMenu.BaseRadialMenu_C.Sort Radial Z Order
struct UBaseRadialMenu_C_Sort_Radial_Z_Order_Params
{
};

// Function BaseRadialMenu.BaseRadialMenu_C.prepareToolTip
struct UBaseRadialMenu_C_prepareToolTip_Params
{
	class UBP_RadialItemModel_C*                       ItemModel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 ToolTipWidget;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseRadialMenu.BaseRadialMenu_C.CreateRadialWidget
struct UBaseRadialMenu_C_CreateRadialWidget_Params
{
	class UClass*                                      WidgetClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQUserWidget*                               CreatedWidget;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseRadialMenu.BaseRadialMenu_C.GetSelectedOuterWidget
struct UBaseRadialMenu_C_GetSelectedOuterWidget_Params
{
	int                                                Output_Get;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Actual_Angle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseRadialMenu.BaseRadialMenu_C.Destroy
struct UBaseRadialMenu_C_Destroy_Params
{
};

// Function BaseRadialMenu.BaseRadialMenu_C.CloseSelf
struct UBaseRadialMenu_C_CloseSelf_Params
{
};

// Function BaseRadialMenu.BaseRadialMenu_C.CreateMenuFromModel
struct UBaseRadialMenu_C_CreateMenuFromModel_Params
{
};

// Function BaseRadialMenu.BaseRadialMenu_C.SetHoveringWidget
struct UBaseRadialMenu_C_SetHoveringWidget_Params
{
	class USQRadialButton*                             NewHover;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQRadialButton*                             OldHover;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseRadialMenu.BaseRadialMenu_C.GetHoverWidget
struct UBaseRadialMenu_C_GetHoverWidget_Params
{
	class USQRadialButton*                             HoverWidget;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseRadialMenu.BaseRadialMenu_C.Notify HoverOver
struct UBaseRadialMenu_C_Notify_HoverOver_Params
{
};

// Function BaseRadialMenu.BaseRadialMenu_C.OnKeyUp
struct UBaseRadialMenu_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BaseRadialMenu.BaseRadialMenu_C.OnMouseButtonDown
struct UBaseRadialMenu_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BaseRadialMenu.BaseRadialMenu_C.LayoutOuterRing
struct UBaseRadialMenu_C_LayoutOuterRing_Params
{
};

// Function BaseRadialMenu.BaseRadialMenu_C.AddChild
struct UBaseRadialMenu_C_AddChild_Params
{
	class USQRadialButton*                             Entry;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_RadialItemModel_C*                       Model;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseRadialMenu.BaseRadialMenu_C.Clear Menu
struct UBaseRadialMenu_C_Clear_Menu_Params
{
};

// Function BaseRadialMenu.BaseRadialMenu_C.Add Center Widget
struct UBaseRadialMenu_C_Add_Center_Widget_Params
{
	class USQRadialButton*                             Entry;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseRadialMenu.BaseRadialMenu_C.GetOuterWidgetIndex
struct UBaseRadialMenu_C_GetOuterWidgetIndex_Params
{
	int                                                WidgetIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseRadialMenu.BaseRadialMenu_C.IsMouseInCenterHitbox
struct UBaseRadialMenu_C_IsMouseInCenterHitbox_Params
{
	bool                                               CenterHitbox;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BaseRadialMenu.BaseRadialMenu_C.Tick
struct UBaseRadialMenu_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseRadialMenu.BaseRadialMenu_C.Center Button Clicked
struct UBaseRadialMenu_C_Center_Button_Clicked_Params
{
};

// Function BaseRadialMenu.BaseRadialMenu_C.Radial Option Clicked
struct UBaseRadialMenu_C_Radial_Option_Clicked_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseRadialMenu.BaseRadialMenu_C.ButtonPress
struct UBaseRadialMenu_C_ButtonPress_Params
{
	class UBP_RadialItemModel_C*                       Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseRadialMenu.BaseRadialMenu_C.Reset
struct UBaseRadialMenu_C_Reset_Params
{
};

// Function BaseRadialMenu.BaseRadialMenu_C.Radial Option Released
struct UBaseRadialMenu_C_Radial_Option_Released_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseRadialMenu.BaseRadialMenu_C.ButtonRelease
struct UBaseRadialMenu_C_ButtonRelease_Params
{
	class UBP_RadialItemModel_C*                       Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseRadialMenu.BaseRadialMenu_C.ExecuteUbergraph_BaseRadialMenu
struct UBaseRadialMenu_C_ExecuteUbergraph_BaseRadialMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseRadialMenu.BaseRadialMenu_C.OnRadialMenuDestroyed__DelegateSignature
struct UBaseRadialMenu_C_OnRadialMenuDestroyed__DelegateSignature_Params
{
};

// Function BaseRadialMenu.BaseRadialMenu_C.Centre Hover Changed__DelegateSignature
struct UBaseRadialMenu_C_Centre_Hover_Changed__DelegateSignature_Params
{
	bool                                               Centre_Hovered;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BaseRadialMenu.BaseRadialMenu_C.HoverWidgetChanged__DelegateSignature
struct UBaseRadialMenu_C_HoverWidgetChanged__DelegateSignature_Params
{
};

// Function BaseRadialMenu.BaseRadialMenu_C.OnCenterClicked__DelegateSignature
struct UBaseRadialMenu_C_OnCenterClicked__DelegateSignature_Params
{
	class UBaseRadialMenu_C*                           Context;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseRadialMenu.BaseRadialMenu_C.OnOptionClicked__DelegateSignature
struct UBaseRadialMenu_C_OnOptionClicked__DelegateSignature_Params
{
	int                                                OptionIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBaseRadialMenu_C*                           Context;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
