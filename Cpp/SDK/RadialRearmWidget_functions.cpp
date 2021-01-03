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
// Functions
//---------------------------------------------------------------------------

// Function RadialRearmWidget.RadialRearmWidget_C.UpdateBackgroundColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanClick                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsAmmoFull                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URadialRearmWidget_C::UpdateBackgroundColors(bool CanClick, bool IsAmmoFull)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialRearmWidget.RadialRearmWidget_C.UpdateBackgroundColors");

	URadialRearmWidget_C_UpdateBackgroundColors_Params params;
	params.CanClick = CanClick;
	params.IsAmmoFull = IsAmmoFull;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialRearmWidget.RadialRearmWidget_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           InMouseEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply URadialRearmWidget_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialRearmWidget.RadialRearmWidget_C.OnMouseButtonDoubleClick");

	URadialRearmWidget_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RadialRearmWidget.RadialRearmWidget_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply URadialRearmWidget_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialRearmWidget.RadialRearmWidget_C.OnPreviewMouseButtonDown");

	URadialRearmWidget_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RadialRearmWidget.RadialRearmWidget_C.GetMagsToRearmText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText URadialRearmWidget_C::GetMagsToRearmText()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialRearmWidget.RadialRearmWidget_C.GetMagsToRearmText");

	URadialRearmWidget_C_GetMagsToRearmText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RadialRearmWidget.RadialRearmWidget_C.BPInit
// (Event, Public, BlueprintEvent)
void URadialRearmWidget_C::BPInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialRearmWidget.RadialRearmWidget_C.BPInit");

	URadialRearmWidget_C_BPInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialRearmWidget.RadialRearmWidget_C.OnHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
void URadialRearmWidget_C::OnHoverBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialRearmWidget.RadialRearmWidget_C.OnHoverBegin");

	URadialRearmWidget_C_OnHoverBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialRearmWidget.RadialRearmWidget_C.UpdateRadialAngle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          UpdatedAngle                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadialRearmWidget_C::UpdateRadialAngle(float UpdatedAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialRearmWidget.RadialRearmWidget_C.UpdateRadialAngle");

	URadialRearmWidget_C_UpdateRadialAngle_Params params;
	params.UpdatedAngle = UpdatedAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialRearmWidget.RadialRearmWidget_C.AmmoRemainingUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AmmoRemaining                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadialRearmWidget_C::AmmoRemainingUpdated(float AmmoRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialRearmWidget.RadialRearmWidget_C.AmmoRemainingUpdated");

	URadialRearmWidget_C_AmmoRemainingUpdated_Params params;
	params.AmmoRemaining = AmmoRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialRearmWidget.RadialRearmWidget_C.SetCenterWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URadialCenterRearmButton_C* CenterWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadialRearmWidget_C::SetCenterWidget(class URadialCenterRearmButton_C* CenterWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialRearmWidget.RadialRearmWidget_C.SetCenterWidget");

	URadialRearmWidget_C_SetCenterWidget_Params params;
	params.CenterWidget = CenterWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialRearmWidget.RadialRearmWidget_C.OnRightClicked
// (BlueprintCallable, BlueprintEvent)
void URadialRearmWidget_C::OnRightClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialRearmWidget.RadialRearmWidget_C.OnRightClicked");

	URadialRearmWidget_C_OnRightClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialRearmWidget.RadialRearmWidget_C.RecalculateCanClick
// (BlueprintCallable, BlueprintEvent)
void URadialRearmWidget_C::RecalculateCanClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialRearmWidget.RadialRearmWidget_C.RecalculateCanClick");

	URadialRearmWidget_C_RecalculateCanClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialRearmWidget.RadialRearmWidget_C.InventoryUpdated
// (BlueprintCallable, BlueprintEvent)
void URadialRearmWidget_C::InventoryUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialRearmWidget.RadialRearmWidget_C.InventoryUpdated");

	URadialRearmWidget_C_InventoryUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialRearmWidget.RadialRearmWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void URadialRearmWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialRearmWidget.RadialRearmWidget_C.Destruct");

	URadialRearmWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialRearmWidget.RadialRearmWidget_C.ExecuteUbergraph_RadialRearmWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadialRearmWidget_C::ExecuteUbergraph_RadialRearmWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialRearmWidget.RadialRearmWidget_C.ExecuteUbergraph_RadialRearmWidget");

	URadialRearmWidget_C_ExecuteUbergraph_RadialRearmWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
