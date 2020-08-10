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

// Function RadialCenterRearmButton.RadialCenterRearmButton_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           InMouseEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply URadialCenterRearmButton_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRearmButton.RadialCenterRearmButton_C.OnMouseButtonDoubleClick");

	URadialCenterRearmButton_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RadialCenterRearmButton.RadialCenterRearmButton_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply URadialCenterRearmButton_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRearmButton.RadialCenterRearmButton_C.OnPreviewMouseButtonDown");

	URadialCenterRearmButton_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RadialCenterRearmButton.RadialCenterRearmButton_C.CheckIfCanRearm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void URadialCenterRearmButton_C::CheckIfCanRearm()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRearmButton.RadialCenterRearmButton_C.CheckIfCanRearm");

	URadialCenterRearmButton_C_CheckIfCanRearm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterRearmButton.RadialCenterRearmButton_C.UpdateSourceAmmoRemaining
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AmmoRemaining                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadialCenterRearmButton_C::UpdateSourceAmmoRemaining(float AmmoRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRearmButton.RadialCenterRearmButton_C.UpdateSourceAmmoRemaining");

	URadialCenterRearmButton_C_UpdateSourceAmmoRemaining_Params params;
	params.AmmoRemaining = AmmoRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterRearmButton.RadialCenterRearmButton_C.CreateRearmRequest
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSQRearmWeaponRequest> RearmRequest                   (Parm, OutParm, ZeroConstructor)
void URadialCenterRearmButton_C::CreateRearmRequest(TArray<struct FSQRearmWeaponRequest>* RearmRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRearmButton.RadialCenterRearmButton_C.CreateRearmRequest");

	URadialCenterRearmButton_C_CreateRearmRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RearmRequest != nullptr)
		*RearmRequest = params.RearmRequest;

}


// Function RadialCenterRearmButton.RadialCenterRearmButton_C.UpdateSelectedCost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MagCost                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadialCenterRearmButton_C::UpdateSelectedCost(float MagCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRearmButton.RadialCenterRearmButton_C.UpdateSelectedCost");

	URadialCenterRearmButton_C_UpdateSelectedCost_Params params;
	params.MagCost = MagCost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterRearmButton.RadialCenterRearmButton_C.CalculateTotalRearmCost
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OutCost                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool URadialCenterRearmButton_C::CalculateTotalRearmCost(float* OutCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRearmButton.RadialCenterRearmButton_C.CalculateTotalRearmCost");

	URadialCenterRearmButton_C_CalculateTotalRearmCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutCost != nullptr)
		*OutCost = params.OutCost;


	return params.ReturnValue;
}


// Function RadialCenterRearmButton.RadialCenterRearmButton_C.GetRearmingItemCountDisplay
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText URadialCenterRearmButton_C::GetRearmingItemCountDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRearmButton.RadialCenterRearmButton_C.GetRearmingItemCountDisplay");

	URadialCenterRearmButton_C_GetRearmingItemCountDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function RadialCenterRearmButton.RadialCenterRearmButton_C.OnHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
void URadialCenterRearmButton_C::OnHoverBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRearmButton.RadialCenterRearmButton_C.OnHoverBegin");

	URadialCenterRearmButton_C_OnHoverBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterRearmButton.RadialCenterRearmButton_C.BPInit
