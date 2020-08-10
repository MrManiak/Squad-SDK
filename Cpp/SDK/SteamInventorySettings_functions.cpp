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

// Function SteamInventorySettings.SteamInventorySettings_C.HideSelf
// (BlueprintCallable, BlueprintEvent)
void USteamInventorySettings_C::HideSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamInventorySettings.SteamInventorySettings_C.HideSelf");

	USteamInventorySettings_C_HideSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamInventorySettings.SteamInventorySettings_C.RefreshInventory
// (BlueprintCallable, BlueprintEvent)
void USteamInventorySettings_C::RefreshInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamInventorySettings.SteamInventorySettings_C.RefreshInventory");

	USteamInventorySettings_C_RefreshInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamInventorySettings.SteamInventorySettings_C.Toggle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USettingsItem_TickBox_C* Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USteamInventorySettings_C::Toggle(bool bSelected, class USettingsItem_TickBox_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamInventorySettings.SteamInventorySettings_C.Toggle");

	USteamInventorySettings_C_Toggle_Params params;
	params.bSelected = bSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamInventorySettings.SteamInventorySettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USteamInventorySettings_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamInventorySettings.SteamInventorySettings_C.Construct");

	USteamInventorySettings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamInventorySettings.SteamInventorySettings_C.ExecuteUbergraph_SteamInventorySettings
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USteamInventorySettings_C::ExecuteUbergraph_SteamInventorySettings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamInventorySettings.SteamInventorySettings_C.ExecuteUbergraph_SteamInventorySettings");

	USteamInventorySettings_C_ExecuteUbergraph_SteamInventorySettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
