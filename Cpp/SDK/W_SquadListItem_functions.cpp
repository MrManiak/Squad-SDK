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

// Function W_SquadListItem.W_SquadListItem_C.Get_TB_VoteActiveText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UW_SquadListItem_C::Get_TB_VoteActiveText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.Get_TB_VoteActiveText_Text_1");

	UW_SquadListItem_C_Get_TB_VoteActiveText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_SquadListItem.W_SquadListItem_C.Toggle Weapon Setting
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SquadListItem_C::Toggle_Weapon_Setting()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.Toggle Weapon Setting");

	UW_SquadListItem_C_Toggle_Weapon_Setting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.ToggleMuteAll
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SquadListItem_C::ToggleMuteAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.ToggleMuteAll");

	UW_SquadListItem_C_ToggleMuteAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.Check for Self
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SquadListItem_C::Check_for_Self(bool* found)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.Check for Self");

	UW_SquadListItem_C_Check_for_Self_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (found != nullptr)
		*found = params.found;

}


// Function W_SquadListItem.W_SquadListItem_C.Get Selection State
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESQSelectionState              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESQSelectionState UW_SquadListItem_C::Get_Selection_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.Get Selection State");

	UW_SquadListItem_C_Get_Selection_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_SquadListItem.W_SquadListItem_C.Instigator Is In Squad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Is_In_Squad                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SquadListItem_C::Instigator_Is_In_Squad(bool* Is_In_Squad)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.Instigator Is In Squad");

	UW_SquadListItem_C_Instigator_Is_In_Squad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is_In_Squad != nullptr)
		*Is_In_Squad = params.Is_In_Squad;

}


// Function W_SquadListItem.W_SquadListItem_C.Check Member Highlights
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Has_Highlights                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SquadListItem_C::Check_Member_Highlights(bool* Has_Highlights)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.Check Member Highlights");

	UW_SquadListItem_C_Check_Member_Highlights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Has_Highlights != nullptr)
		*Has_Highlights = params.Has_Highlights;

}


