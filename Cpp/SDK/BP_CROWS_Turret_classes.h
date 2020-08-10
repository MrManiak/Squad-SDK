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

// BlueprintGeneratedClass BP_CROWS_Turret.BP_CROWS_Turret_C
// 0x009C (FullSize[0x04A8] - InheritedSize[0x040C])
// LastOffsetWithSize(0x040C)
#define PADDING_0121 - 0x0000 // Minimum to subtract -> (0024)
class ABP_CROWS_Turret_C : public ASQVehicleTurretClosedTop
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0024 PADDING_0121, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0430(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x002C PADDING_0121, class UCameraComponent*,                                               FirstPersonCamera);                                        // 0x0438(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0034 PADDING_0121, class USQRotationMovementAudioComponent*,                              SQRotationMovementAudio);                                  // 0x0440(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x003C PADDING_0121, class USceneComponent*,                                                GunAttachPoint);                                           // 0x0448(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0044 PADDING_0121, class UStaticMeshComponent*,                                           crows_turret_static_mesh);                                 // 0x0450(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x004C PADDING_0121, class USQVelocityRotatingMovementComponent*,                           PitchMovement);                                            // 0x0458(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0054 PADDING_0121, class USQVelocityRotatingMovementComponent*,                           YawMovement);                                              // 0x0460(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x005C PADDING_0121, class UCameraComponent*,                                               Camera);                                                   // 0x0468(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0064 PADDING_0121, class UStaticMeshComponent*,                                           Collision);                                                // 0x0470(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x006C PADDING_0121, class USQVehicleInventoryComponent*,                                   SQVehicleInventory);                                       // 0x0478(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0074 PADDING_0121, class USceneComponent*,                                                DefaultSceneRoot);                                         // 0x0480(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x007C PADDING_0121, float,                                                                 Timeline_0_lerp_5AE4C41E4F3FA034DCBE06B546C60B0F);         // 0x0488(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0121, TEnumAsByte<ETimelineDirection>,                                       Timeline_0__Direction_5AE4C41E4F3FA034DCBE06B546C60B0F);   // 0x048C(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0084 PADDING_0121, class UTimelineComponent*,                                             Timeline_1);                                               // 0x0490(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x008C PADDING_0121, float,                                                                 MaxRotationSpeed);                                         // 0x0498(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0121, float,                                                                 RotationSpeedMultiplier);                                  // 0x049C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0094 PADDING_0121, float,                                                                 ElevationSpeedMultiplier);                                 // 0x04A0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0121, float,                                                                 MaxElevationSpeed);                                        // 0x04A4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CROWS_Turret.BP_CROWS_Turret_C");
		return ptr;
	}


	class USQMovementComponentBase* GetPitchMovementComponent();
	class USQMovementComponentBase* GetYawMovementComponent();
	class USceneComponent* GetSoldierAttachComponent();
	class USceneComponent* GetWeaponAttachComponent();
	class USkinnedMeshComponent* GetMasterPoseComponent();
	class USceneComponent* Get1PAttachComponent();
	class USceneComponent* Get3PAttachComponent();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void InpActEvt_Fire_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Fire_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ResetZoom();
	void BP_OnVehicleZoom();
	void ExecuteUbergraph_BP_CROWS_Turret(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
