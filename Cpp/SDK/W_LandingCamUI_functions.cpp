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

// Function W_LandingCamUI.W_LandingCamUI_C.Get Helicopter
// (Public, BlueprintCallable, BlueprintEvent)
void UW_LandingCamUI_C::Get_Helicopter()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LandingCamUI.W_LandingCamUI_C.Get Helicopter");

	UW_LandingCamUI_C_Get_Helicopter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LandingCamUI.W_LandingCamUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_LandingCamUI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LandingCamUI.W_LandingCamUI_C.Construct");

	UW_LandingCamUI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LandingCamUI.W_LandingCamUI_C.Refresh HelicopterDisplay
// (BlueprintCallable, BlueprintEvent)
void UW_LandingCamUI_C::Refresh_HelicopterDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LandingCamUI.W_LandingCamUI_C.Refresh HelicopterDisplay");

	UW_LandingCamUI_C_Refresh_HelicopterDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LandingCamUI.W_LandingCamUI_C.Update TAXI
// (BlueprintCallable, BlueprintEvent)
void UW_LandingCamUI_C::Update_TAXI()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LandingCamUI.W_LandingCamUI_C.Update TAXI");

	UW_LandingCamUI_C_Update_TAXI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LandingCamUI.W_LandingCamUI_C.Update MainDisplay
// (BlueprintCallable, BlueprintEvent)
void UW_LandingCamUI_C::Update_MainDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LandingCamUI.W_LandingCamUI_C.Update MainDisplay");

	UW_LandingCamUI_C_Update_MainDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LandingCamUI.W_LandingCamUI_C.Update RPM
// (BlueprintCallable, BlueprintEvent)
void UW_LandingCamUI_C::Update_RPM()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LandingCamUI.W_LandingCamUI_C.Update RPM");

	UW_LandingCamUI_C_Update_RPM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LandingCamUI.W_LandingCamUI_C.Update Roll Pitch Bars
// (BlueprintCallable, BlueprintEvent)
void UW_LandingCamUI_C::Update_Roll_Pitch_Bars()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LandingCamUI.W_LandingCamUI_C.Update Roll Pitch Bars");

	UW_LandingCamUI_C_Update_Roll_Pitch_Bars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_LandingCamUI.W_LandingCamUI_C.ExecuteUbergraph_W_LandingCamUI
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LandingCamUI_C::ExecuteUbergraph_W_LandingCamUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LandingCamUI.W_LandingCamUI_C.ExecuteUbergraph_W_LandingCamUI");

	UW_LandingCamUI_C_ExecuteUbergraph_W_LandingCamUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
