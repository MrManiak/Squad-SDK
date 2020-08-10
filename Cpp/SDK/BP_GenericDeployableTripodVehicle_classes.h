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

// BlueprintGeneratedClass BP_GenericDeployableTripodVehicle.BP_GenericDeployableTripodVehicle_C
// 0x0085 (FullSize[0x090D] - InheritedSize[0x0888])
// LastOffsetWithSize(0x0888)
#define PADDING_02C4 - 0x0000 // Minimum to subtract -> (0008)
class ABP_GenericDeployableTripodVehicle_C : public ASQDeployableTripodVehicle
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_02C4, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0890(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0010 PADDING_02C4, class USQRotationMovementAudioComponent*,                              SQRotationMovementAudio);                                  // 0x0898(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_02C4, class UStaticMeshComponent*,                                           WeaponCollision);                                          // 0x08A0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_02C4, class UBoxComponent*,                                                  InteractBox);                                              // 0x08A8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_02C4, float,                                                                 InterpolateZoom_Alpha_AFDD346B4C31DFA43382A3A0259D66C3);   // 0x08B0(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x002C PADDING_02C4, TEnumAsByte<ETimelineDirection>,                                       InterpolateZoom__Direction_AFDD346B4C31DFA43382A3A0259D66C3); // 0x08B4(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_02C4, class UTimelineComponent*,                                             InterpolateZoom);                                          // 0x08B8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_02C4, float,                                                                 Scope_InterpolateZoom_lerp_312667D24DA06968478036B24436F0C7); // 0x08C0(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x003C PADDING_02C4, TEnumAsByte<ETimelineDirection>,                                       Scope_InterpolateZoom__Direction_312667D24DA06968478036B24436F0C7); // 0x08C4(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_02C4, class UTimelineComponent*,                                             Scope_InterpolateZoom);                                    // 0x08C8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_02C4, bool,                                                                  bIsInThirdPerson_1);                                       // 0x08D0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x004C PADDING_02C4, struct FVector2D,                                                      FreelookLimitPitch);                                       // 0x08D4(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0054 PADDING_02C4, struct FVector2D,                                                      FreelookLimitYaw);                                         // 0x08DC(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x005C PADDING_02C4, bool,                                                                  bAllowFocus);                                              // 0x08E4(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x005D PADDING_02C4, bool,                                                                  bUseVehicleZoom);                                          // 0x08E5(0x0001)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x005E PADDING_02C4, bool,                                                                  bTripodIsADS);                                             // 0x08E6(0x0001)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0060 PADDING_02C4, TArray<float>,                                                         ZoomLevels);                                               // 0x08E8(0x0010)  (Edit, BlueprintVisible, Net, ZeroConstructor)
		DEFINE_MEMBER_NNN(0x0070 PADDING_02C4, int,                                                                   CurrentZoom);                                              // 0x08F8(0x0004)  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0074 PADDING_02C4, float,                                                                 ElevationSpeedMultiplier);                                 // 0x08FC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_02C4, float,                                                                 MaxElevationSpeed);                                        // 0x0900(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x007C PADDING_02C4, float,                                                                 RotationSpeedMultiplier);                                  // 0x0904(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_02C4, float,                                                                 MaxRotationSpeed);                                         // 0x0908(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0084 PADDING_02C4, bool,                                                                  ZoomTimer);                                                // 0x090C(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GenericDeployableTripodVehicle.BP_GenericDeployableTripodVehicle_C");
		return ptr;
	}


	void UserConstructionScript();
	void Scope_InterpolateZoom__FinishedFunc();
	void Scope_InterpolateZoom__UpdateFunc();
	void InterpolateZoom__FinishedFunc();
	void InterpolateZoom__UpdateFunc();
	void InpActEvt_Focus_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Focus_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_VehicleZoom_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceivePossessed(class AController* NewController);
	void ReceiveUnpossessed(class AController* OldController);
	void ResetZoom();
	void NetworkResetZoom();
	void GotoVehicleZeroZoom();
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_40(float AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_43(float AxisValue);
	void ReceiveBeginPlay();
	void ZoomForward();
	void ZoomReverse();
	void ExecuteUbergraph_BP_GenericDeployableTripodVehicle(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
