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

// Function BP_BackBlastShockWave.BP_BackBlastShockWave_C.BackBlastShockWave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BackBlastShockWave_C::BackBlastShockWave(class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BackBlastShockWave.BP_BackBlastShockWave_C.BackBlastShockWave");

	ABP_BackBlastShockWave_C_BackBlastShockWave_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BackBlastShockWave.BP_BackBlastShockWave_C.Explode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BackBlastShockWave_C::Explode(class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BackBlastShockWave.BP_BackBlastShockWave_C.Explode");

	ABP_BackBlastShockWave_C_Explode_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BackBlastShockWave.BP_BackBlastShockWave_C.ExecuteUbergraph_BP_BackBlastShockWave
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BackBlastShockWave_C::ExecuteUbergraph_BP_BackBlastShockWave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BackBlastShockWave.BP_BackBlastShockWave_C.ExecuteUbergraph_BP_BackBlastShockWave");

	ABP_BackBlastShockWave_C_ExecuteUbergraph_BP_BackBlastShockWave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
