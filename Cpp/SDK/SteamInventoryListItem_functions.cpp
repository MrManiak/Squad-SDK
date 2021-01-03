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

// Function SteamInventoryListItem.SteamInventoryListItem_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
void USteamInventoryListItem_C::BP_OnEntryReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamInventoryListItem.SteamInventoryListItem_C.BP_OnEntryReleased");

	USteamInventoryListItem_C_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamInventoryListItem.SteamInventoryListItem_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USteamInventoryListItem_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamInventoryListItem.SteamInventoryListItem_C.BP_OnItemExpansionChanged");

	USteamInventoryListItem_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamInventoryListItem.SteamInventoryListItem_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USteamInventoryListItem_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamInventoryListItem.SteamInventoryListItem_C.BP_OnItemSelectionChanged");

	USteamInventoryListItem_C_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamInventoryListItem.SteamInventoryListItem_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USteamInventoryListItem_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamInventoryListItem.SteamInventoryListItem_C.OnListItemObjectSet");

	USteamInventoryListItem_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamInventoryListItem.SteamInventoryListItem_C.BndEvt__InvisButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void USteamInventoryListItem_C::BndEvt__InvisButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamInventoryListItem.SteamInventoryListItem_C.BndEvt__InvisButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	USteamInventoryListItem_C_BndEvt__InvisButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamInventoryListItem.SteamInventoryListItem_C.OnStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQSteamItem*            ChangedItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USteamInventoryListItem_C::OnStateChanged(class USQSteamItem* ChangedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamInventoryListItem.SteamInventoryListItem_C.OnStateChanged");

	USteamInventoryListItem_C_OnStateChanged_Params params;
	params.ChangedItem = ChangedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamInventoryListItem.SteamInventoryListItem_C.UpdateTickBox
// (BlueprintCallable, BlueprintEvent)
void USteamInventoryListItem_C::UpdateTickBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamInventoryListItem.SteamInventoryListItem_C.UpdateTickBox");

	USteamInventoryListItem_C_UpdateTickBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamInventoryListItem.SteamInventoryListItem_C.ExecuteUbergraph_SteamInventoryListItem
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USteamInventoryListItem_C::ExecuteUbergraph_SteamInventoryListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamInventoryListItem.SteamInventoryListItem_C.ExecuteUbergraph_SteamInventoryListItem");

	USteamInventoryListItem_C_ExecuteUbergraph_SteamInventoryListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
