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

// Function BP_GenericMelee.BP_GenericMelee_C.BlueprintOnFire
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Origin                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericMelee_C::BlueprintOnFire(const struct FVector& Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericMelee.BP_GenericMelee_C.BlueprintOnFire");

	ABP_GenericMelee_C_BlueprintOnFire_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericMelee.BP_GenericMelee_C.PlayImpactEffect
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSQPenetrationTrace     ImpactHit                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
// bool                           bIsProjectileTracer            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GenericMelee_C::PlayImpactEffect(const struct FSQPenetrationTrace& ImpactHit, bool bIsProjectileTracer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericMelee.BP_GenericMelee_C.PlayImpactEffect");

	ABP_GenericMelee_C_PlayImpactEffect_Params params;
	params.ImpactHit = ImpactHit;
	params.bIsProjectileTracer = bIsProjectileTracer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericMelee.BP_GenericMelee_C.ExecuteUbergraph_BP_GenericMelee
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericMelee_C::ExecuteUbergraph_BP_GenericMelee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericMelee.BP_GenericMelee_C.ExecuteUbergraph_BP_GenericMelee");

	ABP_GenericMelee_C_ExecuteUbergraph_BP_GenericMelee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
