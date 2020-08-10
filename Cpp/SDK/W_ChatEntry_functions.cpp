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

// Function W_ChatEntry.W_ChatEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_ChatEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatEntry.W_ChatEntry_C.Construct");

	UW_ChatEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatEntry.W_ChatEntry_C.Remove Self
// (BlueprintCallable, BlueprintEvent)
void UW_ChatEntry_C::Remove_Self()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatEntry.W_ChatEntry_C.Remove Self");

	UW_ChatEntry_C_Remove_Self_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChatEntry.W_ChatEntry_C.ExecuteUbergraph_W_ChatEntry
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ChatEntry_C::ExecuteUbergraph_W_ChatEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChatEntry.W_ChatEntry_C.ExecuteUbergraph_W_ChatEntry");

	UW_ChatEntry_C_ExecuteUbergraph_W_ChatEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
