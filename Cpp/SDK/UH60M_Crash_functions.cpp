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

// Function UH60M_Crash.UH60M_Crash_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AUH60M_Crash_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UH60M_Crash.UH60M_Crash_C.ReceiveBeginPlay");

	AUH60M_Crash_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UH60M_Crash.UH60M_Crash_C.BndEvt__FrontTrail_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AUH60M_Crash_C::BndEvt__FrontTrail_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UH60M_Crash.UH60M_Crash_C.BndEvt__FrontTrail_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature");

	AUH60M_Crash_C_BndEvt__FrontTrail_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.Location = Location;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UH60M_Crash.UH60M_Crash_C.ExecuteUbergraph_UH60M_Crash
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AUH60M_Crash_C::ExecuteUbergraph_UH60M_Crash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UH60M_Crash.UH60M_Crash_C.ExecuteUbergraph_UH60M_Crash");

	AUH60M_Crash_C_ExecuteUbergraph_UH60M_Crash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
