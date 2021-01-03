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

// Function W_VoipOwningPlayer.W_VoipOwningPlayer_C.Get Squad Leader Name
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UW_VoipOwningPlayer_C::Get_Squad_Leader_Name()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VoipOwningPlayer.W_VoipOwningPlayer_C.Get Squad Leader Name");

	UW_VoipOwningPlayer_C_Get_Squad_Leader_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_VoipOwningPlayer.W_VoipOwningPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_VoipOwningPlayer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VoipOwningPlayer.W_VoipOwningPlayer_C.Construct");

	UW_VoipOwningPlayer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VoipOwningPlayer.W_VoipOwningPlayer_C.Refresh Voip
// (BlueprintCallable, BlueprintEvent)
void UW_VoipOwningPlayer_C::Refresh_Voip()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VoipOwningPlayer.W_VoipOwningPlayer_C.Refresh Voip");

	UW_VoipOwningPlayer_C_Refresh_Voip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_VoipOwningPlayer.W_VoipOwningPlayer_C.ExecuteUbergraph_W_VoipOwningPlayer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_VoipOwningPlayer_C::ExecuteUbergraph_W_VoipOwningPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_VoipOwningPlayer.W_VoipOwningPlayer_C.ExecuteUbergraph_W_VoipOwningPlayer");

	UW_VoipOwningPlayer_C_ExecuteUbergraph_W_VoipOwningPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
