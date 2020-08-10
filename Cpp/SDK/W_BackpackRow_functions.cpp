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

// Function W_BackpackRow.W_BackpackRow_C.Set Items
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ASQEquipableItem*> In_Array                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FSQInventoryData> Data_Array                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UW_BackpackRow_C::Set_Items(TArray<class ASQEquipableItem*> In_Array, TArray<struct FSQInventoryData> Data_Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BackpackRow.W_BackpackRow_C.Set Items");

	UW_BackpackRow_C_Set_Items_Params params;
	params.In_Array = In_Array;
	params.Data_Array = Data_Array;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_BackpackRow.W_BackpackRow_C.Update Details
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQEquipableItem*        Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_BackpackRow_C::Update_Details(class ASQEquipableItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BackpackRow.W_BackpackRow_C.Update Details");

	UW_BackpackRow_C_Update_Details_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_BackpackRow.W_BackpackRow_C.ExecuteUbergraph_W_BackpackRow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_BackpackRow_C::ExecuteUbergraph_W_BackpackRow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BackpackRow.W_BackpackRow_C.ExecuteUbergraph_W_BackpackRow");

	UW_BackpackRow_C_ExecuteUbergraph_W_BackpackRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
