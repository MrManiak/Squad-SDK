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

// BlueprintGeneratedClass BP_M1A2.BP_M1A2_C
// 0x00C8 (FullSize[0x0AD8] - InheritedSize[0x0A10])
// LastOffsetWithSize(0x09B8)
#define PADDING_0011 - 0x0000 // Minimum to subtract -> (0058)
class ABP_M1A2_C : public ASQTrackedVehicle
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0058 PADDING_0011, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0A10(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0011, class UBPComponent_RadialModel_C*,                                     Vehicle_Radial);                                           // 0x0A18(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0011, class USQVehicleResourceWeaponInventoryComponent*,                     SQVehicleResourceWeaponInventory);                         // 0x0A20(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0011, class UStaticMeshComponent*,                                           CollisionSideskirtRight);                                  // 0x0A28(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0011, class UStaticMeshComponent*,                                           CollisionSideskirtLeft);                                   // 0x0A30(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0011, class UStaticMeshComponent*,                                           NoPenetrationBlock);                                       // 0x0A38(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0011, class USQVehicleTrack*,                                                TrackRightComponent);                                      // 0x0A40(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0011, class USQVehicleTrack*,                                                TrackLeftComponent);                                       // 0x0A48(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0011, class USQVehicleAmmoBox*,                                              AmmoRackComponent);                                        // 0x0A50(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0011, class USQVehicleEngine*,                                               EngineComponent);                                          // 0x0A58(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_0011, class UCameraComponent*,                                               DriverCamera);                                             // 0x0A60(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0011, class USpringArmComponent*,                                            Driver_SpringArm);                                         // 0x0A68(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0011, class UStaticMeshComponent*,                                           StaticMesh);                                               // 0x0A70(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_0011, class UStaticMeshComponent*,                                           M1A2_CollisionMesh);                                       // 0x0A78(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_0011, class USceneComponent*,                                                Scene);                                                    // 0x0A80(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_0011, class USQMapIconComponent*,                                            SQMapIcon);                                                // 0x0A88(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_0011, class UCameraComponent*,                                               ExternalCamera);                                           // 0x0A90(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_0011, class USQVehicleBurningComponent*,                                     SQVehicleBurning);                                         // 0x0A98(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_0011, class USpringArmComponent*,                                            SpringArm);                                                // 0x0AA0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_0011, class USQVehicleExitPointComponent*,                                   SQVehicleExitPoint2);                                      // 0x0AA8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_0011, class USQVehicleExitPointComponent*,                                   SQVehicleExitPoint1);                                      // 0x0AB0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0100 PADDING_0011, class USQVehicleExitPointComponent*,                                   SQVehicleExitPoint);                                       // 0x0AB8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0108 PADDING_0011, class UMaterialInstanceDynamic*,                                       TrackMaterialRight);                                       // 0x0AC0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0110 PADDING_0011, class UMaterialInstanceDynamic*,                                       TrackMaterialLeft);                                        // 0x0AC8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0118 PADDING_0011, float,                                                                 RightTrackUVOffset);                                       // 0x0AD0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x011C PADDING_0011, float,                                                                 LeftTrackUVOffset);                                        // 0x0AD4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_M1A2.BP_M1A2_C");
		return ptr;
	}


	void UpdateDamagedTrackVisual(class UObject* VehicleTrack, bool bIsTrackDestroyed, bool ShowOriginalTrack);
	void UpdateTrackMaterial(float DeltaTime, float MovementSpeed, class UMaterialInstanceDynamic* TrackMaterial, float TrackOffset, float* NewUVOffset);
	void UserConstructionScript();
	void InpActEvt_ToggleView_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_16(float AxisValue);
	void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_18(float AxisValue);
	void DrivetrainComponentRepaired(class USQDriveTrainComponent* DriveTrainComponent);
	void DrivetrainComponentDestroyed(class USQDriveTrainComponent* DriveTrainComponent);
	void Attach_CROWS();
	void Attach_m240();
	void ExecuteUbergraph_BP_M1A2(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
