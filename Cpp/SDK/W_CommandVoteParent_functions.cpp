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

// Function W_CommandVoteParent.W_CommandVoteParent_C.Get Can Use Button
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Reason                         (Parm, OutParm)
void UW_CommandVoteParent_C::Get_Can_Use_Button(bool* Valid, struct FText* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandVoteParent.W_CommandVoteParent_C.Get Can Use Button");

	UW_CommandVoteParent_C_Get_Can_Use_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
	if (Reason != nullptr)
		*Reason = params.Reason;

}


// Function W_CommandVoteParent.W_CommandVoteParent_C.Update Appearance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_CommandVoteParent_C::Update_Appearance()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandVoteParent.W_CommandVoteParent_C.Update Appearance");

	UW_CommandVoteParent_C_Update_Appearance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandVoteParent.W_CommandVoteParent_C.UpdateVisibilities
// (Public, BlueprintCallable, BlueprintEvent)
void UW_CommandVoteParent_C::UpdateVisibilities()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandVoteParent.W_CommandVoteParent_C.UpdateVisibilities");

	UW_CommandVoteParent_C_UpdateVisibilities_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandVoteParent.W_CommandVoteParent_C.Get_TB_VoteActiveText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UW_CommandVoteParent_C::Get_TB_VoteActiveText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandVoteParent.W_CommandVoteParent_C.Get_TB_VoteActiveText_Text_1");

	UW_CommandVoteParent_C_Get_TB_VoteActiveText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_CommandVoteParent.W_CommandVoteParent_C.BPInit
// (Event, Public, BlueprintEvent)
void UW_CommandVoteParent_C::BPInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandVoteParent.W_CommandVoteParent_C.BPInit");

	UW_CommandVoteParent_C_BPInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandVoteParent.W_CommandVoteParent_C.BndEvt__ButtonCommander_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenu_Button_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandVoteParent_C::BndEvt__ButtonCommander_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(bool bSelected, class UMainMenu_Button_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandVoteParent.W_CommandVoteParent_C.BndEvt__ButtonCommander_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UW_CommandVoteParent_C_BndEvt__ButtonCommander_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandVoteParent.W_CommandVoteParent_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandVoteParent_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandVoteParent.W_CommandVoteParent_C.Tick");

	UW_CommandVoteParent_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandVoteParent.W_CommandVoteParent_C.OnIsVoteInProgressChanged
// (Event, Public, BlueprintEvent)
void UW_CommandVoteParent_C::OnIsVoteInProgressChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandVoteParent.W_CommandVoteParent_C.OnIsVoteInProgressChanged");

	UW_CommandVoteParent_C_OnIsVoteInProgressChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandVoteParent.W_CommandVoteParent_C.OnIsVotingAvailableChanged
// (Event, Public, BlueprintEvent)
void UW_CommandVoteParent_C::OnIsVotingAvailableChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandVoteParent.W_CommandVoteParent_C.OnIsVotingAvailableChanged");

	UW_CommandVoteParent_C_OnIsVotingAvailableChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandVoteParent.W_CommandVoteParent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_CommandVoteParent_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandVoteParent.W_CommandVoteParent_C.Construct");

	UW_CommandVoteParent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandVoteParent.W_CommandVoteParent_C.Cache Player State
// (BlueprintCallable, BlueprintEvent)
void UW_CommandVoteParent_C::Cache_Player_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandVoteParent.W_CommandVoteParent_C.Cache Player State");

	UW_CommandVoteParent_C_Cache_Player_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_CommandVoteParent.W_CommandVoteParent_C.ExecuteUbergraph_W_CommandVoteParent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_CommandVoteParent_C::ExecuteUbergraph_W_CommandVoteParent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CommandVoteParent.W_CommandVoteParent_C.ExecuteUbergraph_W_CommandVoteParent");

	UW_CommandVoteParent_C_ExecuteUbergraph_W_CommandVoteParent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
