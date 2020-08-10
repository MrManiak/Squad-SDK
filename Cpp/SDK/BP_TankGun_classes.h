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

// BlueprintGeneratedClass BP_TankGun.BP_TankGun_C
// 0x0097 (FullSize[0x0A4C] - InheritedSize[0x09B5])
// LastOffsetWithSize(0x09B5)
#define PADDING_00F6 - 0x0000 // Minimum to subtract -> (0003)
class ABP_TankGun_C : public ASQVehicleWeapon
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0003 PADDING_00F6, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x09B8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x000B PADDING_00F6, class USQBlastComponent*,                                              SQBlast);                                                  // 0x09C0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0013 PADDING_00F6, class USQTemperatureComponent*,                                        SQTemperature);                                            // 0x09C8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001B PADDING_00F6, float,                                                                 ShutdownTemp);                                             // 0x09D0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001F PADDING_00F6, float,                                                                 OverheatEffectTrigger_2);                                  // 0x09D4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0023 PADDING_00F6, float,                                                                 OverheatEffectTrigger_3);                                  // 0x09D8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x002B PADDING_00F6, class UParticleSystemComponent*,                                       Overheat_1_Effect);                                        // 0x09E0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0033 PADDING_00F6, class UParticleSystemComponent*,                                       Overheat_2_Effect);                                        // 0x09E8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x003B PADDING_00F6, class UParticleSystemComponent*,                                       Overheat_3_Effect);                                        // 0x09F0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0043 PADDING_00F6, class UAudioComponent*,                                                Overheat_1_Sound);                                         // 0x09F8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x004B PADDING_00F6, class UAudioComponent*,                                                Overheat_2_Sound);                                         // 0x0A00(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0053 PADDING_00F6, class USoundCue*,                                                      SoundTest);                                                // 0x0A08(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x005B PADDING_00F6, class UAudioComponent*,                                                Overheat_3_Sound);                                         // 0x0A10(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0063 PADDING_00F6, struct FName,                                                          Mesh1PReturnSection);                                      // 0x0A18(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x006B PADDING_00F6, struct FName,                                                          Mesh3PReturnSection);                                      // 0x0A20(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0073 PADDING_00F6, struct FName,                                                          SoldierMeshReturnSection);                                 // 0x0A28(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x007B PADDING_00F6, struct FName,                                                          BlastSocket);                                              // 0x0A30(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0083 PADDING_00F6, class UAnimMontage*,                                                   BP_Turret_Fire_Montage);                                   // 0x0A38(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x008B PADDING_00F6, class UAnimMontage*,                                                   BP_Weapon_Fire_Montage);                                   // 0x0A40(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0093 PADDING_00F6, float,                                                                 Force_Impulse_on_Fire);                                    // 0x0A48(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TankGun.BP_TankGun_C");
		return ptr;
	}


	void ResumeAnimations(class UAnimMontage* TripodAnim, class UAnimMontage* WeaponAnim, class UAnimMontage* SoldierAnim);
	void StopAnimations(class ASQSoldier* Soldier);
	void PlayAnimations(class UAnimMontage* TripodAnim, class UAnimMontage* WeaponAnim, class UAnimMontage* SoldierAnim, class ASQSoldier* Soldier, float* TripodAnimTime, float* WeaponAnimTime, float* SoldierAnimTime);
	void BndEvt__SQTemperature_K2Node_ComponentBoundEvent_486_TemperatureIncrementDelegate__DelegateSignature(class USQTemperatureComponent* TriggeringComponent, float TriggeringTemp, bool bIsLowerTrigger);
	void BlueprintOnFire(const struct FVector& Origin);
	void SoldierEntersVehicle(class ASQSoldier* Soldier);
	void SoldierLeavesVehicle(class ASQSoldier* Soldier);
	void BlueprintOnEquip();
	void ExecuteUbergraph_BP_TankGun(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
