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

// Function W_MapMarker_DirectorParent.W_MapMarker_DirectorParent_C.Refresh Visibility
// (Public, BlueprintCallable, BlueprintEvent)
void UW_MapMarker_DirectorParent_C::Refresh_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapMarker_DirectorParent.W_MapMarker_DirectorParent_C.Refresh Visibility");

	UW_MapMarker_DirectorParent_C_Refresh_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MapMarker_DirectorParent.W_MapMarker_DirectorParent_C.Update Size
// (Public, BlueprintCallable, BlueprintEvent)
void UW_MapMarker_DirectorParent_C::Update_Size()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapMarker_DirectorParent.W_MapMarker_DirectorParent_C.Update Size");

	UW_MapMarker_DirectorParent_C_Update_Size_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MapMarker_DirectorParent.W_MapMarker_DirectorParent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_MapMarker_DirectorParent_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapMarker_DirectorParent.W_MapMarker_DirectorParent_C.Construct");

	UW_MapMarker_DirectorParent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MapMarker_DirectorParent.W_MapMarker_DirectorParent_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MapMarker_DirectorParent_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapMarker_DirectorParent.W_MapMarker_DirectorParent_C.Tick");

	UW_MapMarker_DirectorParent_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MapMarker_DirectorParent.W_MapMarker_DirectorParent_C.Find Map Icon
// (BlueprintCallable, BlueprintEvent)
void UW_MapMarker_DirectorParent_C::Find_Map_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapMarker_DirectorParent.W_MapMarker_DirectorParent_C.Find Map Icon");

	UW_MapMarker_DirectorParent_C_Find_Map_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MapMarker_DirectorParent.W_MapMarker_DirectorParent_C.Init Director Marker
// (BlueprintCallable, BlueprintEvent)
void UW_MapMarker_DirectorParent_C::Init_Director_Marker()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapMarker_DirectorParent.W_MapMarker_DirectorParent_C.Init Director Marker");

	UW_MapMarker_DirectorParent_C_Init_Director_Marker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MapMarker_DirectorParent.W_MapMarker_DirectorParent_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_MapMarker_DirectorParent_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapMarker_DirectorParent.W_MapMarker_DirectorParent_C.Destruct");

	UW_MapMarker_DirectorParent_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MapMarker_DirectorParent.W_MapMarker_DirectorParent_C.OnRightClicked
// (Event, Protected, BlueprintEvent)
void UW_MapMarker_DirectorParent_C::OnRightClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapMarker_DirectorParent.W_MapMarker_DirectorParent_C.OnRightClicked");

	UW_MapMarker_DirectorParent_C_OnRightClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MapMarker_DirectorParent.W_MapMarker_DirectorParent_C.ExecuteUbergraph_W_MapMarker_DirectorParent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MapMarker_DirectorParent_C::ExecuteUbergraph_W_MapMarker_DirectorParent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MapMarker_DirectorParent.W_MapMarker_DirectorParent_C.ExecuteUbergraph_W_MapMarker_DirectorParent");

	UW_MapMarker_DirectorParent_C_ExecuteUbergraph_W_MapMarker_DirectorParent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
