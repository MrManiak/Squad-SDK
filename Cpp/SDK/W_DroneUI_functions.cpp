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

// Function W_DroneUI.W_DroneUI_C.Set Pitch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_DroneUI_C::Set_Pitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DroneUI.W_DroneUI_C.Set Pitch");

	UW_DroneUI_C_Set_Pitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DroneUI.W_DroneUI_C.Set Elevation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_DroneUI_C::Set_Elevation()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DroneUI.W_DroneUI_C.Set Elevation");

	UW_DroneUI_C_Set_Elevation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DroneUI.W_DroneUI_C.Set Time
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_DroneUI_C::Set_Time()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DroneUI.W_DroneUI_C.Set Time");

	UW_DroneUI_C_Set_Time_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DroneUI.W_DroneUI_C.Set Grid Ref
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_DroneUI_C::Set_Grid_Ref()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DroneUI.W_DroneUI_C.Set Grid Ref");

	UW_DroneUI_C_Set_Grid_Ref_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DroneUI.W_DroneUI_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DroneUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DroneUI.W_DroneUI_C.Tick");

	UW_DroneUI_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DroneUI.W_DroneUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_DroneUI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DroneUI.W_DroneUI_C.Construct");

	UW_DroneUI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_DroneUI.W_DroneUI_C.ExecuteUbergraph_W_DroneUI
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_DroneUI_C::ExecuteUbergraph_W_DroneUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_DroneUI.W_DroneUI_C.ExecuteUbergraph_W_DroneUI");

	UW_DroneUI_C_ExecuteUbergraph_W_DroneUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
