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

// Function BP_ChangeRoleAction.BP_ChangeRoleAction_C.Is Role Available
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USQRoleSettings*         Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Available                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ChangeRoleAction_C::Is_Role_Available(class APlayerController* Player, class USQRoleSettings* Role, bool* Available)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChangeRoleAction.BP_ChangeRoleAction_C.Is Role Available");

	UBP_ChangeRoleAction_C_Is_Role_Available_Params params;
	params.Player = Player;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Available != nullptr)
		*Available = params.Available;

}


// Function BP_ChangeRoleAction.BP_ChangeRoleAction_C.Change role from Rearm Source
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRoleSettings*         NewRole                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseRadialMenu_C*       Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ChangeRoleAction_C::Change_role_from_Rearm_Source(class USQRoleSettings* NewRole, class APlayerController* Player, class UBaseRadialMenu_C* Radial, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChangeRoleAction.BP_ChangeRoleAction_C.Change role from Rearm Source");

	UBP_ChangeRoleAction_C_Change_role_from_Rearm_Source_Params params;
	params.NewRole = NewRole;
	params.Player = Player;
	params.Radial = Radial;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ChangeRoleAction.BP_ChangeRoleAction_C.ChangeRole
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USQRoleSettings*         Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ChangeRoleAction_C::ChangeRole(class UBaseRadialMenu_C* Radial, class USQRoleSettings* Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChangeRoleAction.BP_ChangeRoleAction_C.ChangeRole");

	UBP_ChangeRoleAction_C_ChangeRole_Params params;
	params.Radial = Radial;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ChangeRoleAction.BP_ChangeRoleAction_C.ExecuteUbergraph_BP_ChangeRoleAction
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ChangeRoleAction_C::ExecuteUbergraph_BP_ChangeRoleAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChangeRoleAction.BP_ChangeRoleAction_C.ExecuteUbergraph_BP_ChangeRoleAction");

	UBP_ChangeRoleAction_C_ExecuteUbergraph_BP_ChangeRoleAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
