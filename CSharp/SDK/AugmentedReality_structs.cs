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

// Enum AugmentedReality.EARTrackingState
public enum EARTrackingState : byte
{
	EARTrackingState__Unknown      = 0,
	EARTrackingState__Tracking     = 1,
	EARTrackingState__NotTracking  = 2,
	EARTrackingState__StoppedTracking = 3,
	EARTrackingState__EARTrackingState_MAX = 4
}

// Enum AugmentedReality.EARSessionTrackingFeature
public enum EARSessionTrackingFeature : byte
{
	EARSessionTrackingFeature__None = 0,
	EARSessionTrackingFeature__PoseDetection2D = 1,
	EARSessionTrackingFeature__PersonSegmentation = 2,
	EARSessionTrackingFeature__PersonSegmentationWithDepth = 3,
	EARSessionTrackingFeature__EARSessionTrackingFeature_MAX = 4
}

// Enum AugmentedReality.EARFaceTrackingUpdate
public enum EARFaceTrackingUpdate : byte
{
	EARFaceTrackingUpdate__CurvesAndGeo = 0,
	EARFaceTrackingUpdate__CurvesOnly = 1,
	EARFaceTrackingUpdate__EARFaceTrackingUpdate_MAX = 2
}

// Enum AugmentedReality.EAREnvironmentCaptureProbeType
public enum EAREnvironmentCaptureProbeType : byte
{
	EAREnvironmentCaptureProbeType__None = 0,
	EAREnvironmentCaptureProbeType__Manual = 1,
	EAREnvironmentCaptureProbeType__Automatic = 2,
	EAREnvironmentCaptureProbeType__EAREnvironmentCaptureProbeType_MAX = 3
}

// Enum AugmentedReality.EARFrameSyncMode
public enum EARFrameSyncMode : byte
{
	EARFrameSyncMode__SyncTickWithCameraImage = 0,
	EARFrameSyncMode__SyncTickWithoutCameraImage = 1,
	EARFrameSyncMode__EARFrameSyncMode_MAX = 2
}

// Enum AugmentedReality.EARLightEstimationMode
public enum EARLightEstimationMode : byte
{
	EARLightEstimationMode__None   = 0,
	EARLightEstimationMode__AmbientLightEstimate = 1,
	EARLightEstimationMode__DirectionalLightEstimate = 2,
	EARLightEstimationMode__EARLightEstimationMode_MAX = 3
}

// Enum AugmentedReality.EARPlaneDetectionMode
public enum EARPlaneDetectionMode : byte
{
	EARPlaneDetectionMode__None    = 0,
	EARPlaneDetectionMode__HorizontalPlaneDetection = 1,
	EARPlaneDetectionMode__VerticalPlaneDetection = 2,
	EARPlaneDetectionMode__EARPlaneDetectionMode_MAX = 3
}

// Enum AugmentedReality.EARSessionType
public enum EARSessionType : byte
{
	EARSessionType__None           = 0,
	EARSessionType__Orientation    = 1,
	EARSessionType__World          = 2,
	EARSessionType__Face           = 3,
	EARSessionType__Image          = 4,
	EARSessionType__ObjectScanning = 5,
	EARSessionType__PoseTracking   = 6,
	EARSessionType__EARSessionType_MAX = 7
}

// Enum AugmentedReality.EARWorldAlignment
public enum EARWorldAlignment : byte
{
	EARWorldAlignment__Gravity     = 0,
	EARWorldAlignment__GravityAndHeading = 1,
	EARWorldAlignment__Camera      = 2,
	EARWorldAlignment__EARWorldAlignment_MAX = 3
}

// Enum AugmentedReality.EARDepthAccuracy
public enum EARDepthAccuracy : byte
{
	EARDepthAccuracy__Unkown       = 0,
	EARDepthAccuracy__Approximate  = 1,
	EARDepthAccuracy__Accurate     = 2,
	EARDepthAccuracy__EARDepthAccuracy_MAX = 3
}

