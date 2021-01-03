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

// Function W_MapMarker_Frontline.W_MapMarker_Frontline_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_MapMarker_Frontline_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapMarker_Frontline.W_MapMarker_Frontline_C.Construct");

	UW_MapMarker_Frontline_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MapMarker_Frontline.W_MapMarker_Frontline_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MapMarker_Frontline_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapMarker_Frontline.W_MapMarker_Frontline_C.Tick");

	UW_MapMarker_Frontline_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MapMarker_Frontline.W_MapMarker_Frontline_C.Update Tiling
// (BlueprintCallable, BlueprintEvent)
void UW_MapMarker_Frontline_C::Update_Tiling()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapMarker_Frontline.W_MapMarker_Frontline_C.Update Tiling");

	UW_MapMarker_Frontline_C_Update_Tiling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MapMarker_Frontline.W_MapMarker_Frontline_C.OnTintChanged
// (Event, Protected, BlueprintEvent)
void UW_MapMarker_Frontline_C::OnTintChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapMarker_Frontline.W_MapMarker_Frontline_C.OnTintChanged");

	UW_MapMarker_Frontline_C_OnTintChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MapMarker_Frontline.W_MapMarker_Frontline_C.Init Director Marker
// (BlueprintCallable, BlueprintEvent)
void UW_MapMarker_Frontline_C::Init_Director_Marker()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapMarker_Frontline.W_MapMarker_Frontline_C.Init Director Marker");

	UW_MapMarker_Frontline_C_Init_Director_Marker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MapMarker_Frontline.W_MapMarker_Frontline_C.Update Size
// (Public, BlueprintCallable, BlueprintEvent)
void UW_MapMarker_Frontline_C::Update_Size()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapMarker_Frontline.W_MapMarker_Frontline_C.Update Size");

	UW_MapMarker_Frontline_C_Update_Size_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MapMarker_Frontline.W_MapMarker_Frontline_C.ExecuteUbergraph_W_MapMarker_Frontline
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MapMarker_Frontline_C::ExecuteUbergraph_W_MapMarker_Frontline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapMarker_Frontline.W_MapMarker_Frontline_C.ExecuteUbergraph_W_MapMarker_Frontline");

	UW_MapMarker_Frontline_C_ExecuteUbergraph_W_MapMarker_Frontline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
