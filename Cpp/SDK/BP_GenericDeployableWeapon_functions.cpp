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

// Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.ResumeAnimations
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            TripodAnim                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            WeaponAnim                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            SoldierAnim                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericDeployableWeapon_C::ResumeAnimations(class UAnimMontage* TripodAnim, class UAnimMontage* WeaponAnim, class UAnimMontage* SoldierAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.ResumeAnimations");

	ABP_GenericDeployableWeapon_C_ResumeAnimations_Params params;
	params.TripodAnim = TripodAnim;
	params.WeaponAnim = WeaponAnim;
	params.SoldierAnim = SoldierAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.StopAnimations
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSoldier*              Soldier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericDeployableWeapon_C::StopAnimations(class ASQSoldier* Soldier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.StopAnimations");

	ABP_GenericDeployableWeapon_C_StopAnimations_Params params;
	params.Soldier = Soldier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.PlayAnimations
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            TripodAnim                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            WeaponAnim                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            SoldierAnim                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQSoldier*              Soldier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TripodAnimTime                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WeaponAnimTime                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SoldierAnimTime                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericDeployableWeapon_C::PlayAnimations(class UAnimMontage* TripodAnim, class UAnimMontage* WeaponAnim, class UAnimMontage* SoldierAnim, class ASQSoldier* Soldier, float* TripodAnimTime, float* WeaponAnimTime, float* SoldierAnimTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.PlayAnimations");

	ABP_GenericDeployableWeapon_C_PlayAnimations_Params params;
	params.TripodAnim = TripodAnim;
	params.WeaponAnim = WeaponAnim;
	params.SoldierAnim = SoldierAnim;
	params.Soldier = Soldier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TripodAnimTime != nullptr)
		*TripodAnimTime = params.TripodAnimTime;
	if (WeaponAnimTime != nullptr)
		*WeaponAnimTime = params.WeaponAnimTime;
	if (SoldierAnimTime != nullptr)
		*SoldierAnimTime = params.SoldierAnimTime;

}


// Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.BndEvt__SQTemperature_K2Node_ComponentBoundEvent_486_TemperatureIncrementDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USQTemperatureComponent* TriggeringComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TriggeringTemp                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsLowerTrigger                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GenericDeployableWeapon_C::BndEvt__SQTemperature_K2Node_ComponentBoundEvent_486_TemperatureIncrementDelegate__DelegateSignature(class USQTemperatureComponent* TriggeringComponent, float TriggeringTemp, bool bIsLowerTrigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.BndEvt__SQTemperature_K2Node_ComponentBoundEvent_486_TemperatureIncrementDelegate__DelegateSignature");

	ABP_GenericDeployableWeapon_C_BndEvt__SQTemperature_K2Node_ComponentBoundEvent_486_TemperatureIncrementDelegate__DelegateSignature_Params params;
	params.TriggeringComponent = TriggeringComponent;
	params.TriggeringTemp = TriggeringTemp;
	params.bIsLowerTrigger = bIsLowerTrigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.BlueprintOnFire
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Origin                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericDeployableWeapon_C::BlueprintOnFire(const struct FVector& Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.BlueprintOnFire");

	ABP_GenericDeployableWeapon_C_BlueprintOnFire_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.BlueprintOnReload
// (Event, Protected, BlueprintEvent)
void ABP_GenericDeployableWeapon_C::BlueprintOnReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.BlueprintOnReload");

	ABP_GenericDeployableWeapon_C_BlueprintOnReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.SoldierEntersVehicle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSoldier*              Soldier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericDeployableWeapon_C::SoldierEntersVehicle(class ASQSoldier* Soldier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.SoldierEntersVehicle");

	ABP_GenericDeployableWeapon_C_SoldierEntersVehicle_Params params;
	params.Soldier = Soldier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.SoldierLeavesVehicle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQSoldier*              Soldier                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericDeployableWeapon_C::SoldierLeavesVehicle(class ASQSoldier* Soldier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.SoldierLeavesVehicle");

	ABP_GenericDeployableWeapon_C_SoldierLeavesVehicle_Params params;
	params.Soldier = Soldier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.CameraOnSoldier
// (BlueprintCallable, BlueprintEvent)
void ABP_GenericDeployableWeapon_C::CameraOnSoldier()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.CameraOnSoldier");

	ABP_GenericDeployableWeapon_C_CameraOnSoldier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.CameraOnWeapon
// (BlueprintCallable, BlueprintEvent)
void ABP_GenericDeployableWeapon_C::CameraOnWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.CameraOnWeapon");

	ABP_GenericDeployableWeapon_C_CameraOnWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.BlueprintOnUnequip
// (Event, Protected, BlueprintEvent)
void ABP_GenericDeployableWeapon_C::BlueprintOnUnequip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.BlueprintOnUnequip");

	ABP_GenericDeployableWeapon_C_BlueprintOnUnequip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.ExecuteUbergraph_BP_GenericDeployableWeapon
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GenericDeployableWeapon_C::ExecuteUbergraph_BP_GenericDeployableWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C.ExecuteUbergraph_BP_GenericDeployableWeapon");

	ABP_GenericDeployableWeapon_C_ExecuteUbergraph_BP_GenericDeployableWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
