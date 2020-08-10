// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum PhysXVehicles.EWheelSweepType
public enum EWheelSweepType : byte
{
	SimpleAndComplex               = 0,
	Simple                         = 1,
	Complex                        = 2,
	EWheelSweepType_MAX            = 3
}

// Enum PhysXVehicles.EVehicleDifferential4W
public enum EVehicleDifferential4W : byte
{
	EVehicleDifferential4W__LimitedSlip_4W = 0,
	EVehicleDifferential4W__LimitedSlip_FrontDrive = 1,
	EVehicleDifferential4W__LimitedSlip_RearDrive = 2,
	EVehicleDifferential4W__Open_4W = 3,
	EVehicleDifferential4W__Open_FrontDrive = 4,
	EVehicleDifferential4W__Open_RearDrive = 5,
	EVehicleDifferential4W__EVehicleDifferential4W_MAX = 6
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PhysXVehicles.VehicleNWWheelDifferentialData
// 0x0001
public class FVehicleNWWheelDifferentialData : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbDriven                                                    = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bDriven                                                        => _offbDriven.GetValue();
	#endregion

	public FVehicleNWWheelDifferentialData(byte/*(bool)*/ c_bDriven) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbDriven.SetValue(c_bDriven);
	}
}
// ScriptStruct PhysXVehicles.WheelSetup
// 0x0020
public class FWheelSetup : ExternalClass
{
	#region Offsets
	private ExternalOffset<UClass>                             _offWheelClass                                                 = new ExternalOffset<UClass>(0x0000, true);                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offBoneName                                                   = new ExternalOffset<FName>(0x0008, false);                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offAdditionalOffset                                           = new ExternalOffset<FVector>(0x0010, false);                  // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbDisableSteering                                           = new ExternalOffset<byte/*(bool)*/>(0x001C);                  // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                              WheelClass                                                     => _offWheelClass.GetValue();
	public FName                                               BoneName                                                       => _offBoneName.GetValue();
	public FVector                                             AdditionalOffset                                               => _offAdditionalOffset.GetValue();
	public byte/*(bool)*/                                      bDisableSteering                                               => _offbDisableSteering.GetValue();
	#endregion

