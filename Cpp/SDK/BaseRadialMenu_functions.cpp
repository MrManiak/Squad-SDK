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
// Functions
//---------------------------------------------------------------------------

// Function BaseRadialMenu.BaseRadialMenu_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UBaseRadialMenu_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.OnMouseButtonUp");

	UBaseRadialMenu_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BaseRadialMenu.BaseRadialMenu_C.SetVoiceTooltipVisibility
// (Public, BlueprintCallable, BlueprintEvent)
void UBaseRadialMenu_C::SetVoiceTooltipVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.SetVoiceTooltipVisibility");

	UBaseRadialMenu_C_SetVoiceTooltipVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.Finished Closed Animation
// (Public, BlueprintCallable, BlueprintEvent)
void UBaseRadialMenu_C::Finished_Closed_Animation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.Finished Closed Animation");

	UBaseRadialMenu_C_Finished_Closed_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.FadeAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBaseRadialMenu_C::FadeAnimation(bool Reverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.FadeAnimation");

	UBaseRadialMenu_C_FadeAnimation_Params params;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           InMouseEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UBaseRadialMenu_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.OnMouseButtonDoubleClick");

	UBaseRadialMenu_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BaseRadialMenu.BaseRadialMenu_C.Check Add Back Model
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_GotoMenuActionModel_C* Goto_Button                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBaseRadialMenu_C::Check_Add_Back_Model(class UBP_GotoMenuActionModel_C* Goto_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.Check Add Back Model");

	UBaseRadialMenu_C_Check_Add_Back_Model_Params params;
	params.Goto_Button = Goto_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.Return to Previous Menu
// (Public, BlueprintCallable, BlueprintEvent)
void UBaseRadialMenu_C::Return_to_Previous_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.Return to Previous Menu");

	UBaseRadialMenu_C_Return_to_Previous_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.Sort Radial Z Order
// (Public, BlueprintCallable, BlueprintEvent)
void UBaseRadialMenu_C::Sort_Radial_Z_Order()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.Sort Radial Z Order");

	UBaseRadialMenu_C_Sort_Radial_Z_Order_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.prepareToolTip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_RadialItemModel_C*   ItemModel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*             ToolTipWidget                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBaseRadialMenu_C::prepareToolTip(class UBP_RadialItemModel_C* ItemModel, class UUserWidget** ToolTipWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.prepareToolTip");

	UBaseRadialMenu_C_prepareToolTip_Params params;
	params.ItemModel = ItemModel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ToolTipWidget != nullptr)
		*ToolTipWidget = params.ToolTipWidget;

}


// Function BaseRadialMenu.BaseRadialMenu_C.CreateRadialWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  WidgetClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USQUserWidget*           CreatedWidget                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBaseRadialMenu_C::CreateRadialWidget(class UClass* WidgetClass, class USQUserWidget** CreatedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.CreateRadialWidget");

	UBaseRadialMenu_C_CreateRadialWidget_Params params;
	params.WidgetClass = WidgetClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CreatedWidget != nullptr)
		*CreatedWidget = params.CreatedWidget;

}


// Function BaseRadialMenu.BaseRadialMenu_C.GetSelectedOuterWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Output_Get                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Actual_Angle                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBaseRadialMenu_C::GetSelectedOuterWidget(int* Output_Get, float* Actual_Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.GetSelectedOuterWidget");

	UBaseRadialMenu_C_GetSelectedOuterWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
	if (Actual_Angle != nullptr)
		*Actual_Angle = params.Actual_Angle;

}


// Function BaseRadialMenu.BaseRadialMenu_C.Destroy
// (Public, BlueprintCallable, BlueprintEvent)
void UBaseRadialMenu_C::Destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.Destroy");

	UBaseRadialMenu_C_Destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.CloseSelf
// (Public, BlueprintCallable, BlueprintEvent)
void UBaseRadialMenu_C::CloseSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.CloseSelf");

	UBaseRadialMenu_C_CloseSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.CreateMenuFromModel
// (Public, BlueprintCallable, BlueprintEvent)
void UBaseRadialMenu_C::CreateMenuFromModel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.CreateMenuFromModel");

	UBaseRadialMenu_C_CreateMenuFromModel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.SetHoveringWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRadialButton*         NewHover                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USQRadialButton*         OldHover                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBaseRadialMenu_C::SetHoveringWidget(class USQRadialButton* NewHover, class USQRadialButton* OldHover)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.SetHoveringWidget");

	UBaseRadialMenu_C_SetHoveringWidget_Params params;
	params.NewHover = NewHover;
	params.OldHover = OldHover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.GetHoverWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRadialButton*         HoverWidget                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBaseRadialMenu_C::GetHoverWidget(class USQRadialButton** HoverWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.GetHoverWidget");

	UBaseRadialMenu_C_GetHoverWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HoverWidget != nullptr)
		*HoverWidget = params.HoverWidget;

}


