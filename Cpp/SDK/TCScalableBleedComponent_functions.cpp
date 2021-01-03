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

// Function TCScalableBleedComponent.TCScalableBleedComponent_C.CalcBleedValue_Curve
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Zones_captured                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Bleed_Value                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTCScalableBleedComponent_C::CalcBleedValue_Curve(int Zones_captured, int* Bleed_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TCScalableBleedComponent.TCScalableBleedComponent_C.CalcBleedValue_Curve");

	UTCScalableBleedComponent_C_CalcBleedValue_Curve_Params params;
	params.Zones_captured = Zones_captured;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Bleed_Value != nullptr)
		*Bleed_Value = params.Bleed_Value;

}


// Function TCScalableBleedComponent.TCScalableBleedComponent_C.CalcBleedValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Zones_captured                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Bleed_Value                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTCScalableBleedComponent_C::CalcBleedValue(int Zones_captured, int* Bleed_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TCScalableBleedComponent.TCScalableBleedComponent_C.CalcBleedValue");

	UTCScalableBleedComponent_C_CalcBleedValue_Params params;
	params.Zones_captured = Zones_captured;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Bleed_Value != nullptr)
		*Bleed_Value = params.Bleed_Value;

}


// Function TCScalableBleedComponent.TCScalableBleedComponent_C.InitBleedThresholds
// (Public, BlueprintCallable, BlueprintEvent)
void UTCScalableBleedComponent_C::InitBleedThresholds()
{
	static auto fn = UObject::FindObject<UFunction>("Function TCScalableBleedComponent.TCScalableBleedComponent_C.InitBleedThresholds");

	UTCScalableBleedComponent_C_InitBleedThresholds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TCScalableBleedComponent.TCScalableBleedComponent_C.Get Current Bleed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team_ID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Bleed_Per_Min                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTCScalableBleedComponent_C::Get_Current_Bleed(int Team_ID, int* Bleed_Per_Min)
{
	static auto fn = UObject::FindObject<UFunction>("Function TCScalableBleedComponent.TCScalableBleedComponent_C.Get Current Bleed");

	UTCScalableBleedComponent_C_Get_Current_Bleed_Params params;
	params.Team_ID = Team_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Bleed_Per_Min != nullptr)
		*Bleed_Per_Min = params.Bleed_Per_Min;

}


// Function TCScalableBleedComponent.TCScalableBleedComponent_C.Initialise TC Bleed Component
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ATC_HexZone_C*>   All_TC_Zones                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UTCScalableBleedComponent_C::Initialise_TC_Bleed_Component(TArray<class ATC_HexZone_C*>* All_TC_Zones)
{
	static auto fn = UObject::FindObject<UFunction>("Function TCScalableBleedComponent.TCScalableBleedComponent_C.Initialise TC Bleed Component");

	UTCScalableBleedComponent_C_Initialise_TC_Bleed_Component_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (All_TC_Zones != nullptr)
		*All_TC_Zones = params.All_TC_Zones;

}


// Function TCScalableBleedComponent.TCScalableBleedComponent_C.Update Bleed Count
// (Public, BlueprintCallable, BlueprintEvent)
void UTCScalableBleedComponent_C::Update_Bleed_Count()
{
	static auto fn = UObject::FindObject<UFunction>("Function TCScalableBleedComponent.TCScalableBleedComponent_C.Update Bleed Count");

	UTCScalableBleedComponent_C_Update_Bleed_Count_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TCScalableBleedComponent.TCScalableBleedComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UTCScalableBleedComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TCScalableBleedComponent.TCScalableBleedComponent_C.ReceiveBeginPlay");

	UTCScalableBleedComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TCScalableBleedComponent.TCScalableBleedComponent_C.Apply Bleed Per Minute
// (BlueprintCallable, BlueprintEvent)
void UTCScalableBleedComponent_C::Apply_Bleed_Per_Minute()
{
	static auto fn = UObject::FindObject<UFunction>("Function TCScalableBleedComponent.TCScalableBleedComponent_C.Apply Bleed Per Minute");

	UTCScalableBleedComponent_C_Apply_Bleed_Per_Minute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TCScalableBleedComponent.TCScalableBleedComponent_C.ExecuteUbergraph_TCScalableBleedComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTCScalableBleedComponent_C::ExecuteUbergraph_TCScalableBleedComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TCScalableBleedComponent.TCScalableBleedComponent_C.ExecuteUbergraph_TCScalableBleedComponent");

	UTCScalableBleedComponent_C_ExecuteUbergraph_TCScalableBleedComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
