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

// Function BP_GameplayFunctionLibrary.BP_GameplayFunctionLibrary_C.Show Hide Mouse
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Focus                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Game_Input                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Display_Input                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           UI_Input                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           New_Input_State                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameplayFunctionLibrary_C::STATIC_Show_Hide_Mouse(class UUserWidget* Focus, bool Game_Input, bool Display_Input, bool UI_Input, bool New_Input_State, const struct FString& Reason, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameplayFunctionLibrary.BP_GameplayFunctionLibrary_C.Show Hide Mouse");

	UBP_GameplayFunctionLibrary_C_Show_Hide_Mouse_Params params;
	params.Focus = Focus;
	params.Game_Input = Game_Input;
	params.Display_Input = Display_Input;
	params.UI_Input = UI_Input;
	params.New_Input_State = New_Input_State;
	params.Reason = Reason;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameplayFunctionLibrary.BP_GameplayFunctionLibrary_C.GetSquadGameMode
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQGameMode*             Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameplayFunctionLibrary_C::STATIC_GetSquadGameMode(class UObject* __WorldContext, class ASQGameMode** Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameplayFunctionLibrary.BP_GameplayFunctionLibrary_C.GetSquadGameMode");

	UBP_GameplayFunctionLibrary_C_GetSquadGameMode_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function BP_GameplayFunctionLibrary.BP_GameplayFunctionLibrary_C.GetSquadGameState
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQGameState*            Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameplayFunctionLibrary_C::STATIC_GetSquadGameState(class UObject* __WorldContext, class ASQGameState** Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameplayFunctionLibrary.BP_GameplayFunctionLibrary_C.GetSquadGameState");

	UBP_GameplayFunctionLibrary_C_GetSquadGameState_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function BP_GameplayFunctionLibrary.BP_GameplayFunctionLibrary_C.GetSquadPlayerController
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Player_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQPlayerController*     Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameplayFunctionLibrary_C::STATIC_GetSquadPlayerController(int Player_Index, class UObject* __WorldContext, class ASQPlayerController** Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameplayFunctionLibrary.BP_GameplayFunctionLibrary_C.GetSquadPlayerController");

	UBP_GameplayFunctionLibrary_C_GetSquadPlayerController_Params params;
	params.Player_Index = Player_Index;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
