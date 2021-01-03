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

// Function BP_VehicleSmoke_Proj.BP_VehicleSmoke_Proj_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABP_VehicleSmoke_Proj_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSmoke_Proj.BP_VehicleSmoke_Proj_C.ReceiveDestroyed");

	ABP_VehicleSmoke_Proj_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleSmoke_Proj.BP_VehicleSmoke_Proj_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_VehicleSmoke_Proj_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSmoke_Proj.BP_VehicleSmoke_Proj_C.ReceiveBeginPlay");

	ABP_VehicleSmoke_Proj_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VehicleSmoke_Proj.BP_VehicleSmoke_Proj_C.ExecuteUbergraph_BP_VehicleSmoke_Proj
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VehicleSmoke_Proj_C::ExecuteUbergraph_BP_VehicleSmoke_Proj(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSmoke_Proj.BP_VehicleSmoke_Proj_C.ExecuteUbergraph_BP_VehicleSmoke_Proj");

	ABP_VehicleSmoke_Proj_C_ExecuteUbergraph_BP_VehicleSmoke_Proj_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
