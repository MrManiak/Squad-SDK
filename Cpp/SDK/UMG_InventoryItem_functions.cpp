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

// Function UMG_InventoryItem.UMG_InventoryItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_InventoryItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_InventoryItem.UMG_InventoryItem_C.Construct");

	UUMG_InventoryItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_InventoryItem.UMG_InventoryItem_C.UpdateState
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UUMG_InventoryItem_C::UpdateState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_InventoryItem.UMG_InventoryItem_C.UpdateState");

	UUMG_InventoryItem_C_UpdateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_InventoryItem.UMG_InventoryItem_C.ExecuteUbergraph_UMG_InventoryItem
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_InventoryItem_C::ExecuteUbergraph_UMG_InventoryItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_InventoryItem.UMG_InventoryItem_C.ExecuteUbergraph_UMG_InventoryItem");

	UUMG_InventoryItem_C_ExecuteUbergraph_UMG_InventoryItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
