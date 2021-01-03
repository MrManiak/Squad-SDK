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

// Function BP_PlayerSoundStateButton.BP_PlayerSoundStateButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PlayerSoundStateButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerSoundStateButton.BP_PlayerSoundStateButton_C.PreConstruct");

	UBP_PlayerSoundStateButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerSoundStateButton.BP_PlayerSoundStateButton_C.ExecuteUbergraph_BP_PlayerSoundStateButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PlayerSoundStateButton_C::ExecuteUbergraph_BP_PlayerSoundStateButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerSoundStateButton.BP_PlayerSoundStateButton_C.ExecuteUbergraph_BP_PlayerSoundStateButton");

	UBP_PlayerSoundStateButton_C_ExecuteUbergraph_BP_PlayerSoundStateButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
