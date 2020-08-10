// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class PhysXVehicles.WheeledVehicleMovementComponent
// 0x0171 (0x02D1 - 0x0160)
public class UWheeledVehicleMovementComponent : UPawnMovementComponent
{
	#region Offsets
//	private ExternalOffset<char>                              _offbDeprecatedSpringOffsetMode                                = new ExternalOffset<char>(0x0168, false);                     // 0x0168(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbReverseAsBrake                                            = new ExternalOffset<char>(0x0168, false);                     // 0x0168(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbUseRVOAvoidance                                           = new ExternalOffset<char>(0x0168, false);                     // 0x0168(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbRawHandbrakeInput                                         = new ExternalOffset<char>(0x0168, false);                     // 0x0168(0x0001) BIT_FIELD (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbRawGearUpInput                                            = new ExternalOffset<char>(0x0168, false);                     // 0x0168(0x0001) BIT_FIELD (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbRawGearDownInput                                          = new ExternalOffset<char>(0x0168, false);                     // 0x0168(0x0001) BIT_FIELD (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbWasAvoidanceUpdated                                       = new ExternalOffset<char>(0x016C, false);                     // 0x016C(0x0001) BIT_FIELD (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offMass                                                       = new ExternalOffset<float>(0x0170);                           // 0x0170(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FWheelSetup>>               _offWheelSetups                                                = new ExternalOffset<TArray<FWheelSetup>>(0x0178, false);      // 0x0178(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDragCoefficient                                            = new ExternalOffset<float>(0x0188);                           // 0x0188(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offChassisWidth                                               = new ExternalOffset<float>(0x018C);                           // 0x018C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offChassisHeight                                              = new ExternalOffset<float>(0x0190);                           // 0x0190(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDragArea                                                   = new ExternalOffset<float>(0x0194);                           // 0x0194(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offEstimatedMaxEngineSpeed                                    = new ExternalOffset<float>(0x0198);                           // 0x0198(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMaxEngineRPM                                               = new ExternalOffset<float>(0x019C);                           // 0x019C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDebugDragMagnitude                                         = new ExternalOffset<float>(0x01A0);                           // 0x01A0(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offInertiaTensorScale                                         = new ExternalOffset<FVector>(0x01A4, false);                  // 0x01A4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMinNormalizedTireLoad                                      = new ExternalOffset<float>(0x01B0);                           // 0x01B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMinNormalizedTireLoadFiltered                              = new ExternalOffset<float>(0x01B4);                           // 0x01B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMaxNormalizedTireLoad                                      = new ExternalOffset<float>(0x01B8);                           // 0x01B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMaxNormalizedTireLoadFiltered                              = new ExternalOffset<float>(0x01BC);                           // 0x01BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offThresholdLongitudinalSpeed                                 = new ExternalOffset<float>(0x01C0);                           // 0x01C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offLowForwardSpeedSubStepCount                                = new ExternalOffset<int>(0x01C4);                             // 0x01C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offHighForwardSpeedSubStepCount                               = new ExternalOffset<int>(0x01C8);                             // 0x01C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UVehicleWheel>>             _offWheels                                                     = new ExternalOffset<TArray<UVehicleWheel>>(0x01D0, false);    // 0x01D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offRVOAvoidanceRadius                                         = new ExternalOffset<float>(0x01F8);                           // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offRVOAvoidanceHeight                                         = new ExternalOffset<float>(0x01FC);                           // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offAvoidanceConsiderationRadius                               = new ExternalOffset<float>(0x0200);                           // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offRVOSteeringStep                                            = new ExternalOffset<float>(0x0204);                           // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offRVOThrottleStep                                            = new ExternalOffset<float>(0x0208);                           // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offAvoidanceUID                                               = new ExternalOffset<int>(0x020C);                             // 0x020C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FNavAvoidanceMask>                 _offAvoidanceGroup                                             = new ExternalOffset<FNavAvoidanceMask>(0x0210, false);        // 0x0210(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<FNavAvoidanceMask>                 _offGroupsToAvoid                                              = new ExternalOffset<FNavAvoidanceMask>(0x0214, false);        // 0x0214(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<FNavAvoidanceMask>                 _offGroupsToIgnore                                             = new ExternalOffset<FNavAvoidanceMask>(0x0218, false);        // 0x0218(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offAvoidanceWeight                                            = new ExternalOffset<float>(0x021C);                           // 0x021C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offPendingLaunchVelocity                                      = new ExternalOffset<FVector>(0x0220, false);                  // 0x0220(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FReplicatedVehicleState>           _offReplicatedState                                            = new ExternalOffset<FReplicatedVehicleState>(0x022C, false);  // 0x022C(0x0014) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offRawSteeringInput                                           = new ExternalOffset<float>(0x0244);                           // 0x0244(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offRawThrottleInput                                           = new ExternalOffset<float>(0x0248);                           // 0x0248(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offRawBrakeInput                                              = new ExternalOffset<float>(0x024C);                           // 0x024C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offSteeringInput                                              = new ExternalOffset<float>(0x0250);                           // 0x0250(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offThrottleInput                                              = new ExternalOffset<float>(0x0254);                           // 0x0254(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offBrakeInput                                                 = new ExternalOffset<float>(0x0258);                           // 0x0258(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offHandbrakeInput                                             = new ExternalOffset<float>(0x025C);                           // 0x025C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offIdleBrakeInput                                             = new ExternalOffset<float>(0x0260);                           // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offStopThreshold                                              = new ExternalOffset<float>(0x0264);                           // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offWrongDirectionThreshold                                    = new ExternalOffset<float>(0x0268);                           // 0x0268(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offInvertDirectionThreshold                                   = new ExternalOffset<float>(0x026C);                           // 0x026C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offLowRPMRatio                                                = new ExternalOffset<float>(0x0270);                           // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offSpeedInsteadOfRPMRatiosForShifting                         = new ExternalOffset<byte/*(bool)*/>(0x0274);                  // 0x0274(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FVehicleInputRate>                 _offThrottleInputRate                                          = new ExternalOffset<FVehicleInputRate>(0x0278, false);        // 0x0278(0x0008) (Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FVehicleInputRate>                 _offBrakeInputRate                                             = new ExternalOffset<FVehicleInputRate>(0x0280, false);        // 0x0280(0x0008) (Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FVehicleInputRate>                 _offHandbrakeInputRate                                         = new ExternalOffset<FVehicleInputRate>(0x0288, false);        // 0x0288(0x0008) (Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FVehicleInputRate>                 _offSteeringInputRate                                          = new ExternalOffset<FVehicleInputRate>(0x0290, false);        // 0x0290(0x0008) (Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FVehicleInputRate>                 _offEngineOffSteeringInputRate                                 = new ExternalOffset<FVehicleInputRate>(0x0298, false);        // 0x0298(0x0008) (Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<AController>                       _offOverrideController                                         = new ExternalOffset<AController>(0x02C8, true);               // 0x02C8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                    _offbUseCustomAutoGearBox                                      = new ExternalOffset<byte/*(bool)*/>(0x02D0);                  // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              Mass                                                           => _offMass.GetValue();
	public TArray<FWheelSetup>                                WheelSetups                                                    => _offWheelSetups.GetValue();
	public float                                              DragCoefficient                                                => _offDragCoefficient.GetValue();
	public float                                              ChassisWidth                                                   => _offChassisWidth.GetValue();
	public float                                              ChassisHeight                                                  => _offChassisHeight.GetValue();
	public float                                              DragArea                                                       => _offDragArea.GetValue();
	public float                                              EstimatedMaxEngineSpeed                                        => _offEstimatedMaxEngineSpeed.GetValue();
	public float                                              MaxEngineRPM                                                   => _offMaxEngineRPM.GetValue();
	public float                                              DebugDragMagnitude                                             => _offDebugDragMagnitude.GetValue();
	public FVector                                            InertiaTensorScale                                             => _offInertiaTensorScale.GetValue();
	public float                                              MinNormalizedTireLoad                                          => _offMinNormalizedTireLoad.GetValue();
	public float                                              MinNormalizedTireLoadFiltered                                  => _offMinNormalizedTireLoadFiltered.GetValue();
	public float                                              MaxNormalizedTireLoad                                          => _offMaxNormalizedTireLoad.GetValue();
	public float                                              MaxNormalizedTireLoadFiltered                                  => _offMaxNormalizedTireLoadFiltered.GetValue();
	public float                                              ThresholdLongitudinalSpeed                                     => _offThresholdLongitudinalSpeed.GetValue();
	public int                                                LowForwardSpeedSubStepCount                                    => _offLowForwardSpeedSubStepCount.GetValue();
	public int                                                HighForwardSpeedSubStepCount                                   => _offHighForwardSpeedSubStepCount.GetValue();
	public TArray<UVehicleWheel>                              Wheels                                                         => _offWheels.GetValue();
	public float                                              RVOAvoidanceRadius                                             => _offRVOAvoidanceRadius.GetValue();
	public float                                              RVOAvoidanceHeight                                             => _offRVOAvoidanceHeight.GetValue();
	public float                                              AvoidanceConsiderationRadius                                   => _offAvoidanceConsiderationRadius.GetValue();
	public float                                              RVOSteeringStep                                                => _offRVOSteeringStep.GetValue();
	public float                                              RVOThrottleStep                                                => _offRVOThrottleStep.GetValue();
	public int                                                AvoidanceUID                                                   => _offAvoidanceUID.GetValue();
	public FNavAvoidanceMask                                  AvoidanceGroup                                                 => _offAvoidanceGroup.GetValue();
	public FNavAvoidanceMask                                  GroupsToAvoid                                                  => _offGroupsToAvoid.GetValue();
	public FNavAvoidanceMask                                  GroupsToIgnore                                                 => _offGroupsToIgnore.GetValue();
	public float                                              AvoidanceWeight                                                => _offAvoidanceWeight.GetValue();
	public FVector                                            PendingLaunchVelocity                                          => _offPendingLaunchVelocity.GetValue();
	public FReplicatedVehicleState                            ReplicatedState                                                => _offReplicatedState.GetValue();
	public float                                              RawSteeringInput                                               => _offRawSteeringInput.GetValue();
	public float                                              RawThrottleInput                                               => _offRawThrottleInput.GetValue();
	public float                                              RawBrakeInput                                                  => _offRawBrakeInput.GetValue();
	public float                                              SteeringInput                                                  => _offSteeringInput.GetValue();
	public float                                              ThrottleInput                                                  => _offThrottleInput.GetValue();
	public float                                              BrakeInput                                                     => _offBrakeInput.GetValue();
	public float                                              HandbrakeInput                                                 => _offHandbrakeInput.GetValue();
	public float                                              IdleBrakeInput                                                 => _offIdleBrakeInput.GetValue();
	public float                                              StopThreshold                                                  => _offStopThreshold.GetValue();
	public float                                              WrongDirectionThreshold                                        => _offWrongDirectionThreshold.GetValue();
	public float                                              InvertDirectionThreshold                                       => _offInvertDirectionThreshold.GetValue();
	public float                                              LowRPMRatio                                                    => _offLowRPMRatio.GetValue();
	public byte/*(bool)*/                                     SpeedInsteadOfRPMRatiosForShifting                             => _offSpeedInsteadOfRPMRatiosForShifting.GetValue();
	public FVehicleInputRate                                  ThrottleInputRate                                              => _offThrottleInputRate.GetValue();
	public FVehicleInputRate                                  BrakeInputRate                                                 => _offBrakeInputRate.GetValue();
	public FVehicleInputRate                                  HandbrakeInputRate                                             => _offHandbrakeInputRate.GetValue();
	public FVehicleInputRate                                  SteeringInputRate                                              => _offSteeringInputRate.GetValue();
	public FVehicleInputRate                                  EngineOffSteeringInputRate                                     => _offEngineOffSteeringInputRate.GetValue();
	public AController                                        OverrideController                                             => _offOverrideController.GetValue();
	public byte/*(bool)*/                                     bUseCustomAutoGearBox                                          => _offbUseCustomAutoGearBox.GetValue();
	#endregion


}

