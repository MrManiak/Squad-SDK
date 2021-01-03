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

// Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.ShowHideCommanderStar
// (Public, BlueprintCallable, BlueprintEvent)
void UW_Tooltip_Soldier_C::ShowHideCommanderStar()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.ShowHideCommanderStar");

	UW_Tooltip_Soldier_C_ShowHideCommanderStar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.Update Fireteam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_Tooltip_Soldier_C::Update_Fireteam()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.Update Fireteam");

	UW_Tooltip_Soldier_C_Update_Fireteam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.Update Rank
// (Public, BlueprintCallable, BlueprintEvent)
void UW_Tooltip_Soldier_C::Update_Rank()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.Update Rank");

	UW_Tooltip_Soldier_C_Update_Rank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.Update Tint Color
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Tooltip_Soldier_C::Update_Tint_Color(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.Update Tint Color");

	UW_Tooltip_Soldier_C_Update_Tint_Color_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.UpdateSquadVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_Tooltip_Soldier_C::UpdateSquadVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.UpdateSquadVisuals");

	UW_Tooltip_Soldier_C_UpdateSquadVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.UpdateKitVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UW_Tooltip_Soldier_C::UpdateKitVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.UpdateKitVisuals");

	UW_Tooltip_Soldier_C_UpdateKitVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_Tooltip_Soldier_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.Construct");

	UW_Tooltip_Soldier_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.Update Info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSQSoldierInfo          Soldier_Info                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UW_Tooltip_Soldier_C::Update_Info(const struct FSQSoldierInfo& Soldier_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.Update Info");

	UW_Tooltip_Soldier_C_Update_Info_Params params;
	params.Soldier_Info = Soldier_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.ExecuteUbergraph_W_Tooltip_Soldier
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Tooltip_Soldier_C::ExecuteUbergraph_W_Tooltip_Soldier(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tooltip_Soldier.W_Tooltip_Soldier_C.ExecuteUbergraph_W_Tooltip_Soldier");

	UW_Tooltip_Soldier_C_ExecuteUbergraph_W_Tooltip_Soldier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