// Function W_SquadListItem.W_SquadListItem_C.Update Color
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_SquadListItem_C::Update_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.Update Color");

	UW_SquadListItem_C_Update_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UW_SquadListItem_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.OnMouseButtonDown");

	UW_SquadListItem_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_SquadListItem.W_SquadListItem_C.Toggle Selection State
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SquadListItem_C::Toggle_Selection_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.Toggle Selection State");

	UW_SquadListItem_C_Toggle_Selection_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.Clear Selections
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SquadListItem_C::Clear_Selections()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.Clear Selections");

	UW_SquadListItem_C_Clear_Selections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.Update Show Fireteams
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show_Fireteams                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SquadListItem_C::Update_Show_Fireteams(bool Show_Fireteams)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.Update Show Fireteams");

	UW_SquadListItem_C_Update_Show_Fireteams_Params params;
	params.Show_Fireteams = Show_Fireteams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.GetMemberRoot
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            FireTeamIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPanelWidget* UW_SquadListItem_C::GetMemberRoot(int FireTeamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.GetMemberRoot");

	UW_SquadListItem_C_GetMemberRoot_Params params;
	params.FireTeamIndex = FireTeamIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_SquadListItem.W_SquadListItem_C.Update List Visibility
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SquadListItem_C::Update_List_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.Update List Visibility");

	UW_SquadListItem_C_Update_List_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_229_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SquadListItem_C::BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_229_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_229_OnClicked__DelegateSignature");

	UW_SquadListItem_C_BndEvt__MainMenu_Button_K2Node_ComponentBoundEvent_229_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.OnSquadIdChanged
// (Event, Protected, BlueprintEvent)
void UW_SquadListItem_C::OnSquadIdChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.OnSquadIdChanged");

	UW_SquadListItem_C_OnSquadIdChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.OnSquadNameChanged
// (Event, Protected, BlueprintEvent)
void UW_SquadListItem_C::OnSquadNameChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.OnSquadNameChanged");

	UW_SquadListItem_C_OnSquadNameChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.OnLeaderNameChanged
// (Event, Protected, BlueprintEvent)
void UW_SquadListItem_C::OnLeaderNameChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.OnLeaderNameChanged");

	UW_SquadListItem_C_OnLeaderNameChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.OnMemberNumChanged
// (Event, Protected, BlueprintEvent)
void UW_SquadListItem_C::OnMemberNumChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.OnMemberNumChanged");

	UW_SquadListItem_C_OnMemberNumChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.OnMaxMembersChanged
// (Event, Protected, BlueprintEvent)
void UW_SquadListItem_C::OnMaxMembersChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.OnMaxMembersChanged");

	UW_SquadListItem_C_OnMaxMembersChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.OnIsSelfInSquadChanged
// (Event, Protected, BlueprintEvent)
void UW_SquadListItem_C::OnIsSelfInSquadChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.OnIsSelfInSquadChanged");

	UW_SquadListItem_C_OnIsSelfInSquadChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.OnJoinButtonStateChanged
// (Event, Protected, BlueprintEvent)
void UW_SquadListItem_C::OnJoinButtonStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.OnJoinButtonStateChanged");

	UW_SquadListItem_C_OnJoinButtonStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.OnListLayoutChanged
// (Event, Protected, BlueprintEvent)
void UW_SquadListItem_C::OnListLayoutChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.OnListLayoutChanged");

	UW_SquadListItem_C_OnListLayoutChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.OnSelectionStateChanged
// (Event, Protected, BlueprintEvent)
void UW_SquadListItem_C::OnSelectionStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.OnSelectionStateChanged");

	UW_SquadListItem_C_OnSelectionStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.Open Options
// (BlueprintCallable, BlueprintEvent)
void UW_SquadListItem_C::Open_Options()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.Open Options");

	UW_SquadListItem_C_Open_Options_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.Create Disband Options
// (BlueprintCallable, BlueprintEvent)
void UW_SquadListItem_C::Create_Disband_Options()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.Create Disband Options");

	UW_SquadListItem_C_Create_Disband_Options_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.BndEvt__Button_Squad_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void UW_SquadListItem_C::BndEvt__Button_Squad_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.BndEvt__Button_Squad_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature");

	UW_SquadListItem_C_BndEvt__Button_Squad_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.Disband Events
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SquadListItem_C::Disband_Events(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.Disband Events");

	UW_SquadListItem_C_Disband_Events_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.BndEvt__ButtonLocked_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SquadListItem_C::BndEvt__ButtonLocked_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.BndEvt__ButtonLocked_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UW_SquadListItem_C_BndEvt__ButtonLocked_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_SquadListItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.Construct");

	UW_SquadListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.Popup Option Return
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SquadListItem_C::Popup_Option_Return(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.Popup Option Return");

	UW_SquadListItem_C_Popup_Option_Return_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.BndEvt__Button_Squad_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UW_SquadListItem_C::BndEvt__Button_Squad_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.BndEvt__Button_Squad_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UW_SquadListItem_C_BndEvt__Button_Squad_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.BndEvt__Button_Squad_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UW_SquadListItem_C::BndEvt__Button_Squad_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.BndEvt__Button_Squad_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UW_SquadListItem_C_BndEvt__Button_Squad_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.BndEvt__ButtonDemote_K2Node_ComponentBoundEvent_595_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SquadListItem_C::BndEvt__ButtonDemote_K2Node_ComponentBoundEvent_595_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.BndEvt__ButtonDemote_K2Node_ComponentBoundEvent_595_OnClicked__DelegateSignature");

	UW_SquadListItem_C_BndEvt__ButtonDemote_K2Node_ComponentBoundEvent_595_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.OnIsCommandSquadChanged
// (Event, Protected, BlueprintEvent)
void UW_SquadListItem_C::OnIsCommandSquadChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.OnIsCommandSquadChanged");

	UW_SquadListItem_C_OnIsCommandSquadChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.On Can Demote Changed TEMP
// (BlueprintCallable, BlueprintEvent)
void UW_SquadListItem_C::On_Can_Demote_Changed_TEMP()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.On Can Demote Changed TEMP");

	UW_SquadListItem_C_On_Can_Demote_Changed_TEMP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadListItem.W_SquadListItem_C.ExecuteUbergraph_W_SquadListItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SquadListItem_C::ExecuteUbergraph_W_SquadListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadListItem.W_SquadListItem_C.ExecuteUbergraph_W_SquadListItem");

	UW_SquadListItem_C_ExecuteUbergraph_W_SquadListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
