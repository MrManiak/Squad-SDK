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

// Function W_SquadMemberItem.W_SquadMemberItem_C.Self Squad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Is_SelfSquad                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SquadMemberItem_C::Self_Squad(bool* Is_SelfSquad)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.Self Squad");

	UW_SquadMemberItem_C_Self_Squad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is_SelfSquad != nullptr)
		*Is_SelfSquad = params.Is_SelfSquad;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UW_SquadMemberItem_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.OnMouseButtonDown");

	UW_SquadMemberItem_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_SquadMemberItem.W_SquadMemberItem_C.Set Role
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SquadMemberItem_C::Set_Role()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.Set Role");

	UW_SquadMemberItem_C_Set_Role_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UW_SquadMemberItem_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.OnMouseButtonUp");

	UW_SquadMemberItem_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_SquadMemberItem.W_SquadMemberItem_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UW_SquadMemberItem_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.OnPreviewMouseButtonDown");

	UW_SquadMemberItem_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_SquadMemberItem.W_SquadMemberItem_C.Update Weapon Visibility
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SquadMemberItem_C::Update_Weapon_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.Update Weapon Visibility");

	UW_SquadMemberItem_C_Update_Weapon_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.Update Mute Icon
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SquadMemberItem_C::Update_Mute_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.Update Mute Icon");

	UW_SquadMemberItem_C_Update_Mute_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SquadMemberItem_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.OnDragDetected");

	UW_SquadMemberItem_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.Update Member Item
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SquadMemberItem_C::Update_Member_Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.Update Member Item");

	UW_SquadMemberItem_C_Update_Member_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.Get Selection State
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESQSelectionState              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESQSelectionState UW_SquadMemberItem_C::Get_Selection_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.Get Selection State");

	UW_SquadMemberItem_C_Get_Selection_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_SquadMemberItem.W_SquadMemberItem_C.Toggle Selection
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SquadMemberItem_C::Toggle_Selection()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.Toggle Selection");

	UW_SquadMemberItem_C_Toggle_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.Cache Popup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_PopupOptionBox_C*     New_Popup                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SquadMemberItem_C::Cache_Popup(class UW_PopupOptionBox_C* New_Popup)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.Cache Popup");

	UW_SquadMemberItem_C_Cache_Popup_Params params;
	params.New_Popup = New_Popup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.Update Rank
// (Public, BlueprintCallable, BlueprintEvent)
void UW_SquadMemberItem_C::Update_Rank()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.Update Rank");

	UW_SquadMemberItem_C_Update_Rank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.Update Border Color
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_SquadMemberItem_C::Update_Border_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.Update Border Color");

	UW_SquadMemberItem_C_Update_Border_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.OnIsSquadLeaderChanged
// (Event, Protected, BlueprintEvent)
void UW_SquadMemberItem_C::OnIsSquadLeaderChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.OnIsSquadLeaderChanged");

	UW_SquadMemberItem_C_OnIsSquadLeaderChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.OnPlayerNameChanged
// (Event, Protected, BlueprintEvent)
void UW_SquadMemberItem_C::OnPlayerNameChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.OnPlayerNameChanged");

	UW_SquadMemberItem_C_OnPlayerNameChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.OnDeployRoleChanged
// (Event, Protected, BlueprintEvent)
void UW_SquadMemberItem_C::OnDeployRoleChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.OnDeployRoleChanged");

	UW_SquadMemberItem_C_OnDeployRoleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_SquadMemberItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.Construct");

	UW_SquadMemberItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.OnIsBleedingChanged
// (Event, Protected, BlueprintEvent)
void UW_SquadMemberItem_C::OnIsBleedingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.OnIsBleedingChanged");

	UW_SquadMemberItem_C_OnIsBleedingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.OnIsWoundedChanged
// (Event, Protected, BlueprintEvent)
void UW_SquadMemberItem_C::OnIsWoundedChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.OnIsWoundedChanged");

	UW_SquadMemberItem_C_OnIsWoundedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.OnListLayoutChanged
// (Event, Protected, BlueprintEvent)
void UW_SquadMemberItem_C::OnListLayoutChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.OnListLayoutChanged");

	UW_SquadMemberItem_C_OnListLayoutChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.Reset Selector
