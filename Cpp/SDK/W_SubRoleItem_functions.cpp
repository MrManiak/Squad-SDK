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

// Function W_SubRoleItem.W_SubRoleItem_C.Get Item Info
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSQInventoryData        SQInventoryData                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// int                            Item_Count                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SubRoleItem_C::Get_Item_Info(const struct FSQInventoryData& SQInventoryData, int* Item_Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SubRoleItem.W_SubRoleItem_C.Get Item Info");

	UW_SubRoleItem_C_Get_Item_Info_Params params;
	params.SQInventoryData = SQInventoryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item_Count != nullptr)
		*Item_Count = params.Item_Count;

}


// Function W_SubRoleItem.W_SubRoleItem_C.Get Weapon Name
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (Parm, OutParm)
// struct FSQInventoryData        Inventory                      (Parm, OutParm, NoDestructor)
void UW_SubRoleItem_C::Get_Weapon_Name(struct FText* Name, struct FSQInventoryData* Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SubRoleItem.W_SubRoleItem_C.Get Weapon Name");

	UW_SubRoleItem_C_Get_Weapon_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
	if (Inventory != nullptr)
		*Inventory = params.Inventory;

}


// Function W_SubRoleItem.W_SubRoleItem_C.Get Is Selected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           selected                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SubRoleItem_C::Get_Is_Selected(bool* selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SubRoleItem.W_SubRoleItem_C.Get Is Selected");

	UW_SubRoleItem_C_Get_Is_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (selected != nullptr)
		*selected = params.selected;

}


// Function W_SubRoleItem.W_SubRoleItem_C.Get Is Locked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Locked                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SubRoleItem_C::Get_Is_Locked(bool* Locked)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SubRoleItem.W_SubRoleItem_C.Get Is Locked");

	UW_SubRoleItem_C_Get_Is_Locked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Locked != nullptr)
		*Locked = params.Locked;

}


// Function W_SubRoleItem.W_SubRoleItem_C.Get State Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UW_SubRoleItem_C::Get_State_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SubRoleItem.W_SubRoleItem_C.Get State Color");

	UW_SubRoleItem_C_Get_State_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_SubRoleItem.W_SubRoleItem_C.Set Refresh Timer Active
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SubRoleItem_C::Set_Refresh_Timer_Active(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SubRoleItem.W_SubRoleItem_C.Set Refresh Timer Active");

	UW_SubRoleItem_C_Set_Refresh_Timer_Active_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SubRoleItem.W_SubRoleItem_C.Get Player State and PC
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SubRoleItem_C::Get_Player_State_and_PC()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SubRoleItem.W_SubRoleItem_C.Get Player State and PC");

	UW_SubRoleItem_C_Get_Player_State_and_PC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SubRoleItem.W_SubRoleItem_C.Refresh Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_SubRoleItem_C::Refresh_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SubRoleItem.W_SubRoleItem_C.Refresh Data");

	UW_SubRoleItem_C_Refresh_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SubRoleItem.W_SubRoleItem_C.Refresh Visuals
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SubRoleItem_C::Refresh_Visuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SubRoleItem.W_SubRoleItem_C.Refresh Visuals");

	UW_SubRoleItem_C_Refresh_Visuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SubRoleItem.W_SubRoleItem_C.BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void UW_SubRoleItem_C::BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SubRoleItem.W_SubRoleItem_C.BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature");

	UW_SubRoleItem_C_BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SubRoleItem.W_SubRoleItem_C.BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UW_SubRoleItem_C::BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SubRoleItem.W_SubRoleItem_C.BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UW_SubRoleItem_C_BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SubRoleItem.W_SubRoleItem_C.BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UW_SubRoleItem_C::BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SubRoleItem.W_SubRoleItem_C.BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UW_SubRoleItem_C_BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SubRoleItem.W_SubRoleItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_SubRoleItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SubRoleItem.W_SubRoleItem_C.Construct");

	UW_SubRoleItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SubRoleItem.W_SubRoleItem_C.Select Role
// (BlueprintCallable, BlueprintEvent)
void UW_SubRoleItem_C::Select_Role()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SubRoleItem.W_SubRoleItem_C.Select Role");

	UW_SubRoleItem_C_Select_Role_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SubRoleItem.W_SubRoleItem_C.ExecuteUbergraph_W_SubRoleItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SubRoleItem_C::ExecuteUbergraph_W_SubRoleItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SubRoleItem.W_SubRoleItem_C.ExecuteUbergraph_W_SubRoleItem");

	UW_SubRoleItem_C_ExecuteUbergraph_W_SubRoleItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SubRoleItem.W_SubRoleItem_C.Role Hovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRoleSettings*         Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Hovered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SubRoleItem_C::Role_Hovered__DelegateSignature(class USQRoleSettings* Role, bool Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SubRoleItem.W_SubRoleItem_C.Role Hovered__DelegateSignature");

	UW_SubRoleItem_C_Role_Hovered__DelegateSignature_Params params;
	params.Role = Role;
	params.Hovered = Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SubRoleItem.W_SubRoleItem_C.Role Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRoleSettings*         Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SubRoleItem_C::Role_Selected__DelegateSignature(class USQRoleSettings* Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SubRoleItem.W_SubRoleItem_C.Role Selected__DelegateSignature");

	UW_SubRoleItem_C_Role_Selected__DelegateSignature_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
