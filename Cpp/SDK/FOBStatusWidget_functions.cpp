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

// Function FOBStatusWidget.FOBStatusWidget_C.Refresh Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UFOBStatusWidget_C::Refresh_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function FOBStatusWidget.FOBStatusWidget_C.Refresh Data");

	UFOBStatusWidget_C_Refresh_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FOBStatusWidget.FOBStatusWidget_C.UpdateState
// (Public, BlueprintCallable, BlueprintEvent)
void UFOBStatusWidget_C::UpdateState()
{
	static auto fn = UObject::FindObject<UFunction>("Function FOBStatusWidget.FOBStatusWidget_C.UpdateState");

	UFOBStatusWidget_C_UpdateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FOBStatusWidget.FOBStatusWidget_C.GetBrushFobIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UFOBStatusWidget_C::GetBrushFobIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function FOBStatusWidget.FOBStatusWidget_C.GetBrushFobIcon");

	UFOBStatusWidget_C_GetBrushFobIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FOBStatusWidget.FOBStatusWidget_C.GetFobSpawnerText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UFOBStatusWidget_C::GetFobSpawnerText()
{
	static auto fn = UObject::FindObject<UFunction>("Function FOBStatusWidget.FOBStatusWidget_C.GetFobSpawnerText");

	UFOBStatusWidget_C_GetFobSpawnerText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FOBStatusWidget.FOBStatusWidget_C.GetEnemyVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UFOBStatusWidget_C::GetEnemyVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function FOBStatusWidget.FOBStatusWidget_C.GetEnemyVisibility");

	UFOBStatusWidget_C_GetEnemyVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FOBStatusWidget.FOBStatusWidget_C.GetAmmoPoints
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UFOBStatusWidget_C::GetAmmoPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function FOBStatusWidget.FOBStatusWidget_C.GetAmmoPoints");

	UFOBStatusWidget_C_GetAmmoPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FOBStatusWidget.FOBStatusWidget_C.GetConPoints
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UFOBStatusWidget_C::GetConPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function FOBStatusWidget.FOBStatusWidget_C.GetConPoints");

	UFOBStatusWidget_C_GetConPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FOBStatusWidget.FOBStatusWidget_C.GetCapturePercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UFOBStatusWidget_C::GetCapturePercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function FOBStatusWidget.FOBStatusWidget_C.GetCapturePercent");

	UFOBStatusWidget_C_GetCapturePercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FOBStatusWidget.FOBStatusWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UFOBStatusWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FOBStatusWidget.FOBStatusWidget_C.Construct");

	UFOBStatusWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FOBStatusWidget.FOBStatusWidget_C.ExecuteUbergraph_FOBStatusWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFOBStatusWidget_C::ExecuteUbergraph_FOBStatusWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FOBStatusWidget.FOBStatusWidget_C.ExecuteUbergraph_FOBStatusWidget");

	UFOBStatusWidget_C_ExecuteUbergraph_FOBStatusWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
