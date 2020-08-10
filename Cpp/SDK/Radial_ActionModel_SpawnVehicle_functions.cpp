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

// Function Radial_ActionModel_SpawnVehicle.Radial_ActionModel_SpawnVehicle_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadial_ActionModel_SpawnVehicle_C::OnClicked(class UBaseRadialMenu_C* Radial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Radial_ActionModel_SpawnVehicle.Radial_ActionModel_SpawnVehicle_C.OnClicked");

	URadial_ActionModel_SpawnVehicle_C_OnClicked_Params params;
	params.Radial = Radial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Radial_ActionModel_SpawnVehicle.Radial_ActionModel_SpawnVehicle_C.ExecuteUbergraph_Radial_ActionModel_SpawnVehicle
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadial_ActionModel_SpawnVehicle_C::ExecuteUbergraph_Radial_ActionModel_SpawnVehicle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Radial_ActionModel_SpawnVehicle.Radial_ActionModel_SpawnVehicle_C.ExecuteUbergraph_Radial_ActionModel_SpawnVehicle");

	URadial_ActionModel_SpawnVehicle_C_ExecuteUbergraph_Radial_ActionModel_SpawnVehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
