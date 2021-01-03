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

// Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UBP_MapWidgetRallyPoint_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.OnMouseButtonUp");

	UBP_MapWidgetRallyPoint_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UBP_MapWidgetRallyPoint_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.OnMouseButtonDown");

	UBP_MapWidgetRallyPoint_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.Update Color
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetRallyPoint_C::Update_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.Update Color");

	UBP_MapWidgetRallyPoint_C_Update_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.Update Rally Spawns Visibility
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetRallyPoint_C::Update_Rally_Spawns_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.Update Rally Spawns Visibility");

	UBP_MapWidgetRallyPoint_C_Update_Rally_Spawns_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.Get_SpawnFront_IMG_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UBP_MapWidgetRallyPoint_C::Get_SpawnFront_IMG_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.Get_SpawnFront_IMG_ToolTipWidget_1");

	UBP_MapWidgetRallyPoint_C_Get_SpawnFront_IMG_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MapWidgetRallyPoint_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.Construct");

	UBP_MapWidgetRallyPoint_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.OnIsSelectedChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetRallyPoint_C::OnIsSelectedChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.OnIsSelectedChanged");

	UBP_MapWidgetRallyPoint_C_OnIsSelectedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.OnSquadIdChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetRallyPoint_C::OnSquadIdChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.OnSquadIdChanged");

	UBP_MapWidgetRallyPoint_C_OnSquadIdChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.OnIsInSelfSquadChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetRallyPoint_C::OnIsInSelfSquadChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.OnIsInSelfSquadChanged");

	UBP_MapWidgetRallyPoint_C_OnIsInSelfSquadChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.OnTintValueChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetRallyPoint_C::OnTintValueChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.OnTintValueChanged");

	UBP_MapWidgetRallyPoint_C_OnTintValueChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.OnNumberOfSpawnsChanged
// (Event, Protected, BlueprintEvent)
void UBP_MapWidgetRallyPoint_C::OnNumberOfSpawnsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.OnNumberOfSpawnsChanged");

	UBP_MapWidgetRallyPoint_C_OnNumberOfSpawnsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.Check Animation
// (BlueprintCallable, BlueprintEvent)
void UBP_MapWidgetRallyPoint_C::Check_Animation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.Check Animation");

	UBP_MapWidgetRallyPoint_C_Check_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.OnScaleChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          UniformScale                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetRallyPoint_C::OnScaleChanged(float UniformScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.OnScaleChanged");

	UBP_MapWidgetRallyPoint_C_OnScaleChanged_Params params;
	params.UniformScale = UniformScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.ExecuteUbergraph_BP_MapWidgetRallyPoint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapWidgetRallyPoint_C::ExecuteUbergraph_BP_MapWidgetRallyPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapWidgetRallyPoint.BP_MapWidgetRallyPoint_C.ExecuteUbergraph_BP_MapWidgetRallyPoint");

	UBP_MapWidgetRallyPoint_C_ExecuteUbergraph_BP_MapWidgetRallyPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
