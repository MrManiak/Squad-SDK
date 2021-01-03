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

// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.BindEventToAmmoUpdated
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_SquadRallyPoint_C::BindEventToAmmoUpdated(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.BindEventToAmmoUpdated");

	ABP_SquadRallyPoint_C_BindEventToAmmoUpdated_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.CanRearmPawn
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APawn*                   Rearmer                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_SquadRallyPoint_C::CanRearmPawn(class APawn* Rearmer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.CanRearmPawn");

	ABP_SquadRallyPoint_C_CanRearmPawn_Params params;
	params.Rearmer = Rearmer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.CanRearmWeapon
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ASQEquipableItem*        Weapon                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_SquadRallyPoint_C::CanRearmWeapon(class ASQEquipableItem* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.CanRearmWeapon");

	ABP_SquadRallyPoint_C_CanRearmWeapon_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.ConsumeAmmo
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AmmoRequired                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_SquadRallyPoint_C::ConsumeAmmo(float AmmoRequired)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.ConsumeAmmo");

	ABP_SquadRallyPoint_C_ConsumeAmmo_Params params;
	params.AmmoRequired = AmmoRequired;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.GetAmmo
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ABP_SquadRallyPoint_C::GetAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.GetAmmo");

	ABP_SquadRallyPoint_C_GetAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.GetRearmNoAmmoString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString ABP_SquadRallyPoint_C::GetRearmNoAmmoString()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.GetRearmNoAmmoString");

	ABP_SquadRallyPoint_C_GetRearmNoAmmoString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.GetRearmSuccessString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString ABP_SquadRallyPoint_C::GetRearmSuccessString()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.GetRearmSuccessString");

	ABP_SquadRallyPoint_C_GetRearmSuccessString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.GetRearmType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESQRearmType                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESQRearmType ABP_SquadRallyPoint_C::GetRearmType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.GetRearmType");

	ABP_SquadRallyPoint_C_GetRearmType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.UnbindEventToAmmoUpdated
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_SquadRallyPoint_C::UnbindEventToAmmoUpdated(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.UnbindEventToAmmoUpdated");

	ABP_SquadRallyPoint_C_UnbindEventToAmmoUpdated_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.ShouldDisplayPrompt
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_SquadRallyPoint_C::ShouldDisplayPrompt(class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.ShouldDisplayPrompt");

	ABP_SquadRallyPoint_C_ShouldDisplayPrompt_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.GetInterfaceTeam
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_SquadRallyPoint_C::GetInterfaceTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.GetInterfaceTeam");

	ABP_SquadRallyPoint_C_GetInterfaceTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.GetUsableData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSQUsableData           ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSQUsableData ABP_SquadRallyPoint_C::GetUsableData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.GetUsableData");

	ABP_SquadRallyPoint_C_GetUsableData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.Player Left Radius
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SquadRallyPoint_C::Player_Left_Radius(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.Player Left Radius");

	ABP_SquadRallyPoint_C_Player_Left_Radius_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.BPStopUsed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SquadRallyPoint_C::BPStopUsed(class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.BPStopUsed");

	ABP_SquadRallyPoint_C_BPStopUsed_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.ServerOnUsed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SquadRallyPoint_C::ServerOnUsed(class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.ServerOnUsed");

	ABP_SquadRallyPoint_C_ServerOnUsed_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.ServerStopUsed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SquadRallyPoint_C::ServerStopUsed(class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.ServerStopUsed");

	ABP_SquadRallyPoint_C_ServerStopUsed_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.BPDisplayPrompt
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SquadRallyPoint_C::BPDisplayPrompt(class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.BPDisplayPrompt");

	ABP_SquadRallyPoint_C_BPDisplayPrompt_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.BPHidePrompt
// (Event, Public, BlueprintEvent)
void ABP_SquadRallyPoint_C::BPHidePrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.BPHidePrompt");

	ABP_SquadRallyPoint_C_BPHidePrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.BPOnUsed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SquadRallyPoint_C::BPOnUsed(class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.BPOnUsed");

	ABP_SquadRallyPoint_C_BPOnUsed_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.Pickup Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SquadRallyPoint_C::Pickup_Item(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.Pickup Item");

	ABP_SquadRallyPoint_C_Pickup_Item_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.ServerPickupRallyPoint
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SquadRallyPoint_C::ServerPickupRallyPoint(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.ServerPickupRallyPoint");

	ABP_SquadRallyPoint_C_ServerPickupRallyPoint_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.Player Enter Radius
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Can_Pickup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_SquadRallyPoint_C::Player_Enter_Radius(class APlayerController* Player, bool Can_Pickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.Player Enter Radius");

	ABP_SquadRallyPoint_C_Player_Enter_Radius_Params params;
	params.Player = Player;
	params.Can_Pickup = Can_Pickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.ExecuteUbergraph_BP_SquadRallyPoint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SquadRallyPoint_C::ExecuteUbergraph_BP_SquadRallyPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadRallyPoint.BP_SquadRallyPoint_C.ExecuteUbergraph_BP_SquadRallyPoint");

	ABP_SquadRallyPoint_C_ExecuteUbergraph_BP_SquadRallyPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
