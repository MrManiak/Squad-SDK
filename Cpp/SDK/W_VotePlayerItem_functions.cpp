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

// Function W_VotePlayerItem.W_VotePlayerItem_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_VotePlayerItem_C::BndEvt__SelectButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VotePlayerItem.W_VotePlayerItem_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UW_VotePlayerItem_C_BndEvt__SelectButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VotePlayerItem.W_VotePlayerItem_C.OnIsVotedByPlayerChanged
// (Event, Public, BlueprintEvent)
void UW_VotePlayerItem_C::OnIsVotedByPlayerChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VotePlayerItem.W_VotePlayerItem_C.OnIsVotedByPlayerChanged");

	UW_VotePlayerItem_C_OnIsVotedByPlayerChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VotePlayerItem.W_VotePlayerItem_C.OnNomineeNameChanged
// (Event, Public, BlueprintEvent)
void UW_VotePlayerItem_C::OnNomineeNameChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VotePlayerItem.W_VotePlayerItem_C.OnNomineeNameChanged");

	UW_VotePlayerItem_C_OnNomineeNameChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VotePlayerItem.W_VotePlayerItem_C.OnVoteCountChanged
// (Event, Public, BlueprintEvent)
void UW_VotePlayerItem_C::OnVoteCountChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VotePlayerItem.W_VotePlayerItem_C.OnVoteCountChanged");

	UW_VotePlayerItem_C_OnVoteCountChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VotePlayerItem.W_VotePlayerItem_C.ExecuteUbergraph_W_VotePlayerItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_VotePlayerItem_C::ExecuteUbergraph_W_VotePlayerItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VotePlayerItem.W_VotePlayerItem_C.ExecuteUbergraph_W_VotePlayerItem");

	UW_VotePlayerItem_C_ExecuteUbergraph_W_VotePlayerItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
