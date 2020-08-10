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

// Function W_UH60M_EngineStats.W_UH60M_EngineStats_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_UH60M_EngineStats_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UH60M_EngineStats.W_UH60M_EngineStats_C.Tick");

	UW_UH60M_EngineStats_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UH60M_EngineStats.W_UH60M_EngineStats_C.InitializeDisplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USQHelicopterInstruments> OwningVehicle                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USQVehicleEngine*        VehicleEngine                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQHelicopter2*          VehicleHull                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_UH60M_EngineStats_C::InitializeDisplay(const TScriptInterface<class USQHelicopterInstruments>& OwningVehicle, class USQVehicleEngine* VehicleEngine, class ASQHelicopter2* VehicleHull)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UH60M_EngineStats.W_UH60M_EngineStats_C.InitializeDisplay");

	UW_UH60M_EngineStats_C_InitializeDisplay_Params params;
	params.OwningVehicle = OwningVehicle;
	params.VehicleEngine = VehicleEngine;
	params.VehicleHull = VehicleHull;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UH60M_EngineStats.W_UH60M_EngineStats_C.ExecuteUbergraph_W_UH60M_EngineStats
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_UH60M_EngineStats_C::ExecuteUbergraph_W_UH60M_EngineStats(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UH60M_EngineStats.W_UH60M_EngineStats_C.ExecuteUbergraph_W_UH60M_EngineStats");

	UW_UH60M_EngineStats_C_ExecuteUbergraph_W_UH60M_EngineStats_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
