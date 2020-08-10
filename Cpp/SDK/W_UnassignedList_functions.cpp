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

// Function W_UnassignedList.W_UnassignedList_C.Update List
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_UnassignedList_C::Update_List()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UnassignedList.W_UnassignedList_C.Update List");

	UW_UnassignedList_C_Update_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UnassignedList.W_UnassignedList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_UnassignedList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UnassignedList.W_UnassignedList_C.Construct");

	UW_UnassignedList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UnassignedList.W_UnassignedList_C.Refresh Invite List
// (BlueprintCallable, BlueprintEvent)
void UW_UnassignedList_C::Refresh_Invite_List()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UnassignedList.W_UnassignedList_C.Refresh Invite List");

	UW_UnassignedList_C_Refresh_Invite_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UnassignedList.W_UnassignedList_C.Close List
// (BlueprintCallable, BlueprintEvent)
void UW_UnassignedList_C::Close_List()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UnassignedList.W_UnassignedList_C.Close List");

	UW_UnassignedList_C_Close_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UnassignedList.W_UnassignedList_C.Button Selection Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_UnassignedList_C::Button_Selection_Changed(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UnassignedList.W_UnassignedList_C.Button Selection Changed");

	UW_UnassignedList_C_Button_Selection_Changed_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UnassignedList.W_UnassignedList_C.BndEvt__Button_InviteAll_K2Node_ComponentBoundEvent_128_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_UnassignedList_C::BndEvt__Button_InviteAll_K2Node_ComponentBoundEvent_128_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UnassignedList.W_UnassignedList_C.BndEvt__Button_InviteAll_K2Node_ComponentBoundEvent_128_OnClicked__DelegateSignature");

	UW_UnassignedList_C_BndEvt__Button_InviteAll_K2Node_ComponentBoundEvent_128_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UnassignedList.W_UnassignedList_C.BndEvt__Button_InviteSelected_K2Node_ComponentBoundEvent_133_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_UnassignedList_C::BndEvt__Button_InviteSelected_K2Node_ComponentBoundEvent_133_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UnassignedList.W_UnassignedList_C.BndEvt__Button_InviteSelected_K2Node_ComponentBoundEvent_133_OnClicked__DelegateSignature");

	UW_UnassignedList_C_BndEvt__Button_InviteSelected_K2Node_ComponentBoundEvent_133_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_UnassignedList.W_UnassignedList_C.ExecuteUbergraph_W_UnassignedList
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_UnassignedList_C::ExecuteUbergraph_W_UnassignedList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_UnassignedList.W_UnassignedList_C.ExecuteUbergraph_W_UnassignedList");

	UW_UnassignedList_C_ExecuteUbergraph_W_UnassignedList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
