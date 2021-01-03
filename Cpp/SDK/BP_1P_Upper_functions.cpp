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

// Function BP_1P_Upper.BP_1P_Upper_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UBP_1P_Upper_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_1P_Upper.BP_1P_Upper_C.AnimGraph");

	UBP_1P_Upper_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function BP_1P_Upper.BP_1P_Upper_C.AnimNotify_1PDetachLeftHand
// (BlueprintCallable, BlueprintEvent)
void UBP_1P_Upper_C::AnimNotify_1PDetachLeftHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_1P_Upper.BP_1P_Upper_C.AnimNotify_1PDetachLeftHand");

	UBP_1P_Upper_C_AnimNotify_1PDetachLeftHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_1P_Upper.BP_1P_Upper_C.AnimNotify_1PAttachLeftHand
// (BlueprintCallable, BlueprintEvent)
void UBP_1P_Upper_C::AnimNotify_1PAttachLeftHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_1P_Upper.BP_1P_Upper_C.AnimNotify_1PAttachLeftHand");

	UBP_1P_Upper_C_AnimNotify_1PAttachLeftHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_1P_Upper.BP_1P_Upper_C.OnVaultClimbStop
// (Event, Public, BlueprintEvent)
void UBP_1P_Upper_C::OnVaultClimbStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_1P_Upper.BP_1P_Upper_C.OnVaultClimbStop");

	UBP_1P_Upper_C_OnVaultClimbStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_1P_Upper.BP_1P_Upper_C.ExecuteUbergraph_BP_1P_Upper
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_1P_Upper_C::ExecuteUbergraph_BP_1P_Upper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_1P_Upper.BP_1P_Upper_C.ExecuteUbergraph_BP_1P_Upper");

	UBP_1P_Upper_C_ExecuteUbergraph_BP_1P_Upper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
