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

// Function BP_MarkerWidget_Selectable.BP_MarkerWidget_Selectable_C.On_MarkerImage_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UBP_MarkerWidget_Selectable_C::On_MarkerImage_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Selectable.BP_MarkerWidget_Selectable_C.On_MarkerImage_MouseButtonDown_1");

	UBP_MarkerWidget_Selectable_C_On_MarkerImage_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MarkerWidget_Selectable.BP_MarkerWidget_Selectable_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UBP_MarkerWidget_Selectable_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Selectable.BP_MarkerWidget_Selectable_C.GetText_1");

	UBP_MarkerWidget_Selectable_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MarkerWidget_Selectable.BP_MarkerWidget_Selectable_C.Get_MarkerImage_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UBP_MarkerWidget_Selectable_C::Get_MarkerImage_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Selectable.BP_MarkerWidget_Selectable_C.Get_MarkerImage_Brush_1");

	UBP_MarkerWidget_Selectable_C_Get_MarkerImage_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MarkerWidget_Selectable.BP_MarkerWidget_Selectable_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MarkerWidget_Selectable_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Selectable.BP_MarkerWidget_Selectable_C.Construct");

	UBP_MarkerWidget_Selectable_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MarkerWidget_Selectable.BP_MarkerWidget_Selectable_C.ExecuteUbergraph_BP_MarkerWidget_Selectable
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MarkerWidget_Selectable_C::ExecuteUbergraph_BP_MarkerWidget_Selectable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MarkerWidget_Selectable.BP_MarkerWidget_Selectable_C.ExecuteUbergraph_BP_MarkerWidget_Selectable");

	UBP_MarkerWidget_Selectable_C_ExecuteUbergraph_BP_MarkerWidget_Selectable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
