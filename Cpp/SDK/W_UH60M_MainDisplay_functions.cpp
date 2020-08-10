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

// Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.Set Owning Vehicle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Generic_Helicopter_C* OwningVehicle                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_UH60M_MainDisplay_C::Set_Owning_Vehicle(class ABP_Generic_Helicopter_C* OwningVehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.Set Owning Vehicle");

	UW_UH60M_MainDisplay_C_Set_Owning_Vehicle_Params params;
	params.OwningVehicle = OwningVehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.Refresh HelicopterDisplay
// (BlueprintCallable, BlueprintEvent)
void UW_UH60M_MainDisplay_C::Refresh_HelicopterDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.Refresh HelicopterDisplay");

	UW_UH60M_MainDisplay_C_Refresh_HelicopterDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.Update TAXI
// (BlueprintCallable, BlueprintEvent)
void UW_UH60M_MainDisplay_C::Update_TAXI()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.Update TAXI");

	UW_UH60M_MainDisplay_C_Update_TAXI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.Update MainDisplay
// (BlueprintCallable, BlueprintEvent)
void UW_UH60M_MainDisplay_C::Update_MainDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.Update MainDisplay");

	UW_UH60M_MainDisplay_C_Update_MainDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.Update RPM
// (BlueprintCallable, BlueprintEvent)
void UW_UH60M_MainDisplay_C::Update_RPM()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.Update RPM");

	UW_UH60M_MainDisplay_C_Update_RPM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.Screen On
// (BlueprintCallable, BlueprintEvent)
void UW_UH60M_MainDisplay_C::Screen_On()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.Screen On");

	UW_UH60M_MainDisplay_C_Screen_On_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.Screen Off
// (BlueprintCallable, BlueprintEvent)
void UW_UH60M_MainDisplay_C::Screen_Off()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.Screen Off");

	UW_UH60M_MainDisplay_C_Screen_Off_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.Manage Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Can_Update                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_UH60M_MainDisplay_C::Manage_Update(bool Can_Update)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.Manage Update");

	UW_UH60M_MainDisplay_C_Manage_Update_Params params;
	params.Can_Update = Can_Update;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.ExecuteUbergraph_W_UH60M_MainDisplay
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_UH60M_MainDisplay_C::ExecuteUbergraph_W_UH60M_MainDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UH60M_MainDisplay.W_UH60M_MainDisplay_C.ExecuteUbergraph_W_UH60M_MainDisplay");

	UW_UH60M_MainDisplay_C_ExecuteUbergraph_W_UH60M_MainDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