// Enum AugmentedReality.EARDepthQuality
public enum EARDepthQuality : byte
{
	EARDepthQuality__Unkown        = 0,
	EARDepthQuality__Low           = 1,
	EARDepthQuality__High          = 2,
	EARDepthQuality__EARDepthQuality_MAX = 3
}

// Enum AugmentedReality.EARTextureType
public enum EARTextureType : byte
{
	EARTextureType__CameraImage    = 0,
	EARTextureType__CameraDepth    = 1,
	EARTextureType__EnvironmentCapture = 2,
	EARTextureType__EARTextureType_MAX = 3
}

// Enum AugmentedReality.EAREye
public enum EAREye : byte
{
	EAREye__LeftEye                = 0,
	EAREye__RightEye               = 1,
	EAREye__EAREye_MAX             = 2
}

// Enum AugmentedReality.EARFaceBlendShape
public enum EARFaceBlendShape : byte
{
	EARFaceBlendShape__EyeBlinkLeft = 0,
	EARFaceBlendShape__EyeLookDownLeft = 1,
	EARFaceBlendShape__EyeLookInLeft = 2,
	EARFaceBlendShape__EyeLookOutLeft = 3,
	EARFaceBlendShape__EyeLookUpLeft = 4,
	EARFaceBlendShape__EyeSquintLeft = 5,
	EARFaceBlendShape__EyeWideLeft = 6,
	EARFaceBlendShape__EyeBlinkRight = 7,
	EARFaceBlendShape__EyeLookDownRight = 8,
	EARFaceBlendShape__EyeLookInRight = 9,
	EARFaceBlendShape__EyeLookOutRight = 10,
	EARFaceBlendShape__EyeLookUpRight = 11,
	EARFaceBlendShape__EyeSquintRight = 12,
	EARFaceBlendShape__EyeWideRight = 13,
	EARFaceBlendShape__JawForward  = 14,
	EARFaceBlendShape__JawLeft     = 15,
	EARFaceBlendShape__JawRight    = 16,
	EARFaceBlendShape__JawOpen     = 17,
	EARFaceBlendShape__MouthClose  = 18,
	EARFaceBlendShape__MouthFunnel = 19,
	EARFaceBlendShape__MouthPucker = 20,
	EARFaceBlendShape__MouthLeft   = 21,
	EARFaceBlendShape__MouthRight  = 22,
	EARFaceBlendShape__MouthSmileLeft = 23,
	EARFaceBlendShape__MouthSmileRight = 24,
	EARFaceBlendShape__MouthFrownLeft = 25,
	EARFaceBlendShape__MouthFrownRight = 26,
	EARFaceBlendShape__MouthDimpleLeft = 27,
	EARFaceBlendShape__MouthDimpleRight = 28,
	EARFaceBlendShape__MouthStretchLeft = 29,
	EARFaceBlendShape__MouthStretchRight = 30,
	EARFaceBlendShape__MouthRollLower = 31,
	EARFaceBlendShape__MouthRollUpper = 32,
	EARFaceBlendShape__MouthShrugLower = 33,
	EARFaceBlendShape__MouthShrugUpper = 34,
	EARFaceBlendShape__MouthPressLeft = 35,
	EARFaceBlendShape__MouthPressRight = 36,
	EARFaceBlendShape__MouthLowerDownLeft = 37,
	EARFaceBlendShape__MouthLowerDownRight = 38,
	EARFaceBlendShape__MouthUpperUpLeft = 39,
	EARFaceBlendShape__MouthUpperUpRight = 40,
	EARFaceBlendShape__BrowDownLeft = 41,
	EARFaceBlendShape__BrowDownRight = 42,
	EARFaceBlendShape__BrowInnerUp = 43,
	EARFaceBlendShape__BrowOuterUpLeft = 44,
	EARFaceBlendShape__BrowOuterUpRight = 45,
	EARFaceBlendShape__CheekPuff   = 46,
	EARFaceBlendShape__CheekSquintLeft = 47,
	EARFaceBlendShape__CheekSquintRight = 48,
	EARFaceBlendShape__NoseSneerLeft = 49,
	EARFaceBlendShape__NoseSneerRight = 50,
	EARFaceBlendShape__TongueOut   = 51,
	EARFaceBlendShape__HeadYaw     = 52,
	EARFaceBlendShape__HeadPitch   = 53,
	EARFaceBlendShape__HeadRoll    = 54,
	EARFaceBlendShape__LeftEyeYaw  = 55,
	EARFaceBlendShape__LeftEyePitch = 56,
	EARFaceBlendShape__LeftEyeRoll = 57,
	EARFaceBlendShape__RightEyeYaw = 58,
	EARFaceBlendShape__RightEyePitch = 59,
	EARFaceBlendShape__RightEyeRoll = 60,
	EARFaceBlendShape__MAX         = 61
}

