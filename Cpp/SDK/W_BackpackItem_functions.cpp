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

// Function W_BackpackItem.W_BackpackItem_C.Get Item Count
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSQInventoryData        SQInventoryData                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// int                            Item_Count                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_BackpackItem_C::Get_Item_Count(const struct FSQInventoryData& SQInventoryData, int* Item_Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BackpackItem.W_BackpackItem_C.Get Item Count");

	UW_BackpackItem_C_Get_Item_Count_Params params;
	params.SQInventoryData = SQInventoryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item_Count != nullptr)
		*Item_Count = params.Item_Count;

}


// Function W_BackpackItem.W_BackpackItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UW_BackpackItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BackpackItem.W_BackpackItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UW_BackpackItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_BackpackItem.W_BackpackItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_BackpackItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BackpackItem.W_BackpackItem_C.Construct");

	UW_BackpackItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_BackpackItem.W_BackpackItem_C.ExecuteUbergraph_W_BackpackItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_BackpackItem_C::ExecuteUbergraph_W_BackpackItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BackpackItem.W_BackpackItem_C.ExecuteUbergraph_W_BackpackItem");

	UW_BackpackItem_C_ExecuteUbergraph_W_BackpackItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_BackpackItem.W_BackpackItem_C.Hovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQEquipableItem*        Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_BackpackItem_C::Hovered__DelegateSignature(class ASQEquipableItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_BackpackItem.W_BackpackItem_C.Hovered__DelegateSignature");

	UW_BackpackItem_C_Hovered__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
