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

// Function BP_PickupRallyPointAction.BP_PickupRallyPointAction_C.Player Enter Radius
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Can_Pickup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PickupRallyPointAction_C::Player_Enter_Radius(class APlayerController* Player, bool Can_Pickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupRallyPointAction.BP_PickupRallyPointAction_C.Player Enter Radius");

	UBP_PickupRallyPointAction_C_Player_Enter_Radius_Params params;
	params.Player = Player;
	params.Can_Pickup = Can_Pickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PickupRallyPointAction.BP_PickupRallyPointAction_C.Player Left Radius
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PickupRallyPointAction_C::Player_Left_Radius(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupRallyPointAction.BP_PickupRallyPointAction_C.Player Left Radius");

	UBP_PickupRallyPointAction_C_Player_Left_Radius_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PickupRallyPointAction.BP_PickupRallyPointAction_C.Pickup Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PickupRallyPointAction_C::Pickup_Item(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupRallyPointAction.BP_PickupRallyPointAction_C.Pickup Item");

	UBP_PickupRallyPointAction_C_Pickup_Item_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PickupRallyPointAction.BP_PickupRallyPointAction_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseRadialMenu_C*       Raidal_Menu                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PickupRallyPointAction_C::OnClicked(class UBaseRadialMenu_C* Raidal_Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupRallyPointAction.BP_PickupRallyPointAction_C.OnClicked");

	UBP_PickupRallyPointAction_C_OnClicked_Params params;
	params.Raidal_Menu = Raidal_Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PickupRallyPointAction.BP_PickupRallyPointAction_C.ExecuteUbergraph_BP_PickupRallyPointAction
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PickupRallyPointAction_C::ExecuteUbergraph_BP_PickupRallyPointAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupRallyPointAction.BP_PickupRallyPointAction_C.ExecuteUbergraph_BP_PickupRallyPointAction");

	UBP_PickupRallyPointAction_C_ExecuteUbergraph_BP_PickupRallyPointAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
