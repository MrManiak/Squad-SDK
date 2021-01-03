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

// Function W_RoleMainWeapon.W_RoleMainWeapon_C.Find Name of Weapon from Image
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 In_Texture                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Name                           (Parm, OutParm)
// struct FSQInventoryData        Inventory                      (Parm, OutParm, NoDestructor)
void UW_RoleMainWeapon_C::Find_Name_of_Weapon_from_Image(class UObject* In_Texture, struct FText* Name, struct FSQInventoryData* Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleMainWeapon.W_RoleMainWeapon_C.Find Name of Weapon from Image");

	UW_RoleMainWeapon_C_Find_Name_of_Weapon_from_Image_Params params;
	params.In_Texture = In_Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
	if (Inventory != nullptr)
		*Inventory = params.Inventory;

}


// Function W_RoleMainWeapon.W_RoleMainWeapon_C.Update Selected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_RoleMainWeapon_C::Update_Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleMainWeapon.W_RoleMainWeapon_C.Update Selected");

	UW_RoleMainWeapon_C_Update_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleMainWeapon.W_RoleMainWeapon_C.Get Item Info
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSQInventoryData        SQInventoryData                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// int                            Item_Count                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleMainWeapon_C::Get_Item_Info(const struct FSQInventoryData& SQInventoryData, int* Item_Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleMainWeapon.W_RoleMainWeapon_C.Get Item Info");

	UW_RoleMainWeapon_C_Get_Item_Info_Params params;
	params.SQInventoryData = SQInventoryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item_Count != nullptr)
		*Item_Count = params.Item_Count;

}


// Function W_RoleMainWeapon.W_RoleMainWeapon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_RoleMainWeapon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleMainWeapon.W_RoleMainWeapon_C.Construct");

	UW_RoleMainWeapon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleMainWeapon.W_RoleMainWeapon_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_RoleMainWeapon_C::BndEvt__Button_Main_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleMainWeapon.W_RoleMainWeapon_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UW_RoleMainWeapon_C_BndEvt__Button_Main_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleMainWeapon.W_RoleMainWeapon_C.Refresh
// (BlueprintCallable, BlueprintEvent)
void UW_RoleMainWeapon_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleMainWeapon.W_RoleMainWeapon_C.Refresh");

	UW_RoleMainWeapon_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleMainWeapon.W_RoleMainWeapon_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_202_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UW_RoleMainWeapon_C::BndEvt__Button_Main_K2Node_ComponentBoundEvent_202_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleMainWeapon.W_RoleMainWeapon_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_202_OnButtonHoverEvent__DelegateSignature");

	UW_RoleMainWeapon_C_BndEvt__Button_Main_K2Node_ComponentBoundEvent_202_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleMainWeapon.W_RoleMainWeapon_C.ExecuteUbergraph_W_RoleMainWeapon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleMainWeapon_C::ExecuteUbergraph_W_RoleMainWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleMainWeapon.W_RoleMainWeapon_C.ExecuteUbergraph_W_RoleMainWeapon");

	UW_RoleMainWeapon_C_ExecuteUbergraph_W_RoleMainWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleMainWeapon.W_RoleMainWeapon_C.SubRole Hovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRoleSettings*         Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleMainWeapon_C::SubRole_Hovered__DelegateSignature(class USQRoleSettings* Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleMainWeapon.W_RoleMainWeapon_C.SubRole Hovered__DelegateSignature");

	UW_RoleMainWeapon_C_SubRole_Hovered__DelegateSignature_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleMainWeapon.W_RoleMainWeapon_C.SubRole Pressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRoleSettings*         Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleMainWeapon_C::SubRole_Pressed__DelegateSignature(class USQRoleSettings* Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleMainWeapon.W_RoleMainWeapon_C.SubRole Pressed__DelegateSignature");

	UW_RoleMainWeapon_C_SubRole_Pressed__DelegateSignature_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
