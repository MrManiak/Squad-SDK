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

// Function BP_ChangeRoleActionx.BP_ChangeRoleActionx_C.ChangeRole
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USQRoleSettings*         Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ChangeRoleActionx_C::ChangeRole(class UBaseRadialMenu_C* Radial, class USQRoleSettings* Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChangeRoleActionx.BP_ChangeRoleActionx_C.ChangeRole");

	UBP_ChangeRoleActionx_C_ChangeRole_Params params;
	params.Radial = Radial;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ChangeRoleActionx.BP_ChangeRoleActionx_C.ExecuteUbergraph_BP_ChangeRoleActionx
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ChangeRoleActionx_C::ExecuteUbergraph_BP_ChangeRoleActionx(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChangeRoleActionx.BP_ChangeRoleActionx_C.ExecuteUbergraph_BP_ChangeRoleActionx");

	UBP_ChangeRoleActionx_C_ExecuteUbergraph_BP_ChangeRoleActionx_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
