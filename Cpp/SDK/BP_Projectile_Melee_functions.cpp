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

// Function BP_Projectile_Melee.BP_Projectile_Melee_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Projectile_Melee_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Melee.BP_Projectile_Melee_C.ReceiveBeginPlay");

	ABP_Projectile_Melee_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Projectile_Melee.BP_Projectile_Melee_C.ExecuteUbergraph_BP_Projectile_Melee
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Projectile_Melee_C::ExecuteUbergraph_BP_Projectile_Melee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Melee.BP_Projectile_Melee_C.ExecuteUbergraph_BP_Projectile_Melee");

	ABP_Projectile_Melee_C_ExecuteUbergraph_BP_Projectile_Melee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
