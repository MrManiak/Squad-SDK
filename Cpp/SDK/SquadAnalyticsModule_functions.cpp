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

// Function SquadAnalyticsModule.SQGABlueprintLibrary.RecordEvent
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USQGABlueprintLibrary::STATIC_RecordEvent(const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadAnalyticsModule.SQGABlueprintLibrary.RecordEvent");

	USQGABlueprintLibrary_RecordEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
