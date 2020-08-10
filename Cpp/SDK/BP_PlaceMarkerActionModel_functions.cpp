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

// Function BP_PlaceMarkerActionModel.BP_PlaceMarkerActionModel_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PlaceMarkerActionModel_C::OnClicked(class UBaseRadialMenu_C* Radial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlaceMarkerActionModel.BP_PlaceMarkerActionModel_C.OnClicked");

	UBP_PlaceMarkerActionModel_C_OnClicked_Params params;
	params.Radial = Radial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlaceMarkerActionModel.BP_PlaceMarkerActionModel_C.ExecuteUbergraph_BP_PlaceMarkerActionModel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PlaceMarkerActionModel_C::ExecuteUbergraph_BP_PlaceMarkerActionModel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlaceMarkerActionModel.BP_PlaceMarkerActionModel_C.ExecuteUbergraph_BP_PlaceMarkerActionModel");

	UBP_PlaceMarkerActionModel_C_ExecuteUbergraph_BP_PlaceMarkerActionModel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
