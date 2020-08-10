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

// Class PhysXVehicles.WheeledVehicleMovementComponent
// 0x0171 (FullSize[0x02D1] - InheritedSize[0x0160])
// LastOffsetWithSize(0x0160)
#define PADDING_0AAE - 0x0000 // Minimum to subtract -> (0008)
class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0AAE, unsigned char,                                                         bDeprecatedSpringOffsetMode);                              // 0x0168(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0AAE, unsigned char,                                                         bReverseAsBrake);                                          // 0x0168(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0AAE, unsigned char,                                                         bUseRVOAvoidance);                                         // 0x0168(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0AAE, unsigned char,                                                         bRawHandbrakeInput);                                       // 0x0168(0x0001) BIT_FIELD (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0AAE, unsigned char,                                                         bRawGearUpInput);                                          // 0x0168(0x0001) BIT_FIELD (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0AAE, unsigned char,                                                         bRawGearDownInput);                                        // 0x0168(0x0001) BIT_FIELD (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x000C PADDING_0AAE, unsigned char,                                                         bWasAvoidanceUpdated);                                     // 0x016C(0x0001) BIT_FIELD (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0AAE, float,                                                                 Mass);                                                     // 0x0170(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0AAE, TArray<struct FWheelSetup>,                                            WheelSetups);                                              // 0x0178(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0AAE, float,                                                                 DragCoefficient);                                          // 0x0188(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x002C PADDING_0AAE, float,                                                                 ChassisWidth);                                             // 0x018C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0AAE, float,                                                                 ChassisHeight);                                            // 0x0190(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0034 PADDING_0AAE, float,                                                                 DragArea);                                                 // 0x0194(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0AAE, float,                                                                 EstimatedMaxEngineSpeed);                                  // 0x0198(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003C PADDING_0AAE, float,                                                                 MaxEngineRPM);                                             // 0x019C(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0AAE, float,                                                                 DebugDragMagnitude);                                       // 0x01A0(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0044 PADDING_0AAE, struct FVector,                                                        InertiaTensorScale);                                       // 0x01A4(0x000C)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0AAE, float,                                                                 MinNormalizedTireLoad);                                    // 0x01B0(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0054 PADDING_0AAE, float,                                                                 MinNormalizedTireLoadFiltered);                            // 0x01B4(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0AAE, float,                                                                 MaxNormalizedTireLoad);                                    // 0x01B8(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005C PADDING_0AAE, float,                                                                 MaxNormalizedTireLoadFiltered);                            // 0x01BC(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0AAE, float,                                                                 ThresholdLongitudinalSpeed);                               // 0x01C0(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0064 PADDING_0AAE, int,                                                                   LowForwardSpeedSubStepCount);                              // 0x01C4(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0AAE, int,                                                                   HighForwardSpeedSubStepCount);                             // 0x01C8(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0AAE, TArray<class UVehicleWheel*>,                                          Wheels);                                                   // 0x01D0(0x0010)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0AAE, float,                                                                 RVOAvoidanceRadius);                                       // 0x01F8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x009C PADDING_0AAE, float,                                                                 RVOAvoidanceHeight);                                       // 0x01FC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0AAE, float,                                                                 AvoidanceConsiderationRadius);                             // 0x0200(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A4 PADDING_0AAE, float,                                                                 RVOSteeringStep);                                          // 0x0204(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_0AAE, float,                                                                 RVOThrottleStep);                                          // 0x0208(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00AC PADDING_0AAE, int,                                                                   AvoidanceUID);                                             // 0x020C(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0AAE, struct FNavAvoidanceMask,                                              AvoidanceGroup);                                           // 0x0210(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B4 PADDING_0AAE, struct FNavAvoidanceMask,                                              GroupsToAvoid);                                            // 0x0214(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0AAE, struct FNavAvoidanceMask,                                              GroupsToIgnore);                                           // 0x0218(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00BC PADDING_0AAE, float,                                                                 AvoidanceWeight);                                          // 0x021C(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_0AAE, struct FVector,                                                        PendingLaunchVelocity);                                    // 0x0220(0x000C)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00CC PADDING_0AAE, struct FReplicatedVehicleState,                                        ReplicatedState);                                          // 0x022C(0x0014)  (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00E4 PADDING_0AAE, float,                                                                 RawSteeringInput);                                         // 0x0244(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_0AAE, float,                                                                 RawThrottleInput);                                         // 0x0248(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00EC PADDING_0AAE, float,                                                                 RawBrakeInput);                                            // 0x024C(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_0AAE, float,                                                                 SteeringInput);                                            // 0x0250(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00F4 PADDING_0AAE, float,                                                                 ThrottleInput);                                            // 0x0254(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_0AAE, float,                                                                 BrakeInput);                                               // 0x0258(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00FC PADDING_0AAE, float,                                                                 HandbrakeInput);                                           // 0x025C(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0100 PADDING_0AAE, float,                                                                 IdleBrakeInput);                                           // 0x0260(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0104 PADDING_0AAE, float,                                                                 StopThreshold);                                            // 0x0264(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0108 PADDING_0AAE, float,                                                                 WrongDirectionThreshold);                                  // 0x0268(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x010C PADDING_0AAE, float,                                                                 InvertDirectionThreshold);                                 // 0x026C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0110 PADDING_0AAE, float,                                                                 LowRPMRatio);                                              // 0x0270(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0114 PADDING_0AAE, bool,                                                                  SpeedInsteadOfRPMRatiosForShifting);                       // 0x0274(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0118 PADDING_0AAE, struct FVehicleInputRate,                                              ThrottleInputRate);                                        // 0x0278(0x0008)  (Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0120 PADDING_0AAE, struct FVehicleInputRate,                                              BrakeInputRate);                                           // 0x0280(0x0008)  (Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0128 PADDING_0AAE, struct FVehicleInputRate,                                              HandbrakeInputRate);                                       // 0x0288(0x0008)  (Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0130 PADDING_0AAE, struct FVehicleInputRate,                                              SteeringInputRate);                                        // 0x0290(0x0008)  (Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0138 PADDING_0AAE, struct FVehicleInputRate,                                              EngineOffSteeringInputRate);                               // 0x0298(0x0008)  (Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0168 PADDING_0AAE, class AController*,                                                    OverrideController);                                       // 0x02C8(0x0008)  (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0170 PADDING_0AAE, bool,                                                                  bUseCustomAutoGearBox);                                    // 0x02D0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicleMovementComponent");
		return ptr;
	}


	void SetUseAutoGears(bool bUseAuto);
	void SetThrottleInput(float Throttle);
	void SetTargetGear(int GearNum, bool bImmediate);
	void SetSteeringInput(float Steering);
	void SetHandbrakeInput(bool bNewHandbrake);
	void SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToIgnore(int GroupFlags);
	void SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToAvoid(int GroupFlags);
	void SetGearUp(bool bNewGearUp);
	void SetGearDown(bool bNewGearDown);
	void SetBrakeInput(float Brake);
	void SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask);
	void SetAvoidanceGroup(int GroupFlags);
	void SetAvoidanceEnabled(bool bEnable);
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int CurrentGear);
	bool GetUseAutoGears();
	int GetTargetGear();
	float GetForwardSpeed();
	float GetEngineRotationSpeed();
	float GetEngineMaxRotationSpeed();
	int GetCurrentGear();
};

