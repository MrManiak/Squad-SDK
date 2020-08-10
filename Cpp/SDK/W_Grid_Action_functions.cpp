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

// Function W_Grid_Action.W_Grid_Action_C.Get Tooltip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UW_Grid_Action_C::Get_Tooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action.W_Grid_Action_C.Get Tooltip");

	UW_Grid_Action_C_Get_Tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_Grid_Action.W_Grid_Action_C.Get Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            Tint                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Grid_Action_C::Get_Color(struct FLinearColor* Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action.W_Grid_Action_C.Get Color");

	UW_Grid_Action_C_Get_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tint != nullptr)
		*Tint = params.Tint;

}


// Function W_Grid_Action.W_Grid_Action_C.Get Fireteam ID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Fireteam_ID                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Grid_Action_C::Get_Fireteam_ID(int* Fireteam_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action.W_Grid_Action_C.Get Fireteam ID");

	UW_Grid_Action_C_Get_Fireteam_ID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Fireteam_ID != nullptr)
		*Fireteam_ID = params.Fireteam_ID;

}


// Function W_Grid_Action.W_Grid_Action_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_Grid_Action_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action.W_Grid_Action_C.PreConstruct");

	UW_Grid_Action_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Grid_Action.W_Grid_Action_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_Grid_Action_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action.W_Grid_Action_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UW_Grid_Action_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Grid_Action.W_Grid_Action_C.Action Button Pressed
// (BlueprintCallable, BlueprintEvent)
void UW_Grid_Action_C::Action_Button_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action.W_Grid_Action_C.Action Button Pressed");

	UW_Grid_Action_C_Action_Button_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Grid_Action.W_Grid_Action_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Grid_Action_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action.W_Grid_Action_C.Construct");

	UW_Grid_Action_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Grid_Action.W_Grid_Action_C.ExecuteUbergraph_W_Grid_Action
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Grid_Action_C::ExecuteUbergraph_W_Grid_Action(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_Action.W_Grid_Action_C.ExecuteUbergraph_W_Grid_Action");

	UW_Grid_Action_C_ExecuteUbergraph_W_Grid_Action_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
