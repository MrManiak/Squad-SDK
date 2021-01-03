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

// Function W_RoleList.W_RoleList_C.Is Current Role Available
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Available                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_RoleList_C::Is_Current_Role_Available(bool* Available)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleList.W_RoleList_C.Is Current Role Available");

	UW_RoleList_C_Is_Current_Role_Available_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Available != nullptr)
		*Available = params.Available;

}


// Function W_RoleList.W_RoleList_C.RefreshRoleList
// (Public, BlueprintCallable, BlueprintEvent)
void UW_RoleList_C::RefreshRoleList()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleList.W_RoleList_C.RefreshRoleList");

	UW_RoleList_C_RefreshRoleList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleList.W_RoleList_C.CreateRoleListWidgetArray
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UW_RoleGroup_C*>  Array                          (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
void UW_RoleList_C::CreateRoleListWidgetArray(TArray<class UW_RoleGroup_C*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleList.W_RoleList_C.CreateRoleListWidgetArray");

	UW_RoleList_C_CreateRoleListWidgetArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function W_RoleList.W_RoleList_C.IsRoleListWidgetValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UW_RoleList_C::IsRoleListWidgetValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleList.W_RoleList_C.IsRoleListWidgetValid");

	UW_RoleList_C_IsRoleListWidgetValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_RoleList.W_RoleList_C.Init Role List
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_RoleList_C::Init_Role_List()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleList.W_RoleList_C.Init Role List");

	UW_RoleList_C_Init_Role_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleList.W_RoleList_C.Validate Entries
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           No_Entries                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_RoleList_C::Validate_Entries(bool* No_Entries)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleList.W_RoleList_C.Validate Entries");

	UW_RoleList_C_Validate_Entries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (No_Entries != nullptr)
		*No_Entries = params.No_Entries;

}


// Function W_RoleList.W_RoleList_C.Cache Role Groups
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_RoleList_C::Cache_Role_Groups(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleList.W_RoleList_C.Cache Role Groups");

	UW_RoleList_C_Cache_Role_Groups_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

}


// Function W_RoleList.W_RoleList_C.Set Refresh Timer Active
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_RoleList_C::Set_Refresh_Timer_Active(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleList.W_RoleList_C.Set Refresh Timer Active");

	UW_RoleList_C_Set_Refresh_Timer_Active_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleList.W_RoleList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_RoleList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleList.W_RoleList_C.Construct");

	UW_RoleList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleList.W_RoleList_C.ExecuteUbergraph_W_RoleList
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleList_C::ExecuteUbergraph_W_RoleList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleList.W_RoleList_C.ExecuteUbergraph_W_RoleList");

	UW_RoleList_C_ExecuteUbergraph_W_RoleList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleList.W_RoleList_C.Roles Refreshed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_RoleList_C::Roles_Refreshed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleList.W_RoleList_C.Roles Refreshed__DelegateSignature");

	UW_RoleList_C_Roles_Refreshed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
