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

// BlueprintGeneratedClass BP_GenericVehicleOpenTurret.BP_GenericVehicleOpenTurret_C
// 0x0083 (FullSize[0x045B] - InheritedSize[0x03D8])
// LastOffsetWithSize(0x03D8)
#define PADDING_04B8 - 0x0000 // Minimum to subtract -> (0008)
class ABP_GenericVehicleOpenTurret_C : public ASQVehicleTurretOpenTop
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_04B8, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x03E0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0010 PADDING_04B8, class USQRotationMovementAudioComponent*,                              SQRotationMovementAudio);                                  // 0x03E8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_04B8, class UStaticMeshComponent*,                                           Turret_Collision);                                         // 0x03F0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_04B8, class USceneComponent*,                                                Camera1pPositionComponent);                                // 0x03F8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_04B8, class USceneComponent*,                                                AdsCamera1pPositionComponent);                             // 0x0400(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_04B8, class USkeletalMeshComponent*,                                         Turret_SkeletalMesh);                                      // 0x0408(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_04B8, class UCameraComponent*,                                               Camera1pComponent);                                        // 0x0410(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_04B8, class USceneComponent*,                                                GunMountComponent);                                        // 0x0418(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_04B8, class USQVehicleInventoryComponent*,                                   SQVehicleInventory);                                       // 0x0420(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_04B8, float,                                                                 Zoom_Interpolate_Alpha_946F826C4828AA1170ED87A663F2BEA9);  // 0x0428(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0054 PADDING_04B8, TEnumAsByte<ETimelineDirection>,                                       Zoom_Interpolate__Direction_946F826C4828AA1170ED87A663F2BEA9); // 0x042C(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_04B8, class UTimelineComponent*,                                             Zoom_Interpolate);                                         // 0x0430(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_04B8, float,                                                                 RotationSpeedMultiplier);                                  // 0x0438(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0064 PADDING_04B8, float,                                                                 MaxRotationSpeed);                                         // 0x043C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_04B8, float,                                                                 ElevationSpeedMultiplier);                                 // 0x0440(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x006C PADDING_04B8, float,                                                                 MaxElevationSpeed);                                        // 0x0444(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_04B8, bool,                                                                  ResetOrientationPitch);                                    // 0x0448(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
		DEFINE_MEMBER_NNN(0x0078 PADDING_04B8, class ASQPlayerController*,                                            CurrentPlayerController);                                  // 0x0450(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_04B8, bool,                                                                  ResetOrientationYaw);                                      // 0x0458(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
		DEFINE_MEMBER_NNN(0x0081 PADDING_04B8, bool,                                                                  Can_Show_Zoom_Tutorial);                                   // 0x0459(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0082 PADDING_04B8, bool,                                                                  Can_Show_Zoom_While_ADS_Tutorial);                         // 0x045A(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GenericVehicleOpenTurret.BP_GenericVehicleOpenTurret_C");
		return ptr;
	}


	class USceneComponent* GetSoldierAttachComponent();
	class USceneComponent* GetADSCameraLocationComponent();
	class USceneComponent* GetDefaultCameraLocationComponent();
	class USceneComponent* GetWeaponAttachComponent();
	class USkinnedMeshComponent* GetMasterPoseComponent();
	class USceneComponent* Get1PAttachComponent();
	class USceneComponent* Get3PAttachComponent();
	void UserConstructionScript();
	void Zoom_Interpolate__FinishedFunc();
	void Zoom_Interpolate__UpdateFunc();
	void InpActEvt_Fire_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Fire_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Focus_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Focus_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_40(float AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_43(float AxisValue);
	void ZoomForward();
	void ZoomReverse();
	void ExecuteUbergraph_BP_GenericVehicleOpenTurret(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
