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

// BlueprintGeneratedClass BP_minsk.BP_minsk_C
// 0x0090 (FullSize[0x0AB0] - InheritedSize[0x0A20])
// LastOffsetWithSize(0x0A18)
#define PADDING_002A - 0x0000 // Minimum to subtract -> (0008)
class ABP_minsk_C : public ASQWheeledVehicle
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_002A, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0A20(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0010 PADDING_002A, class UBPComponent_RadialModel_C*,                                     VehicleRadial);                                            // 0x0A28(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_002A, class USQVehicleWheel*,                                                Front_Wheel);                                              // 0x0A30(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_002A, class USQVehicleWheel*,                                                Rear_Wheel);                                               // 0x0A38(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_002A, class UStaticMeshComponent*,                                           Decoration);                                               // 0x0A40(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_002A, class USQVehicleEngine*,                                               EngineComponent);                                          // 0x0A48(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_002A, class UCameraComponent*,                                               DriverCamera);                                             // 0x0A50(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_002A, class USpringArmComponent*,                                            Driver_SpringArm);                                         // 0x0A58(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_002A, class USQVehicleResourceWeaponInventoryComponent*,                     SQVehicleResourceWeaponInventory);                         // 0x0A60(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_002A, class UStaticMeshComponent*,                                           CollisionMesh);                                            // 0x0A68(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_002A, class USQMapIconComponent*,                                            SQMapIcon);                                                // 0x0A70(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_002A, class UCameraComponent*,                                               ExternalCamera);                                           // 0x0A78(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_002A, class USpringArmComponent*,                                            SpringArm);                                                // 0x0A80(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_002A, class USQVehicleBurningComponent*,                                     SQVehicleBurning);                                         // 0x0A88(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_002A, class USQVehicleExitPointComponent*,                                   SQVehicleExitPoint1);                                      // 0x0A90(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_002A, class USQVehicleExitPointComponent*,                                   SQVehicleExitPoint);                                       // 0x0A98(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_002A, class USoundBase*,                                                     WheelDestroyedSound);                                      // 0x0AA0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_002A, class UParticleSystem*,                                                WheelDestroyedEffect);                                     // 0x0AA8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_minsk.BP_minsk_C");
		return ptr;
	}


	void UpdateDamageWheelVisual(const struct FName& Bone, bool Destroyed, class USQVehicleWheel* Wheel, bool Do_Effects);
	void UserConstructionScript();
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_ToggleView_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_18(float AxisValue);
	void EnteredVehicle(class ASQSoldier* Soldier, class USQVehicleSeatComponent* NewSeat);
	void LeftVehicle(class ASQSoldier* Soldier, class USQVehicleSeatComponent* PreviousSeat);
	void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_16(float AxisValue);
	void SwitchedSeat(class ASQSoldier* Soldier, class USQVehicleSeatComponent* PreviousSeat, class USQVehicleSeatComponent* NewSeat);
	void ReceiveBeginPlay();
	void DrivetrainComponentDestroyed(class USQDriveTrainComponent* DriveTrainComponent);
	void DrivetrainComponentRepaired(class USQDriveTrainComponent* DriveTrainComponent);
	void ExecuteUbergraph_BP_minsk(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
