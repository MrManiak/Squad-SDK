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

// Function SmokeGenerator_Tracked.SmokeGenerator_Tracked_C.SetupParticleSystem
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASmokeGenerator_Tracked_C::SetupParticleSystem(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGenerator_Tracked.SmokeGenerator_Tracked_C.SetupParticleSystem");

	ASmokeGenerator_Tracked_C_SetupParticleSystem_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SmokeGenerator_Tracked.SmokeGenerator_Tracked_C.ExecuteUbergraph_SmokeGenerator_Tracked
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASmokeGenerator_Tracked_C::ExecuteUbergraph_SmokeGenerator_Tracked(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGenerator_Tracked.SmokeGenerator_Tracked_C.ExecuteUbergraph_SmokeGenerator_Tracked");

	ASmokeGenerator_Tracked_C_ExecuteUbergraph_SmokeGenerator_Tracked_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
