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

// Function ServerDetails.ServerDetails_C.Update Favourite
// (Public, BlueprintCallable, BlueprintEvent)
void UServerDetails_C::Update_Favourite()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerDetails.ServerDetails_C.Update Favourite");

	UServerDetails_C_Update_Favourite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerDetails.ServerDetails_C.Toggle Favourite
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Fave                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UServerDetails_C::Toggle_Favourite(bool Is_Fave)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerDetails.ServerDetails_C.Toggle Favourite");

	UServerDetails_C_Toggle_Favourite_Params params;
	params.Is_Fave = Is_Fave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerDetails.ServerDetails_C.Server Image
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UServerDetails_C::Server_Image()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerDetails.ServerDetails_C.Server Image");

	UServerDetails_C_Server_Image_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerDetails.ServerDetails_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UServerDetails_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerDetails.ServerDetails_C.Refresh");

	UServerDetails_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerDetails.ServerDetails_C.BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UServerDetails_C::BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerDetails.ServerDetails_C.BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UServerDetails_C_BndEvt__MainMenu_Button_Development_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerDetails.ServerDetails_C.BndEvt__Button_Favourite_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UServerDetails_C::BndEvt__Button_Favourite_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerDetails.ServerDetails_C.BndEvt__Button_Favourite_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UServerDetails_C_BndEvt__Button_Favourite_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerDetails.ServerDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UServerDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerDetails.ServerDetails_C.Construct");

	UServerDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerDetails.ServerDetails_C.ExecuteUbergraph_ServerDetails
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UServerDetails_C::ExecuteUbergraph_ServerDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerDetails.ServerDetails_C.ExecuteUbergraph_ServerDetails");

	UServerDetails_C_ExecuteUbergraph_ServerDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerDetails.ServerDetails_C.Details Join Button__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UServerDetails_C::Details_Join_Button__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerDetails.ServerDetails_C.Details Join Button__DelegateSignature");

	UServerDetails_C_Details_Join_Button__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
