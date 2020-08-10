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

// Function W_SlideComponent.W_SlideComponent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_SlideComponent_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SlideComponent.W_SlideComponent_C.Construct");

	UW_SlideComponent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SlideComponent.W_SlideComponent_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SlideComponent_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SlideComponent.W_SlideComponent_C.PreConstruct");

	UW_SlideComponent_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SlideComponent.W_SlideComponent_C.BndEvt__SlideButton_K2Node_ComponentBoundEvent_101_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_SlideComponent_C::BndEvt__SlideButton_K2Node_ComponentBoundEvent_101_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SlideComponent.W_SlideComponent_C.BndEvt__SlideButton_K2Node_ComponentBoundEvent_101_OnButtonClickedEvent__DelegateSignature");

	UW_SlideComponent_C_BndEvt__SlideButton_K2Node_ComponentBoundEvent_101_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SlideComponent.W_SlideComponent_C.Toggle
// (BlueprintCallable, BlueprintEvent)
void UW_SlideComponent_C::Toggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SlideComponent.W_SlideComponent_C.Toggle");

	UW_SlideComponent_C_Toggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SlideComponent.W_SlideComponent_C.ExecuteUbergraph_W_SlideComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SlideComponent_C::ExecuteUbergraph_W_SlideComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SlideComponent.W_SlideComponent_C.ExecuteUbergraph_W_SlideComponent");

	UW_SlideComponent_C_ExecuteUbergraph_W_SlideComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SlideComponent.W_SlideComponent_C.Slide Closed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_SlideComponent_C::Slide_Closed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SlideComponent.W_SlideComponent_C.Slide Closed__DelegateSignature");

	UW_SlideComponent_C_Slide_Closed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SlideComponent.W_SlideComponent_C.Slide Opened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_SlideComponent_C::Slide_Opened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SlideComponent.W_SlideComponent_C.Slide Opened__DelegateSignature");

	UW_SlideComponent_C_Slide_Opened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
