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

// Function W_RoleSelect.W_RoleSelect_C.Create Render Target
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_RoleSelect_C::Create_Render_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleSelect.W_RoleSelect_C.Create Render Target");

	UW_RoleSelect_C_Create_Render_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleSelect.W_RoleSelect_C.Show Deploy Role
// (Public, BlueprintCallable, BlueprintEvent)
void UW_RoleSelect_C::Show_Deploy_Role()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleSelect.W_RoleSelect_C.Show Deploy Role");

	UW_RoleSelect_C_Show_Deploy_Role_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleSelect.W_RoleSelect_C.Update Preview State
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_RoleSelect_C::Update_Preview_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleSelect.W_RoleSelect_C.Update Preview State");

	UW_RoleSelect_C_Update_Preview_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleSelect.W_RoleSelect_C.Set Soldier Material
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleSelect_C::Set_Soldier_Material(class UMaterialInterface* Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleSelect.W_RoleSelect_C.Set Soldier Material");

	UW_RoleSelect_C_Set_Soldier_Material_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleSelect.W_RoleSelect_C.Delay Display Role Info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRoleSettings*         RoleReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleSelect_C::Delay_Display_Role_Info(class USQRoleSettings* RoleReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleSelect.W_RoleSelect_C.Delay Display Role Info");

	UW_RoleSelect_C_Delay_Display_Role_Info_Params params;
	params.RoleReference = RoleReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleSelect.W_RoleSelect_C.Draw Role Info
// (BlueprintCallable, BlueprintEvent)
void UW_RoleSelect_C::Draw_Role_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleSelect.W_RoleSelect_C.Draw Role Info");

	UW_RoleSelect_C_Draw_Role_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleSelect.W_RoleSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_RoleSelect_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleSelect.W_RoleSelect_C.Construct");

	UW_RoleSelect_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleSelect.W_RoleSelect_C.Refresh
// (BlueprintCallable, BlueprintEvent)
void UW_RoleSelect_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleSelect.W_RoleSelect_C.Refresh");

	UW_RoleSelect_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleSelect.W_RoleSelect_C.Show Current Role
// (BlueprintCallable, BlueprintEvent)
void UW_RoleSelect_C::Show_Current_Role()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleSelect.W_RoleSelect_C.Show Current Role");

	UW_RoleSelect_C_Show_Current_Role_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleSelect.W_RoleSelect_C.Set Role
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRoleSettings*         New_Role                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleSelect_C::Set_Role(class USQRoleSettings* New_Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleSelect.W_RoleSelect_C.Set Role");

	UW_RoleSelect_C_Set_Role_Params params;
	params.New_Role = New_Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleSelect.W_RoleSelect_C.Destroy R2T
// (BlueprintCallable, BlueprintEvent)
void UW_RoleSelect_C::Destroy_R2T()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleSelect.W_RoleSelect_C.Destroy R2T");

	UW_RoleSelect_C_Destroy_R2T_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleSelect.W_RoleSelect_C.Roles Refreshed Set Bindings
// (BlueprintCallable, BlueprintEvent)
void UW_RoleSelect_C::Roles_Refreshed_Set_Bindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleSelect.W_RoleSelect_C.Roles Refreshed Set Bindings");

	UW_RoleSelect_C_Roles_Refreshed_Set_Bindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleSelect.W_RoleSelect_C.New Role Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRoleSettings*         Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleSelect_C::New_Role_Selected(class USQRoleSettings* Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleSelect.W_RoleSelect_C.New Role Selected");

	UW_RoleSelect_C_New_Role_Selected_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleSelect.W_RoleSelect_C.New Role Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRoleSettings*         Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Hovered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_RoleSelect_C::New_Role_Hovered(class USQRoleSettings* Role, bool Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleSelect.W_RoleSelect_C.New Role Hovered");

	UW_RoleSelect_C_New_Role_Hovered_Params params;
	params.Role = Role;
	params.Hovered = Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleSelect.W_RoleSelect_C.ExecuteUbergraph_W_RoleSelect
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleSelect_C::ExecuteUbergraph_W_RoleSelect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleSelect.W_RoleSelect_C.ExecuteUbergraph_W_RoleSelect");

	UW_RoleSelect_C_ExecuteUbergraph_W_RoleSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleSelect.W_RoleSelect_C.Role Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_RoleSelect_C::Role_Selected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleSelect.W_RoleSelect_C.Role Selected__DelegateSignature");

	UW_RoleSelect_C_Role_Selected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
