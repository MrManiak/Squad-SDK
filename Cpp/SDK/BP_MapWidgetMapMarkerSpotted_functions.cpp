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

// Function BP_MapWidgetMapMarkerSpotted.BP_MapWidgetMapMarkerSpotted_C.OnTextureChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetMapMarkerSpotted_C::OnTextureChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarkerSpotted.BP_MapWidgetMapMarkerSpotted_C.OnTextureChanged");

	UBP_MapWidgetMapMarkerSpotted_C_OnTextureChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetMapMarkerSpotted.BP_MapWidgetMapMarkerSpotted_C.OnTintChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetMapMarkerSpotted_C::OnTintChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarkerSpotted.BP_MapWidgetMapMarkerSpotted_C.OnTintChanged");

	UBP_MapWidgetMapMarkerSpotted_C_OnTintChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetMapMarkerSpotted.BP_MapWidgetMapMarkerSpotted_C.OnRightClicked
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetMapMarkerSpotted_C::OnRightClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarkerSpotted.BP_MapWidgetMapMarkerSpotted_C.OnRightClicked");

	UBP_MapWidgetMapMarkerSpotted_C_OnRightClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetMapMarkerSpotted.BP_MapWidgetMapMarkerSpotted_C.OnScaleChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          UniformScale                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetMapMarkerSpotted_C::OnScaleChanged(float UniformScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarkerSpotted.BP_MapWidgetMapMarkerSpotted_C.OnScaleChanged");

	UBP_MapWidgetMapMarkerSpotted_C_OnScaleChanged_Params params;
	params.UniformScale = UniformScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetMapMarkerSpotted.BP_MapWidgetMapMarkerSpotted_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MapWidgetMapMarkerSpotted_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarkerSpotted.BP_MapWidgetMapMarkerSpotted_C.Destruct");

	UBP_MapWidgetMapMarkerSpotted_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetMapMarkerSpotted.BP_MapWidgetMapMarkerSpotted_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetMapMarkerSpotted_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarkerSpotted.BP_MapWidgetMapMarkerSpotted_C.Tick");

	UBP_MapWidgetMapMarkerSpotted_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetMapMarkerSpotted.BP_MapWidgetMapMarkerSpotted_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MapWidgetMapMarkerSpotted_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarkerSpotted.BP_MapWidgetMapMarkerSpotted_C.Construct");

	UBP_MapWidgetMapMarkerSpotted_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetMapMarkerSpotted.BP_MapWidgetMapMarkerSpotted_C.ExecuteUbergraph_BP_MapWidgetMapMarkerSpotted
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetMapMarkerSpotted_C::ExecuteUbergraph_BP_MapWidgetMapMarkerSpotted(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetMapMarkerSpotted.BP_MapWidgetMapMarkerSpotted_C.ExecuteUbergraph_BP_MapWidgetMapMarkerSpotted");

	UBP_MapWidgetMapMarkerSpotted_C_ExecuteUbergraph_BP_MapWidgetMapMarkerSpotted_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
