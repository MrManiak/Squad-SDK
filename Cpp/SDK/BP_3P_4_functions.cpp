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

// Function BP_3P_4.BP_3P_3_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UBP_3P_3_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_3P_4.BP_3P_3_C.AnimGraph");

	UBP_3P_3_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function BP_3P_4.BP_3P_3_C.AnimNotify_DetachLeftHand
// (BlueprintCallable, BlueprintEvent)
void UBP_3P_3_C::AnimNotify_DetachLeftHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_3P_4.BP_3P_3_C.AnimNotify_DetachLeftHand");

	UBP_3P_3_C_AnimNotify_DetachLeftHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_3P_4.BP_3P_3_C.AnimNotify_AttachLeftHand
// (BlueprintCallable, BlueprintEvent)
void UBP_3P_3_C::AnimNotify_AttachLeftHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_3P_4.BP_3P_3_C.AnimNotify_AttachLeftHand");

	UBP_3P_3_C_AnimNotify_AttachLeftHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_3P_4.BP_3P_3_C.AnimNotify_ClothSoundRun
// (BlueprintCallable, BlueprintEvent)
void UBP_3P_3_C::AnimNotify_ClothSoundRun()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_3P_4.BP_3P_3_C.AnimNotify_ClothSoundRun");

	UBP_3P_3_C_AnimNotify_ClothSoundRun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_3P_4.BP_3P_3_C.AnimNotify_EquipmentSoundRun
// (BlueprintCallable, BlueprintEvent)
void UBP_3P_3_C::AnimNotify_EquipmentSoundRun()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_3P_4.BP_3P_3_C.AnimNotify_EquipmentSoundRun");

	UBP_3P_3_C_AnimNotify_EquipmentSoundRun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_3P_4.BP_3P_3_C.AnimNotify_RightFootstep
// (BlueprintCallable, BlueprintEvent)
void UBP_3P_3_C::AnimNotify_RightFootstep()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_3P_4.BP_3P_3_C.AnimNotify_RightFootstep");

	UBP_3P_3_C_AnimNotify_RightFootstep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_3P_4.BP_3P_3_C.AnimNotify_LeftFootstep
// (BlueprintCallable, BlueprintEvent)
void UBP_3P_3_C::AnimNotify_LeftFootstep()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_3P_4.BP_3P_3_C.AnimNotify_LeftFootstep");

	UBP_3P_3_C_AnimNotify_LeftFootstep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_3P_4.BP_3P_3_C.AnimNotify_SprintToPronePhysmat
// (BlueprintCallable, BlueprintEvent)
void UBP_3P_3_C::AnimNotify_SprintToPronePhysmat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_3P_4.BP_3P_3_C.AnimNotify_SprintToPronePhysmat");

	UBP_3P_3_C_AnimNotify_SprintToPronePhysmat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_3P_4.BP_3P_3_C.AnimNotify_VaultLandPhysmat
// (BlueprintCallable, BlueprintEvent)
void UBP_3P_3_C::AnimNotify_VaultLandPhysmat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_3P_4.BP_3P_3_C.AnimNotify_VaultLandPhysmat");

	UBP_3P_3_C_AnimNotify_VaultLandPhysmat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_3P_4.BP_3P_3_C.AnimNotify_ClimbLandPhysmat
// (BlueprintCallable, BlueprintEvent)
void UBP_3P_3_C::AnimNotify_ClimbLandPhysmat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_3P_4.BP_3P_3_C.AnimNotify_ClimbLandPhysmat");

	UBP_3P_3_C_AnimNotify_ClimbLandPhysmat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_3P_4.BP_3P_3_C.AnimNotify_StandTurnPhysmat
// (BlueprintCallable, BlueprintEvent)
void UBP_3P_3_C::AnimNotify_StandTurnPhysmat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_3P_4.BP_3P_3_C.AnimNotify_StandTurnPhysmat");

	UBP_3P_3_C_AnimNotify_StandTurnPhysmat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_3P_4.BP_3P_3_C.AnimNotify_ProneCrawlPhysmat
// (BlueprintCallable, BlueprintEvent)
void UBP_3P_3_C::AnimNotify_ProneCrawlPhysmat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_3P_4.BP_3P_3_C.AnimNotify_ProneCrawlPhysmat");

	UBP_3P_3_C_AnimNotify_ProneCrawlPhysmat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_3P_4.BP_3P_3_C.AnimNotify_GrassRustlePhysmat
// (BlueprintCallable, BlueprintEvent)
void UBP_3P_3_C::AnimNotify_GrassRustlePhysmat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_3P_4.BP_3P_3_C.AnimNotify_GrassRustlePhysmat");

	UBP_3P_3_C_AnimNotify_GrassRustlePhysmat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_3P_4.BP_3P_3_C.OnVaultClimbStop
// (Event, Public, BlueprintEvent)
void UBP_3P_3_C::OnVaultClimbStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_3P_4.BP_3P_3_C.OnVaultClimbStop");

	UBP_3P_3_C_OnVaultClimbStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_3P_4.BP_3P_3_C.AnimNotify_StandToPronePhysmat
// (BlueprintCallable, BlueprintEvent)
void UBP_3P_3_C::AnimNotify_StandToPronePhysmat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_3P_4.BP_3P_3_C.AnimNotify_StandToPronePhysmat");

	UBP_3P_3_C_AnimNotify_StandToPronePhysmat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_3P_4.BP_3P_3_C.AnimNotify_CrouchToPronePhysmat
// (BlueprintCallable, BlueprintEvent)
void UBP_3P_3_C::AnimNotify_CrouchToPronePhysmat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_3P_4.BP_3P_3_C.AnimNotify_CrouchToPronePhysmat");

	UBP_3P_3_C_AnimNotify_CrouchToPronePhysmat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_3P_4.BP_3P_3_C.ExecuteUbergraph_BP_3P_4
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_3P_3_C::ExecuteUbergraph_BP_3P_4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_3P_4.BP_3P_3_C.ExecuteUbergraph_BP_3P_4");

	UBP_3P_3_C_ExecuteUbergraph_BP_3P_4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