// (BlueprintCallable, BlueprintEvent)
void UW_SquadMemberItem_C::Reset_Selector()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.Reset Selector");

	UW_SquadMemberItem_C_Reset_Selector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.OnFireTeamIndexChanged
// (Event, Protected, BlueprintEvent)
void UW_SquadMemberItem_C::OnFireTeamIndexChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.OnFireTeamIndexChanged");

	UW_SquadMemberItem_C_OnFireTeamIndexChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.OnIsFireTeamLeaderChanged
// (Event, Protected, BlueprintEvent)
void UW_SquadMemberItem_C::OnIsFireTeamLeaderChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.OnIsFireTeamLeaderChanged");

	UW_SquadMemberItem_C_OnIsFireTeamLeaderChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.Create Assign Fireteam Options
// (BlueprintCallable, BlueprintEvent)
void UW_SquadMemberItem_C::Create_Assign_Fireteam_Options()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.Create Assign Fireteam Options");

	UW_SquadMemberItem_C_Create_Assign_Fireteam_Options_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.Assign Return
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SquadMemberItem_C::Assign_Return(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.Assign Return");

	UW_SquadMemberItem_C_Assign_Return_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.Open Options
// (BlueprintCallable, BlueprintEvent)
void UW_SquadMemberItem_C::Open_Options()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.Open Options");

	UW_SquadMemberItem_C_Open_Options_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.OnCurrentVehicleDataChanged
// (Event, Protected, BlueprintEvent)
void UW_SquadMemberItem_C::OnCurrentVehicleDataChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.OnCurrentVehicleDataChanged");

	UW_SquadMemberItem_C_OnCurrentVehicleDataChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.OnSelectionStateChanged
// (Event, Protected, BlueprintEvent)
void UW_SquadMemberItem_C::OnSelectionStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.OnSelectionStateChanged");

	UW_SquadMemberItem_C_OnSelectionStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.OnVoipChannelChanged
// (Event, Protected, BlueprintEvent)
void UW_SquadMemberItem_C::OnVoipChannelChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.OnVoipChannelChanged");

	UW_SquadMemberItem_C_OnVoipChannelChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.OnIsMutedChanged
// (Event, Protected, BlueprintEvent)
void UW_SquadMemberItem_C::OnIsMutedChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.OnIsMutedChanged");

	UW_SquadMemberItem_C_OnIsMutedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.BndEvt__Button_Mute_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_SquadMemberItem_C::BndEvt__Button_Mute_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.BndEvt__Button_Mute_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature");

	UW_SquadMemberItem_C_BndEvt__Button_Mute_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.OnSquadIdChanged
// (Event, Protected, BlueprintEvent)
void UW_SquadMemberItem_C::OnSquadIdChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.OnSquadIdChanged");

	UW_SquadMemberItem_C_OnSquadIdChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_114_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_SquadMemberItem_C::BndEvt__SelectButton_K2Node_ComponentBoundEvent_114_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_114_OnButtonClickedEvent__DelegateSignature");

	UW_SquadMemberItem_C_BndEvt__SelectButton_K2Node_ComponentBoundEvent_114_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_SquadMemberItem_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.PreConstruct");

	UW_SquadMemberItem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.OnIsPossessingPawnChanged
// (Event, Protected, BlueprintEvent)
void UW_SquadMemberItem_C::OnIsPossessingPawnChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.OnIsPossessingPawnChanged");

	UW_SquadMemberItem_C_OnIsPossessingPawnChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.Popup Option Return
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SquadMemberItem_C::Popup_Option_Return(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.Popup Option Return");

	UW_SquadMemberItem_C_Popup_Option_Return_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.Create Promote Options
// (BlueprintCallable, BlueprintEvent)
void UW_SquadMemberItem_C::Create_Promote_Options()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.Create Promote Options");

	UW_SquadMemberItem_C_Create_Promote_Options_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.Promote Return
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SquadMemberItem_C::Promote_Return(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.Promote Return");

	UW_SquadMemberItem_C_Promote_Return_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_SquadMemberItem.W_SquadMemberItem_C.ExecuteUbergraph_W_SquadMemberItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_SquadMemberItem_C::ExecuteUbergraph_W_SquadMemberItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_SquadMemberItem.W_SquadMemberItem_C.ExecuteUbergraph_W_SquadMemberItem");

	UW_SquadMemberItem_C_ExecuteUbergraph_W_SquadMemberItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
