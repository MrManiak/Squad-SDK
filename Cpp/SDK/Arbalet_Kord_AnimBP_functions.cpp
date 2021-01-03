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

// Function Arbalet_Kord_AnimBP.Arbalet_Kord_AnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UArbalet_Kord_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function Arbalet_Kord_AnimBP.Arbalet_Kord_AnimBP_C.AnimGraph");

	UArbalet_Kord_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function Arbalet_Kord_AnimBP.Arbalet_Kord_AnimBP_C.ExecuteUbergraph_Arbalet_Kord_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UArbalet_Kord_AnimBP_C::ExecuteUbergraph_Arbalet_Kord_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Arbalet_Kord_AnimBP.Arbalet_Kord_AnimBP_C.ExecuteUbergraph_Arbalet_Kord_AnimBP");

	UArbalet_Kord_AnimBP_C_ExecuteUbergraph_Arbalet_Kord_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
