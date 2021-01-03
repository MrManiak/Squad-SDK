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

// Function W_CommandRequestList.W_CommandRequestList_C.Init Action List
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_CommandRequestList_C::Init_Action_List()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandRequestList.W_CommandRequestList_C.Init Action List");

	UW_CommandRequestList_C_Init_Action_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandRequestList.W_CommandRequestList_C.Remove Other Request Lists
// (Public, BlueprintCallable, BlueprintEvent)
void UW_CommandRequestList_C::Remove_Other_Request_Lists()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandRequestList.W_CommandRequestList_C.Remove Other Request Lists");

	UW_CommandRequestList_C_Remove_Other_Request_Lists_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandRequestList.W_CommandRequestList_C.BndEvt__Button_Accept_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandRequestList_C::BndEvt__Button_Accept_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandRequestList.W_CommandRequestList_C.BndEvt__Button_Accept_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UW_CommandRequestList_C_BndEvt__Button_Accept_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandRequestList.W_CommandRequestList_C.BndEvt__Button_Deny_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandRequestList_C::BndEvt__Button_Deny_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandRequestList.W_CommandRequestList_C.BndEvt__Button_Deny_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UW_CommandRequestList_C_BndEvt__Button_Deny_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandRequestList.W_CommandRequestList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_CommandRequestList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandRequestList.W_CommandRequestList_C.Construct");

	UW_CommandRequestList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandRequestList.W_CommandRequestList_C.Remove list
// (BlueprintCallable, BlueprintEvent)
void UW_CommandRequestList_C::Remove_list()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandRequestList.W_CommandRequestList_C.Remove list");

	UW_CommandRequestList_C_Remove_list_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandRequestList.W_CommandRequestList_C.Control Widget Created
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Command_ActionControl_C* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandRequestList_C::Control_Widget_Created(class UW_Command_ActionControl_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandRequestList.W_CommandRequestList_C.Control Widget Created");

	UW_CommandRequestList_C_Control_Widget_Created_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandRequestList.W_CommandRequestList_C.Placement Complete
// (BlueprintCallable, BlueprintEvent)
void UW_CommandRequestList_C::Placement_Complete()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandRequestList.W_CommandRequestList_C.Placement Complete");

	UW_CommandRequestList_C_Placement_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandRequestList.W_CommandRequestList_C.ExecuteUbergraph_W_CommandRequestList
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandRequestList_C::ExecuteUbergraph_W_CommandRequestList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandRequestList.W_CommandRequestList_C.ExecuteUbergraph_W_CommandRequestList");

	UW_CommandRequestList_C_ExecuteUbergraph_W_CommandRequestList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
