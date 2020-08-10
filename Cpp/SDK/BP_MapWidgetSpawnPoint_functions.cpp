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

// Function BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UBP_MapWidgetSpawnPoint_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C.OnMouseButtonUp");

	UBP_MapWidgetSpawnPoint_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UBP_MapWidgetSpawnPoint_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C.OnMouseButtonDown");

	UBP_MapWidgetSpawnPoint_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C.Update Spawns Visibility
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetSpawnPoint_C::Update_Spawns_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C.Update Spawns Visibility");

	UBP_MapWidgetSpawnPoint_C_Update_Spawns_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C.Update Color
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetSpawnPoint_C::Update_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C.Update Color");

	UBP_MapWidgetSpawnPoint_C_Update_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C.OnIsSelectedChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetSpawnPoint_C::OnIsSelectedChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C.OnIsSelectedChanged");

	UBP_MapWidgetSpawnPoint_C_OnIsSelectedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C.OnSpawnPointTypeChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetSpawnPoint_C::OnSpawnPointTypeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C.OnSpawnPointTypeChanged");

	UBP_MapWidgetSpawnPoint_C_OnSpawnPointTypeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C.Check Animation
// (BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetSpawnPoint_C::Check_Animation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C.Check Animation");

	UBP_MapWidgetSpawnPoint_C_Check_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MapWidgetSpawnPoint_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C.Construct");

	UBP_MapWidgetSpawnPoint_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C.OnScaleChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          UniformScale                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetSpawnPoint_C::OnScaleChanged(float UniformScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C.OnScaleChanged");

	UBP_MapWidgetSpawnPoint_C_OnScaleChanged_Params params;
	params.UniformScale = UniformScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C.OnSiegedChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetSpawnPoint_C::OnSiegedChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C.OnSiegedChanged");

	UBP_MapWidgetSpawnPoint_C_OnSiegedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C.OnSpawningEnabledChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetSpawnPoint_C::OnSpawningEnabledChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C.OnSpawningEnabledChanged");

	UBP_MapWidgetSpawnPoint_C_OnSpawningEnabledChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C.ExecuteUbergraph_BP_MapWidgetSpawnPoint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetSpawnPoint_C::ExecuteUbergraph_BP_MapWidgetSpawnPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetSpawnPoint.BP_MapWidgetSpawnPoint_C.ExecuteUbergraph_BP_MapWidgetSpawnPoint");

	UBP_MapWidgetSpawnPoint_C_ExecuteUbergraph_BP_MapWidgetSpawnPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
