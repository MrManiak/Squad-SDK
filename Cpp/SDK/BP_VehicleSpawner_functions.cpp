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

// Function BP_VehicleSpawner.BP_VehicleSpawner_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_VehicleSpawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawner.BP_VehicleSpawner_C.UserConstructionScript");

	ABP_VehicleSpawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleSpawner.BP_VehicleSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_VehicleSpawner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawner.BP_VehicleSpawner_C.ReceiveBeginPlay");

	ABP_VehicleSpawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleSpawner.BP_VehicleSpawner_C.ExecuteUbergraph_BP_VehicleSpawner
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VehicleSpawner_C::ExecuteUbergraph_BP_VehicleSpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawner.BP_VehicleSpawner_C.ExecuteUbergraph_BP_VehicleSpawner");

	ABP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