// Class PhysXVehicles.WheeledVehicleMovementComponentNW
// 0x017F (0x0450 - 0x02D1)
public class UWheeledVehicleMovementComponentNW : UWheeledVehicleMovementComponent
{
	#region Offsets
	private ExternalOffset<FVehicleNWEngineData>              _offEngineSetup                                                = new ExternalOffset<FVehicleNWEngineData>(0x02D8, false);     // 0x02D8(0x00A0) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FVehicleNWWheelDifferentialData>> _offDifferentialSetup                                          = new ExternalOffset<TArray<FVehicleNWWheelDifferentialData>>(0x0378, false); // 0x0378(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FVehicleNWTransmissionData>        _offTransmissionSetup                                          = new ExternalOffset<FVehicleNWTransmissionData>(0x0388, false); // 0x0388(0x0040) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FRuntimeFloatCurve>                _offSteeringCurve                                              = new ExternalOffset<FRuntimeFloatCurve>(0x03C8, false);       // 0x03C8(0x0088) (Edit, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVehicleNWEngineData                               EngineSetup                                                    => _offEngineSetup.GetValue();
	public TArray<FVehicleNWWheelDifferentialData>            DifferentialSetup                                              => _offDifferentialSetup.GetValue();
	public FVehicleNWTransmissionData                         TransmissionSetup                                              => _offTransmissionSetup.GetValue();
	public FRuntimeFloatCurve                                 SteeringCurve                                                  => _offSteeringCurve.GetValue();
	#endregion


}

