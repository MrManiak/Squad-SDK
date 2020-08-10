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

// Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.Fog of War
// (Public, BlueprintCallable, BlueprintEvent)
void UCaptureZoneStatusWidget_C::Fog_of_War()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.Fog of War");

	UCaptureZoneStatusWidget_C_Fog_of_War_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.Get Location
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UCaptureZoneStatusWidget_C::Get_Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.Get Location");

	UCaptureZoneStatusWidget_C_Get_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.Refresh Widget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UCaptureZoneStatusWidget_C::Refresh_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.Refresh Widget");

	UCaptureZoneStatusWidget_C_Refresh_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.UpdateCaptureZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQCaptureZoneComponent* CaptureZone                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCaptureZoneStatusWidget_C::UpdateCaptureZone(class USQCaptureZoneComponent* CaptureZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.UpdateCaptureZone");

	UCaptureZoneStatusWidget_C_UpdateCaptureZone_Params params;
	params.CaptureZone = CaptureZone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.Update Widget
// (Public, BlueprintCallable, BlueprintEvent)
void UCaptureZoneStatusWidget_C::Update_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.Update Widget");

	UCaptureZoneStatusWidget_C_Update_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.GetFlagBrush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UCaptureZoneStatusWidget_C::GetFlagBrush()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.GetFlagBrush");

	UCaptureZoneStatusWidget_C_GetFlagBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.GetProgressColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UCaptureZoneStatusWidget_C::GetProgressColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.GetProgressColor");

	UCaptureZoneStatusWidget_C_GetProgressColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UCaptureZoneStatusWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.Construct");

	UCaptureZoneStatusWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.ExecuteUbergraph_CaptureZoneStatusWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCaptureZoneStatusWidget_C::ExecuteUbergraph_CaptureZoneStatusWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaptureZoneStatusWidget.CaptureZoneStatusWidget_C.ExecuteUbergraph_CaptureZoneStatusWidget");

	UCaptureZoneStatusWidget_C_ExecuteUbergraph_CaptureZoneStatusWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
