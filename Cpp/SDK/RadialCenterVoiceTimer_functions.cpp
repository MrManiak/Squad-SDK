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

// Function RadialCenterVoiceTimer.RadialCenterVoiceTimer_C.OnHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
void URadialCenterVoiceTimer_C::OnHoverBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterVoiceTimer.RadialCenterVoiceTimer_C.OnHoverBegin");

	URadialCenterVoiceTimer_C_OnHoverBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterVoiceTimer.RadialCenterVoiceTimer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void URadialCenterVoiceTimer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterVoiceTimer.RadialCenterVoiceTimer_C.Construct");

	URadialCenterVoiceTimer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterVoiceTimer.RadialCenterVoiceTimer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadialCenterVoiceTimer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterVoiceTimer.RadialCenterVoiceTimer_C.Tick");

	URadialCenterVoiceTimer_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RadialCenterVoiceTimer.RadialCenterVoiceTimer_C.ExecuteUbergraph_RadialCenterVoiceTimer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadialCenterVoiceTimer_C::ExecuteUbergraph_RadialCenterVoiceTimer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialCenterVoiceTimer.RadialCenterVoiceTimer_C.ExecuteUbergraph_RadialCenterVoiceTimer");

	URadialCenterVoiceTimer_C_ExecuteUbergraph_RadialCenterVoiceTimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
