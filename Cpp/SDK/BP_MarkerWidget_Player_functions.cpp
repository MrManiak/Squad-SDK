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

// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.UpdateVisibilities
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_Player_C::UpdateVisibilities()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.UpdateVisibilities");

	UBP_MarkerWidget_Player_C_UpdateVisibilities_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.UpdateStateData
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_Player_C::UpdateStateData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.UpdateStateData");

	UBP_MarkerWidget_Player_C_UpdateStateData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.UpdateSizeAndZOrder
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_Player_C::UpdateSizeAndZOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.UpdateSizeAndZOrder");

	UBP_MarkerWidget_Player_C_UpdateSizeAndZOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.UpdateViewAngle
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_Player_C::UpdateViewAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.UpdateViewAngle");

	UBP_MarkerWidget_Player_C_UpdateViewAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.IsMarkerVisible
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_MarkerWidget_Player_C::IsMarkerVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.IsMarkerVisible");

	UBP_MarkerWidget_Player_C_IsMarkerVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.BPUpdateIsInVehicle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsInVehicle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MarkerWidget_Player_C::BPUpdateIsInVehicle(bool* IsInVehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.BPUpdateIsInVehicle");

	UBP_MarkerWidget_Player_C_BPUpdateIsInVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsInVehicle != nullptr)
		*IsInVehicle = params.IsInVehicle;

}


// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.BPGetWidgetPlayerState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APlayerState*            SquadPlayerState               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_Player_C::BPGetWidgetPlayerState(class APlayerState** SquadPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.BPGetWidgetPlayerState");

	UBP_MarkerWidget_Player_C_BPGetWidgetPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SquadPlayerState != nullptr)
		*SquadPlayerState = params.SquadPlayerState;

}


// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Update_Player_Cone_Visibility
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_Player_C::Update_Player_Cone_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Update_Player_Cone_Visibility");

	UBP_MarkerWidget_Player_C_Update_Player_Cone_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Update_BleedingPanel_Visibility
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_Player_C::Update_BleedingPanel_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Update_BleedingPanel_Visibility");

	UBP_MarkerWidget_Player_C_Update_BleedingPanel_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Get_Player_Image_ToolTipWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UBP_MarkerWidget_Player_C::Get_Player_Image_ToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Get_Player_Image_ToolTipWidget");

	UBP_MarkerWidget_Player_C_Get_Player_Image_ToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Get_Player_Image_Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UBP_MarkerWidget_Player_C::Get_Player_Image_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Get_Player_Image_Visibility");

	UBP_MarkerWidget_Player_C_Get_Player_Image_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Update_IncapPanel_Visibility
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_Player_C::Update_IncapPanel_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Update_IncapPanel_Visibility");

	UBP_MarkerWidget_Player_C_Update_IncapPanel_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.UpdateMedicOverlayVisibility
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_Player_C::UpdateMedicOverlayVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.UpdateMedicOverlayVisibility");

	UBP_MarkerWidget_Player_C_UpdateMedicOverlayVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Get_SL_Text_Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UBP_MarkerWidget_Player_C::Get_SL_Text_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Get_SL_Text_Visibility");

	UBP_MarkerWidget_Player_C_Get_SL_Text_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Update_PlayerImage_Brush
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_Player_C::Update_PlayerImage_Brush()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Update_PlayerImage_Brush");

	UBP_MarkerWidget_Player_C_Update_PlayerImage_Brush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Update_SL_Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_Player_C::Update_SL_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Update_SL_Text");

	UBP_MarkerWidget_Player_C_Update_SL_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.SetAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InAngle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_Player_C::SetAngle(float InAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.SetAngle");

	UBP_MarkerWidget_Player_C_SetAngle_Params params;
	params.InAngle = InAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_Player_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Tick");

	UBP_MarkerWidget_Player_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MarkerWidget_Player_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.Construct");

	UBP_MarkerWidget_Player_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.UpdateVisuals_Event
// (BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_Player_C::UpdateVisuals_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.UpdateVisuals_Event");

	UBP_MarkerWidget_Player_C_UpdateVisuals_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.ExecuteUbergraph_BP_MarkerWidget_Player
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_Player_C::ExecuteUbergraph_BP_MarkerWidget_Player(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.ExecuteUbergraph_BP_MarkerWidget_Player");

	UBP_MarkerWidget_Player_C_ExecuteUbergraph_BP_MarkerWidget_Player_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.CloseTooltip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_Player_C::CloseTooltip__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Player.BP_MarkerWidget_Player_C.CloseTooltip__DelegateSignature");

	UBP_MarkerWidget_Player_C_CloseTooltip__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
