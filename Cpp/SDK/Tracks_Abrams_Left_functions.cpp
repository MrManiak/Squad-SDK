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

// Function Tracks_Abrams_Left.Tracks_Abrams_Left_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATracks_Abrams_Left_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tracks_Abrams_Left.Tracks_Abrams_Left_C.ReceiveBeginPlay");

	ATracks_Abrams_Left_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tracks_Abrams_Left.Tracks_Abrams_Left_C.ExecuteUbergraph_Tracks_Abrams_Left
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATracks_Abrams_Left_C::ExecuteUbergraph_Tracks_Abrams_Left(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tracks_Abrams_Left.Tracks_Abrams_Left_C.ExecuteUbergraph_Tracks_Abrams_Left");

	ATracks_Abrams_Left_C_ExecuteUbergraph_Tracks_Abrams_Left_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
