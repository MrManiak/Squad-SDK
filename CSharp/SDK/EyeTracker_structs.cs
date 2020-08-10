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

// Enum EyeTracker.EEyeTrackerStatus
public enum EEyeTrackerStatus : byte
{
	EEyeTrackerStatus__NotConnected = 0,
	EEyeTrackerStatus__NotTracking = 1,
	EEyeTrackerStatus__Tracking    = 2,
	EEyeTrackerStatus__EEyeTrackerStatus_MAX = 3
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EyeTracker.EyeTrackerGazeData
// 0x0028
public class FEyeTrackerGazeData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offGazeOrigin                                                 = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offGazeDirection                                              = new ExternalOffset<FVector>(0x000C, false);                  // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offFixationPoint                                              = new ExternalOffset<FVector>(0x0018, false);                  // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offConfidenceValue                                            = new ExternalOffset<float>(0x0024);                           // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             GazeOrigin                                                     => _offGazeOrigin.GetValue();
	public FVector                                             GazeDirection                                                  => _offGazeDirection.GetValue();
	public FVector                                             FixationPoint                                                  => _offFixationPoint.GetValue();
	public float                                               ConfidenceValue                                                => _offConfidenceValue.GetValue();
	#endregion

	public FEyeTrackerGazeData(FVector c_GazeOrigin, FVector c_GazeDirection, FVector c_FixationPoint, float c_ConfidenceValue) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offGazeOrigin.SetValue(c_GazeOrigin);
		_offGazeDirection.SetValue(c_GazeDirection);
		_offFixationPoint.SetValue(c_FixationPoint);
		_offConfidenceValue.SetValue(c_ConfidenceValue);
	}
}
// ScriptStruct EyeTracker.EyeTrackerStereoGazeData
// 0x0040
public class FEyeTrackerStereoGazeData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offLeftEyeOrigin                                              = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offLeftEyeDirection                                           = new ExternalOffset<FVector>(0x000C, false);                  // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offRightEyeOrigin                                             = new ExternalOffset<FVector>(0x0018, false);                  // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offRightEyeDirection                                          = new ExternalOffset<FVector>(0x0024, false);                  // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offFixationPoint                                              = new ExternalOffset<FVector>(0x0030, false);                  // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offConfidenceValue                                            = new ExternalOffset<float>(0x003C);                           // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             LeftEyeOrigin                                                  => _offLeftEyeOrigin.GetValue();
	public FVector                                             LeftEyeDirection                                               => _offLeftEyeDirection.GetValue();
	public FVector                                             RightEyeOrigin                                                 => _offRightEyeOrigin.GetValue();
	public FVector                                             RightEyeDirection                                              => _offRightEyeDirection.GetValue();
	public FVector                                             FixationPoint                                                  => _offFixationPoint.GetValue();
	public float                                               ConfidenceValue                                                => _offConfidenceValue.GetValue();
	#endregion

	public FEyeTrackerStereoGazeData(FVector c_LeftEyeOrigin, FVector c_LeftEyeDirection, FVector c_RightEyeOrigin, FVector c_RightEyeDirection, FVector c_FixationPoint, float c_ConfidenceValue) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLeftEyeOrigin.SetValue(c_LeftEyeOrigin);
		_offLeftEyeDirection.SetValue(c_LeftEyeDirection);
		_offRightEyeOrigin.SetValue(c_RightEyeOrigin);
		_offRightEyeDirection.SetValue(c_RightEyeDirection);
		_offFixationPoint.SetValue(c_FixationPoint);
		_offConfidenceValue.SetValue(c_ConfidenceValue);
	}
}

}