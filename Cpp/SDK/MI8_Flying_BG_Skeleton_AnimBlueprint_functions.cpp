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

// Function MI8_Flying_BG_Skeleton_AnimBlueprint.MI8_Flying_BG_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UMI8_Flying_BG_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function MI8_Flying_BG_Skeleton_AnimBlueprint.MI8_Flying_BG_Skeleton_AnimBlueprint_C.AnimGraph");

	UMI8_Flying_BG_Skeleton_AnimBlueprint_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function MI8_Flying_BG_Skeleton_AnimBlueprint.MI8_Flying_BG_Skeleton_AnimBlueprint_C.ExecuteUbergraph_MI8_Flying_BG_Skeleton_AnimBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMI8_Flying_BG_Skeleton_AnimBlueprint_C::ExecuteUbergraph_MI8_Flying_BG_Skeleton_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MI8_Flying_BG_Skeleton_AnimBlueprint.MI8_Flying_BG_Skeleton_AnimBlueprint_C.ExecuteUbergraph_MI8_Flying_BG_Skeleton_AnimBlueprint");

	UMI8_Flying_BG_Skeleton_AnimBlueprint_C_ExecuteUbergraph_MI8_Flying_BG_Skeleton_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
