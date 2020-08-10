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

// Function FriendListItem.FriendListItem_C.Init Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UFriendListItem_C::Init_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendListItem.FriendListItem_C.Init Data");

	UFriendListItem_C_Init_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FriendListItem.FriendListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UFriendListItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendListItem.FriendListItem_C.Construct");

	UFriendListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FriendListItem.FriendListItem_C.Marquee
// (BlueprintCallable, BlueprintEvent)
void UFriendListItem_C::Marquee()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendListItem.FriendListItem_C.Marquee");

	UFriendListItem_C_Marquee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FriendListItem.FriendListItem_C.BndEvt__Button_64_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UFriendListItem_C::BndEvt__Button_64_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendListItem.FriendListItem_C.BndEvt__Button_64_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature");

	UFriendListItem_C_BndEvt__Button_64_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FriendListItem.FriendListItem_C.BndEvt__ButtonJoin_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFriendListItem_C::BndEvt__ButtonJoin_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendListItem.FriendListItem_C.BndEvt__ButtonJoin_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UFriendListItem_C_BndEvt__ButtonJoin_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FriendListItem.FriendListItem_C.Set Session
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult Friends_Session                (BlueprintVisible, BlueprintReadOnly, Parm)
void UFriendListItem_C::Set_Session(const struct FBlueprintSessionResult& Friends_Session)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendListItem.FriendListItem_C.Set Session");

	UFriendListItem_C_Set_Session_Params params;
	params.Friends_Session = Friends_Session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FriendListItem.FriendListItem_C.Clear Session
// (BlueprintCallable, BlueprintEvent)
void UFriendListItem_C::Clear_Session()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendListItem.FriendListItem_C.Clear Session");

	UFriendListItem_C_Clear_Session_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FriendListItem.FriendListItem_C.ExecuteUbergraph_FriendListItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFriendListItem_C::ExecuteUbergraph_FriendListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendListItem.FriendListItem_C.ExecuteUbergraph_FriendListItem");

	UFriendListItem_C_ExecuteUbergraph_FriendListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FriendListItem.FriendListItem_C.RequestJoin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult Button                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UFriendListItem_C::RequestJoin__DelegateSignature(const struct FBlueprintSessionResult& Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendListItem.FriendListItem_C.RequestJoin__DelegateSignature");

	UFriendListItem_C_RequestJoin__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
