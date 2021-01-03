#pragma once

// Name: S, Version: b


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HealthComponent.HealthComponent_C
// 0x0050 (FullSize[0x0128] - InheritedSize[0x00D8])
class UHealthComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Health;                                                    // 0x00E0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Max_Health;                                                // 0x00E4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    Health_Gained;                                             // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    Health_Lost;                                               // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    Health_Zero;                                               // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    Health_Max;                                                // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HealthComponent.HealthComponent_C");
		return ptr;
	}



	void Can_Damage(const struct FVector& Location);
	void Edit_Health__Delta_(float Delta);
	void Reset_Health();
	void ReceiveBeginPlay();
	void OnTakeAnyDamage_Event_1(class AActor* DamagedActor, float damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnTakeRadialDamage_Event_1(class AActor* DamagedActor, float damage, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnTakePointDamage_Event_1(class AActor* DamagedActor, float damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class UDamageType* DamageType, class AActor* DamageCauser);
	void ExecuteUbergraph_HealthComponent(int EntryPoint);
	void Health_Max__DelegateSignature();
	void Health_Zero__DelegateSignature();
	void Health_Lost__DelegateSignature(float Amount_Lost);
	void Health_Gained__DelegateSignature(float Amount_Gained);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
