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

// Function BP_DynamicRoleChangeModel.BP_DynamicRoleChangeModel_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DynamicRoleChangeModel_C::OnClicked(class UBaseRadialMenu_C* Radial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicRoleChangeModel.BP_DynamicRoleChangeModel_C.OnClicked");

	UBP_DynamicRoleChangeModel_C_OnClicked_Params params;
	params.Radial = Radial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DynamicRoleChangeModel.BP_DynamicRoleChangeModel_C.Set Role
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQRoleSettings*         Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DynamicRoleChangeModel_C::Set_Role(class USQRoleSettings* Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicRoleChangeModel.BP_DynamicRoleChangeModel_C.Set Role");

	UBP_DynamicRoleChangeModel_C_Set_Role_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DynamicRoleChangeModel.BP_DynamicRoleChangeModel_C.ExecuteUbergraph_BP_DynamicRoleChangeModel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DynamicRoleChangeModel_C::ExecuteUbergraph_BP_DynamicRoleChangeModel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicRoleChangeModel.BP_DynamicRoleChangeModel_C.ExecuteUbergraph_BP_DynamicRoleChangeModel");

	UBP_DynamicRoleChangeModel_C_ExecuteUbergraph_BP_DynamicRoleChangeModel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
