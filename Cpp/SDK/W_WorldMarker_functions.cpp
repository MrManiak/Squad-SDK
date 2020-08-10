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

// Function W_WorldMarker.W_WorldMarker_C.ADS
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           In_ADS                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_WorldMarker_C::ADS(bool* In_ADS)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WorldMarker.W_WorldMarker_C.ADS");

	UW_WorldMarker_C_ADS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (In_ADS != nullptr)
		*In_ADS = params.In_ADS;

}


// Function W_WorldMarker.W_WorldMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_WorldMarker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WorldMarker.W_WorldMarker_C.Construct");

	UW_WorldMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_WorldMarker.W_WorldMarker_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_WorldMarker_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WorldMarker.W_WorldMarker_C.Tick");

	UW_WorldMarker_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_WorldMarker.W_WorldMarker_C.End
// (BlueprintCallable, BlueprintEvent)
void UW_WorldMarker_C::End()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WorldMarker.W_WorldMarker_C.End");

	UW_WorldMarker_C_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_WorldMarker.W_WorldMarker_C.ExecuteUbergraph_W_WorldMarker
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_WorldMarker_C::ExecuteUbergraph_W_WorldMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WorldMarker.W_WorldMarker_C.ExecuteUbergraph_W_WorldMarker");

	UW_WorldMarker_C_ExecuteUbergraph_W_WorldMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