	public FWheelSetup(UClass c_WheelClass, FName c_BoneName, FVector c_AdditionalOffset, byte/*(bool)*/ c_bDisableSteering) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offWheelClass.SetValue(c_WheelClass);
		_offBoneName.SetValue(c_BoneName);
		_offAdditionalOffset.SetValue(c_AdditionalOffset);
		_offbDisableSteering.SetValue(c_bDisableSteering);
	}
}
// ScriptStruct PhysXVehicles.VehicleEngineData
// 0x00A0
public class FVehicleEngineData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FRuntimeFloatCurve>                 _offTorqueCurve                                                = new ExternalOffset<FRuntimeFloatCurve>(0x0000, false);       // 0x0000(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMaxRPM                                                     = new ExternalOffset<float>(0x0088);                           // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMOI                                                        = new ExternalOffset<float>(0x008C);                           // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDampingRateFullThrottle                                    = new ExternalOffset<float>(0x0090);                           // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDampingRateZeroThrottleClutchEngaged                       = new ExternalOffset<float>(0x0094);                           // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDampingRateZeroThrottleClutchDisengaged                    = new ExternalOffset<float>(0x0098);                           // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FRuntimeFloatCurve                                  TorqueCurve                                                    => _offTorqueCurve.GetValue();
	public float                                               MaxRPM                                                         => _offMaxRPM.GetValue();
	public float                                               MOI                                                            => _offMOI.GetValue();
	public float                                               DampingRateFullThrottle                                        => _offDampingRateFullThrottle.GetValue();
	public float                                               DampingRateZeroThrottleClutchEngaged                           => _offDampingRateZeroThrottleClutchEngaged.GetValue();
	public float                                               DampingRateZeroThrottleClutchDisengaged                        => _offDampingRateZeroThrottleClutchDisengaged.GetValue();
	#endregion

	public FVehicleEngineData(FRuntimeFloatCurve c_TorqueCurve, float c_MaxRPM, float c_MOI, float c_DampingRateFullThrottle, float c_DampingRateZeroThrottleClutchEngaged, float c_DampingRateZeroThrottleClutchDisengaged) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTorqueCurve.SetValue(c_TorqueCurve);
		_offMaxRPM.SetValue(c_MaxRPM);
		_offMOI.SetValue(c_MOI);
		_offDampingRateFullThrottle.SetValue(c_DampingRateFullThrottle);
		_offDampingRateZeroThrottleClutchEngaged.SetValue(c_DampingRateZeroThrottleClutchEngaged);
		_offDampingRateZeroThrottleClutchDisengaged.SetValue(c_DampingRateZeroThrottleClutchDisengaged);
	}
}
// ScriptStruct PhysXVehicles.VehicleTankGearData
// 0x000C
public class FVehicleTankGearData : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offRatio                                                      = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDownRatio                                                  = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offUpRatio                                                    = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               Ratio                                                          => _offRatio.GetValue();
	public float                                               DownRatio                                                      => _offDownRatio.GetValue();
	public float                                               UpRatio                                                        => _offUpRatio.GetValue();
	#endregion

	public FVehicleTankGearData(float c_Ratio, float c_DownRatio, float c_UpRatio) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRatio.SetValue(c_Ratio);
		_offDownRatio.SetValue(c_DownRatio);
		_offUpRatio.SetValue(c_UpRatio);
	}
}
// ScriptStruct PhysXVehicles.ReplicatedVehicleState
// 0x0014
public class FReplicatedVehicleState : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offSteeringInput                                              = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offThrottleInput                                              = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offBrakeInput                                                 = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offHandbrakeInput                                             = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offCurrentGear                                                = new ExternalOffset<int>(0x0010);                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               SteeringInput                                                  => _offSteeringInput.GetValue();
	public float                                               ThrottleInput                                                  => _offThrottleInput.GetValue();
	public float                                               BrakeInput                                                     => _offBrakeInput.GetValue();
	public float                                               HandbrakeInput                                                 => _offHandbrakeInput.GetValue();
	public int                                                 CurrentGear                                                    => _offCurrentGear.GetValue();
	#endregion

	public FReplicatedVehicleState(float c_SteeringInput, float c_ThrottleInput, float c_BrakeInput, float c_HandbrakeInput, int c_CurrentGear) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSteeringInput.SetValue(c_SteeringInput);
		_offThrottleInput.SetValue(c_ThrottleInput);
		_offBrakeInput.SetValue(c_BrakeInput);
		_offHandbrakeInput.SetValue(c_HandbrakeInput);
		_offCurrentGear.SetValue(c_CurrentGear);
	}
}
// ScriptStruct PhysXVehicles.VehicleTankTransmissionData
// 0x0040
public class FVehicleTankTransmissionData : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbUseGearAutoBox                                            = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offGearSwitchTime                                             = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offGearAutoBoxLatency                                         = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offFinalRatio                                                 = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FVehicleTankGearData>>       _offForwardGears                                               = new ExternalOffset<TArray<FVehicleTankGearData>>(0x0010, false); // 0x0010(0x0010) (Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FVehicleTankGearData>>       _offBackwardGears                                              = new ExternalOffset<TArray<FVehicleTankGearData>>(0x0020, false); // 0x0020(0x0010) (Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offReverseGearRatio                                           = new ExternalOffset<float>(0x0030);                           // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offNeutralGearUpRatio                                         = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offNeutralGearDownRatio                                       = new ExternalOffset<float>(0x0038);                           // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offClutchStrength                                             = new ExternalOffset<float>(0x003C);                           // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bUseGearAutoBox                                                => _offbUseGearAutoBox.GetValue();
	public float                                               GearSwitchTime                                                 => _offGearSwitchTime.GetValue();
	public float                                               GearAutoBoxLatency                                             => _offGearAutoBoxLatency.GetValue();
	public float                                               FinalRatio                                                     => _offFinalRatio.GetValue();
	public TArray<FVehicleTankGearData>                        ForwardGears                                                   => _offForwardGears.GetValue();
	public TArray<FVehicleTankGearData>                        BackwardGears                                                  => _offBackwardGears.GetValue();
	public float                                               ReverseGearRatio                                               => _offReverseGearRatio.GetValue();
	public float                                               NeutralGearUpRatio                                             => _offNeutralGearUpRatio.GetValue();
	public float                                               NeutralGearDownRatio                                           => _offNeutralGearDownRatio.GetValue();
	public float                                               ClutchStrength                                                 => _offClutchStrength.GetValue();
	#endregion

	public FVehicleTankTransmissionData(byte/*(bool)*/ c_bUseGearAutoBox, float c_GearSwitchTime, float c_GearAutoBoxLatency, float c_FinalRatio, TArray<FVehicleTankGearData> c_ForwardGears, TArray<FVehicleTankGearData> c_BackwardGears, float c_ReverseGearRatio, float c_NeutralGearUpRatio, float c_NeutralGearDownRatio, float c_ClutchStrength) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbUseGearAutoBox.SetValue(c_bUseGearAutoBox);
		_offGearSwitchTime.SetValue(c_GearSwitchTime);
		_offGearAutoBoxLatency.SetValue(c_GearAutoBoxLatency);
		_offFinalRatio.SetValue(c_FinalRatio);
		_offForwardGears.SetValue(c_ForwardGears);
		_offBackwardGears.SetValue(c_BackwardGears);
		_offReverseGearRatio.SetValue(c_ReverseGearRatio);
		_offNeutralGearUpRatio.SetValue(c_NeutralGearUpRatio);
		_offNeutralGearDownRatio.SetValue(c_NeutralGearDownRatio);
		_offClutchStrength.SetValue(c_ClutchStrength);
	}
}
// ScriptStruct PhysXVehicles.VehicleDifferential4WData
// 0x001C
public class FVehicleDifferential4WData : ExternalClass
{
	#region Offsets
	private ExternalOffset<TEnumAsByte<EVehicleDifferential4W>> _offDifferentialType                                           = new ExternalOffset<TEnumAsByte<EVehicleDifferential4W>>(0x0000, false); // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offFrontRearSplit                                             = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offFrontLeftRightSplit                                        = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRearLeftRightSplit                                         = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCentreBias                                                 = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offFrontBias                                                  = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRearBias                                                   = new ExternalOffset<float>(0x0018);                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TEnumAsByte<EVehicleDifferential4W>                 DifferentialType                                               => _offDifferentialType.GetValue();
	public float                                               FrontRearSplit                                                 => _offFrontRearSplit.GetValue();
	public float                                               FrontLeftRightSplit                                            => _offFrontLeftRightSplit.GetValue();
	public float                                               RearLeftRightSplit                                             => _offRearLeftRightSplit.GetValue();
	public float                                               CentreBias                                                     => _offCentreBias.GetValue();
	public float                                               FrontBias                                                      => _offFrontBias.GetValue();
	public float                                               RearBias                                                       => _offRearBias.GetValue();
	#endregion

