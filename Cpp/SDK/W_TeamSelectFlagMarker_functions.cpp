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

// Function W_TeamSelectFlagMarker.W_TeamSelectFlagMarker_C.Update flag text
// (Public, BlueprintCallable, BlueprintEvent)
void UW_TeamSelectFlagMarker_C::Update_flag_text()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamSelectFlagMarker.W_TeamSelectFlagMarker_C.Update flag text");

	UW_TeamSelectFlagMarker_C_Update_flag_text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamSelectFlagMarker.W_TeamSelectFlagMarker_C.UpdateFlagImage
// (Public, BlueprintCallable, BlueprintEvent)
void UW_TeamSelectFlagMarker_C::UpdateFlagImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamSelectFlagMarker.W_TeamSelectFlagMarker_C.UpdateFlagImage");

	UW_TeamSelectFlagMarker_C_UpdateFlagImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamSelectFlagMarker.W_TeamSelectFlagMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_TeamSelectFlagMarker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamSelectFlagMarker.W_TeamSelectFlagMarker_C.Construct");

	UW_TeamSelectFlagMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamSelectFlagMarker.W_TeamSelectFlagMarker_C.ExecuteUbergraph_W_TeamSelectFlagMarker
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TeamSelectFlagMarker_C::ExecuteUbergraph_W_TeamSelectFlagMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamSelectFlagMarker.W_TeamSelectFlagMarker_C.ExecuteUbergraph_W_TeamSelectFlagMarker");

	UW_TeamSelectFlagMarker_C_ExecuteUbergraph_W_TeamSelectFlagMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamSelectFlagMarker.W_TeamSelectFlagMarker_C.CloseTooltip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_TeamSelectFlagMarker_C::CloseTooltip__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamSelectFlagMarker.W_TeamSelectFlagMarker_C.CloseTooltip__DelegateSignature");

	UW_TeamSelectFlagMarker_C_CloseTooltip__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
