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

// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.FixAngleText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          FixedAngle                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UArbalet_GunnerReticle_C::FixAngleText(float Angle, float* FixedAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.FixAngleText");

	UArbalet_GunnerReticle_C_FixAngleText_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FixedAngle != nullptr)
		*FixedAngle = params.FixedAngle;

}


// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.ZoomTextScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Zoom                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UArbalet_GunnerReticle_C::ZoomTextScale(int Zoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.ZoomTextScale");

	UArbalet_GunnerReticle_C_ZoomTextScale_Params params;
	params.Zoom = Zoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.UpdateCurrentWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UArbalet_GunnerReticle_C::UpdateCurrentWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.UpdateCurrentWeapon");

	UArbalet_GunnerReticle_C_UpdateCurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.SetWeaponName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   NewParam                       (Parm, OutParm)
void UArbalet_GunnerReticle_C::SetWeaponName(struct FText* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.SetWeaponName");

	UArbalet_GunnerReticle_C_SetWeaponName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.RangeFinder
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UArbalet_GunnerReticle_C::RangeFinder()
{
	static auto fn = UObject::FindObject<UFunction>("Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.RangeFinder");

	UArbalet_GunnerReticle_C_RangeFinder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.TunnelOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RangeOfMotion                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Multiplier                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                 TunnelImg                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                 Reticle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UArbalet_GunnerReticle_C::TunnelOffset(float RangeOfMotion, float Multiplier, float InterpSpeed, class UWidget* TunnelImg, class UWidget* Reticle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.TunnelOffset");

	UArbalet_GunnerReticle_C_TunnelOffset_Params params;
	params.RangeOfMotion = RangeOfMotion;
	params.Multiplier = Multiplier;
	params.InterpSpeed = InterpSpeed;
	params.TunnelImg = TunnelImg;
	params.Reticle = Reticle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UArbalet_GunnerReticle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.Tick");

	UArbalet_GunnerReticle_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.UpdateWeaponRotation
// (BlueprintCallable, BlueprintEvent)
void UArbalet_GunnerReticle_C::UpdateWeaponRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.UpdateWeaponRotation");

	UArbalet_GunnerReticle_C_UpdateWeaponRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.UpdateAmmo
// (BlueprintCallable, BlueprintEvent)
void UArbalet_GunnerReticle_C::UpdateAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.UpdateAmmo");

	UArbalet_GunnerReticle_C_UpdateAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.UpdateZoomLevelReticle
// (BlueprintCallable, BlueprintEvent)
void UArbalet_GunnerReticle_C::UpdateZoomLevelReticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.UpdateZoomLevelReticle");

	UArbalet_GunnerReticle_C_UpdateZoomLevelReticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UArbalet_GunnerReticle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.Construct");

	UArbalet_GunnerReticle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.UpdateStabilizationIndicator
// (BlueprintCallable, BlueprintEvent)
void UArbalet_GunnerReticle_C::UpdateStabilizationIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.UpdateStabilizationIndicator");

	UArbalet_GunnerReticle_C_UpdateStabilizationIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.UpdateTurretHealth
// (BlueprintCallable, BlueprintEvent)
void UArbalet_GunnerReticle_C::UpdateTurretHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.UpdateTurretHealth");

	UArbalet_GunnerReticle_C_UpdateTurretHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.ExecuteUbergraph_Arbalet_GunnerReticle
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UArbalet_GunnerReticle_C::ExecuteUbergraph_Arbalet_GunnerReticle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Arbalet_GunnerReticle.Arbalet_GunnerReticle_C.ExecuteUbergraph_Arbalet_GunnerReticle");

	UArbalet_GunnerReticle_C_ExecuteUbergraph_Arbalet_GunnerReticle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
