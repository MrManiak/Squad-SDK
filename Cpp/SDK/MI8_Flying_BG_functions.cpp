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

// Function MI8_Flying_BG.MI8_Flying_BG_C.HeliMovement__FinishedFunc
// (BlueprintEvent)
void AMI8_Flying_BG_C::HeliMovement__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MI8_Flying_BG.MI8_Flying_BG_C.HeliMovement__FinishedFunc");

	AMI8_Flying_BG_C_HeliMovement__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MI8_Flying_BG.MI8_Flying_BG_C.HeliMovement__UpdateFunc
// (BlueprintEvent)
void AMI8_Flying_BG_C::HeliMovement__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MI8_Flying_BG.MI8_Flying_BG_C.HeliMovement__UpdateFunc");

	AMI8_Flying_BG_C_HeliMovement__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MI8_Flying_BG.MI8_Flying_BG_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMI8_Flying_BG_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MI8_Flying_BG.MI8_Flying_BG_C.ReceiveBeginPlay");

	AMI8_Flying_BG_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MI8_Flying_BG.MI8_Flying_BG_C.PlayHelicopter
// (BlueprintCallable, BlueprintEvent)
void AMI8_Flying_BG_C::PlayHelicopter()
{
	static auto fn = UObject::FindObject<UFunction>("Function MI8_Flying_BG.MI8_Flying_BG_C.PlayHelicopter");

	AMI8_Flying_BG_C_PlayHelicopter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MI8_Flying_BG.MI8_Flying_BG_C.ExecuteUbergraph_MI8_Flying_BG
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMI8_Flying_BG_C::ExecuteUbergraph_MI8_Flying_BG(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MI8_Flying_BG.MI8_Flying_BG_C.ExecuteUbergraph_MI8_Flying_BG");

	AMI8_Flying_BG_C_ExecuteUbergraph_MI8_Flying_BG_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