// Enum AugmentedReality.EARFaceTrackingDirection
public enum EARFaceTrackingDirection : byte
{
	EARFaceTrackingDirection__FaceRelative = 0,
	EARFaceTrackingDirection__FaceMirrored = 1,
	EARFaceTrackingDirection__EARFaceTrackingDirection_MAX = 2
}

// Enum AugmentedReality.EARCandidateImageOrientation
public enum EARCandidateImageOrientation : byte
{
	EARCandidateImageOrientation__Landscape = 0,
	EARCandidateImageOrientation__Portrait = 1,
	EARCandidateImageOrientation__EARCandidateImageOrientation_MAX = 2
}

// Enum AugmentedReality.EARJointTransformSpace
public enum EARJointTransformSpace : byte
{
	EARJointTransformSpace__Model  = 0,
	EARJointTransformSpace__ParentJoint = 1,
	EARJointTransformSpace__EARJointTransformSpace_MAX = 2
}

// Enum AugmentedReality.EARObjectClassification
public enum EARObjectClassification : byte
{
	EARObjectClassification__NotApplicable = 0,
	EARObjectClassification__Unknown = 1,
	EARObjectClassification__Wall  = 2,
	EARObjectClassification__Ceiling = 3,
	EARObjectClassification__Floor = 4,
	EARObjectClassification__Table = 5,
	EARObjectClassification__Seat  = 6,
	EARObjectClassification__Face  = 7,
	EARObjectClassification__Image = 8,
	EARObjectClassification__World = 9,
	EARObjectClassification__SceneObject = 10,
	EARObjectClassification__EARObjectClassification_MAX = 11
}

// Enum AugmentedReality.EARPlaneOrientation
public enum EARPlaneOrientation : byte
{
	EARPlaneOrientation__Horizontal = 0,
	EARPlaneOrientation__Vertical  = 1,
	EARPlaneOrientation__Diagonal  = 2,
	EARPlaneOrientation__EARPlaneOrientation_MAX = 3
}

// Enum AugmentedReality.EARWorldMappingState
public enum EARWorldMappingState : byte
{
	EARWorldMappingState__NotAvailable = 0,
	EARWorldMappingState__StillMappingNotRelocalizable = 1,
	EARWorldMappingState__StillMappingRelocalizable = 2,
	EARWorldMappingState__Mapped   = 3,
	EARWorldMappingState__EARWorldMappingState_MAX = 4
}

// Enum AugmentedReality.EARSessionStatus
public enum EARSessionStatus : byte
{
	EARSessionStatus__NotStarted   = 0,
	EARSessionStatus__Running      = 1,
	EARSessionStatus__NotSupported = 2,
	EARSessionStatus__FatalError   = 3,
	EARSessionStatus__PermissionNotGranted = 4,
	EARSessionStatus__UnsupportedConfiguration = 5,
	EARSessionStatus__Other        = 6,
	EARSessionStatus__EARSessionStatus_MAX = 7
}

// Enum AugmentedReality.EARTrackingQualityReason
public enum EARTrackingQualityReason : byte
{
	EARTrackingQualityReason__None = 0,
	EARTrackingQualityReason__Initializing = 1,
	EARTrackingQualityReason__Relocalizing = 2,
	EARTrackingQualityReason__ExcessiveMotion = 3,
	EARTrackingQualityReason__InsufficientFeatures = 4,
	EARTrackingQualityReason__EARTrackingQualityReason_MAX = 5
}

