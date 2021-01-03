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

// Function W_TeamInfo.W_TeamInfo_C.Same Team
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UW_TeamInfo_C::Same_Team()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamInfo.W_TeamInfo_C.Same Team");

	UW_TeamInfo_C_Same_Team_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_TeamInfo.W_TeamInfo_C.Init Team Image
// (Public, BlueprintCallable, BlueprintEvent)
void UW_TeamInfo_C::Init_Team_Image()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamInfo.W_TeamInfo_C.Init Team Image");

	UW_TeamInfo_C_Init_Team_Image_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamInfo.W_TeamInfo_C.Refresh Descriptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_TeamInfo_C::Refresh_Descriptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamInfo.W_TeamInfo_C.Refresh Descriptions");

	UW_TeamInfo_C_Refresh_Descriptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamInfo.W_TeamInfo_C.Validate Team
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_TeamInfo_C::Validate_Team(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamInfo.W_TeamInfo_C.Validate Team");

	UW_TeamInfo_C_Validate_Team_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function W_TeamInfo.W_TeamInfo_C.Update Button Color
// (Public, BlueprintCallable, BlueprintEvent)
void UW_TeamInfo_C::Update_Button_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamInfo.W_TeamInfo_C.Update Button Color");

	UW_TeamInfo_C_Update_Button_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamInfo.W_TeamInfo_C.Update Button
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_TeamInfo_C::Update_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamInfo.W_TeamInfo_C.Update Button");

	UW_TeamInfo_C_Update_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamInfo.W_TeamInfo_C.Are Teams Unbalanced
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bUnbalanced                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_TeamInfo_C::Are_Teams_Unbalanced(bool* bUnbalanced)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamInfo.W_TeamInfo_C.Are Teams Unbalanced");

	UW_TeamInfo_C_Are_Teams_Unbalanced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bUnbalanced != nullptr)
		*bUnbalanced = params.bUnbalanced;

}


// Function W_TeamInfo.W_TeamInfo_C.Init Team
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQTeamState*            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TeamInfo_C::Init_Team(class ASQTeamState* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamInfo.W_TeamInfo_C.Init Team");

	UW_TeamInfo_C_Init_Team_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamInfo.W_TeamInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_TeamInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamInfo.W_TeamInfo_C.Construct");

	UW_TeamInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamInfo.W_TeamInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_TeamInfo_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamInfo.W_TeamInfo_C.PreConstruct");

	UW_TeamInfo_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamInfo.W_TeamInfo_C.BndEvt__ButtonSelect_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_TeamInfo_C::BndEvt__ButtonSelect_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamInfo.W_TeamInfo_C.BndEvt__ButtonSelect_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature");

	UW_TeamInfo_C_BndEvt__ButtonSelect_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamInfo.W_TeamInfo_C.Get Team Info
// (BlueprintCallable, BlueprintEvent)
void UW_TeamInfo_C::Get_Team_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamInfo.W_TeamInfo_C.Get Team Info");

	UW_TeamInfo_C_Get_Team_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamInfo.W_TeamInfo_C.Set Minimised
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Minimised                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_TeamInfo_C::Set_Minimised(bool Minimised)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamInfo.W_TeamInfo_C.Set Minimised");

	UW_TeamInfo_C_Set_Minimised_Params params;
	params.Minimised = Minimised;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamInfo.W_TeamInfo_C.Update Widget
// (BlueprintCallable, BlueprintEvent)
void UW_TeamInfo_C::Update_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamInfo.W_TeamInfo_C.Update Widget");

	UW_TeamInfo_C_Update_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamInfo.W_TeamInfo_C.Timer Enable Button
// (BlueprintCallable, BlueprintEvent)
void UW_TeamInfo_C::Timer_Enable_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamInfo.W_TeamInfo_C.Timer Enable Button");

	UW_TeamInfo_C_Timer_Enable_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamInfo.W_TeamInfo_C.Disable Button Temporarily
// (BlueprintCallable, BlueprintEvent)
void UW_TeamInfo_C::Disable_Button_Temporarily()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamInfo.W_TeamInfo_C.Disable Button Temporarily");

	UW_TeamInfo_C_Disable_Button_Temporarily_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamInfo.W_TeamInfo_C.ExecuteUbergraph_W_TeamInfo
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TeamInfo_C::ExecuteUbergraph_W_TeamInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamInfo.W_TeamInfo_C.ExecuteUbergraph_W_TeamInfo");

	UW_TeamInfo_C_ExecuteUbergraph_W_TeamInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_TeamInfo.W_TeamInfo_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQTeamState*            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_TeamInfo_C::Clicked__DelegateSignature(class ASQTeamState* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TeamInfo.W_TeamInfo_C.Clicked__DelegateSignature");

	UW_TeamInfo_C_Clicked__DelegateSignature_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
