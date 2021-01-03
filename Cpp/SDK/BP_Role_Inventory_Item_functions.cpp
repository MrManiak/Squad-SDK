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

// Function BP_Role_Inventory_Item.BP_Role_Inventory_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_Role_Inventory_Item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Role_Inventory_Item.BP_Role_Inventory_Item_C.Construct");

	UBP_Role_Inventory_Item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Role_Inventory_Item.BP_Role_Inventory_Item_C.ExecuteUbergraph_BP_Role_Inventory_Item
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Role_Inventory_Item_C::ExecuteUbergraph_BP_Role_Inventory_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Role_Inventory_Item.BP_Role_Inventory_Item_C.ExecuteUbergraph_BP_Role_Inventory_Item");

	UBP_Role_Inventory_Item_C_ExecuteUbergraph_BP_Role_Inventory_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
