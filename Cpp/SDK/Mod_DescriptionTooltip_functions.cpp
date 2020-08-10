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

// Function Mod_DescriptionTooltip.Mod_DescriptionTooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UMod_DescriptionTooltip_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_DescriptionTooltip.Mod_DescriptionTooltip_C.Construct");

	UMod_DescriptionTooltip_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_DescriptionTooltip.Mod_DescriptionTooltip_C.ExecuteUbergraph_Mod_DescriptionTooltip
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMod_DescriptionTooltip_C::ExecuteUbergraph_Mod_DescriptionTooltip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_DescriptionTooltip.Mod_DescriptionTooltip_C.ExecuteUbergraph_Mod_DescriptionTooltip");

	UMod_DescriptionTooltip_C_ExecuteUbergraph_Mod_DescriptionTooltip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
