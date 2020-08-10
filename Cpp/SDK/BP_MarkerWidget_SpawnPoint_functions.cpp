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

// Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.RemoveWidget
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_SpawnPoint_C::RemoveWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.RemoveWidget");

	UBP_MarkerWidget_SpawnPoint_C_RemoveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           InMouseEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UBP_MarkerWidget_SpawnPoint_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.OnMouseButtonDoubleClick");

	UBP_MarkerWidget_SpawnPoint_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.DoSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MarkerWidget_SpawnPoint_C::DoSelect(bool bNewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.DoSelect");

	UBP_MarkerWidget_SpawnPoint_C_DoSelect_Params params;
	params.bNewState = bNewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.HandleDelete
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_SpawnPoint_C::HandleDelete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.HandleDelete");

	UBP_MarkerWidget_SpawnPoint_C_HandleDelete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.SelfTick
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_SpawnPoint_C::SelfTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.SelfTick");

	UBP_MarkerWidget_SpawnPoint_C_SelfTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.Handle_Select
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_MarkerWidget_SpawnPoint_C::Handle_Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.Handle_Select");

	UBP_MarkerWidget_SpawnPoint_C_Handle_Select_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UBP_MarkerWidget_SpawnPoint_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.OnMouseButtonDown");

	UBP_MarkerWidget_SpawnPoint_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MarkerWidget_SpawnPoint_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.Construct");

	UBP_MarkerWidget_SpawnPoint_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.ExecuteUbergraph_BP_MarkerWidget_SpawnPoint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_SpawnPoint_C::ExecuteUbergraph_BP_MarkerWidget_SpawnPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C.ExecuteUbergraph_BP_MarkerWidget_SpawnPoint");

	UBP_MarkerWidget_SpawnPoint_C_ExecuteUbergraph_BP_MarkerWidget_SpawnPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
