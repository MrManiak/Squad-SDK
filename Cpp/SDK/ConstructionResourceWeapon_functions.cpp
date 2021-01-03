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

// Function ConstructionResourceWeapon.ConstructionResourceWeapon_C.ResourceDropOff
// (BlueprintCallable, BlueprintEvent)
void AConstructionResourceWeapon_C::ResourceDropOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConstructionResourceWeapon.ConstructionResourceWeapon_C.ResourceDropOff");

	AConstructionResourceWeapon_C_ResourceDropOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ConstructionResourceWeapon.ConstructionResourceWeapon_C.ExecuteUbergraph_ConstructionResourceWeapon
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AConstructionResourceWeapon_C::ExecuteUbergraph_ConstructionResourceWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConstructionResourceWeapon.ConstructionResourceWeapon_C.ExecuteUbergraph_ConstructionResourceWeapon");

	AConstructionResourceWeapon_C_ExecuteUbergraph_ConstructionResourceWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
