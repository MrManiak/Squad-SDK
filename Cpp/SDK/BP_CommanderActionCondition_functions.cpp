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

// Function BP_CommanderActionCondition.BP_CommanderActionCondition_C.Can Use Actions
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASQPlayerController*     Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  Command_Option                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Require_Active                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Out_Reason                     (Parm, OutParm)
void UBP_CommanderActionCondition_C::Can_Use_Actions(class ASQPlayerController* Player, class UClass* Command_Option, bool Require_Active, bool* Valid, struct FText* Out_Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CommanderActionCondition.BP_CommanderActionCondition_C.Can Use Actions");

	UBP_CommanderActionCondition_C_Can_Use_Actions_Params params;
	params.Player = Player;
	params.Command_Option = Command_Option;
	params.Require_Active = Require_Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
	if (Out_Reason != nullptr)
		*Out_Reason = params.Out_Reason;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
