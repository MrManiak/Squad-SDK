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

// Function BP_ServerPassword.BP_ServerPassword_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_136_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ServerPassword_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_136_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerPassword.BP_ServerPassword_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_136_OnClicked__DelegateSignature");

	UBP_ServerPassword_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_136_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ServerPassword.BP_ServerPassword_C.BndEvt__DenyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ServerPassword_C::BndEvt__DenyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerPassword.BP_ServerPassword_C.BndEvt__DenyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UBP_ServerPassword_C_BndEvt__DenyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ServerPassword.BP_ServerPassword_C.BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ServerPassword_C::BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerPassword.BP_ServerPassword_C.BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature");

	UBP_ServerPassword_C_BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ServerPassword.BP_ServerPassword_C.ExecuteUbergraph_BP_ServerPassword
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ServerPassword_C::ExecuteUbergraph_BP_ServerPassword(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerPassword.BP_ServerPassword_C.ExecuteUbergraph_BP_ServerPassword");

	UBP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ServerPassword.BP_ServerPassword_C.Password Cancelled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_ServerPassword_C::Password_Cancelled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerPassword.BP_ServerPassword_C.Password Cancelled__DelegateSignature");

	UBP_ServerPassword_C_Password_Cancelled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ServerPassword.BP_ServerPassword_C.Password Entered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Password                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UBP_ServerPassword_C*    Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ServerPassword_C::Password_Entered__DelegateSignature(const struct FString& Password, class UBP_ServerPassword_C* Sender)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ServerPassword.BP_ServerPassword_C.Password Entered__DelegateSignature");

	UBP_ServerPassword_C_Password_Entered__DelegateSignature_Params params;
	params.Password = Password;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
