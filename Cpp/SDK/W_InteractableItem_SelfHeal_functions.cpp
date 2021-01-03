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

// Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Has Field Dressings
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASQSoldier*              Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Has_Dressing                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Slot                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableItem_SelfHeal_C::Has_Field_Dressings(class ASQSoldier* Inventory, bool* Has_Dressing, int* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Has Field Dressings");

	UW_InteractableItem_SelfHeal_C_Has_Field_Dressings_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Has_Dressing != nullptr)
		*Has_Dressing = params.Has_Dressing;
	if (Slot != nullptr)
		*Slot = params.Slot;

}


// Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Set Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_InteractableItem_SelfHeal_C::Set_Visibility(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Set Visibility");

	UW_InteractableItem_SelfHeal_C_Set_Visibility_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Has Healing Item
// (Public, BlueprintCallable, BlueprintEvent)
void UW_InteractableItem_SelfHeal_C::Has_Healing_Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Has Healing Item");

	UW_InteractableItem_SelfHeal_C_Has_Healing_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Update Self Heal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_InteractableItem_SelfHeal_C::Update_Self_Heal()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Update Self Heal");

	UW_InteractableItem_SelfHeal_C_Update_Self_Heal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Get Format Box
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHorizontalBox*          FormatBox                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableItem_SelfHeal_C::Get_Format_Box(class UHorizontalBox** FormatBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Get Format Box");

	UW_InteractableItem_SelfHeal_C_Get_Format_Box_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FormatBox != nullptr)
		*FormatBox = params.FormatBox;

}


// Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_InteractableItem_SelfHeal_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.Construct");

	UW_InteractableItem_SelfHeal_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.ExecuteUbergraph_W_InteractableItem_SelfHeal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_InteractableItem_SelfHeal_C::ExecuteUbergraph_W_InteractableItem_SelfHeal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_InteractableItem_SelfHeal.W_InteractableItem_SelfHeal_C.ExecuteUbergraph_W_InteractableItem_SelfHeal");

	UW_InteractableItem_SelfHeal_C_ExecuteUbergraph_W_InteractableItem_SelfHeal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
