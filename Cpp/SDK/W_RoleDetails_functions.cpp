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

// Function W_RoleDetails.W_RoleDetails_C.Init Main Weapon Button
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_RoleDetails_C::Init_Main_Weapon_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleDetails.W_RoleDetails_C.Init Main Weapon Button");

	UW_RoleDetails_C_Init_Main_Weapon_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleDetails.W_RoleDetails_C.Set Preview Message
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_RoleDetails_C::Set_Preview_Message()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleDetails.W_RoleDetails_C.Set Preview Message");

	UW_RoleDetails_C_Set_Preview_Message_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleDetails.W_RoleDetails_C.Get Item Info
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSQInventoryData        Primary_Data                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int                            Item_Count                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleDetails_C::Get_Item_Info(const struct FSQInventoryData& Primary_Data, int* Item_Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleDetails.W_RoleDetails_C.Get Item Info");

	UW_RoleDetails_C_Get_Item_Info_Params params;
	params.Primary_Data = Primary_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item_Count != nullptr)
		*Item_Count = params.Item_Count;

}


// Function W_RoleDetails.W_RoleDetails_C.Clear All
// (Public, BlueprintCallable, BlueprintEvent)
void UW_RoleDetails_C::Clear_All()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleDetails.W_RoleDetails_C.Clear All");

	UW_RoleDetails_C_Clear_All_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleDetails.W_RoleDetails_C.Refresh Main Icons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_RoleDetails_C::Refresh_Main_Icons()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleDetails.W_RoleDetails_C.Refresh Main Icons");

	UW_RoleDetails_C_Refresh_Main_Icons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleDetails.W_RoleDetails_C.Refresh Description
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQEquipableItem*        Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleDetails_C::Refresh_Description(class ASQEquipableItem* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleDetails.W_RoleDetails_C.Refresh Description");

	UW_RoleDetails_C_Refresh_Description_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleDetails.W_RoleDetails_C.Update Details
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRoleSettings*         RoleReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleDetails_C::Update_Details(class USQRoleSettings* RoleReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleDetails.W_RoleDetails_C.Update Details");

	UW_RoleDetails_C_Update_Details_Params params;
	params.RoleReference = RoleReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleDetails.W_RoleDetails_C.BndEvt__Button_MainWeapon_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UW_RoleDetails_C::BndEvt__Button_MainWeapon_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleDetails.W_RoleDetails_C.BndEvt__Button_MainWeapon_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UW_RoleDetails_C_BndEvt__Button_MainWeapon_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleDetails.W_RoleDetails_C.BndEvt__Button_Secondary_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UW_RoleDetails_C::BndEvt__Button_Secondary_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleDetails.W_RoleDetails_C.BndEvt__Button_Secondary_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UW_RoleDetails_C_BndEvt__Button_Secondary_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleDetails.W_RoleDetails_C.BndEvt__Button_Special_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UW_RoleDetails_C::BndEvt__Button_Special_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleDetails.W_RoleDetails_C.BndEvt__Button_Special_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UW_RoleDetails_C_BndEvt__Button_Special_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleDetails.W_RoleDetails_C.Sub Role Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRoleSettings*         RoleReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleDetails_C::Sub_Role_Selected(class USQRoleSettings* RoleReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleDetails.W_RoleDetails_C.Sub Role Selected");

	UW_RoleDetails_C_Sub_Role_Selected_Params params;
	params.RoleReference = RoleReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleDetails.W_RoleDetails_C.Sub Role Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRoleSettings*         RoleReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleDetails_C::Sub_Role_Hovered(class USQRoleSettings* RoleReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleDetails.W_RoleDetails_C.Sub Role Hovered");

	UW_RoleDetails_C_Sub_Role_Hovered_Params params;
	params.RoleReference = RoleReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleDetails.W_RoleDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_RoleDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleDetails.W_RoleDetails_C.Construct");

	UW_RoleDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleDetails.W_RoleDetails_C.Refresh
// (BlueprintCallable, BlueprintEvent)
void UW_RoleDetails_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleDetails.W_RoleDetails_C.Refresh");

	UW_RoleDetails_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleDetails.W_RoleDetails_C.ExecuteUbergraph_W_RoleDetails
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleDetails_C::ExecuteUbergraph_W_RoleDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleDetails.W_RoleDetails_C.ExecuteUbergraph_W_RoleDetails");

	UW_RoleDetails_C_ExecuteUbergraph_W_RoleDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
