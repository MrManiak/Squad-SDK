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

// Function BP_VoiceAction.BP_VoiceAction_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Raidal_Menu                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_VoiceAction_C::OnClicked(class UBaseRadialMenu_C* Raidal_Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceAction.BP_VoiceAction_C.OnClicked");

	UBP_VoiceAction_C_OnClicked_Params params;
	params.Raidal_Menu = Raidal_Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VoiceAction.BP_VoiceAction_C.ExecuteUbergraph_BP_VoiceAction
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_VoiceAction_C::ExecuteUbergraph_BP_VoiceAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceAction.BP_VoiceAction_C.ExecuteUbergraph_BP_VoiceAction");

	UBP_VoiceAction_C_ExecuteUbergraph_BP_VoiceAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VoiceAction.BP_VoiceAction_C.DoAction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_VoiceAction_C::DoAction__DelegateSignature(class UClass* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VoiceAction.BP_VoiceAction_C.DoAction__DelegateSignature");

	UBP_VoiceAction_C_DoAction__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
