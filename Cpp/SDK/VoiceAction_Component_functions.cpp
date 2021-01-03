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

// Function VoiceAction_Component.VoiceAction_Component_C.Try to Play Voice
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Voice                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Played                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UVoiceAction_Component_C::Try_to_Play_Voice(class USoundBase* Voice, bool* Played)
{
	static auto fn = UObject::FindObject<UFunction>("Function VoiceAction_Component.VoiceAction_Component_C.Try to Play Voice");

	UVoiceAction_Component_C_Try_to_Play_Voice_Params params;
	params.Voice = Voice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Played != nullptr)
		*Played = params.Played;

}


// Function VoiceAction_Component.VoiceAction_Component_C.Multicast Voice
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVoiceAction_Component_C::Multicast_Voice(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function VoiceAction_Component.VoiceAction_Component_C.Multicast Voice");

	UVoiceAction_Component_C_Multicast_Voice_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VoiceAction_Component.VoiceAction_Component_C.Server Play Voice
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVoiceAction_Component_C::Server_Play_Voice(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function VoiceAction_Component.VoiceAction_Component_C.Server Play Voice");

	UVoiceAction_Component_C_Server_Play_Voice_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VoiceAction_Component.VoiceAction_Component_C.ExecuteUbergraph_VoiceAction_Component
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVoiceAction_Component_C::ExecuteUbergraph_VoiceAction_Component(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VoiceAction_Component.VoiceAction_Component_C.ExecuteUbergraph_VoiceAction_Component");

	UVoiceAction_Component_C_ExecuteUbergraph_VoiceAction_Component_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