// Function BaseRadialMenu.BaseRadialMenu_C.Notify HoverOver
// (Public, BlueprintCallable, BlueprintEvent)
void UBaseRadialMenu_C::Notify_HoverOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.Notify HoverOver");

	UBaseRadialMenu_C_Notify_HoverOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UBaseRadialMenu_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.OnKeyUp");

	UBaseRadialMenu_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BaseRadialMenu.BaseRadialMenu_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UBaseRadialMenu_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.OnMouseButtonDown");

	UBaseRadialMenu_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BaseRadialMenu.BaseRadialMenu_C.LayoutOuterRing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBaseRadialMenu_C::LayoutOuterRing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.LayoutOuterRing");

	UBaseRadialMenu_C_LayoutOuterRing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.AddChild
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRadialButton*         Entry                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_RadialItemModel_C*   Model                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBaseRadialMenu_C::AddChild(class USQRadialButton* Entry, class UBP_RadialItemModel_C* Model)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.AddChild");

	UBaseRadialMenu_C_AddChild_Params params;
	params.Entry = Entry;
	params.Model = Model;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.Clear Menu
// (Public, BlueprintCallable, BlueprintEvent)
void UBaseRadialMenu_C::Clear_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.Clear Menu");

	UBaseRadialMenu_C_Clear_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.Add Center Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRadialButton*         Entry                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBaseRadialMenu_C::Add_Center_Widget(class USQRadialButton* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.Add Center Widget");

	UBaseRadialMenu_C_Add_Center_Widget_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.GetOuterWidgetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WidgetIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBaseRadialMenu_C::GetOuterWidgetIndex(int* WidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.GetOuterWidgetIndex");

	UBaseRadialMenu_C_GetOuterWidgetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WidgetIndex != nullptr)
		*WidgetIndex = params.WidgetIndex;

}


// Function BaseRadialMenu.BaseRadialMenu_C.IsMouseInCenterHitbox
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CenterHitbox                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBaseRadialMenu_C::IsMouseInCenterHitbox(bool* CenterHitbox)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.IsMouseInCenterHitbox");

	UBaseRadialMenu_C_IsMouseInCenterHitbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CenterHitbox != nullptr)
		*CenterHitbox = params.CenterHitbox;

}


// Function BaseRadialMenu.BaseRadialMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBaseRadialMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.Tick");

	UBaseRadialMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.Center Button Clicked
// (BlueprintCallable, BlueprintEvent)
void UBaseRadialMenu_C::Center_Button_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.Center Button Clicked");

	UBaseRadialMenu_C_Center_Button_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.Radial Option Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBaseRadialMenu_C::Radial_Option_Clicked(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.Radial Option Clicked");

	UBaseRadialMenu_C_Radial_Option_Clicked_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.ButtonPress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_RadialItemModel_C*   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBaseRadialMenu_C::ButtonPress(class UBP_RadialItemModel_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.ButtonPress");

	UBaseRadialMenu_C_ButtonPress_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.Reset
// (BlueprintCallable, BlueprintEvent)
void UBaseRadialMenu_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.Reset");

	UBaseRadialMenu_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.Radial Option Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBaseRadialMenu_C::Radial_Option_Released(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.Radial Option Released");

	UBaseRadialMenu_C_Radial_Option_Released_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.ButtonRelease
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_RadialItemModel_C*   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBaseRadialMenu_C::ButtonRelease(class UBP_RadialItemModel_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.ButtonRelease");

	UBaseRadialMenu_C_ButtonRelease_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.ExecuteUbergraph_BaseRadialMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBaseRadialMenu_C::ExecuteUbergraph_BaseRadialMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.ExecuteUbergraph_BaseRadialMenu");

	UBaseRadialMenu_C_ExecuteUbergraph_BaseRadialMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.OnRadialMenuDestroyed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBaseRadialMenu_C::OnRadialMenuDestroyed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.OnRadialMenuDestroyed__DelegateSignature");

	UBaseRadialMenu_C_OnRadialMenuDestroyed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.Centre Hover Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Centre_Hovered                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBaseRadialMenu_C::Centre_Hover_Changed__DelegateSignature(bool Centre_Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.Centre Hover Changed__DelegateSignature");

	UBaseRadialMenu_C_Centre_Hover_Changed__DelegateSignature_Params params;
	params.Centre_Hovered = Centre_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.HoverWidgetChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBaseRadialMenu_C::HoverWidgetChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.HoverWidgetChanged__DelegateSignature");

	UBaseRadialMenu_C_HoverWidgetChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.OnCenterClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBaseRadialMenu_C::OnCenterClicked__DelegateSignature(class UBaseRadialMenu_C* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.OnCenterClicked__DelegateSignature");

	UBaseRadialMenu_C_OnCenterClicked__DelegateSignature_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseRadialMenu.BaseRadialMenu_C.OnOptionClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OptionIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseRadialMenu_C*       Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBaseRadialMenu_C::OnOptionClicked__DelegateSignature(int OptionIndex, class UBaseRadialMenu_C* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseRadialMenu.BaseRadialMenu_C.OnOptionClicked__DelegateSignature");

	UBaseRadialMenu_C_OnOptionClicked__DelegateSignature_Params params;
	params.OptionIndex = OptionIndex;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
