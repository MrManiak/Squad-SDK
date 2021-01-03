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

// Function W_SQMapVerticalBar.W_SQMapVerticalBar_C.Configure
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GridLines                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapVerticalBar_C::Configure(float GridLines)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapVerticalBar.W_SQMapVerticalBar_C.Configure");

	UW_SQMapVerticalBar_C_Configure_Params params;
	params.GridLines = GridLines;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapVerticalBar.W_SQMapVerticalBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SQMapVerticalBar_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapVerticalBar.W_SQMapVerticalBar_C.PreConstruct");

	UW_SQMapVerticalBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SQMapVerticalBar.W_SQMapVerticalBar_C.ExecuteUbergraph_W_SQMapVerticalBar
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SQMapVerticalBar_C::ExecuteUbergraph_W_SQMapVerticalBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SQMapVerticalBar.W_SQMapVerticalBar_C.ExecuteUbergraph_W_SQMapVerticalBar");

	UW_SQMapVerticalBar_C_ExecuteUbergraph_W_SQMapVerticalBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
