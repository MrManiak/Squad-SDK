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

// Function BP_ProjectileBlank.BP_ProjectileBlank_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_ProjectileBlank_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBlank.BP_ProjectileBlank_C.ReceiveBeginPlay");

	ABP_ProjectileBlank_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileBlank.BP_ProjectileBlank_C.ExecuteUbergraph_BP_ProjectileBlank
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ProjectileBlank_C::ExecuteUbergraph_BP_ProjectileBlank(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBlank.BP_ProjectileBlank_C.ExecuteUbergraph_BP_ProjectileBlank");

	ABP_ProjectileBlank_C_ExecuteUbergraph_BP_ProjectileBlank_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
