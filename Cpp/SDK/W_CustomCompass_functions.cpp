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

// Function W_CustomCompass.W_CustomCompass_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_CustomCompass_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CustomCompass.W_CustomCompass_C.Construct");

	UW_CustomCompass_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CustomCompass.W_CustomCompass_C.BPInit
// (Event, Public, BlueprintEvent)
void UW_CustomCompass_C::BPInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CustomCompass.W_CustomCompass_C.BPInit");

	UW_CustomCompass_C_BPInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CustomCompass.W_CustomCompass_C.ExecuteUbergraph_W_CustomCompass
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CustomCompass_C::ExecuteUbergraph_W_CustomCompass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CustomCompass.W_CustomCompass_C.ExecuteUbergraph_W_CustomCompass");

	UW_CustomCompass_C_ExecuteUbergraph_W_CustomCompass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
