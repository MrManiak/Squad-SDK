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

// Function M1a2_Knockedout.M1a2_Knockedout_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AM1a2_Knockedout_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function M1a2_Knockedout.M1a2_Knockedout_C.ReceiveBeginPlay");

	AM1a2_Knockedout_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function M1a2_Knockedout.M1a2_Knockedout_C.OnBeginDestroyedVehicle
// (Event, Public, BlueprintEvent)
void AM1a2_Knockedout_C::OnBeginDestroyedVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function M1a2_Knockedout.M1a2_Knockedout_C.OnBeginDestroyedVehicle");

	AM1a2_Knockedout_C_OnBeginDestroyedVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function M1a2_Knockedout.M1a2_Knockedout_C.ExecuteUbergraph_M1a2_Knockedout
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AM1a2_Knockedout_C::ExecuteUbergraph_M1a2_Knockedout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function M1a2_Knockedout.M1a2_Knockedout_C.ExecuteUbergraph_M1a2_Knockedout");

	AM1a2_Knockedout_C_ExecuteUbergraph_M1a2_Knockedout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
