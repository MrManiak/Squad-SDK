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

// Function W_RoleItem.W_RoleItem_C.Get Availability
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Current                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Max                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleItem_C::Get_Availability(int* Current, int* Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleItem.W_RoleItem_C.Get Availability");

	UW_RoleItem_C_Get_Availability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Current != nullptr)
		*Current = params.Current;
	if (Max != nullptr)
		*Max = params.Max;

}


// Function W_RoleItem.W_RoleItem_C.Get Is Selected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           selected                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_RoleItem_C::Get_Is_Selected(bool* selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleItem.W_RoleItem_C.Get Is Selected");

	UW_RoleItem_C_Get_Is_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (selected != nullptr)
		*selected = params.selected;

}


// Function W_RoleItem.W_RoleItem_C.Get Is Locked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Locked                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_RoleItem_C::Get_Is_Locked(bool* Locked)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleItem.W_RoleItem_C.Get Is Locked");

	UW_RoleItem_C_Get_Is_Locked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Locked != nullptr)
		*Locked = params.Locked;

}


// Function W_RoleItem.W_RoleItem_C.Open Sub Roles or Select Role
// (Public, BlueprintCallable, BlueprintEvent)
void UW_RoleItem_C::Open_Sub_Roles_or_Select_Role()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleItem.W_RoleItem_C.Open Sub Roles or Select Role");

	UW_RoleItem_C_Open_Sub_Roles_or_Select_Role_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleItem.W_RoleItem_C.Init Sub Roles
// (Public, BlueprintCallable, BlueprintEvent)
void UW_RoleItem_C::Init_Sub_Roles()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleItem.W_RoleItem_C.Init Sub Roles");

	UW_RoleItem_C_Init_Sub_Roles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleItem.W_RoleItem_C.Get State Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UW_RoleItem_C::Get_State_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleItem.W_RoleItem_C.Get State Color");

	UW_RoleItem_C_Get_State_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_RoleItem.W_RoleItem_C.Set Refresh Timer Active
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_RoleItem_C::Set_Refresh_Timer_Active(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleItem.W_RoleItem_C.Set Refresh Timer Active");

	UW_RoleItem_C_Set_Refresh_Timer_Active_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleItem.W_RoleItem_C.Get Player State and PC
// (Public, BlueprintCallable, BlueprintEvent)
void UW_RoleItem_C::Get_Player_State_and_PC()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleItem.W_RoleItem_C.Get Player State and PC");

	UW_RoleItem_C_Get_Player_State_and_PC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleItem.W_RoleItem_C.Refresh Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_RoleItem_C::Refresh_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleItem.W_RoleItem_C.Refresh Data");

	UW_RoleItem_C_Refresh_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleItem.W_RoleItem_C.Refresh Visuals
// (Public, BlueprintCallable, BlueprintEvent)
void UW_RoleItem_C::Refresh_Visuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleItem.W_RoleItem_C.Refresh Visuals");

	UW_RoleItem_C_Refresh_Visuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleItem.W_RoleItem_C.BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void UW_RoleItem_C::BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleItem.W_RoleItem_C.BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature");

	UW_RoleItem_C_BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleItem.W_RoleItem_C.BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UW_RoleItem_C::BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleItem.W_RoleItem_C.BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UW_RoleItem_C_BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleItem.W_RoleItem_C.BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UW_RoleItem_C::BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleItem.W_RoleItem_C.BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UW_RoleItem_C_BndEvt__Button_SquadMember_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleItem.W_RoleItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_RoleItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleItem.W_RoleItem_C.Construct");

	UW_RoleItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleItem.W_RoleItem_C.Select Role
// (BlueprintCallable, BlueprintEvent)
void UW_RoleItem_C::Select_Role()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleItem.W_RoleItem_C.Select Role");

	UW_RoleItem_C_Select_Role_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleItem.W_RoleItem_C.SubRole Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRoleSettings*         Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleItem_C::SubRole_Selected(class USQRoleSettings* Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleItem.W_RoleItem_C.SubRole Selected");

	UW_RoleItem_C_SubRole_Selected_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleItem.W_RoleItem_C.ExecuteUbergraph_W_RoleItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleItem_C::ExecuteUbergraph_W_RoleItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleItem.W_RoleItem_C.ExecuteUbergraph_W_RoleItem");

	UW_RoleItem_C_ExecuteUbergraph_W_RoleItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleItem.W_RoleItem_C.Role Hovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRoleSettings*         Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Hovered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_RoleItem_C::Role_Hovered__DelegateSignature(class USQRoleSettings* Role, bool Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleItem.W_RoleItem_C.Role Hovered__DelegateSignature");

	UW_RoleItem_C_Role_Hovered__DelegateSignature_Params params;
	params.Role = Role;
	params.Hovered = Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleItem.W_RoleItem_C.Role Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRoleSettings*         Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleItem_C::Role_Selected__DelegateSignature(class USQRoleSettings* Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleItem.W_RoleItem_C.Role Selected__DelegateSignature");

	UW_RoleItem_C_Role_Selected__DelegateSignature_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
