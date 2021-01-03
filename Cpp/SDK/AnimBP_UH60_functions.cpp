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

// Function AnimBP_UH60.AnimBP_UH60_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UAnimBP_UH60_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_UH60.AnimBP_UH60_C.AnimGraph");

	UAnimBP_UH60_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function AnimBP_UH60.AnimBP_UH60_C.GetBladesScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Generic_Helicopter_C* Helicopter                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Main                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Blades                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 BlurBlades                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAnimBP_UH60_C::GetBladesScale(class ABP_Generic_Helicopter_C* Helicopter, bool Main, struct FVector* Blades, struct FVector* BlurBlades)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_UH60.AnimBP_UH60_C.GetBladesScale");

	UAnimBP_UH60_C_GetBladesScale_Params params;
	params.Helicopter = Helicopter;
	params.Main = Main;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Blades != nullptr)
		*Blades = params.Blades;
	if (BlurBlades != nullptr)
		*BlurBlades = params.BlurBlades;

}


// Function AnimBP_UH60.AnimBP_UH60_C.RPMtoDegPerSec
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          RPM                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           MainRotor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_UH60_C*              Helicopter                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DegPerSec                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAnimBP_UH60_C::RPMtoDegPerSec(float RPM, bool MainRotor, class ABP_UH60_C* Helicopter, float* DegPerSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_UH60.AnimBP_UH60_C.RPMtoDegPerSec");

	UAnimBP_UH60_C_RPMtoDegPerSec_Params params;
	params.RPM = RPM;
	params.MainRotor = MainRotor;
	params.Helicopter = Helicopter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DegPerSec != nullptr)
		*DegPerSec = params.DegPerSec;

}


// Function AnimBP_UH60.AnimBP_UH60_C.GetCurrentRotorRPM
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_Generic_Helicopter_C* Helicopter                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Main                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          RPM                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAnimBP_UH60_C::GetCurrentRotorRPM(class ABP_Generic_Helicopter_C* Helicopter, bool Main, float* RPM)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_UH60.AnimBP_UH60_C.GetCurrentRotorRPM");

	UAnimBP_UH60_C_GetCurrentRotorRPM_Params params;
	params.Helicopter = Helicopter;
	params.Main = Main;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RPM != nullptr)
		*RPM = params.RPM;

}


// Function AnimBP_UH60.AnimBP_UH60_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAnimBP_UH60_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_UH60.AnimBP_UH60_C.BlueprintUpdateAnimation");

	UAnimBP_UH60_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimBP_UH60.AnimBP_UH60_C.ExecuteUbergraph_AnimBP_UH60
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAnimBP_UH60_C::ExecuteUbergraph_AnimBP_UH60(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_UH60.AnimBP_UH60_C.ExecuteUbergraph_AnimBP_UH60");

	UAnimBP_UH60_C_ExecuteUbergraph_AnimBP_UH60_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
