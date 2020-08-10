#pragma once

// Name: Sq, Version: b21


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
// 0x0060 (FullSize[0x0128] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
#define PADDING_08F4 - 0x0000 // Minimum to subtract -> (0010)
class UHealthComponent_C : public UActorComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_08F4, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x00D8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0018 PADDING_08F4, float,                                                                 Health);                                                   // 0x00E0(0x0004)  (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001C PADDING_08F4, float,                                                                 Max_Health);                                               // 0x00E4(0x0004)  (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_08F4, struct FScriptMulticastDelegate,                                       Health_Gained);                                            // 0x00E8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0030 PADDING_08F4, struct FScriptMulticastDelegate,                                       Health_Lost);                                              // 0x00F8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0040 PADDING_08F4, struct FScriptMulticastDelegate,                                       Health_Zero);                                              // 0x0108(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0050 PADDING_08F4, struct FScriptMulticastDelegate,                                       Health_Max);                                               // 0x0118(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	};

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