	public FVehicleDifferential4WData(TEnumAsByte<EVehicleDifferential4W> c_DifferentialType, float c_FrontRearSplit, float c_FrontLeftRightSplit, float c_RearLeftRightSplit, float c_CentreBias, float c_FrontBias, float c_RearBias) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDifferentialType.SetValue(c_DifferentialType);
		_offFrontRearSplit.SetValue(c_FrontRearSplit);
		_offFrontLeftRightSplit.SetValue(c_FrontLeftRightSplit);
		_offRearLeftRightSplit.SetValue(c_RearLeftRightSplit);
		_offCentreBias.SetValue(c_CentreBias);
		_offFrontBias.SetValue(c_FrontBias);
		_offRearBias.SetValue(c_RearBias);
	}
}
// ScriptStruct PhysXVehicles.VehicleInputRate
// 0x0008
public class FVehicleInputRate : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offRiseRate                                                   = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offFallRate                                                   = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               RiseRate                                                       => _offRiseRate.GetValue();
	public float                                               FallRate                                                       => _offFallRate.GetValue();
	#endregion

	public FVehicleInputRate(float c_RiseRate, float c_FallRate) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRiseRate.SetValue(c_RiseRate);
		_offFallRate.SetValue(c_FallRate);
	}
}
// ScriptStruct PhysXVehicles.VehicleNWGearData
// 0x000C
public class FVehicleNWGearData : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offRatio                                                      = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDownRatio                                                  = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offUpRatio                                                    = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               Ratio                                                          => _offRatio.GetValue();
	public float                                               DownRatio                                                      => _offDownRatio.GetValue();
	public float                                               UpRatio                                                        => _offUpRatio.GetValue();
	#endregion

	public FVehicleNWGearData(float c_Ratio, float c_DownRatio, float c_UpRatio) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRatio.SetValue(c_Ratio);
		_offDownRatio.SetValue(c_DownRatio);
		_offUpRatio.SetValue(c_UpRatio);
	}
}
// ScriptStruct PhysXVehicles.VehicleTankEngineData
// 0x00A0
public class FVehicleTankEngineData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FRuntimeFloatCurve>                 _offTorqueCurve                                                = new ExternalOffset<FRuntimeFloatCurve>(0x0000, false);       // 0x0000(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMaxRPM                                                     = new ExternalOffset<float>(0x0088);                           // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMOI                                                        = new ExternalOffset<float>(0x008C);                           // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDampingRateFullThrottle                                    = new ExternalOffset<float>(0x0090);                           // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDampingRateZeroThrottleClutchEngaged                       = new ExternalOffset<float>(0x0094);                           // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDampingRateZeroThrottleClutchDisengaged                    = new ExternalOffset<float>(0x0098);                           // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FRuntimeFloatCurve                                  TorqueCurve                                                    => _offTorqueCurve.GetValue();
	public float                                               MaxRPM                                                         => _offMaxRPM.GetValue();
	public float                                               MOI                                                            => _offMOI.GetValue();
	public float                                               DampingRateFullThrottle                                        => _offDampingRateFullThrottle.GetValue();
	public float                                               DampingRateZeroThrottleClutchEngaged                           => _offDampingRateZeroThrottleClutchEngaged.GetValue();
	public float                                               DampingRateZeroThrottleClutchDisengaged                        => _offDampingRateZeroThrottleClutchDisengaged.GetValue();
	#endregion

	public FVehicleTankEngineData(FRuntimeFloatCurve c_TorqueCurve, float c_MaxRPM, float c_MOI, float c_DampingRateFullThrottle, float c_DampingRateZeroThrottleClutchEngaged, float c_DampingRateZeroThrottleClutchDisengaged) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTorqueCurve.SetValue(c_TorqueCurve);
		_offMaxRPM.SetValue(c_MaxRPM);
		_offMOI.SetValue(c_MOI);
		_offDampingRateFullThrottle.SetValue(c_DampingRateFullThrottle);
		_offDampingRateZeroThrottleClutchEngaged.SetValue(c_DampingRateZeroThrottleClutchEngaged);
		_offDampingRateZeroThrottleClutchDisengaged.SetValue(c_DampingRateZeroThrottleClutchDisengaged);
	}
}
// ScriptStruct PhysXVehicles.VehicleNWTransmissionData
// 0x0040
public class FVehicleNWTransmissionData : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbUseGearAutoBox                                            = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offGearSwitchTime                                             = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offGearAutoBoxLatency                                         = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offFinalRatio                                                 = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FVehicleNWGearData>>         _offForwardGears                                               = new ExternalOffset<TArray<FVehicleNWGearData>>(0x0010, false); // 0x0010(0x0010) (Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FVehicleNWGearData>>         _offBackwardGears                                              = new ExternalOffset<TArray<FVehicleNWGearData>>(0x0020, false); // 0x0020(0x0010) (Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offReverseGearRatio                                           = new ExternalOffset<float>(0x0030);                           // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offNeutralGearUpRatio                                         = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offNeutralGearDownRatio                                       = new ExternalOffset<float>(0x0038);                           // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offClutchStrength                                             = new ExternalOffset<float>(0x003C);                           // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bUseGearAutoBox                                                => _offbUseGearAutoBox.GetValue();
	public float                                               GearSwitchTime                                                 => _offGearSwitchTime.GetValue();
	public float                                               GearAutoBoxLatency                                             => _offGearAutoBoxLatency.GetValue();
	public float                                               FinalRatio                                                     => _offFinalRatio.GetValue();
	public TArray<FVehicleNWGearData>                          ForwardGears                                                   => _offForwardGears.GetValue();
	public TArray<FVehicleNWGearData>                          BackwardGears                                                  => _offBackwardGears.GetValue();
	public float                                               ReverseGearRatio                                               => _offReverseGearRatio.GetValue();
	public float                                               NeutralGearUpRatio                                             => _offNeutralGearUpRatio.GetValue();
	public float                                               NeutralGearDownRatio                                           => _offNeutralGearDownRatio.GetValue();
	public float                                               ClutchStrength                                                 => _offClutchStrength.GetValue();
	#endregion

	public FVehicleNWTransmissionData(byte/*(bool)*/ c_bUseGearAutoBox, float c_GearSwitchTime, float c_GearAutoBoxLatency, float c_FinalRatio, TArray<FVehicleNWGearData> c_ForwardGears, TArray<FVehicleNWGearData> c_BackwardGears, float c_ReverseGearRatio, float c_NeutralGearUpRatio, float c_NeutralGearDownRatio, float c_ClutchStrength) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbUseGearAutoBox.SetValue(c_bUseGearAutoBox);
		_offGearSwitchTime.SetValue(c_GearSwitchTime);
		_offGearAutoBoxLatency.SetValue(c_GearAutoBoxLatency);
		_offFinalRatio.SetValue(c_FinalRatio);
		_offForwardGears.SetValue(c_ForwardGears);
		_offBackwardGears.SetValue(c_BackwardGears);
		_offReverseGearRatio.SetValue(c_ReverseGearRatio);
		_offNeutralGearUpRatio.SetValue(c_NeutralGearUpRatio);
		_offNeutralGearDownRatio.SetValue(c_NeutralGearDownRatio);
		_offClutchStrength.SetValue(c_ClutchStrength);
	}
}
// ScriptStruct PhysXVehicles.VehicleNWEngineData
// 0x00A0
public class FVehicleNWEngineData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FRuntimeFloatCurve>                 _offTorqueCurve                                                = new ExternalOffset<FRuntimeFloatCurve>(0x0000, false);       // 0x0000(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMaxRPM                                                     = new ExternalOffset<float>(0x0088);                           // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMOI                                                        = new ExternalOffset<float>(0x008C);                           // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDampingRateFullThrottle                                    = new ExternalOffset<float>(0x0090);                           // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDampingRateZeroThrottleClutchEngaged                       = new ExternalOffset<float>(0x0094);                           // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDampingRateZeroThrottleClutchDisengaged                    = new ExternalOffset<float>(0x0098);                           // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FRuntimeFloatCurve                                  TorqueCurve                                                    => _offTorqueCurve.GetValue();
	public float                                               MaxRPM                                                         => _offMaxRPM.GetValue();
	public float                                               MOI                                                            => _offMOI.GetValue();
	public float                                               DampingRateFullThrottle                                        => _offDampingRateFullThrottle.GetValue();
	public float                                               DampingRateZeroThrottleClutchEngaged                           => _offDampingRateZeroThrottleClutchEngaged.GetValue();
	public float                                               DampingRateZeroThrottleClutchDisengaged                        => _offDampingRateZeroThrottleClutchDisengaged.GetValue();
	#endregion

	public FVehicleNWEngineData(FRuntimeFloatCurve c_TorqueCurve, float c_MaxRPM, float c_MOI, float c_DampingRateFullThrottle, float c_DampingRateZeroThrottleClutchEngaged, float c_DampingRateZeroThrottleClutchDisengaged) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTorqueCurve.SetValue(c_TorqueCurve);
		_offMaxRPM.SetValue(c_MaxRPM);
		_offMOI.SetValue(c_MOI);
		_offDampingRateFullThrottle.SetValue(c_DampingRateFullThrottle);
		_offDampingRateZeroThrottleClutchEngaged.SetValue(c_DampingRateZeroThrottleClutchEngaged);
		_offDampingRateZeroThrottleClutchDisengaged.SetValue(c_DampingRateZeroThrottleClutchDisengaged);
	}
}
// ScriptStruct PhysXVehicles.VehicleGearData
// 0x000C
public class FVehicleGearData : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offRatio                                                      = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDownRatio                                                  = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offUpRatio                                                    = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               Ratio                                                          => _offRatio.GetValue();
	public float                                               DownRatio                                                      => _offDownRatio.GetValue();
	public float                                               UpRatio                                                        => _offUpRatio.GetValue();
	#endregion

	public FVehicleGearData(float c_Ratio, float c_DownRatio, float c_UpRatio) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRatio.SetValue(c_Ratio);
		_offDownRatio.SetValue(c_DownRatio);
		_offUpRatio.SetValue(c_UpRatio);
	}
}
// ScriptStruct PhysXVehicles.VehicleTransmissionData
// 0x0040
public class FVehicleTransmissionData : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbUseGearAutoBox                                            = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offGearSwitchTime                                             = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offGearAutoBoxLatency                                         = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offFinalRatio                                                 = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FVehicleGearData>>           _offForwardGears                                               = new ExternalOffset<TArray<FVehicleGearData>>(0x0010, false); // 0x0010(0x0010) (Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FVehicleGearData>>           _offBackwardGears                                              = new ExternalOffset<TArray<FVehicleGearData>>(0x0020, false); // 0x0020(0x0010) (Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offReverseGearRatio                                           = new ExternalOffset<float>(0x0030);                           // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offNeutralGearUpRatio                                         = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offNeutralGearDownRatio                                       = new ExternalOffset<float>(0x0038);                           // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offClutchStrength                                             = new ExternalOffset<float>(0x003C);                           // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bUseGearAutoBox                                                => _offbUseGearAutoBox.GetValue();
	public float                                               GearSwitchTime                                                 => _offGearSwitchTime.GetValue();
	public float                                               GearAutoBoxLatency                                             => _offGearAutoBoxLatency.GetValue();
	public float                                               FinalRatio                                                     => _offFinalRatio.GetValue();
	public TArray<FVehicleGearData>                            ForwardGears                                                   => _offForwardGears.GetValue();
	public TArray<FVehicleGearData>                            BackwardGears                                                  => _offBackwardGears.GetValue();
	public float                                               ReverseGearRatio                                               => _offReverseGearRatio.GetValue();
	public float                                               NeutralGearUpRatio                                             => _offNeutralGearUpRatio.GetValue();
	public float                                               NeutralGearDownRatio                                           => _offNeutralGearDownRatio.GetValue();
	public float                                               ClutchStrength                                                 => _offClutchStrength.GetValue();
	#endregion

	public FVehicleTransmissionData(byte/*(bool)*/ c_bUseGearAutoBox, float c_GearSwitchTime, float c_GearAutoBoxLatency, float c_FinalRatio, TArray<FVehicleGearData> c_ForwardGears, TArray<FVehicleGearData> c_BackwardGears, float c_ReverseGearRatio, float c_NeutralGearUpRatio, float c_NeutralGearDownRatio, float c_ClutchStrength) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbUseGearAutoBox.SetValue(c_bUseGearAutoBox);
		_offGearSwitchTime.SetValue(c_GearSwitchTime);
		_offGearAutoBoxLatency.SetValue(c_GearAutoBoxLatency);
		_offFinalRatio.SetValue(c_FinalRatio);
		_offForwardGears.SetValue(c_ForwardGears);
		_offBackwardGears.SetValue(c_BackwardGears);
		_offReverseGearRatio.SetValue(c_ReverseGearRatio);
		_offNeutralGearUpRatio.SetValue(c_NeutralGearUpRatio);
		_offNeutralGearDownRatio.SetValue(c_NeutralGearDownRatio);
		_offClutchStrength.SetValue(c_ClutchStrength);
	}
}
// ScriptStruct PhysXVehicles.TireConfigMaterialFriction
// 0x0010
public class FTireConfigMaterialFriction : ExternalClass
{
	#region Offsets
	private ExternalOffset<UPhysicalMaterial>                  _offPhysicalMaterial                                           = new ExternalOffset<UPhysicalMaterial>(0x0000, true);         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offFrictionScale                                              = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UPhysicalMaterial                                   PhysicalMaterial                                               => _offPhysicalMaterial.GetValue();
	public float                                               FrictionScale                                                  => _offFrictionScale.GetValue();
	#endregion

	public FTireConfigMaterialFriction(UPhysicalMaterial c_PhysicalMaterial, float c_FrictionScale) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPhysicalMaterial.SetValue(c_PhysicalMaterial);
		_offFrictionScale.SetValue(c_FrictionScale);
	}
}
// ScriptStruct PhysXVehicles.AnimNode_WheelHandler
// 0x0018 (0x00E0 - 0x00C8)
public class FAnimNode_WheelHandler : FAnimNode_SkeletalControlBase
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FAnimNode_WheelHandler() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct PhysXVehicles.VehicleAnimInstanceProxy
// 0x0010 (0x06E0 - 0x06D0)
public class FVehicleAnimInstanceProxy : FAnimInstanceProxy
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FVehicleAnimInstanceProxy() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}

}