// Class PhysXVehicles.WheeledVehicleMovementComponentNW
// 0x017F (FullSize[0x0450] - InheritedSize[0x02D1])
// LastOffsetWithSize(0x02D1)
#define PADDING_0AAF - 0x0000 // Minimum to subtract -> (0007)
class UWheeledVehicleMovementComponentNW : public UWheeledVehicleMovementComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0AAF, struct FVehicleNWEngineData,                                           EngineSetup);                                              // 0x02D8(0x00A0)  (Edit, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A7 PADDING_0AAF, TArray<struct FVehicleNWWheelDifferentialData>,                        DifferentialSetup);                                        // 0x0378(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B7 PADDING_0AAF, struct FVehicleNWTransmissionData,                                     TransmissionSetup);                                        // 0x0388(0x0040)  (Edit, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00F7 PADDING_0AAF, struct FRuntimeFloatCurve,                                             SteeringCurve);                                            // 0x03C8(0x0088)  (Edit, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicleMovementComponentNW");
		return ptr;
	}


};

// Class PhysXVehicles.WheeledVehicleMovementComponentTank
// 0x0127 (FullSize[0x03F8] - InheritedSize[0x02D1])
// LastOffsetWithSize(0x02D1)
#define PADDING_0AB0 - 0x0000 // Minimum to subtract -> (0007)
class UWheeledVehicleMovementComponentTank : public UWheeledVehicleMovementComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0AB0, struct FVehicleTankEngineData,                                         EngineSetup);                                              // 0x02D8(0x00A0)  (Edit, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A7 PADDING_0AB0, struct FVehicleTankTransmissionData,                                   TransmissionSetup);                                        // 0x0378(0x0040)  (Edit, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00E7 PADDING_0AB0, float,                                                                 RawBothTracksThrottleInput);                               // 0x03B8(0x0004)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00EB PADDING_0AB0, float,                                                                 RawLeftTrackThrottleInput);                                // 0x03BC(0x0004)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00EF PADDING_0AB0, float,                                                                 RawRightTrackThrottleInput);                               // 0x03C0(0x0004)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00F3 PADDING_0AB0, float,                                                                 BothTracksThrottleInput);                                  // 0x03C4(0x0004)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00F7 PADDING_0AB0, float,                                                                 LeftTrackThrottleInput);                                   // 0x03C8(0x0004)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00FB PADDING_0AB0, float,                                                                 RightTrackThrottleInput);                                  // 0x03CC(0x0004)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00FF PADDING_0AB0, TArray<float>,                                                         WheelSpeeds);                                              // 0x03D0(0x0010)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x010F PADDING_0AB0, TArray<float>,                                                         WheelAngles);                                              // 0x03E0(0x0010)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x011F PADDING_0AB0, float,                                                                 LeftTrackSpeed);                                           // 0x03F0(0x0004)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0123 PADDING_0AB0, float,                                                                 RightTrackSpeed);                                          // 0x03F4(0x0004)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicleMovementComponentTank");
		return ptr;
	}


	void SetRightTrackThrottleInput(float InThrottle);
	void SetLeftTrackThrottleInput(float InThrottle);
	void SetBothTracksThrottleInput(float InThrottle);
	float GetRightTrackSpeed();
	float GetLeftTrackSpeed();
};

