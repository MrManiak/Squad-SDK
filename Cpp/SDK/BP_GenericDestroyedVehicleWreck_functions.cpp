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

// Function BP_GenericDestroyedVehicleWreck.BP_GenericDestroyedVehicleWreck_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABP_GenericDestroyedVehicleWreck_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDestroyedVehicleWreck.BP_GenericDestroyedVehicleWreck_C.ReceiveDestroyed");

	ABP_GenericDestroyedVehicleWreck_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDestroyedVehicleWreck.BP_GenericDestroyedVehicleWreck_C.ExecuteUbergraph_BP_GenericDestroyedVehicleWreck
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericDestroyedVehicleWreck_C::ExecuteUbergraph_BP_GenericDestroyedVehicleWreck(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDestroyedVehicleWreck.BP_GenericDestroyedVehicleWreck_C.ExecuteUbergraph_BP_GenericDestroyedVehicleWreck");

	ABP_GenericDestroyedVehicleWreck_C_ExecuteUbergraph_BP_GenericDestroyedVehicleWreck_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
