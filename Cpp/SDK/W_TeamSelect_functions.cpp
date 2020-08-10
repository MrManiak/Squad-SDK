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

// Function W_TeamSelect.W_TeamSelect_C.Set Arrow Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Arrow_left                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Arrow_Right                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_TeamSelect_C::Set_Arrow_Visibility(bool Arrow_left, bool Arrow_Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamSelect.W_TeamSelect_C.Set Arrow Visibility");

	UW_TeamSelect_C_Set_Arrow_Visibility_Params params;
	params.Arrow_left = Arrow_left;
	params.Arrow_Right = Arrow_Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamSelect.W_TeamSelect_C.Get Map Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_TeamSelect_C::Get_Map_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamSelect.W_TeamSelect_C.Get Map Info");

	UW_TeamSelect_C_Get_Map_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamSelect.W_TeamSelect_C.BIND - Map and Mode
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UW_TeamSelect_C::BIND___Map_and_Mode()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamSelect.W_TeamSelect_C.BIND - Map and Mode");

	UW_TeamSelect_C_BIND___Map_and_Mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_TeamSelect.W_TeamSelect_C.BIND - Server Message
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UW_TeamSelect_C::BIND___Server_Message()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamSelect.W_TeamSelect_C.BIND - Server Message");

	UW_TeamSelect_C_BIND___Server_Message_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_TeamSelect.W_TeamSelect_C.BndEvt__TeamInfo_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ASQTeamState*            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TeamSelect_C::BndEvt__TeamInfo_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class ASQTeamState* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamSelect.W_TeamSelect_C.BndEvt__TeamInfo_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	UW_TeamSelect_C_BndEvt__TeamInfo_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamSelect.W_TeamSelect_C.BndEvt__TeamInfo_2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ASQTeamState*            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TeamSelect_C::BndEvt__TeamInfo_2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class ASQTeamState* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamSelect.W_TeamSelect_C.BndEvt__TeamInfo_2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	UW_TeamSelect_C_BndEvt__TeamInfo_2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamSelect.W_TeamSelect_C.BndEvt__Nav_Map_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TeamSelect_C::BndEvt__Nav_Map_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamSelect.W_TeamSelect_C.BndEvt__Nav_Map_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UW_TeamSelect_C_BndEvt__Nav_Map_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamSelect.W_TeamSelect_C.BndEvt__Nav_Server_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TeamSelect_C::BndEvt__Nav_Server_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamSelect.W_TeamSelect_C.BndEvt__Nav_Server_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UW_TeamSelect_C_BndEvt__Nav_Server_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamSelect.W_TeamSelect_C.Set Navigation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TeamSelect_C::Set_Navigation(class UObject* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamSelect.W_TeamSelect_C.Set Navigation");

	UW_TeamSelect_C_Set_Navigation_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamSelect.W_TeamSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_TeamSelect_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamSelect.W_TeamSelect_C.Construct");

	UW_TeamSelect_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamSelect.W_TeamSelect_C.Enable Selection
// (BlueprintCallable, BlueprintEvent)
void UW_TeamSelect_C::Enable_Selection()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamSelect.W_TeamSelect_C.Enable Selection");

	UW_TeamSelect_C_Enable_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamSelect.W_TeamSelect_C.Refresh
// (BlueprintCallable, BlueprintEvent)
void UW_TeamSelect_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamSelect.W_TeamSelect_C.Refresh");

	UW_TeamSelect_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamSelect.W_TeamSelect_C.BndEvt__LeftHover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UW_TeamSelect_C::BndEvt__LeftHover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamSelect.W_TeamSelect_C.BndEvt__LeftHover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UW_TeamSelect_C_BndEvt__LeftHover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamSelect.W_TeamSelect_C.BndEvt__RightHover_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UW_TeamSelect_C::BndEvt__RightHover_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamSelect.W_TeamSelect_C.BndEvt__RightHover_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UW_TeamSelect_C_BndEvt__RightHover_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamSelect.W_TeamSelect_C.BndEvt__Centre_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UW_TeamSelect_C::BndEvt__Centre_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamSelect.W_TeamSelect_C.BndEvt__Centre_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UW_TeamSelect_C_BndEvt__Centre_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamSelect.W_TeamSelect_C.Set Box Widths
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Left                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TeamSelect_C::Set_Box_Widths(float Left, float Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamSelect.W_TeamSelect_C.Set Box Widths");

	UW_TeamSelect_C_Set_Box_Widths_Params params;
	params.Left = Left;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamSelect.W_TeamSelect_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TeamSelect_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamSelect.W_TeamSelect_C.Tick");

	UW_TeamSelect_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamSelect.W_TeamSelect_C.Reset Hover
// (BlueprintCallable, BlueprintEvent)
void UW_TeamSelect_C::Reset_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamSelect.W_TeamSelect_C.Reset Hover");

	UW_TeamSelect_C_Reset_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamSelect.W_TeamSelect_C.ExecuteUbergraph_W_TeamSelect
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TeamSelect_C::ExecuteUbergraph_W_TeamSelect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamSelect.W_TeamSelect_C.ExecuteUbergraph_W_TeamSelect");

	UW_TeamSelect_C_ExecuteUbergraph_W_TeamSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamSelect.W_TeamSelect_C.Team Button Pressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQTeamState*            New_Team                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TeamSelect_C::Team_Button_Pressed__DelegateSignature(class ASQTeamState* New_Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamSelect.W_TeamSelect_C.Team Button Pressed__DelegateSignature");

	UW_TeamSelect_C_Team_Button_Pressed__DelegateSignature_Params params;
	params.New_Team = New_Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