// Class PhysXVehicles.VehicleAnimInstance
// 0x07E8 (FullSize[0x0968] - InheritedSize[0x0180])
// LastOffsetWithSize(0x0180)
#define PADDING_0AB1 - 0x0000 // Minimum to subtract -> (07E0)
class UVehicleAnimInstance : public UAnimInstance
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x07E0 PADDING_0AB1, class UWheeledVehicleMovementComponent*,                               WheeledVehicleMovementComponent);                          // 0x0960(0x0008)  (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.VehicleAnimInstance");
		return ptr;
	}


	class AWheeledVehicle* GetVehicle();
};

// Class PhysXVehicles.VehicleWheel
// 0x00C4 (FullSize[0x00EC] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0AB2 - 0x0000 // Minimum to subtract -> (0000)
class UVehicleWheel : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0AB2, class UStaticMesh*,                                                    CollisionMesh);                                            // 0x0028(0x0008)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0AB2, bool,                                                                  bDontCreateShape);                                         // 0x0030(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0009 PADDING_0AB2, bool,                                                                  bAutoAdjustCollisionSize);                                 // 0x0031(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_0AB2, struct FVector,                                                        Offset);                                                   // 0x0034(0x000C)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0AB2, float,                                                                 ShapeRadius);                                              // 0x0040(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_0AB2, float,                                                                 ShapeWidth);                                               // 0x0044(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0AB2, float,                                                                 Mass);                                                     // 0x0048(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_0AB2, float,                                                                 DampingRate);                                              // 0x004C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0AB2, float,                                                                 PhysMatDampingRateMultiplier);                             // 0x0050(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x002C PADDING_0AB2, float,                                                                 SteerAngle);                                               // 0x0054(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0AB2, bool,                                                                  bAffectedByHandbrake);                                     // 0x0058(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0AB2, class UTireType*,                                                      TireType);                                                 // 0x0060(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0AB2, class UTireConfig*,                                                    TireConfig);                                               // 0x0068(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0AB2, float,                                                                 LatStiffMaxLoad);                                          // 0x0070(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x004C PADDING_0AB2, float,                                                                 LatStiffValue);                                            // 0x0074(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0AB2, float,                                                                 LongStiffValue);                                           // 0x0078(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0054 PADDING_0AB2, float,                                                                 SuspensionForceOffset);                                    // 0x007C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0AB2, float,                                                                 SuspensionMaxRaise);                                       // 0x0080(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005C PADDING_0AB2, float,                                                                 SuspensionMaxDrop);                                        // 0x0084(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0AB2, float,                                                                 SuspensionNaturalFrequency);                               // 0x0088(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0064 PADDING_0AB2, float,                                                                 SuspensionDampingRatio);                                   // 0x008C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0AB2, TEnumAsByte<EWheelSweepType>,                                          SweepType);                                                // 0x0090(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x006C PADDING_0AB2, float,                                                                 MaxBrakeTorque);                                           // 0x0094(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0AB2, float,                                                                 MaxHandBrakeTorque);                                       // 0x0098(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0AB2, class UWheeledVehicleMovementComponent*,                               VehicleSim);                                               // 0x00A0(0x0008)  (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0AB2, int,                                                                   WheelIndex);                                               // 0x00A8(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0084 PADDING_0AB2, float,                                                                 DebugLongSlip);                                            // 0x00AC(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0AB2, float,                                                                 DebugLatSlip);                                             // 0x00B0(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x008C PADDING_0AB2, float,                                                                 DebugNormalizedTireLoad);                                  // 0x00B4(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0094 PADDING_0AB2, float,                                                                 DebugWheelTorque);                                         // 0x00BC(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0AB2, float,                                                                 DebugLongForce);                                           // 0x00C0(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x009C PADDING_0AB2, float,                                                                 DebugLatForce);                                            // 0x00C4(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0AB2, struct FVector,                                                        Location);                                                 // 0x00C8(0x000C)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00AC PADDING_0AB2, struct FVector,                                                        OldLocation);                                              // 0x00D4(0x000C)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0AB2, struct FVector,                                                        Velocity);                                                 // 0x00E0(0x000C)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.VehicleWheel");
		return ptr;
	}


	bool IsInAir();
	float GetSuspensionOffset();
	float GetSteerAngle();
	float GetRotationAngle();
};

// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// 0x018F (FullSize[0x0460] - InheritedSize[0x02D1])
// LastOffsetWithSize(0x02D1)
#define PADDING_0AB3 - 0x0000 // Minimum to subtract -> (0007)
class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0AB3, struct FVehicleEngineData,                                             EngineSetup);                                              // 0x02D8(0x00A0)  (Edit, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A7 PADDING_0AB3, struct FVehicleDifferential4WData,                                     DifferentialSetup);                                        // 0x0378(0x001C)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C3 PADDING_0AB3, float,                                                                 AckermannAccuracy);                                        // 0x0394(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C7 PADDING_0AB3, struct FVehicleTransmissionData,                                       TransmissionSetup);                                        // 0x0398(0x0040)  (Edit, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0107 PADDING_0AB3, struct FRuntimeFloatCurve,                                             SteeringCurve);                                            // 0x03D8(0x0088)  (Edit, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicleMovementComponent4W");
		return ptr;
	}


};

// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// 0x0007 (FullSize[0x02D8] - InheritedSize[0x02D1])
// LastOffsetWithSize(0x02D1)
class USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.SimpleWheeledVehicleMovementComponent");
		return ptr;
	}


	void SetSteerAngle(float SteerAngle, int WheelIndex);
	void SetDriveTorque(float DriveTorque, int WheelIndex);
	void SetBrakeTorque(float BrakeTorque, int WheelIndex);
};

// Class PhysXVehicles.TireConfig
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
#define PADDING_0AB5 - 0x0000 // Minimum to subtract -> (0000)
class UTireConfig : public UDataAsset
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0AB5, float,                                                                 FrictionScale);                                            // 0x0030(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0AB5, TArray<struct FTireConfigMaterialFriction>,                            TireFrictionScales);                                       // 0x0038(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.TireConfig");
		return ptr;
	}


};

// Class PhysXVehicles.WheeledVehicle
// 0x0014 (FullSize[0x02B8] - InheritedSize[0x02A4])
// LastOffsetWithSize(0x02A4)
#define PADDING_0AB6 - 0x0000 // Minimum to subtract -> (0004)
class AWheeledVehicle : public APawn
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_0AB6, class USkeletalMeshComponent*,                                         Mesh);                                                     // 0x02A8(0x0008)  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x000C PADDING_0AB6, class UWheeledVehicleMovementComponent*,                               VehicleMovement);                                          // 0x02B0(0x0008)  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicle");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
