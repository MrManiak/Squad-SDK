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

// Function UMG_InventoryGroup.UMG_InventoryGroup_C.Check Opacity
// (Public, BlueprintCallable, BlueprintEvent)
void UUMG_InventoryGroup_C::Check_Opacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_InventoryGroup.UMG_InventoryGroup_C.Check Opacity");

	UUMG_InventoryGroup_C_Check_Opacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_InventoryGroup.UMG_InventoryGroup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_InventoryGroup_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_InventoryGroup.UMG_InventoryGroup_C.Construct");

	UUMG_InventoryGroup_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_InventoryGroup.UMG_InventoryGroup_C.Refresh
// (BlueprintCallable, BlueprintEvent)
void UUMG_InventoryGroup_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_InventoryGroup.UMG_InventoryGroup_C.Refresh");

	UUMG_InventoryGroup_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_InventoryGroup.UMG_InventoryGroup_C.ExecuteUbergraph_UMG_InventoryGroup
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_InventoryGroup_C::ExecuteUbergraph_UMG_InventoryGroup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_InventoryGroup.UMG_InventoryGroup_C.ExecuteUbergraph_UMG_InventoryGroup");

	UUMG_InventoryGroup_C_ExecuteUbergraph_UMG_InventoryGroup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