// (Event, Public, BlueprintEvent)
void URadialCenterRearmButton_C::BPInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRearmButton.RadialCenterRearmButton_C.BPInit");

	URadialCenterRearmButton_C_BPInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterRearmButton.RadialCenterRearmButton_C.AddRearmItems
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQEquipableItem*        EquippableItem                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          RearmItemCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadialCenterRearmButton_C::AddRearmItems(class ASQEquipableItem* EquippableItem, float RearmItemCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRearmButton.RadialCenterRearmButton_C.AddRearmItems");

	URadialCenterRearmButton_C_AddRearmItems_Params params;
	params.EquippableItem = EquippableItem;
	params.RearmItemCount = RearmItemCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterRearmButton.RadialCenterRearmButton_C.RemoveRearmItems
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQEquipableItem*        WeaponToRemove                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          RearmItemCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadialCenterRearmButton_C::RemoveRearmItems(class ASQEquipableItem* WeaponToRemove, float RearmItemCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRearmButton.RadialCenterRearmButton_C.RemoveRearmItems");

	URadialCenterRearmButton_C_RemoveRearmItems_Params params;
	params.WeaponToRemove = WeaponToRemove;
	params.RearmItemCount = RearmItemCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterRearmButton.RadialCenterRearmButton_C.RearmWeapons
// (BlueprintCallable, BlueprintEvent)
void URadialCenterRearmButton_C::RearmWeapons()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRearmButton.RadialCenterRearmButton_C.RearmWeapons");

	URadialCenterRearmButton_C_RearmWeapons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterRearmButton.RadialCenterRearmButton_C.OnHoverEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
void URadialCenterRearmButton_C::OnHoverEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRearmButton.RadialCenterRearmButton_C.OnHoverEnd");

	URadialCenterRearmButton_C_OnHoverEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterRearmButton.RadialCenterRearmButton_C.SetInventoryComponent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQPawnInventoryComponent* InventoryComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadialCenterRearmButton_C::SetInventoryComponent(class USQPawnInventoryComponent* InventoryComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRearmButton.RadialCenterRearmButton_C.SetInventoryComponent");

	URadialCenterRearmButton_C_SetInventoryComponent_Params params;
	params.InventoryComponent = InventoryComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterRearmButton.RadialCenterRearmButton_C.InventoryAmmoUpdated
// (BlueprintCallable, BlueprintEvent)
void URadialCenterRearmButton_C::InventoryAmmoUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRearmButton.RadialCenterRearmButton_C.InventoryAmmoUpdated");

	URadialCenterRearmButton_C_InventoryAmmoUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterRearmButton.RadialCenterRearmButton_C.InitializeRearmSourceListener
// (BlueprintCallable, BlueprintEvent)
void URadialCenterRearmButton_C::InitializeRearmSourceListener()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRearmButton.RadialCenterRearmButton_C.InitializeRearmSourceListener");

	URadialCenterRearmButton_C_InitializeRearmSourceListener_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterRearmButton.RadialCenterRearmButton_C.UpdateSelfCanClick
// (BlueprintCallable, BlueprintEvent)
void URadialCenterRearmButton_C::UpdateSelfCanClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRearmButton.RadialCenterRearmButton_C.UpdateSelfCanClick");

	URadialCenterRearmButton_C_UpdateSelfCanClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterRearmButton.RadialCenterRearmButton_C.AmmoUpdated
// (BlueprintCallable, BlueprintEvent)
void URadialCenterRearmButton_C::AmmoUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRearmButton.RadialCenterRearmButton_C.AmmoUpdated");

	URadialCenterRearmButton_C_AmmoUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterRearmButton.RadialCenterRearmButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void URadialCenterRearmButton_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRearmButton.RadialCenterRearmButton_C.Destruct");

	URadialCenterRearmButton_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterRearmButton.RadialCenterRearmButton_C.ExecuteUbergraph_RadialCenterRearmButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadialCenterRearmButton_C::ExecuteUbergraph_RadialCenterRearmButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRearmButton.RadialCenterRearmButton_C.ExecuteUbergraph_RadialCenterRearmButton");

	URadialCenterRearmButton_C_ExecuteUbergraph_RadialCenterRearmButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterRearmButton.RadialCenterRearmButton_C.InventoryUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void URadialCenterRearmButton_C::InventoryUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRearmButton.RadialCenterRearmButton_C.InventoryUpdated__DelegateSignature");

	URadialCenterRearmButton_C_InventoryUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterRearmButton.RadialCenterRearmButton_C.UpdateAmmoRemaining__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AmmoRemaining                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadialCenterRearmButton_C::UpdateAmmoRemaining__DelegateSignature(float AmmoRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterRearmButton.RadialCenterRearmButton_C.UpdateAmmoRemaining__DelegateSignature");

	URadialCenterRearmButton_C_UpdateAmmoRemaining__DelegateSignature_Params params;
	params.AmmoRemaining = AmmoRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
