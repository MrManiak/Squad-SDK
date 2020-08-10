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

// BlueprintGeneratedClass BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C
// 0x015F (FullSize[0x0B14] - InheritedSize[0x09B5])
// LastOffsetWithSize(0x09B5)
#define PADDING_049B - 0x0000 // Minimum to subtract -> (0003)
class ABP_GenericDeployableWeapon_C : public ASQVehicleWeapon
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0003 PADDING_049B, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x09B8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x000B PADDING_049B, class USQTemperatureComponent*,                                        SQTemperature);                                            // 0x09C0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0013 PADDING_049B, float,                                                                 ShutdownTemp);                                             // 0x09C8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0017 PADDING_049B, float,                                                                 OverheatEffectTrigger_2);                                  // 0x09CC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001B PADDING_049B, float,                                                                 OverheatEffectTrigger_3);                                  // 0x09D0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0023 PADDING_049B, class UParticleSystemComponent*,                                       Overheat_1_Effect);                                        // 0x09D8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x002B PADDING_049B, class UParticleSystemComponent*,                                       Overheat_2_Effect);                                        // 0x09E0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0033 PADDING_049B, class UParticleSystemComponent*,                                       Overheat_3_Effect);                                        // 0x09E8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x003B PADDING_049B, class UAudioComponent*,                                                Overheat_1_Sound);                                         // 0x09F0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0043 PADDING_049B, class UAudioComponent*,                                                Overheat_2_Sound);                                         // 0x09F8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x004B PADDING_049B, class USoundCue*,                                                      SoundTest);                                                // 0x0A00(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0053 PADDING_049B, class UAudioComponent*,                                                Overheat_3_Sound);                                         // 0x0A08(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x005B PADDING_049B, struct FName,                                                          Mesh1PReturnSection);                                      // 0x0A10(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0063 PADDING_049B, struct FName,                                                          Mesh3PReturnSection);                                      // 0x0A18(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x006B PADDING_049B, struct FName,                                                          SoldierMeshReturnSection);                                 // 0x0A20(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0073 PADDING_049B, float,                                                                 Fire_Camera_Shake_Outer_Radius);                           // 0x0A28(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0077 PADDING_049B, float,                                                                 Fire_Camera_Shake_Falloff);                                // 0x0A2C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x007B PADDING_049B, struct FName,                                                          Fire_Camera_Shake_Epicenter_Socket);                       // 0x0A30(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0083 PADDING_049B, class UClass*,                                                         Camera_Shake_Preset);                                      // 0x0A38(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x008B PADDING_049B, class UAnimMontage*,                                                   Fire_Weapon_Animation);                                    // 0x0A40(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0093 PADDING_049B, class UAnimMontage*,                                                   Fire_Soldier_Animation);                                   // 0x0A48(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x009B PADDING_049B, class UAnimMontage*,                                                   Fire_Tripod_Animation);                                    // 0x0A50(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A3 PADDING_049B, class UAnimMontage*,                                                   Reload_Tripod_Animation);                                  // 0x0A58(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00AB PADDING_049B, class UAnimMontage*,                                                   Reload_Weapon_Animation);                                  // 0x0A60(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B3 PADDING_049B, class UAnimMontage*,                                                   Reload_Soldier_Animation);                                 // 0x0A68(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00BB PADDING_049B, class UAnimMontage*,                                                   Reload_Dry_Tripod_Animation);                              // 0x0A70(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C3 PADDING_049B, class UAnimMontage*,                                                   Reload_Dry_Weapon_Animation);                              // 0x0A78(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00CB PADDING_049B, class UAnimMontage*,                                                   Reload_Dry_Soldier_Animation);                             // 0x0A80(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D3 PADDING_049B, class UAnimMontage*,                                                   Equip_Soldier_Animation);                                  // 0x0A88(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00DB PADDING_049B, class UAnimMontage*,                                                   Equip_Weapon_Animation);                                   // 0x0A90(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E3 PADDING_049B, class UAnimMontage*,                                                   Equip_Tripod_Animation);                                   // 0x0A98(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00EB PADDING_049B, struct FName,                                                          BackblastSocket);                                          // 0x0AA0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00FB PADDING_049B, struct FTransform,                                                     StartTransform);                                           // 0x0AB0(0x0030)  (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x012B PADDING_049B, struct FTransform,                                                     EndTransform);                                             // 0x0AE0(0x0030)  (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x015B PADDING_049B, float,                                                                 MeshCurrentMontageTime);                                   // 0x0B10(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GenericDeployableWeapon.BP_GenericDeployableWeapon_C");
		return ptr;
	}


	void ResumeAnimations(class UAnimMontage* TripodAnim, class UAnimMontage* WeaponAnim, class UAnimMontage* SoldierAnim);
	void StopAnimations(class ASQSoldier* Soldier);
	void PlayAnimations(class UAnimMontage* TripodAnim, class UAnimMontage* WeaponAnim, class UAnimMontage* SoldierAnim, class ASQSoldier* Soldier, float* TripodAnimTime, float* WeaponAnimTime, float* SoldierAnimTime);
	void BndEvt__SQTemperature_K2Node_ComponentBoundEvent_486_TemperatureIncrementDelegate__DelegateSignature(class USQTemperatureComponent* TriggeringComponent, float TriggeringTemp, bool bIsLowerTrigger);
	void BlueprintOnFire(const struct FVector& Origin);
	void BlueprintOnReload();
	void SoldierEntersVehicle(class ASQSoldier* Soldier);
	void SoldierLeavesVehicle(class ASQSoldier* Soldier);
	void CameraOnSoldier();
	void CameraOnWeapon();
	void BlueprintOnUnequip();
	void ExecuteUbergraph_BP_GenericDeployableWeapon(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