// Enum AugmentedReality.EARTrackingQuality
public enum EARTrackingQuality : byte
{
	EARTrackingQuality__NotTracking = 0,
	EARTrackingQuality__OrientationOnly = 1,
	EARTrackingQuality__OrientationAndPosition = 2,
	EARTrackingQuality__EARTrackingQuality_MAX = 3
}

// Enum AugmentedReality.EARLineTraceChannels
public enum EARLineTraceChannels : byte
{
	EARLineTraceChannels__None     = 0,
	EARLineTraceChannels__FeaturePoint = 1,
	EARLineTraceChannels__GroundPlane = 2,
	EARLineTraceChannels__PlaneUsingExtent = 3,
	EARLineTraceChannels__PlaneUsingBoundaryPolygon = 4,
	EARLineTraceChannels__EARLineTraceChannels_MAX = 5
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AugmentedReality.ARTraceResult
// 0x0060
public class FARTraceResult : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offDistanceFromCamera                                         = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<EARLineTraceChannels>               _offTraceChannel                                               = new ExternalOffset<EARLineTraceChannels>(0x0004, false);     // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FTransform>                         _offLocalToTrackingTransform                                   = new ExternalOffset<FTransform>(0x0010, false);               // 0x0010(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<UARTrackedGeometry>                 _offTrackedGeometry                                            = new ExternalOffset<UARTrackedGeometry>(0x0040, true);        // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public float                                               DistanceFromCamera                                             => _offDistanceFromCamera.GetValue();
	public EARLineTraceChannels                                TraceChannel                                                   => _offTraceChannel.GetValue();
	public FTransform                                          LocalToTrackingTransform                                       => _offLocalToTrackingTransform.GetValue();
	public UARTrackedGeometry                                  TrackedGeometry                                                => _offTrackedGeometry.GetValue();
	#endregion

	public FARTraceResult(float c_DistanceFromCamera, EARLineTraceChannels c_TraceChannel, FTransform c_LocalToTrackingTransform, UARTrackedGeometry c_TrackedGeometry) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDistanceFromCamera.SetValue(c_DistanceFromCamera);
		_offTraceChannel.SetValue(c_TraceChannel);
		_offLocalToTrackingTransform.SetValue(c_LocalToTrackingTransform);
		_offTrackedGeometry.SetValue(c_TrackedGeometry);
	}
}
// ScriptStruct AugmentedReality.ARSkeletonDefinition
// 0x0028
public class FARSkeletonDefinition : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offNumJoints                                                  = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FName>>                      _offJointNames                                                 = new ExternalOffset<TArray<FName>>(0x0008, false);            // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<int>>                        _offParentIndices                                              = new ExternalOffset<TArray<int>>(0x0018, false);              // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 NumJoints                                                      => _offNumJoints.GetValue();
	public TArray<FName>                                       JointNames                                                     => _offJointNames.GetValue();
	public TArray<int>                                         ParentIndices                                                  => _offParentIndices.GetValue();
	#endregion

	public FARSkeletonDefinition(int c_NumJoints, TArray<FName> c_JointNames, TArray<int> c_ParentIndices) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offNumJoints.SetValue(c_NumJoints);
		_offJointNames.SetValue(c_JointNames);
		_offParentIndices.SetValue(c_ParentIndices);
	}
}
// ScriptStruct AugmentedReality.ARPose3D
// 0x0050
public class FARPose3D : ExternalClass
{
	#region Offsets
	private ExternalOffset<FARSkeletonDefinition>              _offSkeletonDefinition                                         = new ExternalOffset<FARSkeletonDefinition>(0x0000, false);    // 0x0000(0x0028) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FTransform>>                 _offJointTransforms                                            = new ExternalOffset<TArray<FTransform>>(0x0028, false);       // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<bool>>                       _offIsJointTracked                                             = new ExternalOffset<TArray<bool>>(0x0038, false);             // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<EARJointTransformSpace>             _offJointTransformSpace                                        = new ExternalOffset<EARJointTransformSpace>(0x0048, false);   // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FARSkeletonDefinition                               SkeletonDefinition                                             => _offSkeletonDefinition.GetValue();
	public TArray<FTransform>                                  JointTransforms                                                => _offJointTransforms.GetValue();
	public TArray<bool>                                        IsJointTracked                                                 => _offIsJointTracked.GetValue();
	public EARJointTransformSpace                              JointTransformSpace                                            => _offJointTransformSpace.GetValue();
	#endregion

