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

// Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.UpdateCurrentWeapon
// (Public, BlueprintCallable, BlueprintEvent)
void UAbrams_GunnerReticle_C::UpdateCurrentWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.UpdateCurrentWeapon");

	UAbrams_GunnerReticle_C_UpdateCurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.SetWeaponName
// (Public, BlueprintCallable, BlueprintEvent)
void UAbrams_GunnerReticle_C::SetWeaponName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.SetWeaponName");

	UAbrams_GunnerReticle_C_SetWeaponName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.RangeFinder
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UAbrams_GunnerReticle_C::RangeFinder()
{
	static auto fn = UObject::FindObject<UFunction>("Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.RangeFinder");

	UAbrams_GunnerReticle_C_RangeFinder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.TunnelOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RangeOfMotion                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Multiplier                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                 TunnelImg                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                 Reticle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbrams_GunnerReticle_C::TunnelOffset(float RangeOfMotion, float Multiplier, float InterpSpeed, class UWidget* TunnelImg, class UWidget* Reticle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.TunnelOffset");

	UAbrams_GunnerReticle_C_TunnelOffset_Params params;
	params.RangeOfMotion = RangeOfMotion;
	params.Multiplier = Multiplier;
	params.InterpSpeed = InterpSpeed;
	params.TunnelImg = TunnelImg;
	params.Reticle = Reticle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.UpdateAmmo
// (BlueprintCallable, BlueprintEvent)
void UAbrams_GunnerReticle_C::UpdateAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.UpdateAmmo");

	UAbrams_GunnerReticle_C_UpdateAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.UpdateZoomLevelReticle
// (BlueprintCallable, BlueprintEvent)
void UAbrams_GunnerReticle_C::UpdateZoomLevelReticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.UpdateZoomLevelReticle");

	UAbrams_GunnerReticle_C_UpdateZoomLevelReticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.UpdateWeaponRotation
// (BlueprintCallable, BlueprintEvent)
void UAbrams_GunnerReticle_C::UpdateWeaponRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.UpdateWeaponRotation");

	UAbrams_GunnerReticle_C_UpdateWeaponRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.UpdateStabilizationIndicator
// (BlueprintCallable, BlueprintEvent)
void UAbrams_GunnerReticle_C::UpdateStabilizationIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.UpdateStabilizationIndicator");

	UAbrams_GunnerReticle_C_UpdateStabilizationIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbrams_GunnerReticle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.Tick");

	UAbrams_GunnerReticle_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UAbrams_GunnerReticle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.Construct");

	UAbrams_GunnerReticle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.UpdateTurretHealth
// (BlueprintCallable, BlueprintEvent)
void UAbrams_GunnerReticle_C::UpdateTurretHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.UpdateTurretHealth");

	UAbrams_GunnerReticle_C_UpdateTurretHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.ExecuteUbergraph_Abrams_GunnerReticle
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbrams_GunnerReticle_C::ExecuteUbergraph_Abrams_GunnerReticle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Abrams_GunnerReticle.Abrams_GunnerReticle_C.ExecuteUbergraph_Abrams_GunnerReticle");

	UAbrams_GunnerReticle_C_ExecuteUbergraph_Abrams_GunnerReticle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
