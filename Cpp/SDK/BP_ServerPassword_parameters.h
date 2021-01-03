#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function BP_ServerPassword.BP_ServerPassword_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_136_OnClicked__DelegateSignature
struct UBP_ServerPassword_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_136_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ServerPassword.BP_ServerPassword_C.BndEvt__DenyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UBP_ServerPassword_C_BndEvt__DenyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	bool                                               bSelected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMainMenu_Button_C*                          Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ServerPassword.BP_ServerPassword_C.BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
struct UBP_ServerPassword_C_BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ServerPassword.BP_ServerPassword_C.ExecuteUbergraph_BP_ServerPassword
struct UBP_ServerPassword_C_ExecuteUbergraph_BP_ServerPassword_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ServerPassword.BP_ServerPassword_C.Password Cancelled__DelegateSignature
struct UBP_ServerPassword_C_Password_Cancelled__DelegateSignature_Params
{
};

// Function BP_ServerPassword.BP_ServerPassword_C.Password Entered__DelegateSignature
struct UBP_ServerPassword_C_Password_Entered__DelegateSignature_Params
{
	struct FString                                     Password;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UBP_ServerPassword_C*                        Sender;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
