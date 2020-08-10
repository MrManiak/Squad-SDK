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

// Function W_CommandUI.W_CommandUI_C.Set Command Slide Visibility
// (Public, BlueprintCallable, BlueprintEvent)
void UW_CommandUI_C::Set_Command_Slide_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandUI.W_CommandUI_C.Set Command Slide Visibility");

	UW_CommandUI_C_Set_Command_Slide_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandUI.W_CommandUI_C.Get Voting Widget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Voting_Widget                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandUI_C::Get_Voting_Widget(class UUserWidget** Voting_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandUI.W_CommandUI_C.Get Voting Widget");

	UW_CommandUI_C_Get_Voting_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Voting_Widget != nullptr)
		*Voting_Widget = params.Voting_Widget;

}


// Function W_CommandUI.W_CommandUI_C.Get Squad List Roots
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            Squad_Panel                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*            Unassigned_Panel               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*            Commander_Panel                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandUI_C::Get_Squad_List_Roots(class UPanelWidget** Squad_Panel, class UPanelWidget** Unassigned_Panel, class UPanelWidget** Commander_Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandUI.W_CommandUI_C.Get Squad List Roots");

	UW_CommandUI_C_Get_Squad_List_Roots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Squad_Panel != nullptr)
		*Squad_Panel = params.Squad_Panel;
	if (Unassigned_Panel != nullptr)
		*Unassigned_Panel = params.Unassigned_Panel;
	if (Commander_Panel != nullptr)
		*Commander_Panel = params.Commander_Panel;

}


// Function W_CommandUI.W_CommandUI_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_CommandUI_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandUI.W_CommandUI_C.PreConstruct");

	UW_CommandUI_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandUI.W_CommandUI_C.BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_183_OnLeftButtonClicked__DelegateSignature
// (BlueprintEvent)
void UW_CommandUI_C::BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_183_OnLeftButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandUI.W_CommandUI_C.BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_183_OnLeftButtonClicked__DelegateSignature");

	UW_CommandUI_C_BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_183_OnLeftButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandUI.W_CommandUI_C.BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_202_OnRightButtonClicked__DelegateSignature
// (BlueprintEvent)
void UW_CommandUI_C::BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_202_OnRightButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandUI.W_CommandUI_C.BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_202_OnRightButtonClicked__DelegateSignature");

	UW_CommandUI_C_BndEvt__ChallengeGiveUp_K2Node_ComponentBoundEvent_202_OnRightButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandUI.W_CommandUI_C.BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_313_GiveUpPressed__DelegateSignature
// (BlueprintEvent)
void UW_CommandUI_C::BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_313_GiveUpPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandUI.W_CommandUI_C.BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_313_GiveUpPressed__DelegateSignature");

	UW_CommandUI_C_BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_313_GiveUpPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandUI.W_CommandUI_C.BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_485_Hide Confirmation__DelegateSignature
// (BlueprintEvent)
void UW_CommandUI_C::BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_485_Hide_Confirmation__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandUI.W_CommandUI_C.BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_485_Hide Confirmation__DelegateSignature");

	UW_CommandUI_C_BndEvt__W_GiveUp_K2Node_ComponentBoundEvent_485_Hide_Confirmation__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandUI.W_CommandUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_CommandUI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandUI.W_CommandUI_C.Construct");

	UW_CommandUI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandUI.W_CommandUI_C.Open Chat Slide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESQChat                        Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandUI_C::Open_Chat_Slide(ESQChat Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandUI.W_CommandUI_C.Open Chat Slide");

	UW_CommandUI_C_Open_Chat_Slide_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandUI.W_CommandUI_C.Opened
// (BlueprintCallable, BlueprintEvent)
void UW_CommandUI_C::Opened()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandUI.W_CommandUI_C.Opened");

	UW_CommandUI_C_Opened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandUI.W_CommandUI_C.Closed
// (BlueprintCallable, BlueprintEvent)
void UW_CommandUI_C::Closed()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandUI.W_CommandUI_C.Closed");

	UW_CommandUI_C_Closed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandUI.W_CommandUI_C.Bind Commander Changed
// (BlueprintCallable, BlueprintEvent)
void UW_CommandUI_C::Bind_Commander_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandUI.W_CommandUI_C.Bind Commander Changed");

	UW_CommandUI_C_Bind_Commander_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandUI.W_CommandUI_C.Command Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQPlayerState*          OldCommander                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQPlayerState*          NewCommander                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandUI_C::Command_Changed(class ASQPlayerState* OldCommander, class ASQPlayerState* NewCommander)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandUI.W_CommandUI_C.Command Changed");

	UW_CommandUI_C_Command_Changed_Params params;
	params.OldCommander = OldCommander;
	params.NewCommander = NewCommander;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandUI.W_CommandUI_C.BndEvt__SquadsSlideButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_CommandUI_C::BndEvt__SquadsSlideButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandUI.W_CommandUI_C.BndEvt__SquadsSlideButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UW_CommandUI_C_BndEvt__SquadsSlideButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandUI.W_CommandUI_C.ExecuteUbergraph_W_CommandUI
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandUI_C::ExecuteUbergraph_W_CommandUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandUI.W_CommandUI_C.ExecuteUbergraph_W_CommandUI");

	UW_CommandUI_C_ExecuteUbergraph_W_CommandUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
