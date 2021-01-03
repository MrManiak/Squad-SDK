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

// Function AmmoWidget.AmmoWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UAmmoWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmmoWidget.AmmoWidget_C.Construct");

	UAmmoWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AmmoWidget.AmmoWidget_C.BPInit
// (Event, Public, BlueprintEvent)
void UAmmoWidget_C::BPInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmmoWidget.AmmoWidget_C.BPInit");

	UAmmoWidget_C_BPInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AmmoWidget.AmmoWidget_C.OnCurrentWeaponChanged
// (Event, Public, BlueprintEvent)
void UAmmoWidget_C::OnCurrentWeaponChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmmoWidget.AmmoWidget_C.OnCurrentWeaponChanged");

	UAmmoWidget_C_OnCurrentWeaponChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AmmoWidget.AmmoWidget_C.OnShowResourceAmounts
// (Event, Public, BlueprintEvent)
void UAmmoWidget_C::OnShowResourceAmounts()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmmoWidget.AmmoWidget_C.OnShowResourceAmounts");

	UAmmoWidget_C_OnShowResourceAmounts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AmmoWidget.AmmoWidget_C.OnShowCurrentWeapon
// (Event, Public, BlueprintEvent)
void UAmmoWidget_C::OnShowCurrentWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmmoWidget.AmmoWidget_C.OnShowCurrentWeapon");

	UAmmoWidget_C_OnShowCurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AmmoWidget.AmmoWidget_C.ExecuteUbergraph_AmmoWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAmmoWidget_C::ExecuteUbergraph_AmmoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmmoWidget.AmmoWidget_C.ExecuteUbergraph_AmmoWidget");

	UAmmoWidget_C_ExecuteUbergraph_AmmoWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
