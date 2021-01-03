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

// Function W_PopupGeneric.W_PopupGeneric_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UW_PopupGeneric_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PopupGeneric.W_PopupGeneric_C.OnMouseButtonUp");

	UW_PopupGeneric_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_PopupGeneric.W_PopupGeneric_C.Setup Dragging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Can_Drag                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_PopupGeneric_C::Setup_Dragging(bool Can_Drag)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PopupGeneric.W_PopupGeneric_C.Setup Dragging");

	UW_PopupGeneric_C_Setup_Dragging_Params params;
	params.Can_Drag = Can_Drag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_PopupGeneric.W_PopupGeneric_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PopupGeneric_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PopupGeneric.W_PopupGeneric_C.OnDragDetected");

	UW_PopupGeneric_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;

}


// Function W_PopupGeneric.W_PopupGeneric_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UW_PopupGeneric_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PopupGeneric.W_PopupGeneric_C.OnMouseButtonDown");

	UW_PopupGeneric_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_PopupGeneric.W_PopupGeneric_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_PopupGeneric_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PopupGeneric.W_PopupGeneric_C.PreConstruct");

	UW_PopupGeneric_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_PopupGeneric.W_PopupGeneric_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_PopupGeneric_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PopupGeneric.W_PopupGeneric_C.Construct");

	UW_PopupGeneric_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_PopupGeneric.W_PopupGeneric_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PopupGeneric_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PopupGeneric.W_PopupGeneric_C.Tick");

	UW_PopupGeneric_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_PopupGeneric.W_PopupGeneric_C.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PopupGeneric_C::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PopupGeneric.W_PopupGeneric_C.OnDragCancelled");

	UW_PopupGeneric_C_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_PopupGeneric.W_PopupGeneric_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_PopupGeneric_C::BndEvt__Button_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PopupGeneric.W_PopupGeneric_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UW_PopupGeneric_C_BndEvt__Button_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_PopupGeneric.W_PopupGeneric_C.Reset
// (BlueprintCallable, BlueprintEvent)
void UW_PopupGeneric_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PopupGeneric.W_PopupGeneric_C.Reset");

	UW_PopupGeneric_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_PopupGeneric.W_PopupGeneric_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_PopupGeneric_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PopupGeneric.W_PopupGeneric_C.Destruct");

	UW_PopupGeneric_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_PopupGeneric.W_PopupGeneric_C.Clear
// (BlueprintCallable, BlueprintEvent)
void UW_PopupGeneric_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PopupGeneric.W_PopupGeneric_C.Clear");

	UW_PopupGeneric_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_PopupGeneric.W_PopupGeneric_C.ExecuteUbergraph_W_PopupGeneric
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PopupGeneric_C::ExecuteUbergraph_W_PopupGeneric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PopupGeneric.W_PopupGeneric_C.ExecuteUbergraph_W_PopupGeneric");

	UW_PopupGeneric_C_ExecuteUbergraph_W_PopupGeneric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_PopupGeneric.W_PopupGeneric_C.Removed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_PopupGeneric_C::Removed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PopupGeneric.W_PopupGeneric_C.Removed__DelegateSignature");

	UW_PopupGeneric_C_Removed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
