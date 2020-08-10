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

// Function W_RoleGroup.W_RoleGroup_C.Get Role Panel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPanelWidget*            RoleBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleGroup_C::Get_Role_Panel(class UPanelWidget** RoleBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleGroup.W_RoleGroup_C.Get Role Panel");

	UW_RoleGroup_C_Get_Role_Panel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RoleBox != nullptr)
		*RoleBox = params.RoleBox;

}


// Function W_RoleGroup.W_RoleGroup_C.Populate List
// (Public, BlueprintCallable, BlueprintEvent)
void UW_RoleGroup_C::Populate_List()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleGroup.W_RoleGroup_C.Populate List");

	UW_RoleGroup_C_Populate_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleGroup.W_RoleGroup_C.Get Role in List?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USQRoleSettings*         Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Exists_                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_RoleGroup_C::Get_Role_in_List_(class USQRoleSettings* Target, bool* Exists_)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleGroup.W_RoleGroup_C.Get Role in List?");

	UW_RoleGroup_C_Get_Role_in_List__Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Exists_ != nullptr)
		*Exists_ = params.Exists_;

}


// Function W_RoleGroup.W_RoleGroup_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_RoleGroup_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleGroup.W_RoleGroup_C.PreConstruct");

	UW_RoleGroup_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleGroup.W_RoleGroup_C.Init Group Roles
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQPlayerController*     My_PC                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQPlayerState*          My_PS                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQTeamState*            My_TS                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_RoleList_C*           Role_List                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleGroup_C::Init_Group_Roles(class ASQPlayerController* My_PC, class ASQPlayerState* My_PS, class ASQTeamState* My_TS, class UW_RoleList_C* Role_List)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleGroup.W_RoleGroup_C.Init Group Roles");

	UW_RoleGroup_C_Init_Group_Roles_Params params;
	params.My_PC = My_PC;
	params.My_PS = My_PS;
	params.My_TS = My_TS;
	params.Role_List = Role_List;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_RoleGroup.W_RoleGroup_C.ExecuteUbergraph_W_RoleGroup
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RoleGroup_C::ExecuteUbergraph_W_RoleGroup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_RoleGroup.W_RoleGroup_C.ExecuteUbergraph_W_RoleGroup");

	UW_RoleGroup_C_ExecuteUbergraph_W_RoleGroup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
