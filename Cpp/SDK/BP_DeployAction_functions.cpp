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

// Function BP_DeployAction.BP_DeployAction_C.DoAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  Deployable                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DeployAction_C::DoAction(class UBaseRadialMenu_C* Radial, class UClass* Deployable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployAction.BP_DeployAction_C.DoAction");

	UBP_DeployAction_C_DoAction_Params params;
	params.Radial = Radial;
	params.Deployable = Deployable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DeployAction.BP_DeployAction_C.ExecuteUbergraph_BP_DeployAction
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DeployAction_C::ExecuteUbergraph_BP_DeployAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeployAction.BP_DeployAction_C.ExecuteUbergraph_BP_DeployAction");

	UBP_DeployAction_C_ExecuteUbergraph_BP_DeployAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
