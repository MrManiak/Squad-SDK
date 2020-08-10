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

// Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.UpdateRallyPointBrush
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_RallyPoint_C::UpdateRallyPointBrush()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.UpdateRallyPointBrush");

	UBP_MarkerWidget_RallyPoint_C_UpdateRallyPointBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           InMouseEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UBP_MarkerWidget_RallyPoint_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.OnMouseButtonDoubleClick");

	UBP_MarkerWidget_RallyPoint_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.SelectSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Commit                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MarkerWidget_RallyPoint_C::SelectSpawn(bool Commit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.SelectSpawn");

	UBP_MarkerWidget_RallyPoint_C_SelectSpawn_Params params;
	params.Commit = Commit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.UpdateSelectVisibility
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_RallyPoint_C::UpdateSelectVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.UpdateSelectVisibility");

	UBP_MarkerWidget_RallyPoint_C_UpdateSelectVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UBP_MarkerWidget_RallyPoint_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.OnMouseButtonDown");

	UBP_MarkerWidget_RallyPoint_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.UpdateSquadIDText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_RallyPoint_C::UpdateSquadIDText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.UpdateSquadIDText");

	UBP_MarkerWidget_RallyPoint_C_UpdateSquadIDText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MarkerWidget_RallyPoint_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.Construct");

	UBP_MarkerWidget_RallyPoint_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_RallyPoint_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.Tick");

	UBP_MarkerWidget_RallyPoint_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.UpdateStateEvent
// (BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_RallyPoint_C::UpdateStateEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.UpdateStateEvent");

	UBP_MarkerWidget_RallyPoint_C_UpdateStateEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.ExecuteUbergraph_BP_MarkerWidget_RallyPoint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_RallyPoint_C::ExecuteUbergraph_BP_MarkerWidget_RallyPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_RallyPoint.BP_MarkerWidget_RallyPoint_C.ExecuteUbergraph_BP_MarkerWidget_RallyPoint");

	UBP_MarkerWidget_RallyPoint_C_ExecuteUbergraph_BP_MarkerWidget_RallyPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