	public FARPose3D(FARSkeletonDefinition c_SkeletonDefinition, TArray<FTransform> c_JointTransforms, TArray<bool> c_IsJointTracked, EARJointTransformSpace c_JointTransformSpace) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSkeletonDefinition.SetValue(c_SkeletonDefinition);
		_offJointTransforms.SetValue(c_JointTransforms);
		_offIsJointTracked.SetValue(c_IsJointTracked);
		_offJointTransformSpace.SetValue(c_JointTransformSpace);
	}
}
// ScriptStruct AugmentedReality.ARVideoFormat
// 0x000C
public class FARVideoFormat : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offFPS                                                        = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offWidth                                                      = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offHeight                                                     = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 FPS                                                            => _offFPS.GetValue();
	public int                                                 Width                                                          => _offWidth.GetValue();
	public int                                                 Height                                                         => _offHeight.GetValue();
	#endregion

	public FARVideoFormat(int c_FPS, int c_Width, int c_Height) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFPS.SetValue(c_FPS);
		_offWidth.SetValue(c_Width);
		_offHeight.SetValue(c_Height);
	}
}
// ScriptStruct AugmentedReality.ARPose2D
// 0x0048
public class FARPose2D : ExternalClass
{
	#region Offsets
	private ExternalOffset<FARSkeletonDefinition>              _offSkeletonDefinition                                         = new ExternalOffset<FARSkeletonDefinition>(0x0000, false);    // 0x0000(0x0028) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FVector2D>>                  _offJointLocations                                             = new ExternalOffset<TArray<FVector2D>>(0x0028, false);        // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<bool>>                       _offIsJointTracked                                             = new ExternalOffset<TArray<bool>>(0x0038, false);             // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FARSkeletonDefinition                               SkeletonDefinition                                             => _offSkeletonDefinition.GetValue();
	public TArray<FVector2D>                                   JointLocations                                                 => _offJointLocations.GetValue();
	public TArray<bool>                                        IsJointTracked                                                 => _offIsJointTracked.GetValue();
	#endregion

	public FARPose2D(FARSkeletonDefinition c_SkeletonDefinition, TArray<FVector2D> c_JointLocations, TArray<bool> c_IsJointTracked) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSkeletonDefinition.SetValue(c_SkeletonDefinition);
		_offJointLocations.SetValue(c_JointLocations);
		_offIsJointTracked.SetValue(c_IsJointTracked);
	}
}
// ScriptStruct AugmentedReality.ARSessionStatus
// 0x0018
public class FARSessionStatus : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offAdditionalInfo                                             = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EARSessionStatus>                   _offStatus                                                     = new ExternalOffset<EARSessionStatus>(0x0010, false);         // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             AdditionalInfo                                                 => _offAdditionalInfo.GetValue();
	public EARSessionStatus                                    Status                                                         => _offStatus.GetValue();
	#endregion

	public FARSessionStatus(FString c_AdditionalInfo, EARSessionStatus c_Status) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAdditionalInfo.SetValue(c_AdditionalInfo);
		_offStatus.SetValue(c_Status);
	}
}
// ScriptStruct AugmentedReality.ARSharedWorldReplicationState
// 0x0008
public class FARSharedWorldReplicationState : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offPreviewImageOffset                                         = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offARWorldOffset                                              = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 PreviewImageOffset                                             => _offPreviewImageOffset.GetValue();
	public int                                                 ARWorldOffset                                                  => _offARWorldOffset.GetValue();
	#endregion

	public FARSharedWorldReplicationState(int c_PreviewImageOffset, int c_ARWorldOffset) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPreviewImageOffset.SetValue(c_PreviewImageOffset);
		_offARWorldOffset.SetValue(c_ARWorldOffset);
	}
}

}