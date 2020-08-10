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

// Enum HeadMountedDisplay.EXRTrackedDeviceType
public enum EXRTrackedDeviceType : byte
{
	EXRTrackedDeviceType__HeadMountedDisplay = 0,
	EXRTrackedDeviceType__Controller = 1,
	EXRTrackedDeviceType__TrackingReference = 2,
	EXRTrackedDeviceType__Other    = 3,
	EXRTrackedDeviceType__Invalid  = 4,
	EXRTrackedDeviceType__Any      = 5,
	EXRTrackedDeviceType__EXRTrackedDeviceType_MAX = 6
}

// Enum HeadMountedDisplay.ESpectatorScreenMode
public enum ESpectatorScreenMode : byte
{
	ESpectatorScreenMode__Disabled = 0,
	ESpectatorScreenMode__SingleEyeLetterboxed = 1,
	ESpectatorScreenMode__Undistorted = 2,
	ESpectatorScreenMode__Distorted = 3,
	ESpectatorScreenMode__SingleEye = 4,
	ESpectatorScreenMode__SingleEyeCroppedToFill = 5,
	ESpectatorScreenMode__Texture  = 6,
	ESpectatorScreenMode__TexturePlusEye = 7,
	ESpectatorScreenMode__ESpectatorScreenMode_MAX = 8
}

// Enum HeadMountedDisplay.EHMDWornState
public enum EHMDWornState : byte
{
	EHMDWornState__Unknown         = 0,
	EHMDWornState__Worn            = 1,
	EHMDWornState__NotWorn         = 2,
	EHMDWornState__EHMDWornState_MAX = 3
}

// Enum HeadMountedDisplay.EHMDTrackingOrigin
public enum EHMDTrackingOrigin : byte
{
	EHMDTrackingOrigin__Floor      = 0,
	EHMDTrackingOrigin__Eye        = 1,
	EHMDTrackingOrigin__Stage      = 2,
	EHMDTrackingOrigin__EHMDTrackingOrigin_MAX = 3
}

// Enum HeadMountedDisplay.EOrientPositionSelector
public enum EOrientPositionSelector : byte
{
	EOrientPositionSelector__Orientation = 0,
	EOrientPositionSelector__Position = 1,
	EOrientPositionSelector__OrientationAndPosition = 2,
	EOrientPositionSelector__EOrientPositionSelector_MAX = 3
}

// Enum HeadMountedDisplay.ETrackingStatus
public enum ETrackingStatus : byte
{
	ETrackingStatus__NotTracked    = 0,
	ETrackingStatus__InertialOnly  = 1,
	ETrackingStatus__Tracked       = 2,
	ETrackingStatus__ETrackingStatus_MAX = 3
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct HeadMountedDisplay.XRDeviceId
// 0x000C
public class FXRDeviceId : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offSystemName                                                 = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offDeviceID                                                   = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               SystemName                                                     => _offSystemName.GetValue();
	public int                                                 DeviceID                                                       => _offDeviceID.GetValue();
	#endregion

	public FXRDeviceId(FName c_SystemName, int c_DeviceID) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSystemName.SetValue(c_SystemName);
		_offDeviceID.SetValue(c_DeviceID);
	}
}

}