// Class PhysXVehicles.WheeledVehicleMovementComponentTank
// 0x0127 (0x03F8 - 0x02D1)
public class UWheeledVehicleMovementComponentTank : UWheeledVehicleMovementComponent
{
	#region Offsets
	private ExternalOffset<FVehicleTankEngineData>            _offEngineSetup                                                = new ExternalOffset<FVehicleTankEngineData>(0x02D8, false);   // 0x02D8(0x00A0) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FVehicleTankTransmissionData>      _offTransmissionSetup                                          = new ExternalOffset<FVehicleTankTransmissionData>(0x0378, false); // 0x0378(0x0040) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offRawBothTracksThrottleInput                                 = new ExternalOffset<float>(0x03B8);                           // 0x03B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offRawLeftTrackThrottleInput                                  = new ExternalOffset<float>(0x03BC);                           // 0x03BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offRawRightTrackThrottleInput                                 = new ExternalOffset<float>(0x03C0);                           // 0x03C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offBothTracksThrottleInput                                    = new ExternalOffset<float>(0x03C4);                           // 0x03C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offLeftTrackThrottleInput                                     = new ExternalOffset<float>(0x03C8);                           // 0x03C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offRightTrackThrottleInput                                    = new ExternalOffset<float>(0x03CC);                           // 0x03CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<float>>                     _offWheelSpeeds                                                = new ExternalOffset<TArray<float>>(0x03D0, false);            // 0x03D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<float>>                     _offWheelAngles                                                = new ExternalOffset<TArray<float>>(0x03E0, false);            // 0x03E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offLeftTrackSpeed                                             = new ExternalOffset<float>(0x03F0);                           // 0x03F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offRightTrackSpeed                                            = new ExternalOffset<float>(0x03F4);                           // 0x03F4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FVehicleTankEngineData                             EngineSetup                                                    => _offEngineSetup.GetValue();
	public FVehicleTankTransmissionData                       TransmissionSetup                                              => _offTransmissionSetup.GetValue();
	public float                                              RawBothTracksThrottleInput                                     => _offRawBothTracksThrottleInput.GetValue();
	public float                                              RawLeftTrackThrottleInput                                      => _offRawLeftTrackThrottleInput.GetValue();
	public float                                              RawRightTrackThrottleInput                                     => _offRawRightTrackThrottleInput.GetValue();
	public float                                              BothTracksThrottleInput                                        => _offBothTracksThrottleInput.GetValue();
	public float                                              LeftTrackThrottleInput                                         => _offLeftTrackThrottleInput.GetValue();
	public float                                              RightTrackThrottleInput                                        => _offRightTrackThrottleInput.GetValue();
	public TArray<float>                                      WheelSpeeds                                                    => _offWheelSpeeds.GetValue();
	public TArray<float>                                      WheelAngles                                                    => _offWheelAngles.GetValue();
	public float                                              LeftTrackSpeed                                                 => _offLeftTrackSpeed.GetValue();
	public float                                              RightTrackSpeed                                                => _offRightTrackSpeed.GetValue();
	#endregion


}

