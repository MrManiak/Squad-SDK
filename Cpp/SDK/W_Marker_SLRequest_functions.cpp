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

// Function W_Marker_SLRequest.W_Marker_SLRequest_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UW_Marker_SLRequest_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Marker_SLRequest.W_Marker_SLRequest_C.OnPreviewMouseButtonDown");

	UW_Marker_SLRequest_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_Marker_SLRequest.W_Marker_SLRequest_C.OnScaleChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          UniformScale                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Marker_SLRequest_C::OnScaleChanged(float UniformScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Marker_SLRequest.W_Marker_SLRequest_C.OnScaleChanged");

	UW_Marker_SLRequest_C_OnScaleChanged_Params params;
	params.UniformScale = UniformScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Marker_SLRequest.W_Marker_SLRequest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Marker_SLRequest_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Marker_SLRequest.W_Marker_SLRequest_C.Construct");

	UW_Marker_SLRequest_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Marker_SLRequest.W_Marker_SLRequest_C.Find Map Icon
// (BlueprintCallable, BlueprintEvent)
void UW_Marker_SLRequest_C::Find_Map_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Marker_SLRequest.W_Marker_SLRequest_C.Find Map Icon");

	UW_Marker_SLRequest_C_Find_Map_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Marker_SLRequest.W_Marker_SLRequest_C.OnRightClicked
// (Event, Protected, BlueprintEvent)
void UW_Marker_SLRequest_C::OnRightClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Marker_SLRequest.W_Marker_SLRequest_C.OnRightClicked");

	UW_Marker_SLRequest_C_OnRightClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Marker_SLRequest.W_Marker_SLRequest_C.Set Vis to Owner SL
// (BlueprintCallable, BlueprintEvent)
void UW_Marker_SLRequest_C::Set_Vis_to_Owner_SL()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Marker_SLRequest.W_Marker_SLRequest_C.Set Vis to Owner SL");

	UW_Marker_SLRequest_C_Set_Vis_to_Owner_SL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Marker_SLRequest.W_Marker_SLRequest_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Marker_SLRequest_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Marker_SLRequest.W_Marker_SLRequest_C.Tick");

	UW_Marker_SLRequest_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Marker_SLRequest.W_Marker_SLRequest_C.ExecuteUbergraph_W_Marker_SLRequest
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Marker_SLRequest_C::ExecuteUbergraph_W_Marker_SLRequest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Marker_SLRequest.W_Marker_SLRequest_C.ExecuteUbergraph_W_Marker_SLRequest");

	UW_Marker_SLRequest_C_ExecuteUbergraph_W_Marker_SLRequest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
