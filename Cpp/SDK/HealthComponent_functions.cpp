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

// Function HealthComponent.HealthComponent_C.Can Damage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHealthComponent_C::Can_Damage(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthComponent.HealthComponent_C.Can Damage");

	UHealthComponent_C_Can_Damage_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HealthComponent.HealthComponent_C.Edit Health (Delta)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHealthComponent_C::Edit_Health__Delta_(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthComponent.HealthComponent_C.Edit Health (Delta)");

	UHealthComponent_C_Edit_Health__Delta__Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HealthComponent.HealthComponent_C.Reset Health
// (Public, BlueprintCallable, BlueprintEvent)
void UHealthComponent_C::Reset_Health()
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthComponent.HealthComponent_C.Reset Health");

	UHealthComponent_C_Reset_Health_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HealthComponent.HealthComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UHealthComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthComponent.HealthComponent_C.ReceiveBeginPlay");

	UHealthComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HealthComponent.HealthComponent_C.OnTakeAnyDamage_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHealthComponent_C::OnTakeAnyDamage_Event_1(class AActor* DamagedActor, float damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthComponent.HealthComponent_C.OnTakeAnyDamage_Event_1");

	UHealthComponent_C_OnTakeAnyDamage_Event_1_Params params;
	params.DamagedActor = DamagedActor;
	params.damage = damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HealthComponent.HealthComponent_C.OnTakeRadialDamage_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Origin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              HitInfo                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHealthComponent_C::OnTakeRadialDamage_Event_1(class AActor* DamagedActor, float damage, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthComponent.HealthComponent_C.OnTakeRadialDamage_Event_1");

	UHealthComponent_C_OnTakeRadialDamage_Event_1_Params params;
	params.DamagedActor = DamagedActor;
	params.damage = damage;
	params.DamageType = DamageType;
	params.Origin = Origin;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HealthComponent.HealthComponent_C.OnTakePointDamage_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     FHitComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ShotFromDirection              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHealthComponent_C::OnTakePointDamage_Event_1(class AActor* DamagedActor, float damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthComponent.HealthComponent_C.OnTakePointDamage_Event_1");

	UHealthComponent_C_OnTakePointDamage_Event_1_Params params;
	params.DamagedActor = DamagedActor;
	params.damage = damage;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.FHitComponent = FHitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.DamageType = DamageType;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HealthComponent.HealthComponent_C.ExecuteUbergraph_HealthComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHealthComponent_C::ExecuteUbergraph_HealthComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthComponent.HealthComponent_C.ExecuteUbergraph_HealthComponent");

	UHealthComponent_C_ExecuteUbergraph_HealthComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HealthComponent.HealthComponent_C.Health Max__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UHealthComponent_C::Health_Max__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthComponent.HealthComponent_C.Health Max__DelegateSignature");

	UHealthComponent_C_Health_Max__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HealthComponent.HealthComponent_C.Health Zero__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UHealthComponent_C::Health_Zero__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthComponent.HealthComponent_C.Health Zero__DelegateSignature");

	UHealthComponent_C_Health_Zero__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HealthComponent.HealthComponent_C.Health Lost__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Amount_Lost                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHealthComponent_C::Health_Lost__DelegateSignature(float Amount_Lost)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthComponent.HealthComponent_C.Health Lost__DelegateSignature");

	UHealthComponent_C_Health_Lost__DelegateSignature_Params params;
	params.Amount_Lost = Amount_Lost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HealthComponent.HealthComponent_C.Health Gained__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Amount_Gained                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHealthComponent_C::Health_Gained__DelegateSignature(float Amount_Gained)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthComponent.HealthComponent_C.Health Gained__DelegateSignature");

	UHealthComponent_C_Health_Gained__DelegateSignature_Params params;
	params.Amount_Gained = Amount_Gained;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