// Class PhysXVehicles.VehicleAnimInstance
// 0x07E8 (0x0968 - 0x0180)
public class UVehicleAnimInstance : UAnimInstance
{
	#region Offsets
	private ExternalOffset<UWheeledVehicleMovementComponent>  _offWheeledVehicleMovementComponent                            = new ExternalOffset<UWheeledVehicleMovementComponent>(0x0960, true); // 0x0960(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UWheeledVehicleMovementComponent                   WheeledVehicleMovementComponent                                => _offWheeledVehicleMovementComponent.GetValue();
	#endregion


}

// Class PhysXVehicles.VehicleWheel
// 0x00C4 (0x00EC - 0x0028)
public class UVehicleWheel : UObject
{
	#region Offsets
	private ExternalOffset<UStaticMesh>                       _offCollisionMesh                                              = new ExternalOffset<UStaticMesh>(0x0028, true);               // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbDontCreateShape                                           = new ExternalOffset<byte/*(bool)*/>(0x0030);                  // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAutoAdjustCollisionSize                                   = new ExternalOffset<byte/*(bool)*/>(0x0031);                  // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offOffset                                                     = new ExternalOffset<FVector>(0x0034, false);                  // 0x0034(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offShapeRadius                                                = new ExternalOffset<float>(0x0040);                           // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offShapeWidth                                                 = new ExternalOffset<float>(0x0044);                           // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMass                                                       = new ExternalOffset<float>(0x0048);                           // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDampingRate                                                = new ExternalOffset<float>(0x004C);                           // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPhysMatDampingRateMultiplier                               = new ExternalOffset<float>(0x0050);                           // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offSteerAngle                                                 = new ExternalOffset<float>(0x0054);                           // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAffectedByHandbrake                                       = new ExternalOffset<byte/*(bool)*/>(0x0058);                  // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UTireType>                         _offTireType                                                   = new ExternalOffset<UTireType>(0x0060, true);                 // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UTireConfig>                       _offTireConfig                                                 = new ExternalOffset<UTireConfig>(0x0068, true);               // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offLatStiffMaxLoad                                            = new ExternalOffset<float>(0x0070);                           // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offLatStiffValue                                              = new ExternalOffset<float>(0x0074);                           // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offLongStiffValue                                             = new ExternalOffset<float>(0x0078);                           // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offSuspensionForceOffset                                      = new ExternalOffset<float>(0x007C);                           // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offSuspensionMaxRaise                                         = new ExternalOffset<float>(0x0080);                           // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offSuspensionMaxDrop                                          = new ExternalOffset<float>(0x0084);                           // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offSuspensionNaturalFrequency                                 = new ExternalOffset<float>(0x0088);                           // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offSuspensionDampingRatio                                     = new ExternalOffset<float>(0x008C);                           // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EWheelSweepType>>      _offSweepType                                                  = new ExternalOffset<TEnumAsByte<EWheelSweepType>>(0x0090, false); // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMaxBrakeTorque                                             = new ExternalOffset<float>(0x0094);                           // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMaxHandBrakeTorque                                         = new ExternalOffset<float>(0x0098);                           // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UWheeledVehicleMovementComponent>  _offVehicleSim                                                 = new ExternalOffset<UWheeledVehicleMovementComponent>(0x00A0, true); // 0x00A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offWheelIndex                                                 = new ExternalOffset<int>(0x00A8);                             // 0x00A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDebugLongSlip                                              = new ExternalOffset<float>(0x00AC);                           // 0x00AC(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDebugLatSlip                                               = new ExternalOffset<float>(0x00B0);                           // 0x00B0(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDebugNormalizedTireLoad                                    = new ExternalOffset<float>(0x00B4);                           // 0x00B4(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDebugWheelTorque                                           = new ExternalOffset<float>(0x00BC);                           // 0x00BC(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDebugLongForce                                             = new ExternalOffset<float>(0x00C0);                           // 0x00C0(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDebugLatForce                                              = new ExternalOffset<float>(0x00C4);                           // 0x00C4(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offLocation                                                   = new ExternalOffset<FVector>(0x00C8, false);                  // 0x00C8(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offOldLocation                                                = new ExternalOffset<FVector>(0x00D4, false);                  // 0x00D4(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offVelocity                                                   = new ExternalOffset<FVector>(0x00E0, false);                  // 0x00E0(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UStaticMesh                                        CollisionMesh                                                  => _offCollisionMesh.GetValue();
	public byte/*(bool)*/                                     bDontCreateShape                                               => _offbDontCreateShape.GetValue();
	public byte/*(bool)*/                                     bAutoAdjustCollisionSize                                       => _offbAutoAdjustCollisionSize.GetValue();
	public FVector                                            Offset                                                         => _offOffset.GetValue();
	public float                                              ShapeRadius                                                    => _offShapeRadius.GetValue();
	public float                                              ShapeWidth                                                     => _offShapeWidth.GetValue();
	public float                                              Mass                                                           => _offMass.GetValue();
	public float                                              DampingRate                                                    => _offDampingRate.GetValue();
	public float                                              PhysMatDampingRateMultiplier                                   => _offPhysMatDampingRateMultiplier.GetValue();
	public float                                              SteerAngle                                                     => _offSteerAngle.GetValue();
	public byte/*(bool)*/                                     bAffectedByHandbrake                                           => _offbAffectedByHandbrake.GetValue();
	public UTireType                                          TireType                                                       => _offTireType.GetValue();
	public UTireConfig                                        TireConfig                                                     => _offTireConfig.GetValue();
	public float                                              LatStiffMaxLoad                                                => _offLatStiffMaxLoad.GetValue();
	public float                                              LatStiffValue                                                  => _offLatStiffValue.GetValue();
	public float                                              LongStiffValue                                                 => _offLongStiffValue.GetValue();
	public float                                              SuspensionForceOffset                                          => _offSuspensionForceOffset.GetValue();
	public float                                              SuspensionMaxRaise                                             => _offSuspensionMaxRaise.GetValue();
	public float                                              SuspensionMaxDrop                                              => _offSuspensionMaxDrop.GetValue();
	public float                                              SuspensionNaturalFrequency                                     => _offSuspensionNaturalFrequency.GetValue();
	public float                                              SuspensionDampingRatio                                         => _offSuspensionDampingRatio.GetValue();
	public TEnumAsByte<EWheelSweepType>                       SweepType                                                      => _offSweepType.GetValue();
	public float                                              MaxBrakeTorque                                                 => _offMaxBrakeTorque.GetValue();
	public float                                              MaxHandBrakeTorque                                             => _offMaxHandBrakeTorque.GetValue();
	public UWheeledVehicleMovementComponent                   VehicleSim                                                     => _offVehicleSim.GetValue();
	public int                                                WheelIndex                                                     => _offWheelIndex.GetValue();
	public float                                              DebugLongSlip                                                  => _offDebugLongSlip.GetValue();
	public float                                              DebugLatSlip                                                   => _offDebugLatSlip.GetValue();
	public float                                              DebugNormalizedTireLoad                                        => _offDebugNormalizedTireLoad.GetValue();
	public float                                              DebugWheelTorque                                               => _offDebugWheelTorque.GetValue();
	public float                                              DebugLongForce                                                 => _offDebugLongForce.GetValue();
	public float                                              DebugLatForce                                                  => _offDebugLatForce.GetValue();
	public FVector                                            Location                                                       => _offLocation.GetValue();
	public FVector                                            OldLocation                                                    => _offOldLocation.GetValue();
	public FVector                                            Velocity                                                       => _offVelocity.GetValue();
	#endregion


}

// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// 0x018F (0x0460 - 0x02D1)
public class UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent
{
	#region Offsets
	private ExternalOffset<FVehicleEngineData>                _offEngineSetup                                                = new ExternalOffset<FVehicleEngineData>(0x02D8, false);       // 0x02D8(0x00A0) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FVehicleDifferential4WData>        _offDifferentialSetup                                          = new ExternalOffset<FVehicleDifferential4WData>(0x0378, false); // 0x0378(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offAckermannAccuracy                                          = new ExternalOffset<float>(0x0394);                           // 0x0394(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVehicleTransmissionData>          _offTransmissionSetup                                          = new ExternalOffset<FVehicleTransmissionData>(0x0398, false); // 0x0398(0x0040) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FRuntimeFloatCurve>                _offSteeringCurve                                              = new ExternalOffset<FRuntimeFloatCurve>(0x03D8, false);       // 0x03D8(0x0088) (Edit, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVehicleEngineData                                 EngineSetup                                                    => _offEngineSetup.GetValue();
	public FVehicleDifferential4WData                         DifferentialSetup                                              => _offDifferentialSetup.GetValue();
	public float                                              AckermannAccuracy                                              => _offAckermannAccuracy.GetValue();
	public FVehicleTransmissionData                           TransmissionSetup                                              => _offTransmissionSetup.GetValue();
	public FRuntimeFloatCurve                                 SteeringCurve                                                  => _offSteeringCurve.GetValue();
	#endregion


}

// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// 0x0007 (0x02D8 - 0x02D1)
public class USimpleWheeledVehicleMovementComponent : UWheeledVehicleMovementComponent
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class PhysXVehicles.TireConfig
// 0x0018 (0x0048 - 0x0030)
public class UTireConfig : UDataAsset
{
	#region Offsets
	private ExternalOffset<float>                             _offFrictionScale                                              = new ExternalOffset<float>(0x0030);                           // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FTireConfigMaterialFriction>> _offTireFrictionScales                                         = new ExternalOffset<TArray<FTireConfigMaterialFriction>>(0x0038, false); // 0x0038(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public float                                              FrictionScale                                                  => _offFrictionScale.GetValue();
	public TArray<FTireConfigMaterialFriction>                TireFrictionScales                                             => _offTireFrictionScales.GetValue();
	#endregion


}

// Class PhysXVehicles.WheeledVehicle
// 0x0014 (0x02B8 - 0x02A4)
public class AWheeledVehicle : APawn
{
	#region Offsets
	private ExternalOffset<USkeletalMeshComponent>            _offMesh                                                       = new ExternalOffset<USkeletalMeshComponent>(0x02A8, true);    // 0x02A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UWheeledVehicleMovementComponent>  _offVehicleMovement                                            = new ExternalOffset<UWheeledVehicleMovementComponent>(0x02B0, true); // 0x02B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public USkeletalMeshComponent                             Mesh                                                           => _offMesh.GetValue();
	public UWheeledVehicleMovementComponent                   VehicleMovement                                                => _offVehicleMovement.GetValue();
	#endregion


}


}