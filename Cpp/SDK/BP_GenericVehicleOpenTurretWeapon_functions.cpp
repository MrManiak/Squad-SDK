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

// Function BP_GenericVehicleOpenTurretWeapon.BP_GenericVehicleOpenTurretWeapon_C.CameraOnSoldier
// (BlueprintCallable, BlueprintEvent)
void ABP_GenericVehicleOpenTurretWeapon_C::CameraOnSoldier()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericVehicleOpenTurretWeapon.BP_GenericVehicleOpenTurretWeapon_C.CameraOnSoldier");

	ABP_GenericVehicleOpenTurretWeapon_C_CameraOnSoldier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericVehicleOpenTurretWeapon.BP_GenericVehicleOpenTurretWeapon_C.CameraOnWeapon
// (BlueprintCallable, BlueprintEvent)
void ABP_GenericVehicleOpenTurretWeapon_C::CameraOnWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericVehicleOpenTurretWeapon.BP_GenericVehicleOpenTurretWeapon_C.CameraOnWeapon");

	ABP_GenericVehicleOpenTurretWeapon_C_CameraOnWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericVehicleOpenTurretWeapon.BP_GenericVehicleOpenTurretWeapon_C.ExecuteUbergraph_BP_GenericVehicleOpenTurretWeapon
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericVehicleOpenTurretWeapon_C::ExecuteUbergraph_BP_GenericVehicleOpenTurretWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericVehicleOpenTurretWeapon.BP_GenericVehicleOpenTurretWeapon_C.ExecuteUbergraph_BP_GenericVehicleOpenTurretWeapon");

	ABP_GenericVehicleOpenTurretWeapon_C_ExecuteUbergraph_BP_GenericVehicleOpenTurretWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
