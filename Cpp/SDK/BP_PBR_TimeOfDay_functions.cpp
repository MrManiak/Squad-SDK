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

// Function BP_PBR_TimeOfDay.BP_PBR_TimeOfDay_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_PBR_TimeOfDay_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PBR_TimeOfDay.BP_PBR_TimeOfDay_C.UserConstructionScript");

	ABP_PBR_TimeOfDay_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
