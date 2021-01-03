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

// Function BP_Role_Inventory.BP_Role_Inventory_C.ClearWidget
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Role_Inventory_C::ClearWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Role_Inventory.BP_Role_Inventory_C.ClearWidget");

	UBP_Role_Inventory_C_ClearWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Role_Inventory.BP_Role_Inventory_C.GetRulesetModifications
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_Role_Inventory_C::GetRulesetModifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Role_Inventory.BP_Role_Inventory_C.GetRulesetModifications");

	UBP_Role_Inventory_C_GetRulesetModifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Role_Inventory.BP_Role_Inventory_C.AddItemToInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSQInventoryData        InventoryData                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// int                            Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Role_Inventory_C::AddItemToInventory(const struct FSQInventoryData& InventoryData, int Slot, int Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Role_Inventory.BP_Role_Inventory_C.AddItemToInventory");

	UBP_Role_Inventory_C_AddItemToInventory_Params params;
	params.InventoryData = InventoryData;
	params.Slot = Slot;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Role_Inventory.BP_Role_Inventory_C.PopulateInventoryUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_Role_Inventory_C::PopulateInventoryUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Role_Inventory.BP_Role_Inventory_C.PopulateInventoryUI");

	UBP_Role_Inventory_C_PopulateInventoryUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Role_Inventory.BP_Role_Inventory_C.UpdateStateAndVisibilityEvent
// (BlueprintCallable, BlueprintEvent)
void UBP_Role_Inventory_C::UpdateStateAndVisibilityEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Role_Inventory.BP_Role_Inventory_C.UpdateStateAndVisibilityEvent");

	UBP_Role_Inventory_C_UpdateStateAndVisibilityEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Role_Inventory.BP_Role_Inventory_C.ExecuteUbergraph_BP_Role_Inventory
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Role_Inventory_C::ExecuteUbergraph_BP_Role_Inventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Role_Inventory.BP_Role_Inventory_C.ExecuteUbergraph_BP_Role_Inventory");

	UBP_Role_Inventory_C_ExecuteUbergraph_BP_Role_Inventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
