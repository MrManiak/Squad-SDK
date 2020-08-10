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

// Function BP_Shockwave.BP_Shockwave_C.SpawnEmitterAtTraceIntersect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartTrace                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 EndTrace                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Shockwave_C::SpawnEmitterAtTraceIntersect(const struct FVector& StartTrace, const struct FVector& EndTrace, class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shockwave.BP_Shockwave_C.SpawnEmitterAtTraceIntersect");

	ABP_Shockwave_C_SpawnEmitterAtTraceIntersect_Params params;
	params.StartTrace = StartTrace;
	params.EndTrace = EndTrace;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shockwave.BP_Shockwave_C.ConvertStepsToLoops
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Steps                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PositiveInt                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NegativeInt                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Shockwave_C::ConvertStepsToLoops(int Steps, int* PositiveInt, int* NegativeInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shockwave.BP_Shockwave_C.ConvertStepsToLoops");

	ABP_Shockwave_C_ConvertStepsToLoops_Params params;
	params.Steps = Steps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PositiveInt != nullptr)
		*PositiveInt = params.PositiveInt;
	if (NegativeInt != nullptr)
		*NegativeInt = params.NegativeInt;

}


// Function BP_Shockwave.BP_Shockwave_C.Explode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Shockwave_C::Explode(class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shockwave.BP_Shockwave_C.Explode");

	ABP_Shockwave_C_Explode_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shockwave.BP_Shockwave_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Shockwave_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shockwave.BP_Shockwave_C.ReceiveBeginPlay");

	ABP_Shockwave_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shockwave.BP_Shockwave_C.ExecuteUbergraph_BP_Shockwave
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Shockwave_C::ExecuteUbergraph_BP_Shockwave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shockwave.BP_Shockwave_C.ExecuteUbergraph_BP_Shockwave");

	ABP_Shockwave_C_ExecuteUbergraph_BP_Shockwave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
