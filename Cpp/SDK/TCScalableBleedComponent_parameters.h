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

// Function TCScalableBleedComponent.TCScalableBleedComponent_C.CalcBleedValue_Curve
struct UTCScalableBleedComponent_C_CalcBleedValue_Curve_Params
{
	int                                                Zones_captured;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Bleed_Value;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TCScalableBleedComponent.TCScalableBleedComponent_C.CalcBleedValue
struct UTCScalableBleedComponent_C_CalcBleedValue_Params
{
	int                                                Zones_captured;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Bleed_Value;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TCScalableBleedComponent.TCScalableBleedComponent_C.InitBleedThresholds
struct UTCScalableBleedComponent_C_InitBleedThresholds_Params
{
};

// Function TCScalableBleedComponent.TCScalableBleedComponent_C.Get Current Bleed
struct UTCScalableBleedComponent_C_Get_Current_Bleed_Params
{
	int                                                Team_ID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Bleed_Per_Min;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TCScalableBleedComponent.TCScalableBleedComponent_C.Initialise TC Bleed Component
struct UTCScalableBleedComponent_C_Initialise_TC_Bleed_Component_Params
{
	TArray<class ATC_HexZone_C*>                       All_TC_Zones;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TCScalableBleedComponent.TCScalableBleedComponent_C.Update Bleed Count
struct UTCScalableBleedComponent_C_Update_Bleed_Count_Params
{
};

// Function TCScalableBleedComponent.TCScalableBleedComponent_C.ReceiveBeginPlay
struct UTCScalableBleedComponent_C_ReceiveBeginPlay_Params
{
};

// Function TCScalableBleedComponent.TCScalableBleedComponent_C.Apply Bleed Per Minute
struct UTCScalableBleedComponent_C_Apply_Bleed_Per_Minute_Params
{
};

// Function TCScalableBleedComponent.TCScalableBleedComponent_C.ExecuteUbergraph_TCScalableBleedComponent
struct UTCScalableBleedComponent_C_ExecuteUbergraph_TCScalableBleedComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
