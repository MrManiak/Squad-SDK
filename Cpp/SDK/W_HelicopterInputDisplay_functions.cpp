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

// Function W_HelicopterInputDisplay.W_HelicopterInputDisplay_C.InitializeMeter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USQHelicopterInstruments> ParentVehicle                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_HelicopterInputDisplay_C::InitializeMeter(const TScriptInterface<class USQHelicopterInstruments>& ParentVehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HelicopterInputDisplay.W_HelicopterInputDisplay_C.InitializeMeter");

	UW_HelicopterInputDisplay_C_InitializeMeter_Params params;
	params.ParentVehicle = ParentVehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HelicopterInputDisplay.W_HelicopterInputDisplay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HelicopterInputDisplay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HelicopterInputDisplay.W_HelicopterInputDisplay_C.Tick");

	UW_HelicopterInputDisplay_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HelicopterInputDisplay.W_HelicopterInputDisplay_C.ExecuteUbergraph_W_HelicopterInputDisplay
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HelicopterInputDisplay_C::ExecuteUbergraph_W_HelicopterInputDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HelicopterInputDisplay.W_HelicopterInputDisplay_C.ExecuteUbergraph_W_HelicopterInputDisplay");

	UW_HelicopterInputDisplay_C_ExecuteUbergraph_W_HelicopterInputDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
