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

// Enum AnimGraphRuntime.ESphericalLimitType
public enum ESphericalLimitType : byte
{
	ESphericalLimitType__Inner     = 0,
	ESphericalLimitType__Outer     = 1,
	ESphericalLimitType__ESphericalLimitType_MAX = 2
}

// Enum AnimGraphRuntime.AnimPhysSimSpaceType
public enum EAnimPhysSimSpaceType : byte
{
	AnimPhysSimSpaceType__Component = 0,
	AnimPhysSimSpaceType__Actor    = 1,
	AnimPhysSimSpaceType__World    = 2,
	AnimPhysSimSpaceType__RootRelative = 3,
	AnimPhysSimSpaceType__BoneRelative = 4,
	AnimPhysSimSpaceType__AnimPhysSimSpaceType_MAX = 5
}

// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
public enum EAnimPhysLinearConstraintType : byte
{
	AnimPhysLinearConstraintType__Free = 0,
	AnimPhysLinearConstraintType__Limited = 1,
	AnimPhysLinearConstraintType__AnimPhysLinearConstraintType_MAX = 2
}

// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
public enum EAnimPhysAngularConstraintType : byte
{
	AnimPhysAngularConstraintType__Angular = 0,
	AnimPhysAngularConstraintType__Cone = 1,
	AnimPhysAngularConstraintType__AnimPhysAngularConstraintType_MAX = 2
}

// Enum AnimGraphRuntime.EDrivenDestinationMode
public enum EDrivenDestinationMode : byte
{
	EDrivenDestinationMode__Bone   = 0,
	EDrivenDestinationMode__MorphTarget = 1,
	EDrivenDestinationMode__MaterialParameter = 2,
	EDrivenDestinationMode__EDrivenDestinationMode_MAX = 3
}

// Enum AnimGraphRuntime.EDrivenBoneModificationMode
public enum EDrivenBoneModificationMode : byte
{
	EDrivenBoneModificationMode__AddToInput = 0,
	EDrivenBoneModificationMode__ReplaceComponent = 1,
	EDrivenBoneModificationMode__AddToRefPose = 2,
	EDrivenBoneModificationMode__EDrivenBoneModificationMode_MAX = 3
}

// Enum AnimGraphRuntime.EConstraintOffsetOption
public enum EConstraintOffsetOption : byte
{
	EConstraintOffsetOption__None  = 0,
	EConstraintOffsetOption__Offset_RefPose = 1,
	EConstraintOffsetOption__EConstraintOffsetOption_MAX = 2
}

// Enum AnimGraphRuntime.CopyBoneDeltaMode
public enum ECopyBoneDeltaMode : byte
{
	CopyBoneDeltaMode__Accumulate  = 0,
	CopyBoneDeltaMode__Copy        = 1,
	CopyBoneDeltaMode__CopyBoneDeltaMode_MAX = 2
}

// Enum AnimGraphRuntime.EInterpolationBlend
public enum EInterpolationBlend : byte
{
	EInterpolationBlend__Linear    = 0,
	EInterpolationBlend__Cubic     = 1,
	EInterpolationBlend__Sinusoidal = 2,
	EInterpolationBlend__EaseInOutExponent2 = 3,
	EInterpolationBlend__EaseInOutExponent3 = 4,
	EInterpolationBlend__EaseInOutExponent4 = 5,
	EInterpolationBlend__EaseInOutExponent5 = 6,
	EInterpolationBlend__MAX       = 7
}

// Enum AnimGraphRuntime.EBoneModificationMode
public enum EBoneModificationMode : byte
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3
}

// Enum AnimGraphRuntime.EModifyCurveApplyMode
public enum EModifyCurveApplyMode : byte
{
	EModifyCurveApplyMode__Add     = 0,
	EModifyCurveApplyMode__Scale   = 1,
	EModifyCurveApplyMode__Blend   = 2,
	EModifyCurveApplyMode__WeightedMovingAverage = 3,
	EModifyCurveApplyMode__RemapCurve = 4,
	EModifyCurveApplyMode__EModifyCurveApplyMode_MAX = 5
}

// Enum AnimGraphRuntime.EPoseDriverOutput
public enum EPoseDriverOutput : byte
{
	EPoseDriverOutput__DrivePoses  = 0,
	EPoseDriverOutput__DriveCurves = 1,
	EPoseDriverOutput__EPoseDriverOutput_MAX = 2
}

// Enum AnimGraphRuntime.EPoseDriverSource
public enum EPoseDriverSource : byte
{
	EPoseDriverSource__Rotation    = 0,
	EPoseDriverSource__Translation = 1,
	EPoseDriverSource__EPoseDriverSource_MAX = 2
}

// Enum AnimGraphRuntime.EPoseDriverType
public enum EPoseDriverType : byte
{
	EPoseDriverType__SwingAndTwist = 0,
	EPoseDriverType__SwingOnly     = 1,
	EPoseDriverType__Translation   = 2,
	EPoseDriverType__EPoseDriverType_MAX = 3
}

// Enum AnimGraphRuntime.ESnapshotSourceMode
public enum ESnapshotSourceMode : byte
{
	ESnapshotSourceMode__NamedSnapshot = 0,
	ESnapshotSourceMode__SnapshotPin = 1,
	ESnapshotSourceMode__ESnapshotSourceMode_MAX = 2
}

// Enum AnimGraphRuntime.ERefPoseType
public enum ERefPoseType : byte
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2
}

// Enum AnimGraphRuntime.ESimulationSpace
public enum ESimulationSpace : byte
{
	ESimulationSpace__ComponentSpace = 0,
	ESimulationSpace__WorldSpace   = 1,
	ESimulationSpace__BaseBoneSpace = 2,
	ESimulationSpace__ESimulationSpace_MAX = 3
}

// Enum AnimGraphRuntime.EScaleChainInitialLength
public enum EScaleChainInitialLength : byte
{
	EScaleChainInitialLength__FixedDefaultLengthValue = 0,
	EScaleChainInitialLength__Distance = 1,
	EScaleChainInitialLength__ChainLength = 2,
	EScaleChainInitialLength__EScaleChainInitialLength_MAX = 3
}

// Enum AnimGraphRuntime.ESequenceEvalReinit
public enum ESequenceEvalReinit : byte
{
	ESequenceEvalReinit__NoReset   = 0,
	ESequenceEvalReinit__StartPosition = 1,
	ESequenceEvalReinit__ExplicitTime = 2,
	ESequenceEvalReinit__ESequenceEvalReinit_MAX = 3
}

// Enum AnimGraphRuntime.ESplineBoneAxis
public enum ESplineBoneAxis : byte
{
	ESplineBoneAxis__X             = 0,
	ESplineBoneAxis__Y             = 1,
	ESplineBoneAxis__Z             = 2,
	ESplineBoneAxis__ESplineBoneAxis_MAX = 3
}

// Enum AnimGraphRuntime.ERotationComponent
public enum ERotationComponent : byte
{
	ERotationComponent__EulerX     = 0,
	ERotationComponent__EulerY     = 1,
	ERotationComponent__EulerZ     = 2,
	ERotationComponent__QuaternionAngle = 3,
	ERotationComponent__SwingAngle = 4,
	ERotationComponent__TwistAngle = 5,
	ERotationComponent__ERotationComponent_MAX = 6
}

// Enum AnimGraphRuntime.EEasingFuncType
public enum EEasingFuncType : byte
{
	EEasingFuncType__Linear        = 0,
	EEasingFuncType__Sinusoidal    = 1,
	EEasingFuncType__Cubic         = 2,
	EEasingFuncType__QuadraticInOut = 3,
	EEasingFuncType__CubicInOut    = 4,
	EEasingFuncType__HermiteCubic  = 5,
	EEasingFuncType__QuarticInOut  = 6,
	EEasingFuncType__QuinticInOut  = 7,
	EEasingFuncType__CircularIn    = 8,
	EEasingFuncType__CircularOut   = 9,
	EEasingFuncType__CircularInOut = 10,
	EEasingFuncType__ExpIn         = 11,
	EEasingFuncType__ExpOut        = 12,
	EEasingFuncType__ExpInOut      = 13,
	EEasingFuncType__CustomCurve   = 14,
	EEasingFuncType__EEasingFuncType_MAX = 15
}

// Enum AnimGraphRuntime.ERBFNormalizeMethod
public enum ERBFNormalizeMethod : byte
{
	ERBFNormalizeMethod__OnlyNormalizeAboveOne = 0,
	ERBFNormalizeMethod__AlwaysNormalize = 1,
	ERBFNormalizeMethod__NormalizeWithinMedian = 2,
	ERBFNormalizeMethod__ERBFNormalizeMethod_MAX = 3
}

// Enum AnimGraphRuntime.ERBFDistanceMethod
public enum ERBFDistanceMethod : byte
{
	ERBFDistanceMethod__Euclidean  = 0,
	ERBFDistanceMethod__Quaternion = 1,
	ERBFDistanceMethod__SwingAngle = 2,
	ERBFDistanceMethod__DefaultMethod = 3,
	ERBFDistanceMethod__ERBFDistanceMethod_MAX = 4
}

// Enum AnimGraphRuntime.ERBFFunctionType
public enum ERBFFunctionType : byte
{
	ERBFFunctionType__Gaussian     = 0,
	ERBFFunctionType__Exponential  = 1,
	ERBFFunctionType__Linear       = 2,
	ERBFFunctionType__Cubic        = 3,
	ERBFFunctionType__Quintic      = 4,
	ERBFFunctionType__DefaultFunction = 5,
	ERBFFunctionType__ERBFFunctionType_MAX = 6
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimGraphRuntime.AnimNode_StateResult
// 0x0000 (0x0030 - 0x0030)
public class FAnimNode_StateResult : FAnimNode_Root
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FAnimNode_StateResult() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// 0x0048 (0x0078 - 0x0030)
public class FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase
{
	#region Offsets
	private ExternalOffset<UPoseAsset>                         _offPoseAsset                                                  = new ExternalOffset<UPoseAsset>(0x0030, true);                // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UPoseAsset                                          PoseAsset                                                      => _offPoseAsset.GetValue();
	#endregion

	public FAnimNode_PoseHandler(UPoseAsset c_PoseAsset) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPoseAsset.SetValue(c_PoseAsset);
	}
}
// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// 0x0040
public class FAnimPhysPlanarLimit : ExternalClass
{
	#region Offsets
	private ExternalOffset<FBoneReference>                     _offDrivingBone                                                = new ExternalOffset<FBoneReference>(0x0000, false);           // 0x0000(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FTransform>                         _offPlaneTransform                                             = new ExternalOffset<FTransform>(0x0010, false);               // 0x0010(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FBoneReference                                      DrivingBone                                                    => _offDrivingBone.GetValue();
	public FTransform                                          PlaneTransform                                                 => _offPlaneTransform.GetValue();
	#endregion

	public FAnimPhysPlanarLimit(FBoneReference c_DrivingBone, FTransform c_PlaneTransform) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDrivingBone.SetValue(c_DrivingBone);
		_offPlaneTransform.SetValue(c_PlaneTransform);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// 0x0090 (0x00A0 - 0x0010)
public class FAnimNode_RotateRootBone : FAnimNode_Base
{
	#region Offsets
	private ExternalOffset<FPoseLink>                          _offBasePose                                                   = new ExternalOffset<FPoseLink>(0x0010, false);                // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPitch                                                      = new ExternalOffset<float>(0x0020);                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offYaw                                                        = new ExternalOffset<float>(0x0024);                           // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FInputScaleBiasClamp>               _offPitchScaleBiasClamp                                        = new ExternalOffset<FInputScaleBiasClamp>(0x0028, false);     // 0x0028(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FInputScaleBiasClamp>               _offYawScaleBiasClamp                                          = new ExternalOffset<FInputScaleBiasClamp>(0x0058, false);     // 0x0058(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FRotator>                           _offMeshToComponent                                            = new ExternalOffset<FRotator>(0x0088, false);                 // 0x0088(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPoseLink                                           BasePose                                                       => _offBasePose.GetValue();
	public float                                               Pitch                                                          => _offPitch.GetValue();
	public float                                               Yaw                                                            => _offYaw.GetValue();
	public FInputScaleBiasClamp                                PitchScaleBiasClamp                                            => _offPitchScaleBiasClamp.GetValue();
	public FInputScaleBiasClamp                                YawScaleBiasClamp                                              => _offYawScaleBiasClamp.GetValue();
	public FRotator                                            MeshToComponent                                                => _offMeshToComponent.GetValue();
	#endregion

	public FAnimNode_RotateRootBone(FPoseLink c_BasePose, float c_Pitch, float c_Yaw, FInputScaleBiasClamp c_PitchScaleBiasClamp, FInputScaleBiasClamp c_YawScaleBiasClamp, FRotator c_MeshToComponent) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBasePose.SetValue(c_BasePose);
		_offPitch.SetValue(c_Pitch);
		_offYaw.SetValue(c_Yaw);
		_offPitchScaleBiasClamp.SetValue(c_PitchScaleBiasClamp);
		_offYawScaleBiasClamp.SetValue(c_YawScaleBiasClamp);
		_offMeshToComponent.SetValue(c_MeshToComponent);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// 0x0018 (0x0090 - 0x0078)
public class FAnimNode_PoseByName : FAnimNode_PoseHandler
{
	#region Offsets
	private ExternalOffset<FName>                              _offPoseName                                                   = new ExternalOffset<FName>(0x0078, false);                    // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPoseWeight                                                 = new ExternalOffset<float>(0x0080);                           // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               PoseName                                                       => _offPoseName.GetValue();
	public float                                               PoseWeight                                                     => _offPoseWeight.GetValue();
	#endregion

	public FAnimNode_PoseByName(FName c_PoseName, float c_PoseWeight) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPoseName.SetValue(c_PoseName);
		_offPoseWeight.SetValue(c_PoseWeight);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// 0x0088 (0x0098 - 0x0010)
public class FAnimNode_BlendListBase : FAnimNode_Base
{
	#region Offsets
	private ExternalOffset<TArray<FPoseLink>>                  _offBlendPose                                                  = new ExternalOffset<TArray<FPoseLink>>(0x0010, false);        // 0x0010(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<float>>                      _offBlendTime                                                  = new ExternalOffset<TArray<float>>(0x0020, false);            // 0x0020(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<EAlphaBlendOption>                  _offBlendType                                                  = new ExternalOffset<EAlphaBlendOption>(0x0030, false);        // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbResetChildOnActivation                                    = new ExternalOffset<byte/*(bool)*/>(0x0031);                  // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UCurveFloat>                        _offCustomBlendCurve                                           = new ExternalOffset<UCurveFloat>(0x0038, true);               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UBlendProfile>                      _offBlendProfile                                               = new ExternalOffset<UBlendProfile>(0x0040, true);             // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FPoseLink>                                   BlendPose                                                      => _offBlendPose.GetValue();
	public TArray<float>                                       BlendTime                                                      => _offBlendTime.GetValue();
	public EAlphaBlendOption                                   BlendType                                                      => _offBlendType.GetValue();
	public byte/*(bool)*/                                      bResetChildOnActivation                                        => _offbResetChildOnActivation.GetValue();
	public UCurveFloat                                         CustomBlendCurve                                               => _offCustomBlendCurve.GetValue();
	public UBlendProfile                                       BlendProfile                                                   => _offBlendProfile.GetValue();
	#endregion

	public FAnimNode_BlendListBase(TArray<FPoseLink> c_BlendPose, TArray<float> c_BlendTime, EAlphaBlendOption c_BlendType, byte/*(bool)*/ c_bResetChildOnActivation, UCurveFloat c_CustomBlendCurve, UBlendProfile c_BlendProfile) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBlendPose.SetValue(c_BlendPose);
		_offBlendTime.SetValue(c_BlendTime);
		_offBlendType.SetValue(c_BlendType);
		_offbResetChildOnActivation.SetValue(c_bResetChildOnActivation);
		_offCustomBlendCurve.SetValue(c_CustomBlendCurve);
		_offBlendProfile.SetValue(c_BlendProfile);
	}
}
// ScriptStruct AnimGraphRuntime.RotationLimit
// 0x0018
public class FRotationLimit : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offLimitMin                                                   = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offLimitMax                                                   = new ExternalOffset<FVector>(0x000C, false);                  // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             LimitMin                                                       => _offLimitMin.GetValue();
	public FVector                                             LimitMax                                                       => _offLimitMax.GetValue();
	#endregion

	public FRotationLimit(FVector c_LimitMin, FVector c_LimitMax) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLimitMin.SetValue(c_LimitMin);
		_offLimitMax.SetValue(c_LimitMax);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// 0x00B8 (0x00C8 - 0x0010)
public class FAnimNode_SkeletalControlBase : FAnimNode_Base
{
	#region Offsets
	private ExternalOffset<FComponentSpacePoseLink>            _offComponentPose                                              = new ExternalOffset<FComponentSpacePoseLink>(0x0010, false);  // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offLODThreshold                                               = new ExternalOffset<int>(0x0020);                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offActualAlpha                                                = new ExternalOffset<float>(0x0024);                           // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EAnimAlphaInputType>                _offAlphaInputType                                             = new ExternalOffset<EAnimAlphaInputType>(0x0028, false);      // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbAlphaBoolEnabled                                          = new ExternalOffset<byte/*(bool)*/>(0x0029);                  // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offAlpha                                                      = new ExternalOffset<float>(0x002C);                           // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FInputScaleBias>                    _offAlphaScaleBias                                             = new ExternalOffset<FInputScaleBias>(0x0030, false);          // 0x0030(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FInputAlphaBoolBlend>               _offAlphaBoolBlend                                             = new ExternalOffset<FInputAlphaBoolBlend>(0x0038, false);     // 0x0038(0x0048) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offAlphaCurveName                                             = new ExternalOffset<FName>(0x0080, false);                    // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FInputScaleBiasClamp>               _offAlphaScaleBiasClamp                                        = new ExternalOffset<FInputScaleBiasClamp>(0x0088, false);     // 0x0088(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FComponentSpacePoseLink                             ComponentPose                                                  => _offComponentPose.GetValue();
	public int                                                 LODThreshold                                                   => _offLODThreshold.GetValue();
	public float                                               ActualAlpha                                                    => _offActualAlpha.GetValue();
	public EAnimAlphaInputType                                 AlphaInputType                                                 => _offAlphaInputType.GetValue();
	public byte/*(bool)*/                                      bAlphaBoolEnabled                                              => _offbAlphaBoolEnabled.GetValue();
	public float                                               Alpha                                                          => _offAlpha.GetValue();
	public FInputScaleBias                                     AlphaScaleBias                                                 => _offAlphaScaleBias.GetValue();
	public FInputAlphaBoolBlend                                AlphaBoolBlend                                                 => _offAlphaBoolBlend.GetValue();
	public FName                                               AlphaCurveName                                                 => _offAlphaCurveName.GetValue();
	public FInputScaleBiasClamp                                AlphaScaleBiasClamp                                            => _offAlphaScaleBiasClamp.GetValue();
	#endregion

	public FAnimNode_SkeletalControlBase(FComponentSpacePoseLink c_ComponentPose, int c_LODThreshold, float c_ActualAlpha, EAnimAlphaInputType c_AlphaInputType, byte/*(bool)*/ c_bAlphaBoolEnabled, float c_Alpha, FInputScaleBias c_AlphaScaleBias, FInputAlphaBoolBlend c_AlphaBoolBlend, FName c_AlphaCurveName, FInputScaleBiasClamp c_AlphaScaleBiasClamp) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offComponentPose.SetValue(c_ComponentPose);
		_offLODThreshold.SetValue(c_LODThreshold);
		_offActualAlpha.SetValue(c_ActualAlpha);
		_offAlphaInputType.SetValue(c_AlphaInputType);
		_offbAlphaBoolEnabled.SetValue(c_bAlphaBoolEnabled);
		_offAlpha.SetValue(c_Alpha);
		_offAlphaScaleBias.SetValue(c_AlphaScaleBias);
		_offAlphaBoolBlend.SetValue(c_AlphaBoolBlend);
		_offAlphaCurveName.SetValue(c_AlphaCurveName);
		_offAlphaScaleBiasClamp.SetValue(c_AlphaScaleBiasClamp);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// 0x0028 (0x00F0 - 0x00C8)
public class FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase
{
	#region Offsets
	private ExternalOffset<FBoneReference>                     _offTargetBone                                                 = new ExternalOffset<FBoneReference>(0x00C8, false);           // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneReference>                     _offSourceBone                                                 = new ExternalOffset<FBoneReference>(0x00D8, false);           // 0x00D8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMultiplier                                                 = new ExternalOffset<float>(0x00E8);                           // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EBoneAxis>>             _offRotationAxisToRefer                                        = new ExternalOffset<TEnumAsByte<EBoneAxis>>(0x00EC, false);   // 0x00EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsAdditive                                                = new ExternalOffset<byte/*(bool)*/>(0x00ED);                  // 0x00ED(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FBoneReference                                      TargetBone                                                     => _offTargetBone.GetValue();
	public FBoneReference                                      SourceBone                                                     => _offSourceBone.GetValue();
	public float                                               Multiplier                                                     => _offMultiplier.GetValue();
	public TEnumAsByte<EBoneAxis>                              RotationAxisToRefer                                            => _offRotationAxisToRefer.GetValue();
	public byte/*(bool)*/                                      bIsAdditive                                                    => _offbIsAdditive.GetValue();
	#endregion

	public FAnimNode_RotationMultiplier(FBoneReference c_TargetBone, FBoneReference c_SourceBone, float c_Multiplier, TEnumAsByte<EBoneAxis> c_RotationAxisToRefer, byte/*(bool)*/ c_bIsAdditive) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTargetBone.SetValue(c_TargetBone);
		_offSourceBone.SetValue(c_SourceBone);
		_offMultiplier.SetValue(c_Multiplier);
		_offRotationAxisToRefer.SetValue(c_RotationAxisToRefer);
		_offbIsAdditive.SetValue(c_bIsAdditive);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// 0x0018 (0x00B0 - 0x0098)
public class FAnimNode_BlendListByEnum : FAnimNode_BlendListBase
{
	#region Offsets
	private ExternalOffset<TArray<int>>                        _offEnumToPoseIndex                                            = new ExternalOffset<TArray<int>>(0x0098, false);              // 0x0098(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offActiveEnumValue                                            = new ExternalOffset<char>(0x00A8, false);                     // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<int>                                         EnumToPoseIndex                                                => _offEnumToPoseIndex.GetValue();
	#endregion

	public FAnimNode_BlendListByEnum(TArray<int> c_EnumToPoseIndex) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offEnumToPoseIndex.SetValue(c_EnumToPoseIndex);
	}
}
// ScriptStruct AnimGraphRuntime.PoseDriverTransform
// 0x0018
public class FPoseDriverTransform : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offTargetTranslation                                          = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FRotator>                           _offTargetRotation                                             = new ExternalOffset<FRotator>(0x000C, false);                 // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             TargetTranslation                                              => _offTargetTranslation.GetValue();
	public FRotator                                            TargetRotation                                                 => _offTargetRotation.GetValue();
	#endregion

	public FPoseDriverTransform(FVector c_TargetTranslation, FRotator c_TargetRotation) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTargetTranslation.SetValue(c_TargetTranslation);
		_offTargetRotation.SetValue(c_TargetRotation);
	}
}
// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// 0x0024
public class FAnimPhysSphericalLimit : ExternalClass
{
	#region Offsets
	private ExternalOffset<FBoneReference>                     _offDrivingBone                                                = new ExternalOffset<FBoneReference>(0x0000, false);           // 0x0000(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offSphereLocalOffset                                          = new ExternalOffset<FVector>(0x0010, false);                  // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLimitRadius                                                = new ExternalOffset<float>(0x001C);                           // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESphericalLimitType>                _offLimitType                                                  = new ExternalOffset<ESphericalLimitType>(0x0020, false);      // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FBoneReference                                      DrivingBone                                                    => _offDrivingBone.GetValue();
	public FVector                                             SphereLocalOffset                                              => _offSphereLocalOffset.GetValue();
	public float                                               LimitRadius                                                    => _offLimitRadius.GetValue();
	public ESphericalLimitType                                 LimitType                                                      => _offLimitType.GetValue();
	#endregion

	public FAnimPhysSphericalLimit(FBoneReference c_DrivingBone, FVector c_SphereLocalOffset, float c_LimitRadius, ESphericalLimitType c_LimitType) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDrivingBone.SetValue(c_DrivingBone);
		_offSphereLocalOffset.SetValue(c_SphereLocalOffset);
		_offLimitRadius.SetValue(c_LimitRadius);
		_offLimitType.SetValue(c_LimitType);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// 0x0058 (0x0120 - 0x00C8)
public class FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase
{
	#region Offsets
	private ExternalOffset<FBoneReference>                     _offRightHandFK                                                = new ExternalOffset<FBoneReference>(0x00C8, false);           // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneReference>                     _offLeftHandFK                                                 = new ExternalOffset<FBoneReference>(0x00D8, false);           // 0x00D8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneReference>                     _offRightHandIK                                                = new ExternalOffset<FBoneReference>(0x00E8, false);           // 0x00E8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneReference>                     _offLeftHandIK                                                 = new ExternalOffset<FBoneReference>(0x00F8, false);           // 0x00F8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FBoneReference>>             _offIKBonesToMove                                              = new ExternalOffset<TArray<FBoneReference>>(0x0108, false);   // 0x0108(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offHandFKWeight                                               = new ExternalOffset<float>(0x0118);                           // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FBoneReference                                      RightHandFK                                                    => _offRightHandFK.GetValue();
	public FBoneReference                                      LeftHandFK                                                     => _offLeftHandFK.GetValue();
	public FBoneReference                                      RightHandIK                                                    => _offRightHandIK.GetValue();
	public FBoneReference                                      LeftHandIK                                                     => _offLeftHandIK.GetValue();
	public TArray<FBoneReference>                              IKBonesToMove                                                  => _offIKBonesToMove.GetValue();
	public float                                               HandFKWeight                                                   => _offHandFKWeight.GetValue();
	#endregion

	public FAnimNode_HandIKRetargeting(FBoneReference c_RightHandFK, FBoneReference c_LeftHandFK, FBoneReference c_RightHandIK, FBoneReference c_LeftHandIK, TArray<FBoneReference> c_IKBonesToMove, float c_HandFKWeight) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRightHandFK.SetValue(c_RightHandFK);
		_offLeftHandFK.SetValue(c_LeftHandFK);
		_offRightHandIK.SetValue(c_RightHandIK);
		_offLeftHandIK.SetValue(c_LeftHandIK);
		_offIKBonesToMove.SetValue(c_IKBonesToMove);
		_offHandFKWeight.SetValue(c_HandFKWeight);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// 0x00B0 (0x00E0 - 0x0030)
public class FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase
{
	#region Offsets
	private ExternalOffset<float>                              _offX                                                          = new ExternalOffset<float>(0x0030);                           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offY                                                          = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offZ                                                          = new ExternalOffset<float>(0x0038);                           // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPlayRate                                                   = new ExternalOffset<float>(0x003C);                           // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbLoop                                                      = new ExternalOffset<byte/*(bool)*/>(0x0040);                  // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbResetPlayTimeWhenBlendSpaceChanges                        = new ExternalOffset<byte/*(bool)*/>(0x0041);                  // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offStartPosition                                              = new ExternalOffset<float>(0x0044);                           // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UBlendSpaceBase>                    _offBlendSpace                                                 = new ExternalOffset<UBlendSpaceBase>(0x0048, true);           // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UBlendSpaceBase>                    _offPreviousBlendSpace                                         = new ExternalOffset<UBlendSpaceBase>(0x00D8, true);           // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public float                                               X                                                              => _offX.GetValue();
	public float                                               Y                                                              => _offY.GetValue();
	public float                                               Z                                                              => _offZ.GetValue();
	public float                                               PlayRate                                                       => _offPlayRate.GetValue();
	public byte/*(bool)*/                                      bLoop                                                          => _offbLoop.GetValue();
	public byte/*(bool)*/                                      bResetPlayTimeWhenBlendSpaceChanges                            => _offbResetPlayTimeWhenBlendSpaceChanges.GetValue();
	public float                                               StartPosition                                                  => _offStartPosition.GetValue();
	public UBlendSpaceBase                                     BlendSpace                                                     => _offBlendSpace.GetValue();
	public UBlendSpaceBase                                     PreviousBlendSpace                                             => _offPreviousBlendSpace.GetValue();
	#endregion

	public FAnimNode_BlendSpacePlayer(float c_X, float c_Y, float c_Z, float c_PlayRate, byte/*(bool)*/ c_bLoop, byte/*(bool)*/ c_bResetPlayTimeWhenBlendSpaceChanges, float c_StartPosition, UBlendSpaceBase c_BlendSpace, UBlendSpaceBase c_PreviousBlendSpace) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offX.SetValue(c_X);
		_offY.SetValue(c_Y);
		_offZ.SetValue(c_Z);
		_offPlayRate.SetValue(c_PlayRate);
		_offbLoop.SetValue(c_bLoop);
		_offbResetPlayTimeWhenBlendSpaceChanges.SetValue(c_bResetPlayTimeWhenBlendSpaceChanges);
		_offStartPosition.SetValue(c_StartPosition);
		_offBlendSpace.SetValue(c_BlendSpace);
		_offPreviousBlendSpace.SetValue(c_PreviousBlendSpace);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// 0x0008 (0x00A0 - 0x0098)
public class FAnimNode_BlendListByInt : FAnimNode_BlendListBase
{
	#region Offsets
	private ExternalOffset<int>                                _offActiveChildIndex                                           = new ExternalOffset<int>(0x0098);                             // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 ActiveChildIndex                                               => _offActiveChildIndex.GetValue();
	#endregion

	public FAnimNode_BlendListByInt(int c_ActiveChildIndex) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offActiveChildIndex.SetValue(c_ActiveChildIndex);
	}
}
// ScriptStruct AnimGraphRuntime.PositionHistory
// 0x0030
public class FPositionHistory : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FVector>>                    _offPositions                                                  = new ExternalOffset<TArray<FVector>>(0x0000, false);          // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRange                                                      = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FVector>                                     Positions                                                      => _offPositions.GetValue();
	public float                                               Range                                                          => _offRange.GetValue();
	#endregion

	public FPositionHistory(TArray<FVector> c_Positions, float c_Range) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPositions.SetValue(c_Positions);
		_offRange.SetValue(c_Range);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// 0x00A8 (0x0188 - 0x00E0)
public class FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer
{
	#region Offsets
	private ExternalOffset<FPoseLink>                          _offBasePose                                                   = new ExternalOffset<FPoseLink>(0x00E0, false);                // 0x00E0(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offLODThreshold                                               = new ExternalOffset<int>(0x00F0);                             // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offAlpha                                                      = new ExternalOffset<float>(0x00F4);                           // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FInputScaleBias>                    _offAlphaScaleBias                                             = new ExternalOffset<FInputScaleBias>(0x00F8, false);          // 0x00F8(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FInputAlphaBoolBlend>               _offAlphaBoolBlend                                             = new ExternalOffset<FInputAlphaBoolBlend>(0x0100, false);     // 0x0100(0x0048) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offAlphaCurveName                                             = new ExternalOffset<FName>(0x0148, false);                    // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FInputScaleBiasClamp>               _offAlphaScaleBiasClamp                                        = new ExternalOffset<FInputScaleBiasClamp>(0x0150, false);     // 0x0150(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<EAnimAlphaInputType>                _offAlphaInputType                                             = new ExternalOffset<EAnimAlphaInputType>(0x0184, false);      // 0x0184(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbAlphaBoolEnabled                                          = new ExternalOffset<byte/*(bool)*/>(0x0185);                  // 0x0185(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPoseLink                                           BasePose                                                       => _offBasePose.GetValue();
	public int                                                 LODThreshold                                                   => _offLODThreshold.GetValue();
	public float                                               Alpha                                                          => _offAlpha.GetValue();
	public FInputScaleBias                                     AlphaScaleBias                                                 => _offAlphaScaleBias.GetValue();
	public FInputAlphaBoolBlend                                AlphaBoolBlend                                                 => _offAlphaBoolBlend.GetValue();
	public FName                                               AlphaCurveName                                                 => _offAlphaCurveName.GetValue();
	public FInputScaleBiasClamp                                AlphaScaleBiasClamp                                            => _offAlphaScaleBiasClamp.GetValue();
	public EAnimAlphaInputType                                 AlphaInputType                                                 => _offAlphaInputType.GetValue();
	public byte/*(bool)*/                                      bAlphaBoolEnabled                                              => _offbAlphaBoolEnabled.GetValue();
	#endregion

	public FAnimNode_RotationOffsetBlendSpace(FPoseLink c_BasePose, int c_LODThreshold, float c_Alpha, FInputScaleBias c_AlphaScaleBias, FInputAlphaBoolBlend c_AlphaBoolBlend, FName c_AlphaCurveName, FInputScaleBiasClamp c_AlphaScaleBiasClamp, EAnimAlphaInputType c_AlphaInputType, byte/*(bool)*/ c_bAlphaBoolEnabled) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBasePose.SetValue(c_BasePose);
		_offLODThreshold.SetValue(c_LODThreshold);
		_offAlpha.SetValue(c_Alpha);
		_offAlphaScaleBias.SetValue(c_AlphaScaleBias);
		_offAlphaBoolBlend.SetValue(c_AlphaBoolBlend);
		_offAlphaCurveName.SetValue(c_AlphaCurveName);
		_offAlphaScaleBiasClamp.SetValue(c_AlphaScaleBiasClamp);
		_offAlphaInputType.SetValue(c_AlphaInputType);
		_offbAlphaBoolEnabled.SetValue(c_bAlphaBoolEnabled);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// 0x0198 (0x0260 - 0x00C8)
public class FAnimNode_Trail : FAnimNode_SkeletalControlBase
{
	#region Offsets
	private ExternalOffset<FBoneReference>                     _offTrailBone                                                  = new ExternalOffset<FBoneReference>(0x0100, false);           // 0x0100(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offChainLength                                                = new ExternalOffset<int>(0x0110);                             // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EAxis>>                 _offChainBoneAxis                                              = new ExternalOffset<TEnumAsByte<EAxis>>(0x0114, false);       // 0x0114(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbInvertChainBoneAxis                                       = new ExternalOffset<char>(0x0115, false);                     // 0x0115(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbLimitStretch                                              = new ExternalOffset<char>(0x0115, false);                     // 0x0115(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbLimitRotation                                             = new ExternalOffset<char>(0x0115, false);                     // 0x0115(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbUsePlanarLimit                                            = new ExternalOffset<char>(0x0115, false);                     // 0x0115(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbActorSpaceFakeVel                                         = new ExternalOffset<char>(0x0115, false);                     // 0x0115(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbReorientParentToChild                                     = new ExternalOffset<char>(0x0115, false);                     // 0x0115(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMaxDeltaTime                                               = new ExternalOffset<float>(0x0118);                           // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRelaxationSpeedScale                                       = new ExternalOffset<float>(0x011C);                           // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FRuntimeFloatCurve>                 _offTrailRelaxationSpeed                                       = new ExternalOffset<FRuntimeFloatCurve>(0x0120, false);       // 0x0120(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FInputScaleBiasClamp>               _offRelaxationSpeedScaleInputProcessor                         = new ExternalOffset<FInputScaleBiasClamp>(0x01A8, false);     // 0x01A8(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FRotationLimit>>             _offRotationLimits                                             = new ExternalOffset<TArray<FRotationLimit>>(0x01D8, false);   // 0x01D8(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FVector>>                    _offRotationOffsets                                            = new ExternalOffset<TArray<FVector>>(0x01E8, false);          // 0x01E8(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FAnimPhysPlanarLimit>>       _offPlanarLimits                                               = new ExternalOffset<TArray<FAnimPhysPlanarLimit>>(0x01F8, false); // 0x01F8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offStretchLimit                                               = new ExternalOffset<float>(0x0208);                           // 0x0208(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offFakeVelocity                                               = new ExternalOffset<FVector>(0x020C, false);                  // 0x020C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneReference>                     _offBaseJoint                                                  = new ExternalOffset<FBoneReference>(0x0218, false);           // 0x0218(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLastBoneRotationAnimAlphaBlend                             = new ExternalOffset<float>(0x0228);                           // 0x0228(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FBoneReference                                      TrailBone                                                      => _offTrailBone.GetValue();
	public int                                                 ChainLength                                                    => _offChainLength.GetValue();
	public TEnumAsByte<EAxis>                                  ChainBoneAxis                                                  => _offChainBoneAxis.GetValue();
	public float                                               MaxDeltaTime                                                   => _offMaxDeltaTime.GetValue();
	public float                                               RelaxationSpeedScale                                           => _offRelaxationSpeedScale.GetValue();
	public FRuntimeFloatCurve                                  TrailRelaxationSpeed                                           => _offTrailRelaxationSpeed.GetValue();
	public FInputScaleBiasClamp                                RelaxationSpeedScaleInputProcessor                             => _offRelaxationSpeedScaleInputProcessor.GetValue();
	public TArray<FRotationLimit>                              RotationLimits                                                 => _offRotationLimits.GetValue();
	public TArray<FVector>                                     RotationOffsets                                                => _offRotationOffsets.GetValue();
	public TArray<FAnimPhysPlanarLimit>                        PlanarLimits                                                   => _offPlanarLimits.GetValue();
	public float                                               StretchLimit                                                   => _offStretchLimit.GetValue();
	public FVector                                             FakeVelocity                                                   => _offFakeVelocity.GetValue();
	public FBoneReference                                      BaseJoint                                                      => _offBaseJoint.GetValue();
	public float                                               LastBoneRotationAnimAlphaBlend                                 => _offLastBoneRotationAnimAlphaBlend.GetValue();
	#endregion

	public FAnimNode_Trail(FBoneReference c_TrailBone, int c_ChainLength, TEnumAsByte<EAxis> c_ChainBoneAxis, float c_MaxDeltaTime, float c_RelaxationSpeedScale, FRuntimeFloatCurve c_TrailRelaxationSpeed, FInputScaleBiasClamp c_RelaxationSpeedScaleInputProcessor, TArray<FRotationLimit> c_RotationLimits, TArray<FVector> c_RotationOffsets, TArray<FAnimPhysPlanarLimit> c_PlanarLimits, float c_StretchLimit, FVector c_FakeVelocity, FBoneReference c_BaseJoint, float c_LastBoneRotationAnimAlphaBlend) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTrailBone.SetValue(c_TrailBone);
		_offChainLength.SetValue(c_ChainLength);
		_offChainBoneAxis.SetValue(c_ChainBoneAxis);
		_offMaxDeltaTime.SetValue(c_MaxDeltaTime);
		_offRelaxationSpeedScale.SetValue(c_RelaxationSpeedScale);
		_offTrailRelaxationSpeed.SetValue(c_TrailRelaxationSpeed);
		_offRelaxationSpeedScaleInputProcessor.SetValue(c_RelaxationSpeedScaleInputProcessor);
		_offRotationLimits.SetValue(c_RotationLimits);
		_offRotationOffsets.SetValue(c_RotationOffsets);
		_offPlanarLimits.SetValue(c_PlanarLimits);
		_offStretchLimit.SetValue(c_StretchLimit);
		_offFakeVelocity.SetValue(c_FakeVelocity);
		_offBaseJoint.SetValue(c_BaseJoint);
		_offLastBoneRotationAnimAlphaBlend.SetValue(c_LastBoneRotationAnimAlphaBlend);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// 0x00B0 (0x00C0 - 0x0010)
public class FAnimNode_LayeredBoneBlend : FAnimNode_Base
{
	#region Offsets
	private ExternalOffset<FPoseLink>                          _offBasePose                                                   = new ExternalOffset<FPoseLink>(0x0010, false);                // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FPoseLink>>                  _offBlendPoses                                                 = new ExternalOffset<TArray<FPoseLink>>(0x0020, false);        // 0x0020(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FInputBlendPose>>            _offLayerSetup                                                 = new ExternalOffset<TArray<FInputBlendPose>>(0x0030, false);  // 0x0030(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<float>>                      _offBlendWeights                                               = new ExternalOffset<TArray<float>>(0x0040, false);            // 0x0040(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbMeshSpaceRotationBlend                                    = new ExternalOffset<byte/*(bool)*/>(0x0050);                  // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbMeshSpaceScaleBlend                                       = new ExternalOffset<byte/*(bool)*/>(0x0051);                  // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ECurveBlendOption>>     _offCurveBlendOption                                           = new ExternalOffset<TEnumAsByte<ECurveBlendOption>>(0x0052, false); // 0x0052(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbBlendRootMotionBasedOnRootBone                            = new ExternalOffset<byte/*(bool)*/>(0x0053);                  // 0x0053(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offLODThreshold                                               = new ExternalOffset<int>(0x0058);                             // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FPerBoneBlendWeight>>        _offPerBoneBlendWeights                                        = new ExternalOffset<TArray<FPerBoneBlendWeight>>(0x0060, false); // 0x0060(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FGuid>                              _offSkeletonGuid                                               = new ExternalOffset<FGuid>(0x0070, false);                    // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FGuid>                              _offVirtualBoneGuid                                            = new ExternalOffset<FGuid>(0x0080, false);                    // 0x0080(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FPoseLink                                           BasePose                                                       => _offBasePose.GetValue();
	public TArray<FPoseLink>                                   BlendPoses                                                     => _offBlendPoses.GetValue();
	public TArray<FInputBlendPose>                             LayerSetup                                                     => _offLayerSetup.GetValue();
	public TArray<float>                                       BlendWeights                                                   => _offBlendWeights.GetValue();
	public byte/*(bool)*/                                      bMeshSpaceRotationBlend                                        => _offbMeshSpaceRotationBlend.GetValue();
	public byte/*(bool)*/                                      bMeshSpaceScaleBlend                                           => _offbMeshSpaceScaleBlend.GetValue();
	public TEnumAsByte<ECurveBlendOption>                      CurveBlendOption                                               => _offCurveBlendOption.GetValue();
	public byte/*(bool)*/                                      bBlendRootMotionBasedOnRootBone                                => _offbBlendRootMotionBasedOnRootBone.GetValue();
	public int                                                 LODThreshold                                                   => _offLODThreshold.GetValue();
	public TArray<FPerBoneBlendWeight>                         PerBoneBlendWeights                                            => _offPerBoneBlendWeights.GetValue();
	public FGuid                                               SkeletonGuid                                                   => _offSkeletonGuid.GetValue();
	public FGuid                                               VirtualBoneGuid                                                => _offVirtualBoneGuid.GetValue();
	#endregion

	public FAnimNode_LayeredBoneBlend(FPoseLink c_BasePose, TArray<FPoseLink> c_BlendPoses, TArray<FInputBlendPose> c_LayerSetup, TArray<float> c_BlendWeights, byte/*(bool)*/ c_bMeshSpaceRotationBlend, byte/*(bool)*/ c_bMeshSpaceScaleBlend, TEnumAsByte<ECurveBlendOption> c_CurveBlendOption, byte/*(bool)*/ c_bBlendRootMotionBasedOnRootBone, int c_LODThreshold, TArray<FPerBoneBlendWeight> c_PerBoneBlendWeights, FGuid c_SkeletonGuid, FGuid c_VirtualBoneGuid) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBasePose.SetValue(c_BasePose);
		_offBlendPoses.SetValue(c_BlendPoses);
		_offLayerSetup.SetValue(c_LayerSetup);
		_offBlendWeights.SetValue(c_BlendWeights);
		_offbMeshSpaceRotationBlend.SetValue(c_bMeshSpaceRotationBlend);
		_offbMeshSpaceScaleBlend.SetValue(c_bMeshSpaceScaleBlend);
		_offCurveBlendOption.SetValue(c_CurveBlendOption);
		_offbBlendRootMotionBasedOnRootBone.SetValue(c_bBlendRootMotionBasedOnRootBone);
		_offLODThreshold.SetValue(c_LODThreshold);
		_offPerBoneBlendWeights.SetValue(c_PerBoneBlendWeights);
		_offSkeletonGuid.SetValue(c_SkeletonGuid);
		_offVirtualBoneGuid.SetValue(c_VirtualBoneGuid);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// 0x0008 (0x00E8 - 0x00E0)
public class FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer
{
	#region Offsets
	private ExternalOffset<float>                              _offNormalizedTime                                             = new ExternalOffset<float>(0x00E0);                           // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               NormalizedTime                                                 => _offNormalizedTime.GetValue();
	#endregion

	public FAnimNode_BlendSpaceEvaluator(float c_NormalizedTime) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offNormalizedTime.SetValue(c_NormalizedTime);
	}
}
// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// 0x002C
public class FAnimLegIKDefinition : ExternalClass
{
	#region Offsets
	private ExternalOffset<FBoneReference>                     _offIKFootBone                                                 = new ExternalOffset<FBoneReference>(0x0000, false);           // 0x0000(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneReference>                     _offFKFootBone                                                 = new ExternalOffset<FBoneReference>(0x0010, false);           // 0x0010(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offNumBonesInLimb                                             = new ExternalOffset<int>(0x0020);                             // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinRotationAngle                                           = new ExternalOffset<float>(0x0024);                           // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EAxis>>                 _offFootBoneForwardAxis                                        = new ExternalOffset<TEnumAsByte<EAxis>>(0x0028, false);       // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EAxis>>                 _offHingeRotationAxis                                          = new ExternalOffset<TEnumAsByte<EAxis>>(0x0029, false);       // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbEnableRotationLimit                                       = new ExternalOffset<byte/*(bool)*/>(0x002A);                  // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbEnableKneeTwistCorrection                                 = new ExternalOffset<byte/*(bool)*/>(0x002B);                  // 0x002B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FBoneReference                                      IKFootBone                                                     => _offIKFootBone.GetValue();
	public FBoneReference                                      FKFootBone                                                     => _offFKFootBone.GetValue();
	public int                                                 NumBonesInLimb                                                 => _offNumBonesInLimb.GetValue();
	public float                                               MinRotationAngle                                               => _offMinRotationAngle.GetValue();
	public TEnumAsByte<EAxis>                                  FootBoneForwardAxis                                            => _offFootBoneForwardAxis.GetValue();
	public TEnumAsByte<EAxis>                                  HingeRotationAxis                                              => _offHingeRotationAxis.GetValue();
	public byte/*(bool)*/                                      bEnableRotationLimit                                           => _offbEnableRotationLimit.GetValue();
	public byte/*(bool)*/                                      bEnableKneeTwistCorrection                                     => _offbEnableKneeTwistCorrection.GetValue();
	#endregion

	public FAnimLegIKDefinition(FBoneReference c_IKFootBone, FBoneReference c_FKFootBone, int c_NumBonesInLimb, float c_MinRotationAngle, TEnumAsByte<EAxis> c_FootBoneForwardAxis, TEnumAsByte<EAxis> c_HingeRotationAxis, byte/*(bool)*/ c_bEnableRotationLimit, byte/*(bool)*/ c_bEnableKneeTwistCorrection) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offIKFootBone.SetValue(c_IKFootBone);
		_offFKFootBone.SetValue(c_FKFootBone);
		_offNumBonesInLimb.SetValue(c_NumBonesInLimb);
		_offMinRotationAngle.SetValue(c_MinRotationAngle);
		_offFootBoneForwardAxis.SetValue(c_FootBoneForwardAxis);
		_offHingeRotationAxis.SetValue(c_HingeRotationAxis);
		_offbEnableRotationLimit.SetValue(c_bEnableRotationLimit);
		_offbEnableKneeTwistCorrection.SetValue(c_bEnableKneeTwistCorrection);
	}
}
// ScriptStruct AnimGraphRuntime.PoseDriverTarget
// 0x00C0
public class FPoseDriverTarget : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FPoseDriverTransform>>       _offBoneTransforms                                             = new ExternalOffset<TArray<FPoseDriverTransform>>(0x0000, false); // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FRotator>                           _offTargetRotation                                             = new ExternalOffset<FRotator>(0x0010, false);                 // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTargetScale                                                = new ExternalOffset<float>(0x001C);                           // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ERBFDistanceMethod>                 _offDistanceMethod                                             = new ExternalOffset<ERBFDistanceMethod>(0x0020, false);       // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ERBFFunctionType>                   _offFunctionType                                               = new ExternalOffset<ERBFFunctionType>(0x0021, false);         // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbApplyCustomCurve                                          = new ExternalOffset<byte/*(bool)*/>(0x0022);                  // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FRichCurve>                         _offCustomCurve                                                = new ExternalOffset<FRichCurve>(0x0028, false);               // 0x0028(0x0080) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offDrivenName                                                 = new ExternalOffset<FName>(0x00A8, false);                    // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsHidden                                                  = new ExternalOffset<byte/*(bool)*/>(0x00B8);                  // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FPoseDriverTransform>                        BoneTransforms                                                 => _offBoneTransforms.GetValue();
	public FRotator                                            TargetRotation                                                 => _offTargetRotation.GetValue();
	public float                                               TargetScale                                                    => _offTargetScale.GetValue();
	public ERBFDistanceMethod                                  DistanceMethod                                                 => _offDistanceMethod.GetValue();
	public ERBFFunctionType                                    FunctionType                                                   => _offFunctionType.GetValue();
	public byte/*(bool)*/                                      bApplyCustomCurve                                              => _offbApplyCustomCurve.GetValue();
	public FRichCurve                                          CustomCurve                                                    => _offCustomCurve.GetValue();
	public FName                                               DrivenName                                                     => _offDrivenName.GetValue();
	public byte/*(bool)*/                                      bIsHidden                                                      => _offbIsHidden.GetValue();
	#endregion

	public FPoseDriverTarget(TArray<FPoseDriverTransform> c_BoneTransforms, FRotator c_TargetRotation, float c_TargetScale, ERBFDistanceMethod c_DistanceMethod, ERBFFunctionType c_FunctionType, byte/*(bool)*/ c_bApplyCustomCurve, FRichCurve c_CustomCurve, FName c_DrivenName, byte/*(bool)*/ c_bIsHidden) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBoneTransforms.SetValue(c_BoneTransforms);
		_offTargetRotation.SetValue(c_TargetRotation);
		_offTargetScale.SetValue(c_TargetScale);
		_offDistanceMethod.SetValue(c_DistanceMethod);
		_offFunctionType.SetValue(c_FunctionType);
		_offbApplyCustomCurve.SetValue(c_bApplyCustomCurve);
		_offCustomCurve.SetValue(c_CustomCurve);
		_offDrivenName.SetValue(c_DrivenName);
		_offbIsHidden.SetValue(c_bIsHidden);
	}
}
// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// 0x0020
public class FReferenceBoneFrame : ExternalClass
{
	#region Offsets
	private ExternalOffset<FBoneReference>                     _offBone                                                       = new ExternalOffset<FBoneReference>(0x0000, false);           // 0x0000(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FAxis>                              _offAxis                                                       = new ExternalOffset<FAxis>(0x0010, false);                    // 0x0010(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FBoneReference                                      Bone                                                           => _offBone.GetValue();
	public FAxis                                               Axis                                                           => _offAxis.GetValue();
	#endregion

	public FReferenceBoneFrame(FBoneReference c_Bone, FAxis c_Axis) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBone.SetValue(c_Bone);
		_offAxis.SetValue(c_Axis);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// 0x0030 (0x00F8 - 0x00C8)
public class FAnimNode_LegIK : FAnimNode_SkeletalControlBase
{
	#region Offsets
	private ExternalOffset<float>                              _offReachPrecision                                             = new ExternalOffset<float>(0x00C8);                           // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMaxIterations                                              = new ExternalOffset<int>(0x00CC);                             // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FAnimLegIKDefinition>>       _offLegsDefinition                                             = new ExternalOffset<TArray<FAnimLegIKDefinition>>(0x00D0, false); // 0x00D0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               ReachPrecision                                                 => _offReachPrecision.GetValue();
	public int                                                 MaxIterations                                                  => _offMaxIterations.GetValue();
	public TArray<FAnimLegIKDefinition>                        LegsDefinition                                                 => _offLegsDefinition.GetValue();
	#endregion

	public FAnimNode_LegIK(float c_ReachPrecision, int c_MaxIterations, TArray<FAnimLegIKDefinition> c_LegsDefinition) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offReachPrecision.SetValue(c_ReachPrecision);
		_offMaxIterations.SetValue(c_MaxIterations);
		_offLegsDefinition.SetValue(c_LegsDefinition);
	}
}
// ScriptStruct AnimGraphRuntime.AnimLegIKData
// 0x00A0
public class FAnimLegIKData : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FAnimLegIKData() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// 0x0068 (0x0078 - 0x0010)
public class FAnimNode_ScaleChainLength : FAnimNode_Base
{
	#region Offsets
	private ExternalOffset<FPoseLink>                          _offInputPose                                                  = new ExternalOffset<FPoseLink>(0x0010, false);                // 0x0010(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDefaultChainLength                                         = new ExternalOffset<float>(0x0020);                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneReference>                     _offChainStartBone                                             = new ExternalOffset<FBoneReference>(0x0024, false);           // 0x0024(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneReference>                     _offChainEndBone                                               = new ExternalOffset<FBoneReference>(0x0034, false);           // 0x0034(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offTargetLocation                                             = new ExternalOffset<FVector>(0x0044, false);                  // 0x0044(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offAlpha                                                      = new ExternalOffset<float>(0x0050);                           // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FInputScaleBias>                    _offAlphaScaleBias                                             = new ExternalOffset<FInputScaleBias>(0x0058, false);          // 0x0058(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<EScaleChainInitialLength>           _offChainInitialLength                                         = new ExternalOffset<EScaleChainInitialLength>(0x0060, false); // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPoseLink                                           InputPose                                                      => _offInputPose.GetValue();
	public float                                               DefaultChainLength                                             => _offDefaultChainLength.GetValue();
	public FBoneReference                                      ChainStartBone                                                 => _offChainStartBone.GetValue();
	public FBoneReference                                      ChainEndBone                                                   => _offChainEndBone.GetValue();
	public FVector                                             TargetLocation                                                 => _offTargetLocation.GetValue();
	public float                                               Alpha                                                          => _offAlpha.GetValue();
	public FInputScaleBias                                     AlphaScaleBias                                                 => _offAlphaScaleBias.GetValue();
	public EScaleChainInitialLength                            ChainInitialLength                                             => _offChainInitialLength.GetValue();
	#endregion

	public FAnimNode_ScaleChainLength(FPoseLink c_InputPose, float c_DefaultChainLength, FBoneReference c_ChainStartBone, FBoneReference c_ChainEndBone, FVector c_TargetLocation, float c_Alpha, FInputScaleBias c_AlphaScaleBias, EScaleChainInitialLength c_ChainInitialLength) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offInputPose.SetValue(c_InputPose);
		_offDefaultChainLength.SetValue(c_DefaultChainLength);
		_offChainStartBone.SetValue(c_ChainStartBone);
		_offChainEndBone.SetValue(c_ChainEndBone);
		_offTargetLocation.SetValue(c_TargetLocation);
		_offAlpha.SetValue(c_Alpha);
		_offAlphaScaleBias.SetValue(c_AlphaScaleBias);
		_offChainInitialLength.SetValue(c_ChainInitialLength);
	}
}
// ScriptStruct AnimGraphRuntime.IKChain
// 0x0038
public class FIKChain : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FIKChain() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// 0x0070 (0x0138 - 0x00C8)
public class FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase
{
	#region Offsets
	private ExternalOffset<FReferenceBoneFrame>                _offBaseFrame                                                  = new ExternalOffset<FReferenceBoneFrame>(0x00C8, false);      // 0x00C8(0x0020) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FReferenceBoneFrame>                _offTwistFrame                                                 = new ExternalOffset<FReferenceBoneFrame>(0x00E8, false);      // 0x00E8(0x0020) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FAxis>                              _offTwistPlaneNormalAxis                                       = new ExternalOffset<FAxis>(0x0108, false);                    // 0x0108(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRangeMax                                                   = new ExternalOffset<float>(0x0118);                           // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRemappedMin                                                = new ExternalOffset<float>(0x011C);                           // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRemappedMax                                                = new ExternalOffset<float>(0x0120);                           // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FAnimCurveParam>                    _offCurve                                                      = new ExternalOffset<FAnimCurveParam>(0x0124, false);          // 0x0124(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FReferenceBoneFrame                                 BaseFrame                                                      => _offBaseFrame.GetValue();
	public FReferenceBoneFrame                                 TwistFrame                                                     => _offTwistFrame.GetValue();
	public FAxis                                               TwistPlaneNormalAxis                                           => _offTwistPlaneNormalAxis.GetValue();
	public float                                               RangeMax                                                       => _offRangeMax.GetValue();
	public float                                               RemappedMin                                                    => _offRemappedMin.GetValue();
	public float                                               RemappedMax                                                    => _offRemappedMax.GetValue();
	public FAnimCurveParam                                     Curve                                                          => _offCurve.GetValue();
	#endregion

	public FAnimNode_TwistCorrectiveNode(FReferenceBoneFrame c_BaseFrame, FReferenceBoneFrame c_TwistFrame, FAxis c_TwistPlaneNormalAxis, float c_RangeMax, float c_RemappedMin, float c_RemappedMax, FAnimCurveParam c_Curve) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBaseFrame.SetValue(c_BaseFrame);
		_offTwistFrame.SetValue(c_TwistFrame);
		_offTwistPlaneNormalAxis.SetValue(c_TwistPlaneNormalAxis);
		_offRangeMax.SetValue(c_RangeMax);
		_offRemappedMin.SetValue(c_RemappedMin);
		_offRemappedMax.SetValue(c_RemappedMax);
		_offCurve.SetValue(c_Curve);
	}
}
// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// 0x0048
public class FAnimPhysConstraintSetup : ExternalClass
{
	#region Offsets
	private ExternalOffset<EAnimPhysLinearConstraintType>      _offLinearXLimitType                                           = new ExternalOffset<EAnimPhysLinearConstraintType>(0x0000, false); // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EAnimPhysLinearConstraintType>      _offLinearYLimitType                                           = new ExternalOffset<EAnimPhysLinearConstraintType>(0x0001, false); // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EAnimPhysLinearConstraintType>      _offLinearZLimitType                                           = new ExternalOffset<EAnimPhysLinearConstraintType>(0x0002, false); // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offLinearAxesMin                                              = new ExternalOffset<FVector>(0x0004, false);                  // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offLinearAxesMax                                              = new ExternalOffset<FVector>(0x0010, false);                  // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EAnimPhysAngularConstraintType>     _offAngularConstraintType                                      = new ExternalOffset<EAnimPhysAngularConstraintType>(0x001C, false); // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EAnimPhysTwistAxis>                 _offTwistAxis                                                  = new ExternalOffset<EAnimPhysTwistAxis>(0x001D, false);       // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EAnimPhysTwistAxis>                 _offAngularTargetAxis                                          = new ExternalOffset<EAnimPhysTwistAxis>(0x001E, false);       // 0x001E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offConeAngle                                                  = new ExternalOffset<float>(0x0020);                           // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offAngularLimitsMin                                           = new ExternalOffset<FVector>(0x0024, false);                  // 0x0024(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offAngularLimitsMax                                           = new ExternalOffset<FVector>(0x0030, false);                  // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offAngularTarget                                              = new ExternalOffset<FVector>(0x003C, false);                  // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public EAnimPhysLinearConstraintType                       LinearXLimitType                                               => _offLinearXLimitType.GetValue();
	public EAnimPhysLinearConstraintType                       LinearYLimitType                                               => _offLinearYLimitType.GetValue();
	public EAnimPhysLinearConstraintType                       LinearZLimitType                                               => _offLinearZLimitType.GetValue();
	public FVector                                             LinearAxesMin                                                  => _offLinearAxesMin.GetValue();
	public FVector                                             LinearAxesMax                                                  => _offLinearAxesMax.GetValue();
	public EAnimPhysAngularConstraintType                      AngularConstraintType                                          => _offAngularConstraintType.GetValue();
	public EAnimPhysTwistAxis                                  TwistAxis                                                      => _offTwistAxis.GetValue();
	public EAnimPhysTwistAxis                                  AngularTargetAxis                                              => _offAngularTargetAxis.GetValue();
	public float                                               ConeAngle                                                      => _offConeAngle.GetValue();
	public FVector                                             AngularLimitsMin                                               => _offAngularLimitsMin.GetValue();
	public FVector                                             AngularLimitsMax                                               => _offAngularLimitsMax.GetValue();
	public FVector                                             AngularTarget                                                  => _offAngularTarget.GetValue();
	#endregion

	public FAnimPhysConstraintSetup(EAnimPhysLinearConstraintType c_LinearXLimitType, EAnimPhysLinearConstraintType c_LinearYLimitType, EAnimPhysLinearConstraintType c_LinearZLimitType, FVector c_LinearAxesMin, FVector c_LinearAxesMax, EAnimPhysAngularConstraintType c_AngularConstraintType, EAnimPhysTwistAxis c_TwistAxis, EAnimPhysTwistAxis c_AngularTargetAxis, float c_ConeAngle, FVector c_AngularLimitsMin, FVector c_AngularLimitsMax, FVector c_AngularTarget) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLinearXLimitType.SetValue(c_LinearXLimitType);
		_offLinearYLimitType.SetValue(c_LinearYLimitType);
		_offLinearZLimitType.SetValue(c_LinearZLimitType);
		_offLinearAxesMin.SetValue(c_LinearAxesMin);
		_offLinearAxesMax.SetValue(c_LinearAxesMax);
		_offAngularConstraintType.SetValue(c_AngularConstraintType);
		_offTwistAxis.SetValue(c_TwistAxis);
		_offAngularTargetAxis.SetValue(c_AngularTargetAxis);
		_offConeAngle.SetValue(c_ConeAngle);
		_offAngularLimitsMin.SetValue(c_AngularLimitsMin);
		_offAngularLimitsMax.SetValue(c_AngularLimitsMax);
		_offAngularTarget.SetValue(c_AngularTarget);
	}
}
// ScriptStruct AnimGraphRuntime.IKChainLink
// 0x003C
public class FIKChainLink : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FIKChainLink() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct AnimGraphRuntime.RBFParams
// 0x0028
public class FRBFParams : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offTargetDimensions                                           = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRadius                                                     = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ERBFFunctionType>                   _offFunction                                                   = new ExternalOffset<ERBFFunctionType>(0x0008, false);         // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ERBFDistanceMethod>                 _offDistanceMethod                                             = new ExternalOffset<ERBFDistanceMethod>(0x0009, false);       // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EBoneAxis>>             _offTwistAxis                                                  = new ExternalOffset<TEnumAsByte<EBoneAxis>>(0x000A, false);   // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offWeightThreshold                                            = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ERBFNormalizeMethod>                _offNormalizeMethod                                            = new ExternalOffset<ERBFNormalizeMethod>(0x0010, false);      // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offMedianReference                                            = new ExternalOffset<FVector>(0x0014, false);                  // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMedianMin                                                  = new ExternalOffset<float>(0x0020);                           // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMedianMax                                                  = new ExternalOffset<float>(0x0024);                           // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 TargetDimensions                                               => _offTargetDimensions.GetValue();
	public float                                               Radius                                                         => _offRadius.GetValue();
	public ERBFFunctionType                                    Function                                                       => _offFunction.GetValue();
	public ERBFDistanceMethod                                  DistanceMethod                                                 => _offDistanceMethod.GetValue();
	public TEnumAsByte<EBoneAxis>                              TwistAxis                                                      => _offTwistAxis.GetValue();
	public float                                               WeightThreshold                                                => _offWeightThreshold.GetValue();
	public ERBFNormalizeMethod                                 NormalizeMethod                                                => _offNormalizeMethod.GetValue();
	public FVector                                             MedianReference                                                => _offMedianReference.GetValue();
	public float                                               MedianMin                                                      => _offMedianMin.GetValue();
	public float                                               MedianMax                                                      => _offMedianMax.GetValue();
	#endregion

	public FRBFParams(int c_TargetDimensions, float c_Radius, ERBFFunctionType c_Function, ERBFDistanceMethod c_DistanceMethod, TEnumAsByte<EBoneAxis> c_TwistAxis, float c_WeightThreshold, ERBFNormalizeMethod c_NormalizeMethod, FVector c_MedianReference, float c_MedianMin, float c_MedianMax) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTargetDimensions.SetValue(c_TargetDimensions);
		_offRadius.SetValue(c_Radius);
		_offFunction.SetValue(c_Function);
		_offDistanceMethod.SetValue(c_DistanceMethod);
		_offTwistAxis.SetValue(c_TwistAxis);
		_offWeightThreshold.SetValue(c_WeightThreshold);
		_offNormalizeMethod.SetValue(c_NormalizeMethod);
		_offMedianReference.SetValue(c_MedianReference);
		_offMedianMin.SetValue(c_MedianMin);
		_offMedianMax.SetValue(c_MedianMax);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// 0x0018 (0x0048 - 0x0030)
public class FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase
{
	#region Offsets
	private ExternalOffset<UAnimSequenceBase>                  _offSequence                                                   = new ExternalOffset<UAnimSequenceBase>(0x0030, true);         // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offExplicitTime                                               = new ExternalOffset<float>(0x0038);                           // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbShouldLoop                                                = new ExternalOffset<byte/*(bool)*/>(0x003C);                  // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbTeleportToExplicitTime                                    = new ExternalOffset<byte/*(bool)*/>(0x003D);                  // 0x003D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ESequenceEvalReinit>>   _offReinitializationBehavior                                   = new ExternalOffset<TEnumAsByte<ESequenceEvalReinit>>(0x003E, false); // 0x003E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offStartPosition                                              = new ExternalOffset<float>(0x0040);                           // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UAnimSequenceBase                                   Sequence                                                       => _offSequence.GetValue();
	public float                                               ExplicitTime                                                   => _offExplicitTime.GetValue();
	public byte/*(bool)*/                                      bShouldLoop                                                    => _offbShouldLoop.GetValue();
	public byte/*(bool)*/                                      bTeleportToExplicitTime                                        => _offbTeleportToExplicitTime.GetValue();
	public TEnumAsByte<ESequenceEvalReinit>                    ReinitializationBehavior                                       => _offReinitializationBehavior.GetValue();
	public float                                               StartPosition                                                  => _offStartPosition.GetValue();
	#endregion

	public FAnimNode_SequenceEvaluator(UAnimSequenceBase c_Sequence, float c_ExplicitTime, byte/*(bool)*/ c_bShouldLoop, byte/*(bool)*/ c_bTeleportToExplicitTime, TEnumAsByte<ESequenceEvalReinit> c_ReinitializationBehavior, float c_StartPosition) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSequence.SetValue(c_Sequence);
		_offExplicitTime.SetValue(c_ExplicitTime);
		_offbShouldLoop.SetValue(c_bShouldLoop);
		_offbTeleportToExplicitTime.SetValue(c_bTeleportToExplicitTime);
		_offReinitializationBehavior.SetValue(c_ReinitializationBehavior);
		_offStartPosition.SetValue(c_StartPosition);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_Slot
// 0x0038 (0x0048 - 0x0010)
public class FAnimNode_Slot : FAnimNode_Base
{
	#region Offsets
	private ExternalOffset<FPoseLink>                          _offSource                                                     = new ExternalOffset<FPoseLink>(0x0010, false);                // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offSlotName                                                   = new ExternalOffset<FName>(0x0020, false);                    // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbAlwaysUpdateSourcePose                                    = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPoseLink                                           Source                                                         => _offSource.GetValue();
	public FName                                               SlotName                                                       => _offSlotName.GetValue();
	public byte/*(bool)*/                                      bAlwaysUpdateSourcePose                                        => _offbAlwaysUpdateSourcePose.GetValue();
	#endregion

	public FAnimNode_Slot(FPoseLink c_Source, FName c_SlotName, byte/*(bool)*/ c_bAlwaysUpdateSourcePose) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSource.SetValue(c_Source);
		_offSlotName.SetValue(c_SlotName);
		_offbAlwaysUpdateSourcePose.SetValue(c_bAlwaysUpdateSourcePose);
	}
}
// ScriptStruct AnimGraphRuntime.SocketReference
// 0x0040
public class FSocketReference : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offSocketName                                                 = new ExternalOffset<FName>(0x0030, false);                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               SocketName                                                     => _offSocketName.GetValue();
	#endregion

	public FSocketReference(FName c_SocketName) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSocketName.SetValue(c_SocketName);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// 0x0050 (0x0118 - 0x00C8)
public class FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase
{
	#region Offsets
	private ExternalOffset<FBoneReference>                     _offSourceBone                                                 = new ExternalOffset<FBoneReference>(0x00C8, false);           // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<UCurveFloat>                        _offDrivingCurve                                               = new ExternalOffset<UCurveFloat>(0x00D8, true);               // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMultiplier                                                 = new ExternalOffset<float>(0x00E0);                           // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRangeMin                                                   = new ExternalOffset<float>(0x00E4);                           // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRangeMax                                                   = new ExternalOffset<float>(0x00E8);                           // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRemappedMin                                                = new ExternalOffset<float>(0x00EC);                           // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRemappedMax                                                = new ExternalOffset<float>(0x00F0);                           // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offParameterName                                              = new ExternalOffset<FName>(0x00F4, false);                    // 0x00F4(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneReference>                     _offTargetBone                                                 = new ExternalOffset<FBoneReference>(0x00FC, false);           // 0x00FC(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<EDrivenDestinationMode>             _offDestinationMode                                            = new ExternalOffset<EDrivenDestinationMode>(0x010C, false);   // 0x010C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EDrivenBoneModificationMode>        _offModificationMode                                           = new ExternalOffset<EDrivenBoneModificationMode>(0x010D, false); // 0x010D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EComponentType>>        _offSourceComponent                                            = new ExternalOffset<TEnumAsByte<EComponentType>>(0x010E, false); // 0x010E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbUseRange                                                  = new ExternalOffset<char>(0x010F, false);                     // 0x010F(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbAffectTargetTranslationX                                  = new ExternalOffset<char>(0x010F, false);                     // 0x010F(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbAffectTargetTranslationY                                  = new ExternalOffset<char>(0x010F, false);                     // 0x010F(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbAffectTargetTranslationZ                                  = new ExternalOffset<char>(0x010F, false);                     // 0x010F(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbAffectTargetRotationX                                     = new ExternalOffset<char>(0x010F, false);                     // 0x010F(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbAffectTargetRotationY                                     = new ExternalOffset<char>(0x010F, false);                     // 0x010F(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbAffectTargetRotationZ                                     = new ExternalOffset<char>(0x010F, false);                     // 0x010F(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbAffectTargetScaleX                                        = new ExternalOffset<char>(0x010F, false);                     // 0x010F(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbAffectTargetScaleY                                        = new ExternalOffset<char>(0x0110, false);                     // 0x0110(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbAffectTargetScaleZ                                        = new ExternalOffset<char>(0x0110, false);                     // 0x0110(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FBoneReference                                      SourceBone                                                     => _offSourceBone.GetValue();
	public UCurveFloat                                         DrivingCurve                                                   => _offDrivingCurve.GetValue();
	public float                                               Multiplier                                                     => _offMultiplier.GetValue();
	public float                                               RangeMin                                                       => _offRangeMin.GetValue();
	public float                                               RangeMax                                                       => _offRangeMax.GetValue();
	public float                                               RemappedMin                                                    => _offRemappedMin.GetValue();
	public float                                               RemappedMax                                                    => _offRemappedMax.GetValue();
	public FName                                               ParameterName                                                  => _offParameterName.GetValue();
	public FBoneReference                                      TargetBone                                                     => _offTargetBone.GetValue();
	public EDrivenDestinationMode                              DestinationMode                                                => _offDestinationMode.GetValue();
	public EDrivenBoneModificationMode                         ModificationMode                                               => _offModificationMode.GetValue();
	public TEnumAsByte<EComponentType>                         SourceComponent                                                => _offSourceComponent.GetValue();
	#endregion

	public FAnimNode_BoneDrivenController(FBoneReference c_SourceBone, UCurveFloat c_DrivingCurve, float c_Multiplier, float c_RangeMin, float c_RangeMax, float c_RemappedMin, float c_RemappedMax, FName c_ParameterName, FBoneReference c_TargetBone, EDrivenDestinationMode c_DestinationMode, EDrivenBoneModificationMode c_ModificationMode, TEnumAsByte<EComponentType> c_SourceComponent) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSourceBone.SetValue(c_SourceBone);
		_offDrivingCurve.SetValue(c_DrivingCurve);
		_offMultiplier.SetValue(c_Multiplier);
		_offRangeMin.SetValue(c_RangeMin);
		_offRangeMax.SetValue(c_RangeMax);
		_offRemappedMin.SetValue(c_RemappedMin);
		_offRemappedMax.SetValue(c_RemappedMax);
		_offParameterName.SetValue(c_ParameterName);
		_offTargetBone.SetValue(c_TargetBone);
		_offDestinationMode.SetValue(c_DestinationMode);
		_offModificationMode.SetValue(c_ModificationMode);
		_offSourceComponent.SetValue(c_SourceComponent);
	}
}
// ScriptStruct AnimGraphRuntime.BoneSocketTarget
// 0x0060
public class FBoneSocketTarget : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbUseSocket                                                 = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneReference>                     _offBoneReference                                              = new ExternalOffset<FBoneReference>(0x0004, false);           // 0x0004(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSocketReference>                   _offSocketReference                                            = new ExternalOffset<FSocketReference>(0x0020, false);         // 0x0020(0x0040) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bUseSocket                                                     => _offbUseSocket.GetValue();
	public FBoneReference                                      BoneReference                                                  => _offBoneReference.GetValue();
	public FSocketReference                                    SocketReference                                                => _offSocketReference.GetValue();
	#endregion

	public FBoneSocketTarget(byte/*(bool)*/ c_bUseSocket, FBoneReference c_BoneReference, FSocketReference c_SocketReference) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbUseSocket.SetValue(c_bUseSocket);
		_offBoneReference.SetValue(c_BoneReference);
		_offSocketReference.SetValue(c_SocketReference);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// 0x00B8 (0x00C8 - 0x0010)
public class FAnimNode_ApplyAdditive : FAnimNode_Base
{
	#region Offsets
	private ExternalOffset<FPoseLink>                          _offBase                                                       = new ExternalOffset<FPoseLink>(0x0010, false);                // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FPoseLink>                          _offAdditive                                                   = new ExternalOffset<FPoseLink>(0x0020, false);                // 0x0020(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offAlpha                                                      = new ExternalOffset<float>(0x0030);                           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FInputScaleBias>                    _offAlphaScaleBias                                             = new ExternalOffset<FInputScaleBias>(0x0034, false);          // 0x0034(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offLODThreshold                                               = new ExternalOffset<int>(0x003C);                             // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FInputAlphaBoolBlend>               _offAlphaBoolBlend                                             = new ExternalOffset<FInputAlphaBoolBlend>(0x0040, false);     // 0x0040(0x0048) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offAlphaCurveName                                             = new ExternalOffset<FName>(0x0088, false);                    // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FInputScaleBiasClamp>               _offAlphaScaleBiasClamp                                        = new ExternalOffset<FInputScaleBiasClamp>(0x0090, false);     // 0x0090(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<EAnimAlphaInputType>                _offAlphaInputType                                             = new ExternalOffset<EAnimAlphaInputType>(0x00C4, false);      // 0x00C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbAlphaBoolEnabled                                          = new ExternalOffset<byte/*(bool)*/>(0x00C5);                  // 0x00C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPoseLink                                           Base                                                           => _offBase.GetValue();
	public FPoseLink                                           Additive                                                       => _offAdditive.GetValue();
	public float                                               Alpha                                                          => _offAlpha.GetValue();
	public FInputScaleBias                                     AlphaScaleBias                                                 => _offAlphaScaleBias.GetValue();
	public int                                                 LODThreshold                                                   => _offLODThreshold.GetValue();
	public FInputAlphaBoolBlend                                AlphaBoolBlend                                                 => _offAlphaBoolBlend.GetValue();
	public FName                                               AlphaCurveName                                                 => _offAlphaCurveName.GetValue();
	public FInputScaleBiasClamp                                AlphaScaleBiasClamp                                            => _offAlphaScaleBiasClamp.GetValue();
	public EAnimAlphaInputType                                 AlphaInputType                                                 => _offAlphaInputType.GetValue();
	public byte/*(bool)*/                                      bAlphaBoolEnabled                                              => _offbAlphaBoolEnabled.GetValue();
	#endregion

	public FAnimNode_ApplyAdditive(FPoseLink c_Base, FPoseLink c_Additive, float c_Alpha, FInputScaleBias c_AlphaScaleBias, int c_LODThreshold, FInputAlphaBoolBlend c_AlphaBoolBlend, FName c_AlphaCurveName, FInputScaleBiasClamp c_AlphaScaleBiasClamp, EAnimAlphaInputType c_AlphaInputType, byte/*(bool)*/ c_bAlphaBoolEnabled) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBase.SetValue(c_Base);
		_offAdditive.SetValue(c_Additive);
		_offAlpha.SetValue(c_Alpha);
		_offAlphaScaleBias.SetValue(c_AlphaScaleBias);
		_offLODThreshold.SetValue(c_LODThreshold);
		_offAlphaBoolBlend.SetValue(c_AlphaBoolBlend);
		_offAlphaCurveName.SetValue(c_AlphaCurveName);
		_offAlphaScaleBiasClamp.SetValue(c_AlphaScaleBiasClamp);
		_offAlphaInputType.SetValue(c_AlphaInputType);
		_offbAlphaBoolEnabled.SetValue(c_bAlphaBoolEnabled);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// 0x00B0 (0x0128 - 0x0078)
public class FAnimNode_PoseDriver : FAnimNode_PoseHandler
{
	#region Offsets
	private ExternalOffset<FPoseLink>                          _offSourcePose                                                 = new ExternalOffset<FPoseLink>(0x0078, false);                // 0x0078(0x0010) (Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FBoneReference>>             _offSourceBones                                                = new ExternalOffset<TArray<FBoneReference>>(0x0088, false);   // 0x0088(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FBoneReference>>             _offOnlyDriveBones                                             = new ExternalOffset<TArray<FBoneReference>>(0x0098, false);   // 0x0098(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FPoseDriverTarget>>          _offPoseTargets                                                = new ExternalOffset<TArray<FPoseDriverTarget>>(0x00A8, false); // 0x00A8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneReference>                     _offEvalSpaceBone                                              = new ExternalOffset<FBoneReference>(0x00E8, false);           // 0x00E8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FRBFParams>                         _offRBFParams                                                  = new ExternalOffset<FRBFParams>(0x00F8, false);               // 0x00F8(0x0028) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<EPoseDriverSource>                  _offDriveSource                                                = new ExternalOffset<EPoseDriverSource>(0x0120, false);        // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EPoseDriverOutput>                  _offDriveOutput                                                = new ExternalOffset<EPoseDriverOutput>(0x0121, false);        // 0x0121(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOnlyDriveSelectedBones                                    = new ExternalOffset<char>(0x0122, false);                     // 0x0122(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPoseLink                                           SourcePose                                                     => _offSourcePose.GetValue();
	public TArray<FBoneReference>                              SourceBones                                                    => _offSourceBones.GetValue();
	public TArray<FBoneReference>                              OnlyDriveBones                                                 => _offOnlyDriveBones.GetValue();
	public TArray<FPoseDriverTarget>                           PoseTargets                                                    => _offPoseTargets.GetValue();
	public FBoneReference                                      EvalSpaceBone                                                  => _offEvalSpaceBone.GetValue();
	public FRBFParams                                          RBFParams                                                      => _offRBFParams.GetValue();
	public EPoseDriverSource                                   DriveSource                                                    => _offDriveSource.GetValue();
	public EPoseDriverOutput                                   DriveOutput                                                    => _offDriveOutput.GetValue();
	#endregion

	public FAnimNode_PoseDriver(FPoseLink c_SourcePose, TArray<FBoneReference> c_SourceBones, TArray<FBoneReference> c_OnlyDriveBones, TArray<FPoseDriverTarget> c_PoseTargets, FBoneReference c_EvalSpaceBone, FRBFParams c_RBFParams, EPoseDriverSource c_DriveSource, EPoseDriverOutput c_DriveOutput) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSourcePose.SetValue(c_SourcePose);
		_offSourceBones.SetValue(c_SourceBones);
		_offOnlyDriveBones.SetValue(c_OnlyDriveBones);
		_offPoseTargets.SetValue(c_PoseTargets);
		_offEvalSpaceBone.SetValue(c_EvalSpaceBone);
		_offRBFParams.SetValue(c_RBFParams);
		_offDriveSource.SetValue(c_DriveSource);
		_offDriveOutput.SetValue(c_DriveOutput);
	}
}
// ScriptStruct AnimGraphRuntime.AngularRangeLimit
// 0x0028
public class FAngularRangeLimit : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offLimitMin                                                   = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offLimitMax                                                   = new ExternalOffset<FVector>(0x000C, false);                  // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneReference>                     _offBone                                                       = new ExternalOffset<FBoneReference>(0x0018, false);           // 0x0018(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             LimitMin                                                       => _offLimitMin.GetValue();
	public FVector                                             LimitMax                                                       => _offLimitMax.GetValue();
	public FBoneReference                                      Bone                                                           => _offBone.GetValue();
	#endregion

	public FAngularRangeLimit(FVector c_LimitMin, FVector c_LimitMax, FBoneReference c_Bone) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLimitMin.SetValue(c_LimitMin);
		_offLimitMax.SetValue(c_LimitMax);
		_offBone.SetValue(c_Bone);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// 0x00E8 (0x01B0 - 0x00C8)
public class FAnimNode_LookAt : FAnimNode_SkeletalControlBase
{
	#region Offsets
	private ExternalOffset<FBoneReference>                     _offBoneToModify                                               = new ExternalOffset<FBoneReference>(0x00C8, false);           // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneSocketTarget>                  _offLookAtTarget                                               = new ExternalOffset<FBoneSocketTarget>(0x00E0, false);        // 0x00E0(0x0060) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offLookAtLocation                                             = new ExternalOffset<FVector>(0x0140, false);                  // 0x0140(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FAxis>                              _offLookAt_Axis                                                = new ExternalOffset<FAxis>(0x014C, false);                    // 0x014C(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbUseLookUpAxis                                             = new ExternalOffset<byte/*(bool)*/>(0x015C);                  // 0x015C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EInterpolationBlend>>   _offInterpolationType                                          = new ExternalOffset<TEnumAsByte<EInterpolationBlend>>(0x015D, false); // 0x015D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FAxis>                              _offLookUp_Axis                                                = new ExternalOffset<FAxis>(0x0160, false);                    // 0x0160(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLookAtClamp                                                = new ExternalOffset<float>(0x0170);                           // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offInterpolationTime                                          = new ExternalOffset<float>(0x0174);                           // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offInterpolationTriggerThreashold                             = new ExternalOffset<float>(0x0178);                           // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FBoneReference                                      BoneToModify                                                   => _offBoneToModify.GetValue();
	public FBoneSocketTarget                                   LookAtTarget                                                   => _offLookAtTarget.GetValue();
	public FVector                                             LookAtLocation                                                 => _offLookAtLocation.GetValue();
	public FAxis                                               LookAt_Axis                                                    => _offLookAt_Axis.GetValue();
	public byte/*(bool)*/                                      bUseLookUpAxis                                                 => _offbUseLookUpAxis.GetValue();
	public TEnumAsByte<EInterpolationBlend>                    InterpolationType                                              => _offInterpolationType.GetValue();
	public FAxis                                               LookUp_Axis                                                    => _offLookUp_Axis.GetValue();
	public float                                               LookAtClamp                                                    => _offLookAtClamp.GetValue();
	public float                                               InterpolationTime                                              => _offInterpolationTime.GetValue();
	public float                                               InterpolationTriggerThreashold                                 => _offInterpolationTriggerThreashold.GetValue();
	#endregion

	public FAnimNode_LookAt(FBoneReference c_BoneToModify, FBoneSocketTarget c_LookAtTarget, FVector c_LookAtLocation, FAxis c_LookAt_Axis, byte/*(bool)*/ c_bUseLookUpAxis, TEnumAsByte<EInterpolationBlend> c_InterpolationType, FAxis c_LookUp_Axis, float c_LookAtClamp, float c_InterpolationTime, float c_InterpolationTriggerThreashold) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBoneToModify.SetValue(c_BoneToModify);
		_offLookAtTarget.SetValue(c_LookAtTarget);
		_offLookAtLocation.SetValue(c_LookAtLocation);
		_offLookAt_Axis.SetValue(c_LookAt_Axis);
		_offbUseLookUpAxis.SetValue(c_bUseLookUpAxis);
		_offInterpolationType.SetValue(c_InterpolationType);
		_offLookUp_Axis.SetValue(c_LookUp_Axis);
		_offLookAtClamp.SetValue(c_LookAtClamp);
		_offInterpolationTime.SetValue(c_InterpolationTime);
		_offInterpolationTriggerThreashold.SetValue(c_InterpolationTriggerThreashold);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// 0x0198 (0x0260 - 0x00C8)
public class FAnimNode_SplineIK : FAnimNode_SkeletalControlBase
{
	#region Offsets
	private ExternalOffset<FBoneReference>                     _offStartBone                                                  = new ExternalOffset<FBoneReference>(0x00C8, false);           // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneReference>                     _offEndBone                                                    = new ExternalOffset<FBoneReference>(0x00D8, false);           // 0x00D8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<ESplineBoneAxis>                    _offBoneAxis                                                   = new ExternalOffset<ESplineBoneAxis>(0x00E8, false);          // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbAutoCalculateSpline                                       = new ExternalOffset<byte/*(bool)*/>(0x00E9);                  // 0x00E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offPointCount                                                 = new ExternalOffset<int>(0x00EC);                             // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FTransform>>                 _offControlPoints                                              = new ExternalOffset<TArray<FTransform>>(0x00F0, false);       // 0x00F0(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRoll                                                       = new ExternalOffset<float>(0x0100);                           // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTwistStart                                                 = new ExternalOffset<float>(0x0104);                           // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTwistEnd                                                   = new ExternalOffset<float>(0x0108);                           // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FAlphaBlend>                        _offTwistBlend                                                 = new ExternalOffset<FAlphaBlend>(0x0110, false);              // 0x0110(0x0030) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offStretch                                                    = new ExternalOffset<float>(0x0140);                           // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offOffset                                                     = new ExternalOffset<float>(0x0144);                           // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FBoneReference                                      StartBone                                                      => _offStartBone.GetValue();
	public FBoneReference                                      EndBone                                                        => _offEndBone.GetValue();
	public ESplineBoneAxis                                     BoneAxis                                                       => _offBoneAxis.GetValue();
	public byte/*(bool)*/                                      bAutoCalculateSpline                                           => _offbAutoCalculateSpline.GetValue();
	public int                                                 PointCount                                                     => _offPointCount.GetValue();
	public TArray<FTransform>                                  ControlPoints                                                  => _offControlPoints.GetValue();
	public float                                               Roll                                                           => _offRoll.GetValue();
	public float                                               TwistStart                                                     => _offTwistStart.GetValue();
	public float                                               TwistEnd                                                       => _offTwistEnd.GetValue();
	public FAlphaBlend                                         TwistBlend                                                     => _offTwistBlend.GetValue();
	public float                                               Stretch                                                        => _offStretch.GetValue();
	public float                                               Offset                                                         => _offOffset.GetValue();
	#endregion

	public FAnimNode_SplineIK(FBoneReference c_StartBone, FBoneReference c_EndBone, ESplineBoneAxis c_BoneAxis, byte/*(bool)*/ c_bAutoCalculateSpline, int c_PointCount, TArray<FTransform> c_ControlPoints, float c_Roll, float c_TwistStart, float c_TwistEnd, FAlphaBlend c_TwistBlend, float c_Stretch, float c_Offset) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offStartBone.SetValue(c_StartBone);
		_offEndBone.SetValue(c_EndBone);
		_offBoneAxis.SetValue(c_BoneAxis);
		_offbAutoCalculateSpline.SetValue(c_bAutoCalculateSpline);
		_offPointCount.SetValue(c_PointCount);
		_offControlPoints.SetValue(c_ControlPoints);
		_offRoll.SetValue(c_Roll);
		_offTwistStart.SetValue(c_TwistStart);
		_offTwistEnd.SetValue(c_TwistEnd);
		_offTwistBlend.SetValue(c_TwistBlend);
		_offStretch.SetValue(c_Stretch);
		_offOffset.SetValue(c_Offset);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
// 0x00B8 (0x0180 - 0x00C8)
public class FAnimNode_CCDIK : FAnimNode_SkeletalControlBase
{
	#region Offsets
	private ExternalOffset<FVector>                            _offEffectorLocation                                           = new ExternalOffset<FVector>(0x00C8, false);                  // 0x00C8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EBoneControlSpace>>     _offEffectorLocationSpace                                      = new ExternalOffset<TEnumAsByte<EBoneControlSpace>>(0x00D4, false); // 0x00D4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneSocketTarget>                  _offEffectorTarget                                             = new ExternalOffset<FBoneSocketTarget>(0x00E0, false);        // 0x00E0(0x0060) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneReference>                     _offTipBone                                                    = new ExternalOffset<FBoneReference>(0x0140, false);           // 0x0140(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneReference>                     _offRootBone                                                   = new ExternalOffset<FBoneReference>(0x0150, false);           // 0x0150(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPrecision                                                  = new ExternalOffset<float>(0x0160);                           // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMaxIterations                                              = new ExternalOffset<int>(0x0164);                             // 0x0164(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbStartFromTail                                             = new ExternalOffset<byte/*(bool)*/>(0x0168);                  // 0x0168(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbEnableRotationLimit                                       = new ExternalOffset<byte/*(bool)*/>(0x0169);                  // 0x0169(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<float>>                      _offRotationLimitPerJoints                                     = new ExternalOffset<TArray<float>>(0x0170, false);            // 0x0170(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FVector                                             EffectorLocation                                               => _offEffectorLocation.GetValue();
	public TEnumAsByte<EBoneControlSpace>                      EffectorLocationSpace                                          => _offEffectorLocationSpace.GetValue();
	public FBoneSocketTarget                                   EffectorTarget                                                 => _offEffectorTarget.GetValue();
	public FBoneReference                                      TipBone                                                        => _offTipBone.GetValue();
	public FBoneReference                                      RootBone                                                       => _offRootBone.GetValue();
	public float                                               Precision                                                      => _offPrecision.GetValue();
	public int                                                 MaxIterations                                                  => _offMaxIterations.GetValue();
	public byte/*(bool)*/                                      bStartFromTail                                                 => _offbStartFromTail.GetValue();
	public byte/*(bool)*/                                      bEnableRotationLimit                                           => _offbEnableRotationLimit.GetValue();
	public TArray<float>                                       RotationLimitPerJoints                                         => _offRotationLimitPerJoints.GetValue();
	#endregion

	public FAnimNode_CCDIK(FVector c_EffectorLocation, TEnumAsByte<EBoneControlSpace> c_EffectorLocationSpace, FBoneSocketTarget c_EffectorTarget, FBoneReference c_TipBone, FBoneReference c_RootBone, float c_Precision, int c_MaxIterations, byte/*(bool)*/ c_bStartFromTail, byte/*(bool)*/ c_bEnableRotationLimit, TArray<float> c_RotationLimitPerJoints) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offEffectorLocation.SetValue(c_EffectorLocation);
		_offEffectorLocationSpace.SetValue(c_EffectorLocationSpace);
		_offEffectorTarget.SetValue(c_EffectorTarget);
		_offTipBone.SetValue(c_TipBone);
		_offRootBone.SetValue(c_RootBone);
		_offPrecision.SetValue(c_Precision);
		_offMaxIterations.SetValue(c_MaxIterations);
		_offbStartFromTail.SetValue(c_bStartFromTail);
		_offbEnableRotationLimit.SetValue(c_bEnableRotationLimit);
		_offRotationLimitPerJoints.SetValue(c_RotationLimitPerJoints);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
// 0x0020 (0x00E8 - 0x00C8)
public class FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase
{
	#region Offsets
	private ExternalOffset<TArray<FAngularRangeLimit>>         _offAngularRangeLimits                                         = new ExternalOffset<TArray<FAngularRangeLimit>>(0x00C8, false); // 0x00C8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FVector>>                    _offAngularOffsets                                             = new ExternalOffset<TArray<FVector>>(0x00D8, false);          // 0x00D8(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FAngularRangeLimit>                          AngularRangeLimits                                             => _offAngularRangeLimits.GetValue();
	public TArray<FVector>                                     AngularOffsets                                                 => _offAngularOffsets.GetValue();
	#endregion

	public FAnimNode_ApplyLimits(TArray<FAngularRangeLimit> c_AngularRangeLimits, TArray<FVector> c_AngularOffsets) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAngularRangeLimits.SetValue(c_AngularRangeLimits);
		_offAngularOffsets.SetValue(c_AngularOffsets);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// 0x0080 (0x0090 - 0x0010)
public class FAnimNode_PoseSnapshot : FAnimNode_Base
{
	#region Offsets
	private ExternalOffset<FName>                              _offSnapshotName                                               = new ExternalOffset<FName>(0x0010, false);                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FPoseSnapshot>                      _offSnapshot                                                   = new ExternalOffset<FPoseSnapshot>(0x0018, false);            // 0x0018(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<ESnapshotSourceMode>                _offMode                                                       = new ExternalOffset<ESnapshotSourceMode>(0x0050, false);      // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               SnapshotName                                                   => _offSnapshotName.GetValue();
	public FPoseSnapshot                                       Snapshot                                                       => _offSnapshot.GetValue();
	public ESnapshotSourceMode                                 Mode                                                           => _offMode.GetValue();
	#endregion

	public FAnimNode_PoseSnapshot(FName c_SnapshotName, FPoseSnapshot c_Snapshot, ESnapshotSourceMode c_Mode) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSnapshotName.SetValue(c_SnapshotName);
		_offSnapshot.SetValue(c_Snapshot);
		_offMode.SetValue(c_Mode);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// 0x0028 (0x0038 - 0x0010)
public class FAnimNode_MakeDynamicAdditive : FAnimNode_Base
{
	#region Offsets
	private ExternalOffset<FPoseLink>                          _offBase                                                       = new ExternalOffset<FPoseLink>(0x0010, false);                // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FPoseLink>                          _offAdditive                                                   = new ExternalOffset<FPoseLink>(0x0020, false);                // 0x0020(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbMeshSpaceAdditive                                         = new ExternalOffset<byte/*(bool)*/>(0x0030);                  // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPoseLink                                           Base                                                           => _offBase.GetValue();
	public FPoseLink                                           Additive                                                       => _offAdditive.GetValue();
	public byte/*(bool)*/                                      bMeshSpaceAdditive                                             => _offbMeshSpaceAdditive.GetValue();
	#endregion

	public FAnimNode_MakeDynamicAdditive(FPoseLink c_Base, FPoseLink c_Additive, byte/*(bool)*/ c_bMeshSpaceAdditive) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBase.SetValue(c_Base);
		_offAdditive.SetValue(c_Additive);
		_offbMeshSpaceAdditive.SetValue(c_bMeshSpaceAdditive);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// 0x0118 (0x01E0 - 0x00C8)
public class FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase
{
	#region Offsets
	private ExternalOffset<FBoneReference>                     _offIKBone                                                     = new ExternalOffset<FBoneReference>(0x00C8, false);           // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offStartStretchRatio                                          = new ExternalOffset<float>(0x00D8);                           // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMaxStretchScale                                            = new ExternalOffset<float>(0x00DC);                           // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offEffectorLocation                                           = new ExternalOffset<FVector>(0x00E0, false);                  // 0x00E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneSocketTarget>                  _offEffectorTarget                                             = new ExternalOffset<FBoneSocketTarget>(0x00F0, false);        // 0x00F0(0x0060) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offJointTargetLocation                                        = new ExternalOffset<FVector>(0x0150, false);                  // 0x0150(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneSocketTarget>                  _offJointTarget                                                = new ExternalOffset<FBoneSocketTarget>(0x0160, false);        // 0x0160(0x0060) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FAxis>                              _offTwistAxis                                                  = new ExternalOffset<FAxis>(0x01C0, false);                    // 0x01C0(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EBoneControlSpace>>     _offEffectorLocationSpace                                      = new ExternalOffset<TEnumAsByte<EBoneControlSpace>>(0x01D0, false); // 0x01D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EBoneControlSpace>>     _offJointTargetLocationSpace                                   = new ExternalOffset<TEnumAsByte<EBoneControlSpace>>(0x01D1, false); // 0x01D1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbAllowStretching                                           = new ExternalOffset<char>(0x01D2, false);                     // 0x01D2(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbTakeRotationFromEffectorSpace                             = new ExternalOffset<char>(0x01D2, false);                     // 0x01D2(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbMaintainEffectorRelRot                                    = new ExternalOffset<char>(0x01D2, false);                     // 0x01D2(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbAllowTwist                                                = new ExternalOffset<char>(0x01D2, false);                     // 0x01D2(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FBoneReference                                      IKBone                                                         => _offIKBone.GetValue();
	public float                                               StartStretchRatio                                              => _offStartStretchRatio.GetValue();
	public float                                               MaxStretchScale                                                => _offMaxStretchScale.GetValue();
	public FVector                                             EffectorLocation                                               => _offEffectorLocation.GetValue();
	public FBoneSocketTarget                                   EffectorTarget                                                 => _offEffectorTarget.GetValue();
	public FVector                                             JointTargetLocation                                            => _offJointTargetLocation.GetValue();
	public FBoneSocketTarget                                   JointTarget                                                    => _offJointTarget.GetValue();
	public FAxis                                               TwistAxis                                                      => _offTwistAxis.GetValue();
	public TEnumAsByte<EBoneControlSpace>                      EffectorLocationSpace                                          => _offEffectorLocationSpace.GetValue();
	public TEnumAsByte<EBoneControlSpace>                      JointTargetLocationSpace                                       => _offJointTargetLocationSpace.GetValue();
	#endregion

	public FAnimNode_TwoBoneIK(FBoneReference c_IKBone, float c_StartStretchRatio, float c_MaxStretchScale, FVector c_EffectorLocation, FBoneSocketTarget c_EffectorTarget, FVector c_JointTargetLocation, FBoneSocketTarget c_JointTarget, FAxis c_TwistAxis, TEnumAsByte<EBoneControlSpace> c_EffectorLocationSpace, TEnumAsByte<EBoneControlSpace> c_JointTargetLocationSpace) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offIKBone.SetValue(c_IKBone);
		_offStartStretchRatio.SetValue(c_StartStretchRatio);
		_offMaxStretchScale.SetValue(c_MaxStretchScale);
		_offEffectorLocation.SetValue(c_EffectorLocation);
		_offEffectorTarget.SetValue(c_EffectorTarget);
		_offJointTargetLocation.SetValue(c_JointTargetLocation);
		_offJointTarget.SetValue(c_JointTarget);
		_offTwistAxis.SetValue(c_TwistAxis);
		_offEffectorLocationSpace.SetValue(c_EffectorLocationSpace);
		_offJointTargetLocationSpace.SetValue(c_JointTargetLocationSpace);
	}
}
// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// 0x0014
public class FSplineIKCachedBoneData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FBoneReference>                     _offBone                                                       = new ExternalOffset<FBoneReference>(0x0000, false);           // 0x0000(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offRefSkeletonIndex                                           = new ExternalOffset<int>(0x0010);                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FBoneReference                                      Bone                                                           => _offBone.GetValue();
	public int                                                 RefSkeletonIndex                                               => _offRefSkeletonIndex.GetValue();
	#endregion

	public FSplineIKCachedBoneData(FBoneReference c_Bone, int c_RefSkeletonIndex) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBone.SetValue(c_Bone);
		_offRefSkeletonIndex.SetValue(c_RefSkeletonIndex);
	}
}
// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
// 0x0024
public class FBlendBoneByChannelEntry : ExternalClass
{
	#region Offsets
	private ExternalOffset<FBoneReference>                     _offSourceBone                                                 = new ExternalOffset<FBoneReference>(0x0000, false);           // 0x0000(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneReference>                     _offTargetBone                                                 = new ExternalOffset<FBoneReference>(0x0010, false);           // 0x0010(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbBlendTranslation                                          = new ExternalOffset<byte/*(bool)*/>(0x0020);                  // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbBlendRotation                                             = new ExternalOffset<byte/*(bool)*/>(0x0021);                  // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbBlendScale                                                = new ExternalOffset<byte/*(bool)*/>(0x0022);                  // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FBoneReference                                      SourceBone                                                     => _offSourceBone.GetValue();
	public FBoneReference                                      TargetBone                                                     => _offTargetBone.GetValue();
	public byte/*(bool)*/                                      bBlendTranslation                                              => _offbBlendTranslation.GetValue();
	public byte/*(bool)*/                                      bBlendRotation                                                 => _offbBlendRotation.GetValue();
	public byte/*(bool)*/                                      bBlendScale                                                    => _offbBlendScale.GetValue();
	#endregion

	public FBlendBoneByChannelEntry(FBoneReference c_SourceBone, FBoneReference c_TargetBone, byte/*(bool)*/ c_bBlendTranslation, byte/*(bool)*/ c_bBlendRotation, byte/*(bool)*/ c_bBlendScale) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSourceBone.SetValue(c_SourceBone);
		_offTargetBone.SetValue(c_TargetBone);
		_offbBlendTranslation.SetValue(c_bBlendTranslation);
		_offbBlendRotation.SetValue(c_bBlendRotation);
		_offbBlendScale.SetValue(c_bBlendScale);
	}
}
// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// 0x0050
public class FRandomPlayerSequenceEntry : ExternalClass
{
	#region Offsets
	private ExternalOffset<UAnimSequence>                      _offSequence                                                   = new ExternalOffset<UAnimSequence>(0x0000, true);             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offChanceToPlay                                               = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMinLoopCount                                               = new ExternalOffset<int>(0x000C);                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMaxLoopCount                                               = new ExternalOffset<int>(0x0010);                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinPlayRate                                                = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMaxPlayRate                                                = new ExternalOffset<float>(0x0018);                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FAlphaBlend>                        _offBlendIn                                                    = new ExternalOffset<FAlphaBlend>(0x0020, false);              // 0x0020(0x0030) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UAnimSequence                                       Sequence                                                       => _offSequence.GetValue();
	public float                                               ChanceToPlay                                                   => _offChanceToPlay.GetValue();
	public int                                                 MinLoopCount                                                   => _offMinLoopCount.GetValue();
	public int                                                 MaxLoopCount                                                   => _offMaxLoopCount.GetValue();
	public float                                               MinPlayRate                                                    => _offMinPlayRate.GetValue();
	public float                                               MaxPlayRate                                                    => _offMaxPlayRate.GetValue();
	public FAlphaBlend                                         BlendIn                                                        => _offBlendIn.GetValue();
	#endregion

	public FRandomPlayerSequenceEntry(UAnimSequence c_Sequence, float c_ChanceToPlay, int c_MinLoopCount, int c_MaxLoopCount, float c_MinPlayRate, float c_MaxPlayRate, FAlphaBlend c_BlendIn) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSequence.SetValue(c_Sequence);
		_offChanceToPlay.SetValue(c_ChanceToPlay);
		_offMinLoopCount.SetValue(c_MinLoopCount);
		_offMaxLoopCount.SetValue(c_MaxLoopCount);
		_offMinPlayRate.SetValue(c_MinPlayRate);
		_offMaxPlayRate.SetValue(c_MaxPlayRate);
		_offBlendIn.SetValue(c_BlendIn);
	}
}
// ScriptStruct AnimGraphRuntime.Constraint
// 0x001C
public class FConstraint : ExternalClass
{
	#region Offsets
	private ExternalOffset<FBoneReference>                     _offTargetBone                                                 = new ExternalOffset<FBoneReference>(0x0000, false);           // 0x0000(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<EConstraintOffsetOption>            _offOffsetOption                                               = new ExternalOffset<EConstraintOffsetOption>(0x0010, false);  // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ETransformConstraintType>           _offTransformType                                              = new ExternalOffset<ETransformConstraintType>(0x0011, false); // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFilterOptionPerAxis>               _offPerAxis                                                    = new ExternalOffset<FFilterOptionPerAxis>(0x0012, false);     // 0x0012(0x0003) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FBoneReference                                      TargetBone                                                     => _offTargetBone.GetValue();
	public EConstraintOffsetOption                             OffsetOption                                                   => _offOffsetOption.GetValue();
	public ETransformConstraintType                            TransformType                                                  => _offTransformType.GetValue();
	public FFilterOptionPerAxis                                PerAxis                                                        => _offPerAxis.GetValue();
	#endregion

	public FConstraint(FBoneReference c_TargetBone, EConstraintOffsetOption c_OffsetOption, ETransformConstraintType c_TransformType, FFilterOptionPerAxis c_PerAxis) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTargetBone.SetValue(c_TargetBone);
		_offOffsetOption.SetValue(c_OffsetOption);
		_offTransformType.SetValue(c_TransformType);
		_offPerAxis.SetValue(c_PerAxis);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// 0x0040 (0x0108 - 0x00C8)
public class FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase
{
	#region Offsets
	private ExternalOffset<FBoneReference>                     _offBoneToModify                                               = new ExternalOffset<FBoneReference>(0x00C8, false);           // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offTranslation                                                = new ExternalOffset<FVector>(0x00D8, false);                  // 0x00D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FRotator>                           _offRotation                                                   = new ExternalOffset<FRotator>(0x00E4, false);                 // 0x00E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offScale                                                      = new ExternalOffset<FVector>(0x00F0, false);                  // 0x00F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EBoneModificationMode>> _offTranslationMode                                            = new ExternalOffset<TEnumAsByte<EBoneModificationMode>>(0x00FC, false); // 0x00FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EBoneModificationMode>> _offRotationMode                                               = new ExternalOffset<TEnumAsByte<EBoneModificationMode>>(0x00FD, false); // 0x00FD(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EBoneModificationMode>> _offScaleMode                                                  = new ExternalOffset<TEnumAsByte<EBoneModificationMode>>(0x00FE, false); // 0x00FE(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EBoneControlSpace>>     _offTranslationSpace                                           = new ExternalOffset<TEnumAsByte<EBoneControlSpace>>(0x00FF, false); // 0x00FF(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EBoneControlSpace>>     _offRotationSpace                                              = new ExternalOffset<TEnumAsByte<EBoneControlSpace>>(0x0100, false); // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EBoneControlSpace>>     _offScaleSpace                                                 = new ExternalOffset<TEnumAsByte<EBoneControlSpace>>(0x0101, false); // 0x0101(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FBoneReference                                      BoneToModify                                                   => _offBoneToModify.GetValue();
	public FVector                                             Translation                                                    => _offTranslation.GetValue();
	public FRotator                                            Rotation                                                       => _offRotation.GetValue();
	public FVector                                             Scale                                                          => _offScale.GetValue();
	public TEnumAsByte<EBoneModificationMode>                  TranslationMode                                                => _offTranslationMode.GetValue();
	public TEnumAsByte<EBoneModificationMode>                  RotationMode                                                   => _offRotationMode.GetValue();
	public TEnumAsByte<EBoneModificationMode>                  ScaleMode                                                      => _offScaleMode.GetValue();
	public TEnumAsByte<EBoneControlSpace>                      TranslationSpace                                               => _offTranslationSpace.GetValue();
	public TEnumAsByte<EBoneControlSpace>                      RotationSpace                                                  => _offRotationSpace.GetValue();
	public TEnumAsByte<EBoneControlSpace>                      ScaleSpace                                                     => _offScaleSpace.GetValue();
	#endregion

	public FAnimNode_ModifyBone(FBoneReference c_BoneToModify, FVector c_Translation, FRotator c_Rotation, FVector c_Scale, TEnumAsByte<EBoneModificationMode> c_TranslationMode, TEnumAsByte<EBoneModificationMode> c_RotationMode, TEnumAsByte<EBoneModificationMode> c_ScaleMode, TEnumAsByte<EBoneControlSpace> c_TranslationSpace, TEnumAsByte<EBoneControlSpace> c_RotationSpace, TEnumAsByte<EBoneControlSpace> c_ScaleSpace) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBoneToModify.SetValue(c_BoneToModify);
		_offTranslation.SetValue(c_Translation);
		_offRotation.SetValue(c_Rotation);
		_offScale.SetValue(c_Scale);
		_offTranslationMode.SetValue(c_TranslationMode);
		_offRotationMode.SetValue(c_RotationMode);
		_offScaleMode.SetValue(c_ScaleMode);
		_offTranslationSpace.SetValue(c_TranslationSpace);
		_offRotationSpace.SetValue(c_RotationSpace);
		_offScaleSpace.SetValue(c_ScaleSpace);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// 0x00B8 (0x00C8 - 0x0010)
public class FAnimNode_TwoWayBlend : FAnimNode_Base
{
	#region Offsets
	private ExternalOffset<FPoseLink>                          _offA                                                          = new ExternalOffset<FPoseLink>(0x0010, false);                // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FPoseLink>                          _offB                                                          = new ExternalOffset<FPoseLink>(0x0020, false);                // 0x0020(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<EAnimAlphaInputType>                _offAlphaInputType                                             = new ExternalOffset<EAnimAlphaInputType>(0x0030, false);      // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbAlphaBoolEnabled                                          = new ExternalOffset<char>(0x0031, false);                     // 0x0031(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbResetChildOnActivation                                    = new ExternalOffset<char>(0x0031, false);                     // 0x0031(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                              _offAlpha                                                      = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FInputScaleBias>                    _offAlphaScaleBias                                             = new ExternalOffset<FInputScaleBias>(0x0038, false);          // 0x0038(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FInputAlphaBoolBlend>               _offAlphaBoolBlend                                             = new ExternalOffset<FInputAlphaBoolBlend>(0x0040, false);     // 0x0040(0x0048) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offAlphaCurveName                                             = new ExternalOffset<FName>(0x0088, false);                    // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FInputScaleBiasClamp>               _offAlphaScaleBiasClamp                                        = new ExternalOffset<FInputScaleBiasClamp>(0x0090, false);     // 0x0090(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPoseLink                                           A                                                              => _offA.GetValue();
	public FPoseLink                                           B                                                              => _offB.GetValue();
	public EAnimAlphaInputType                                 AlphaInputType                                                 => _offAlphaInputType.GetValue();
	public float                                               Alpha                                                          => _offAlpha.GetValue();
	public FInputScaleBias                                     AlphaScaleBias                                                 => _offAlphaScaleBias.GetValue();
	public FInputAlphaBoolBlend                                AlphaBoolBlend                                                 => _offAlphaBoolBlend.GetValue();
	public FName                                               AlphaCurveName                                                 => _offAlphaCurveName.GetValue();
	public FInputScaleBiasClamp                                AlphaScaleBiasClamp                                            => _offAlphaScaleBiasClamp.GetValue();
	#endregion

	public FAnimNode_TwoWayBlend(FPoseLink c_A, FPoseLink c_B, EAnimAlphaInputType c_AlphaInputType, float c_Alpha, FInputScaleBias c_AlphaScaleBias, FInputAlphaBoolBlend c_AlphaBoolBlend, FName c_AlphaCurveName, FInputScaleBiasClamp c_AlphaScaleBiasClamp) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offA.SetValue(c_A);
		_offB.SetValue(c_B);
		_offAlphaInputType.SetValue(c_AlphaInputType);
		_offAlpha.SetValue(c_Alpha);
		_offAlphaScaleBias.SetValue(c_AlphaScaleBias);
		_offAlphaBoolBlend.SetValue(c_AlphaBoolBlend);
		_offAlphaCurveName.SetValue(c_AlphaCurveName);
		_offAlphaScaleBiasClamp.SetValue(c_AlphaScaleBiasClamp);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// 0x0058 (0x0068 - 0x0010)
public class FAnimNode_RandomPlayer : FAnimNode_Base
{
	#region Offsets
	private ExternalOffset<TArray<FRandomPlayerSequenceEntry>> _offEntries                                                    = new ExternalOffset<TArray<FRandomPlayerSequenceEntry>>(0x0010, false); // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbShuffleMode                                               = new ExternalOffset<byte/*(bool)*/>(0x0064);                  // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FRandomPlayerSequenceEntry>                  Entries                                                        => _offEntries.GetValue();
	public byte/*(bool)*/                                      bShuffleMode                                                   => _offbShuffleMode.GetValue();
	#endregion

	public FAnimNode_RandomPlayer(TArray<FRandomPlayerSequenceEntry> c_Entries, byte/*(bool)*/ c_bShuffleMode) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offEntries.SetValue(c_Entries);
		_offbShuffleMode.SetValue(c_bShuffleMode);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// 0x0000 (0x0010 - 0x0010)
public class FAnimNode_MeshSpaceRefPose : FAnimNode_Base
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FAnimNode_MeshSpaceRefPose() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// 0x0060 (0x0128 - 0x00C8)
public class FAnimNode_SpringBone : FAnimNode_SkeletalControlBase
{
	#region Offsets
	private ExternalOffset<FBoneReference>                     _offSpringBone                                                 = new ExternalOffset<FBoneReference>(0x00C8, false);           // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMaxDisplacement                                            = new ExternalOffset<float>(0x00D8);                           // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offSpringStiffness                                            = new ExternalOffset<float>(0x00DC);                           // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offSpringDamping                                              = new ExternalOffset<float>(0x00E0);                           // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offErrorResetThresh                                           = new ExternalOffset<float>(0x00E4);                           // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbLimitDisplacement                                         = new ExternalOffset<char>(0x0124, false);                     // 0x0124(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbTranslateX                                                = new ExternalOffset<char>(0x0124, false);                     // 0x0124(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbTranslateY                                                = new ExternalOffset<char>(0x0124, false);                     // 0x0124(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbTranslateZ                                                = new ExternalOffset<char>(0x0124, false);                     // 0x0124(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbRotateX                                                   = new ExternalOffset<char>(0x0124, false);                     // 0x0124(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbRotateY                                                   = new ExternalOffset<char>(0x0124, false);                     // 0x0124(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbRotateZ                                                   = new ExternalOffset<char>(0x0124, false);                     // 0x0124(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FBoneReference                                      SpringBone                                                     => _offSpringBone.GetValue();
	public float                                               MaxDisplacement                                                => _offMaxDisplacement.GetValue();
	public float                                               SpringStiffness                                                => _offSpringStiffness.GetValue();
	public float                                               SpringDamping                                                  => _offSpringDamping.GetValue();
	public float                                               ErrorResetThresh                                               => _offErrorResetThresh.GetValue();
	#endregion

	public FAnimNode_SpringBone(FBoneReference c_SpringBone, float c_MaxDisplacement, float c_SpringStiffness, float c_SpringDamping, float c_ErrorResetThresh) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSpringBone.SetValue(c_SpringBone);
		_offMaxDisplacement.SetValue(c_MaxDisplacement);
		_offSpringStiffness.SetValue(c_SpringStiffness);
		_offSpringDamping.SetValue(c_SpringDamping);
		_offErrorResetThresh.SetValue(c_ErrorResetThresh);
	}
}
// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// 0x0250 (0x0920 - 0x06D0)
public class FAnimSequencerInstanceProxy : FAnimInstanceProxy
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FAnimSequencerInstanceProxy() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
// 0x0040 (0x0108 - 0x00C8)
public class FAnimNode_Constraint : FAnimNode_SkeletalControlBase
{
	#region Offsets
	private ExternalOffset<FBoneReference>                     _offBoneToModify                                               = new ExternalOffset<FBoneReference>(0x00C8, false);           // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FConstraint>>                _offConstraintSetup                                            = new ExternalOffset<TArray<FConstraint>>(0x00D8, false);      // 0x00D8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<float>>                      _offConstraintWeights                                          = new ExternalOffset<TArray<float>>(0x00E8, false);            // 0x00E8(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FBoneReference                                      BoneToModify                                                   => _offBoneToModify.GetValue();
	public TArray<FConstraint>                                 ConstraintSetup                                                => _offConstraintSetup.GetValue();
	public TArray<float>                                       ConstraintWeights                                              => _offConstraintWeights.GetValue();
	#endregion

	public FAnimNode_Constraint(FBoneReference c_BoneToModify, TArray<FConstraint> c_ConstraintSetup, TArray<float> c_ConstraintWeights) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBoneToModify.SetValue(c_BoneToModify);
		_offConstraintSetup.SetValue(c_ConstraintSetup);
		_offConstraintWeights.SetValue(c_ConstraintWeights);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
// 0x0058 (0x0068 - 0x0010)
public class FAnimNode_BlendBoneByChannel : FAnimNode_Base
{
	#region Offsets
	private ExternalOffset<FPoseLink>                          _offA                                                          = new ExternalOffset<FPoseLink>(0x0010, false);                // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FPoseLink>                          _offB                                                          = new ExternalOffset<FPoseLink>(0x0020, false);                // 0x0020(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FBlendBoneByChannelEntry>>   _offBoneDefinitions                                            = new ExternalOffset<TArray<FBlendBoneByChannelEntry>>(0x0030, false); // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offAlpha                                                      = new ExternalOffset<float>(0x0050);                           // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FInputScaleBias>                    _offAlphaScaleBias                                             = new ExternalOffset<FInputScaleBias>(0x0058, false);          // 0x0058(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EBoneControlSpace>>     _offTransformsSpace                                            = new ExternalOffset<TEnumAsByte<EBoneControlSpace>>(0x0060, false); // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPoseLink                                           A                                                              => _offA.GetValue();
	public FPoseLink                                           B                                                              => _offB.GetValue();
	public TArray<FBlendBoneByChannelEntry>                    BoneDefinitions                                                => _offBoneDefinitions.GetValue();
	public float                                               Alpha                                                          => _offAlpha.GetValue();
	public FInputScaleBias                                     AlphaScaleBias                                                 => _offAlphaScaleBias.GetValue();
	public TEnumAsByte<EBoneControlSpace>                      TransformsSpace                                                => _offTransformsSpace.GetValue();
	#endregion

	public FAnimNode_BlendBoneByChannel(FPoseLink c_A, FPoseLink c_B, TArray<FBlendBoneByChannelEntry> c_BoneDefinitions, float c_Alpha, FInputScaleBias c_AlphaScaleBias, TEnumAsByte<EBoneControlSpace> c_TransformsSpace) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offA.SetValue(c_A);
		_offB.SetValue(c_B);
		_offBoneDefinitions.SetValue(c_BoneDefinitions);
		_offAlpha.SetValue(c_Alpha);
		_offAlphaScaleBias.SetValue(c_AlphaScaleBias);
		_offTransformsSpace.SetValue(c_TransformsSpace);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// 0x0008 (0x0018 - 0x0010)
public class FAnimNode_RefPose : FAnimNode_Base
{
	#region Offsets
	private ExternalOffset<TEnumAsByte<ERefPoseType>>          _offRefPoseType                                                = new ExternalOffset<TEnumAsByte<ERefPoseType>>(0x0010, false); // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TEnumAsByte<ERefPoseType>                           RefPoseType                                                    => _offRefPoseType.GetValue();
	#endregion

	public FAnimNode_RefPose(TEnumAsByte<ERefPoseType> c_RefPoseType) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRefPoseType.SetValue(c_RefPoseType);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// 0x0048 (0x0058 - 0x0010)
public class FAnimNode_ModifyCurve : FAnimNode_Base
{
	#region Offsets
	private ExternalOffset<FPoseLink>                          _offSourcePose                                                 = new ExternalOffset<FPoseLink>(0x0010, false);                // 0x0010(0x0010) (Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<float>>                      _offCurveValues                                                = new ExternalOffset<TArray<float>>(0x0020, false);            // 0x0020(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FName>>                      _offCurveNames                                                 = new ExternalOffset<TArray<FName>>(0x0030, false);            // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offAlpha                                                      = new ExternalOffset<float>(0x0050);                           // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EModifyCurveApplyMode>              _offApplyMode                                                  = new ExternalOffset<EModifyCurveApplyMode>(0x0054, false);    // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPoseLink                                           SourcePose                                                     => _offSourcePose.GetValue();
	public TArray<float>                                       CurveValues                                                    => _offCurveValues.GetValue();
	public TArray<FName>                                       CurveNames                                                     => _offCurveNames.GetValue();
	public float                                               Alpha                                                          => _offAlpha.GetValue();
	public EModifyCurveApplyMode                               ApplyMode                                                      => _offApplyMode.GetValue();
	#endregion

	public FAnimNode_ModifyCurve(FPoseLink c_SourcePose, TArray<float> c_CurveValues, TArray<FName> c_CurveNames, float c_Alpha, EModifyCurveApplyMode c_ApplyMode) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSourcePose.SetValue(c_SourcePose);
		_offCurveValues.SetValue(c_CurveValues);
		_offCurveNames.SetValue(c_CurveNames);
		_offAlpha.SetValue(c_Alpha);
		_offApplyMode.SetValue(c_ApplyMode);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
// 0x0010 (0x00D8 - 0x00C8)
public class FAnimNode_ResetRoot : FAnimNode_SkeletalControlBase
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FAnimNode_ResetRoot() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct AnimGraphRuntime.RBFEntry
// 0x0010
public class FRBFEntry : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<float>>                      _offValues                                                     = new ExternalOffset<TArray<float>>(0x0000, false);            // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<float>                                       Values                                                         => _offValues.GetValue();
	#endregion

	public FRBFEntry(TArray<float> c_Values) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offValues.SetValue(c_Values);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// 0x0008 (0x00A0 - 0x0098)
public class FAnimNode_BlendListByBool : FAnimNode_BlendListBase
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbActiveValue                                               = new ExternalOffset<byte/*(bool)*/>(0x0098);                  // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bActiveValue                                                   => _offbActiveValue.GetValue();
	#endregion

	public FAnimNode_BlendListByBool(byte/*(bool)*/ c_bActiveValue) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbActiveValue.SetValue(c_bActiveValue);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// 0x0028 (0x00F0 - 0x00C8)
public class FAnimNode_CopyBone : FAnimNode_SkeletalControlBase
{
	#region Offsets
	private ExternalOffset<FBoneReference>                     _offSourceBone                                                 = new ExternalOffset<FBoneReference>(0x00C8, false);           // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneReference>                     _offTargetBone                                                 = new ExternalOffset<FBoneReference>(0x00D8, false);           // 0x00D8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbCopyTranslation                                           = new ExternalOffset<byte/*(bool)*/>(0x00E8);                  // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbCopyRotation                                              = new ExternalOffset<byte/*(bool)*/>(0x00E9);                  // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbCopyScale                                                 = new ExternalOffset<byte/*(bool)*/>(0x00EA);                  // 0x00EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EBoneControlSpace>>     _offControlSpace                                               = new ExternalOffset<TEnumAsByte<EBoneControlSpace>>(0x00EB, false); // 0x00EB(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FBoneReference                                      SourceBone                                                     => _offSourceBone.GetValue();
	public FBoneReference                                      TargetBone                                                     => _offTargetBone.GetValue();
	public byte/*(bool)*/                                      bCopyTranslation                                               => _offbCopyTranslation.GetValue();
	public byte/*(bool)*/                                      bCopyRotation                                                  => _offbCopyRotation.GetValue();
	public byte/*(bool)*/                                      bCopyScale                                                     => _offbCopyScale.GetValue();
	public TEnumAsByte<EBoneControlSpace>                      ControlSpace                                                   => _offControlSpace.GetValue();
	#endregion

	public FAnimNode_CopyBone(FBoneReference c_SourceBone, FBoneReference c_TargetBone, byte/*(bool)*/ c_bCopyTranslation, byte/*(bool)*/ c_bCopyRotation, byte/*(bool)*/ c_bCopyScale, TEnumAsByte<EBoneControlSpace> c_ControlSpace) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSourceBone.SetValue(c_SourceBone);
		_offTargetBone.SetValue(c_TargetBone);
		_offbCopyTranslation.SetValue(c_bCopyTranslation);
		_offbCopyRotation.SetValue(c_bCopyRotation);
		_offbCopyScale.SetValue(c_bCopyScale);
		_offControlSpace.SetValue(c_ControlSpace);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// 0x0040 (0x0050 - 0x0010)
public class FAnimNode_MultiWayBlend : FAnimNode_Base
{
	#region Offsets
	private ExternalOffset<TArray<FPoseLink>>                  _offPoses                                                      = new ExternalOffset<TArray<FPoseLink>>(0x0010, false);        // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<float>>                      _offDesiredAlphas                                              = new ExternalOffset<TArray<float>>(0x0020, false);            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FInputScaleBias>                    _offAlphaScaleBias                                             = new ExternalOffset<FInputScaleBias>(0x0040, false);          // 0x0040(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbAdditiveNode                                              = new ExternalOffset<byte/*(bool)*/>(0x0048);                  // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbNormalizeAlpha                                            = new ExternalOffset<byte/*(bool)*/>(0x0049);                  // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FPoseLink>                                   Poses                                                          => _offPoses.GetValue();
	public TArray<float>                                       DesiredAlphas                                                  => _offDesiredAlphas.GetValue();
	public FInputScaleBias                                     AlphaScaleBias                                                 => _offAlphaScaleBias.GetValue();
	public byte/*(bool)*/                                      bAdditiveNode                                                  => _offbAdditiveNode.GetValue();
	public byte/*(bool)*/                                      bNormalizeAlpha                                                => _offbNormalizeAlpha.GetValue();
	#endregion

	public FAnimNode_MultiWayBlend(TArray<FPoseLink> c_Poses, TArray<float> c_DesiredAlphas, FInputScaleBias c_AlphaScaleBias, byte/*(bool)*/ c_bAdditiveNode, byte/*(bool)*/ c_bNormalizeAlpha) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPoses.SetValue(c_Poses);
		_offDesiredAlphas.SetValue(c_DesiredAlphas);
		_offAlphaScaleBias.SetValue(c_AlphaScaleBias);
		_offbAdditiveNode.SetValue(c_bAdditiveNode);
		_offbNormalizeAlpha.SetValue(c_bNormalizeAlpha);
	}
}
// ScriptStruct AnimGraphRuntime.RBFTarget
// 0x0090 (0x00A0 - 0x0010)
public class FRBFTarget : FRBFEntry
{
	#region Offsets
	private ExternalOffset<float>                              _offScaleFactor                                                = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbApplyCustomCurve                                          = new ExternalOffset<byte/*(bool)*/>(0x0014);                  // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FRichCurve>                         _offCustomCurve                                                = new ExternalOffset<FRichCurve>(0x0018, false);               // 0x0018(0x0080) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<ERBFDistanceMethod>                 _offDistanceMethod                                             = new ExternalOffset<ERBFDistanceMethod>(0x0098, false);       // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ERBFFunctionType>                   _offFunctionType                                               = new ExternalOffset<ERBFFunctionType>(0x0099, false);         // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               ScaleFactor                                                    => _offScaleFactor.GetValue();
	public byte/*(bool)*/                                      bApplyCustomCurve                                              => _offbApplyCustomCurve.GetValue();
	public FRichCurve                                          CustomCurve                                                    => _offCustomCurve.GetValue();
	public ERBFDistanceMethod                                  DistanceMethod                                                 => _offDistanceMethod.GetValue();
	public ERBFFunctionType                                    FunctionType                                                   => _offFunctionType.GetValue();
	#endregion

	public FRBFTarget(float c_ScaleFactor, byte/*(bool)*/ c_bApplyCustomCurve, FRichCurve c_CustomCurve, ERBFDistanceMethod c_DistanceMethod, ERBFFunctionType c_FunctionType) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offScaleFactor.SetValue(c_ScaleFactor);
		_offbApplyCustomCurve.SetValue(c_bApplyCustomCurve);
		_offCustomCurve.SetValue(c_CustomCurve);
		_offDistanceMethod.SetValue(c_DistanceMethod);
		_offFunctionType.SetValue(c_FunctionType);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// 0x0038 (0x0100 - 0x00C8)
public class FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase
{
	#region Offsets
	private ExternalOffset<FBoneReference>                     _offBoneToObserve                                              = new ExternalOffset<FBoneReference>(0x00C8, false);           // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EBoneControlSpace>>     _offDisplaySpace                                               = new ExternalOffset<TEnumAsByte<EBoneControlSpace>>(0x00D8, false); // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbRelativeToRefPose                                         = new ExternalOffset<byte/*(bool)*/>(0x00D9);                  // 0x00D9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offTranslation                                                = new ExternalOffset<FVector>(0x00DC, false);                  // 0x00DC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FRotator>                           _offRotation                                                   = new ExternalOffset<FRotator>(0x00E8, false);                 // 0x00E8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offScale                                                      = new ExternalOffset<FVector>(0x00F4, false);                  // 0x00F4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FBoneReference                                      BoneToObserve                                                  => _offBoneToObserve.GetValue();
	public TEnumAsByte<EBoneControlSpace>                      DisplaySpace                                                   => _offDisplaySpace.GetValue();
	public byte/*(bool)*/                                      bRelativeToRefPose                                             => _offbRelativeToRefPose.GetValue();
	public FVector                                             Translation                                                    => _offTranslation.GetValue();
	public FRotator                                            Rotation                                                       => _offRotation.GetValue();
	public FVector                                             Scale                                                          => _offScale.GetValue();
	#endregion

	public FAnimNode_ObserveBone(FBoneReference c_BoneToObserve, TEnumAsByte<EBoneControlSpace> c_DisplaySpace, byte/*(bool)*/ c_bRelativeToRefPose, FVector c_Translation, FRotator c_Rotation, FVector c_Scale) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBoneToObserve.SetValue(c_BoneToObserve);
		_offDisplaySpace.SetValue(c_DisplaySpace);
		_offbRelativeToRefPose.SetValue(c_bRelativeToRefPose);
		_offTranslation.SetValue(c_Translation);
		_offRotation.SetValue(c_Rotation);
		_offScale.SetValue(c_Scale);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// 0x0030 (0x00F8 - 0x00C8)
public class FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase
{
	#region Offsets
	private ExternalOffset<FBoneReference>                     _offSourceBone                                                 = new ExternalOffset<FBoneReference>(0x00C8, false);           // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneReference>                     _offTargetBone                                                 = new ExternalOffset<FBoneReference>(0x00D8, false);           // 0x00D8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbCopyTranslation                                           = new ExternalOffset<byte/*(bool)*/>(0x00E8);                  // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbCopyRotation                                              = new ExternalOffset<byte/*(bool)*/>(0x00E9);                  // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbCopyScale                                                 = new ExternalOffset<byte/*(bool)*/>(0x00EA);                  // 0x00EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ECopyBoneDeltaMode>                 _offCopyMode                                                   = new ExternalOffset<ECopyBoneDeltaMode>(0x00EB, false);       // 0x00EB(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTranslationMultiplier                                      = new ExternalOffset<float>(0x00EC);                           // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRotationMultiplier                                         = new ExternalOffset<float>(0x00F0);                           // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offScaleMultiplier                                            = new ExternalOffset<float>(0x00F4);                           // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FBoneReference                                      SourceBone                                                     => _offSourceBone.GetValue();
	public FBoneReference                                      TargetBone                                                     => _offTargetBone.GetValue();
	public byte/*(bool)*/                                      bCopyTranslation                                               => _offbCopyTranslation.GetValue();
	public byte/*(bool)*/                                      bCopyRotation                                                  => _offbCopyRotation.GetValue();
	public byte/*(bool)*/                                      bCopyScale                                                     => _offbCopyScale.GetValue();
	public ECopyBoneDeltaMode                                  CopyMode                                                       => _offCopyMode.GetValue();
	public float                                               TranslationMultiplier                                          => _offTranslationMultiplier.GetValue();
	public float                                               RotationMultiplier                                             => _offRotationMultiplier.GetValue();
	public float                                               ScaleMultiplier                                                => _offScaleMultiplier.GetValue();
	#endregion

	public FAnimNode_CopyBoneDelta(FBoneReference c_SourceBone, FBoneReference c_TargetBone, byte/*(bool)*/ c_bCopyTranslation, byte/*(bool)*/ c_bCopyRotation, byte/*(bool)*/ c_bCopyScale, ECopyBoneDeltaMode c_CopyMode, float c_TranslationMultiplier, float c_RotationMultiplier, float c_ScaleMultiplier) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSourceBone.SetValue(c_SourceBone);
		_offTargetBone.SetValue(c_TargetBone);
		_offbCopyTranslation.SetValue(c_bCopyTranslation);
		_offbCopyRotation.SetValue(c_bCopyRotation);
		_offbCopyScale.SetValue(c_bCopyScale);
		_offCopyMode.SetValue(c_CopyMode);
		_offTranslationMultiplier.SetValue(c_TranslationMultiplier);
		_offRotationMultiplier.SetValue(c_RotationMultiplier);
		_offScaleMultiplier.SetValue(c_ScaleMultiplier);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
// 0x0488 (0x0550 - 0x00C8)
public class FAnimNode_RigidBody : FAnimNode_SkeletalControlBase
{
	#region Offsets
	private ExternalOffset<UPhysicsAsset>                      _offOverridePhysicsAsset                                       = new ExternalOffset<UPhysicsAsset>(0x00C8, true);             // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offOverrideWorldGravity                                       = new ExternalOffset<FVector>(0x0160, false);                  // 0x0160(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offExternalForce                                              = new ExternalOffset<FVector>(0x016C, false);                  // 0x016C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offComponentLinearAccScale                                    = new ExternalOffset<FVector>(0x0178, false);                  // 0x0178(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offComponentLinearVelScale                                    = new ExternalOffset<FVector>(0x0184, false);                  // 0x0184(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offComponentAppliedLinearAccClamp                             = new ExternalOffset<FVector>(0x0190, false);                  // 0x0190(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCachedBoundsScale                                          = new ExternalOffset<float>(0x019C);                           // 0x019C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneReference>                     _offBaseBoneRef                                                = new ExternalOffset<FBoneReference>(0x01A0, false);           // 0x01A0(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ECollisionChannel>>     _offOverlapChannel                                             = new ExternalOffset<TEnumAsByte<ECollisionChannel>>(0x01B0, false); // 0x01B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESimulationSpace>                   _offSimulationSpace                                            = new ExternalOffset<ESimulationSpace>(0x01B1, false);         // 0x01B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbForceDisableCollisionBetweenConstraintBodies              = new ExternalOffset<byte/*(bool)*/>(0x01B2);                  // 0x01B2(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbEnableWorldGeometry                                       = new ExternalOffset<char>(0x01B4, false);                     // 0x01B4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverrideWorldGravity                                      = new ExternalOffset<char>(0x01B4, false);                     // 0x01B4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbTransferBoneVelocities                                    = new ExternalOffset<char>(0x01B4, false);                     // 0x01B4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbFreezeIncomingPoseOnStart                                 = new ExternalOffset<char>(0x01B4, false);                     // 0x01B4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbClampLinearTranslationLimitToRefPose                      = new ExternalOffset<char>(0x01B4, false);                     // 0x01B4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UPhysicsAsset                                       OverridePhysicsAsset                                           => _offOverridePhysicsAsset.GetValue();
	public FVector                                             OverrideWorldGravity                                           => _offOverrideWorldGravity.GetValue();
	public FVector                                             ExternalForce                                                  => _offExternalForce.GetValue();
	public FVector                                             ComponentLinearAccScale                                        => _offComponentLinearAccScale.GetValue();
	public FVector                                             ComponentLinearVelScale                                        => _offComponentLinearVelScale.GetValue();
	public FVector                                             ComponentAppliedLinearAccClamp                                 => _offComponentAppliedLinearAccClamp.GetValue();
	public float                                               CachedBoundsScale                                              => _offCachedBoundsScale.GetValue();
	public FBoneReference                                      BaseBoneRef                                                    => _offBaseBoneRef.GetValue();
	public TEnumAsByte<ECollisionChannel>                      OverlapChannel                                                 => _offOverlapChannel.GetValue();
	public ESimulationSpace                                    SimulationSpace                                                => _offSimulationSpace.GetValue();
	public byte/*(bool)*/                                      bForceDisableCollisionBetweenConstraintBodies                  => _offbForceDisableCollisionBetweenConstraintBodies.GetValue();
	#endregion

	public FAnimNode_RigidBody(UPhysicsAsset c_OverridePhysicsAsset, FVector c_OverrideWorldGravity, FVector c_ExternalForce, FVector c_ComponentLinearAccScale, FVector c_ComponentLinearVelScale, FVector c_ComponentAppliedLinearAccClamp, float c_CachedBoundsScale, FBoneReference c_BaseBoneRef, TEnumAsByte<ECollisionChannel> c_OverlapChannel, ESimulationSpace c_SimulationSpace, byte/*(bool)*/ c_bForceDisableCollisionBetweenConstraintBodies) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offOverridePhysicsAsset.SetValue(c_OverridePhysicsAsset);
		_offOverrideWorldGravity.SetValue(c_OverrideWorldGravity);
		_offExternalForce.SetValue(c_ExternalForce);
		_offComponentLinearAccScale.SetValue(c_ComponentLinearAccScale);
		_offComponentLinearVelScale.SetValue(c_ComponentLinearVelScale);
		_offComponentAppliedLinearAccClamp.SetValue(c_ComponentAppliedLinearAccClamp);
		_offCachedBoundsScale.SetValue(c_CachedBoundsScale);
		_offBaseBoneRef.SetValue(c_BaseBoneRef);
		_offOverlapChannel.SetValue(c_OverlapChannel);
		_offSimulationSpace.SetValue(c_SimulationSpace);
		_offbForceDisableCollisionBetweenConstraintBodies.SetValue(c_bForceDisableCollisionBetweenConstraintBodies);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// 0x0020 (0x0098 - 0x0078)
public class FAnimNode_PoseBlendNode : FAnimNode_PoseHandler
{
	#region Offsets
	private ExternalOffset<FPoseLink>                          _offSourcePose                                                 = new ExternalOffset<FPoseLink>(0x0078, false);                // 0x0078(0x0010) (Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<EAlphaBlendOption>                  _offBlendOption                                                = new ExternalOffset<EAlphaBlendOption>(0x0088, false);        // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UCurveFloat>                        _offCustomCurve                                                = new ExternalOffset<UCurveFloat>(0x0090, true);               // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPoseLink                                           SourcePose                                                     => _offSourcePose.GetValue();
	public EAlphaBlendOption                                   BlendOption                                                    => _offBlendOption.GetValue();
	public UCurveFloat                                         CustomCurve                                                    => _offCustomCurve.GetValue();
	#endregion

	public FAnimNode_PoseBlendNode(FPoseLink c_SourcePose, EAlphaBlendOption c_BlendOption, UCurveFloat c_CustomCurve) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSourcePose.SetValue(c_SourcePose);
		_offBlendOption.SetValue(c_BlendOption);
		_offCustomCurve.SetValue(c_CustomCurve);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// 0x0130 (0x0140 - 0x0010)
public class FAnimNode_CopyPoseFromMesh : FAnimNode_Base
{
	#region Offsets
	private ExternalOffset<TWeakObjectPtr<USkeletalMeshComponent>> _offSourceMeshComponent                                        = new ExternalOffset<TWeakObjectPtr<USkeletalMeshComponent>>(0x0010, false); // 0x0010(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbUseAttachedParent                                         = new ExternalOffset<byte/*(bool)*/>(0x0018);                  // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbCopyCurves                                                = new ExternalOffset<byte/*(bool)*/>(0x0019);                  // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TWeakObjectPtr<USkeletalMeshComponent>              SourceMeshComponent                                            => _offSourceMeshComponent.GetValue();
	public byte/*(bool)*/                                      bUseAttachedParent                                             => _offbUseAttachedParent.GetValue();
	public byte/*(bool)*/                                      bCopyCurves                                                    => _offbCopyCurves.GetValue();
	#endregion

	public FAnimNode_CopyPoseFromMesh(TWeakObjectPtr<USkeletalMeshComponent> c_SourceMeshComponent, byte/*(bool)*/ c_bUseAttachedParent, byte/*(bool)*/ c_bCopyCurves) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSourceMeshComponent.SetValue(c_SourceMeshComponent);
		_offbUseAttachedParent.SetValue(c_bUseAttachedParent);
		_offbCopyCurves.SetValue(c_bCopyCurves);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// 0x0030 (0x0040 - 0x0010)
public class FAnimNode_CurveSource : FAnimNode_Base
{
	#region Offsets
	private ExternalOffset<FPoseLink>                          _offSourcePose                                                 = new ExternalOffset<FPoseLink>(0x0010, false);                // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offSourceBinding                                              = new ExternalOffset<FName>(0x0020, false);                    // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offAlpha                                                      = new ExternalOffset<float>(0x0028);                           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TScriptInterface<UCurveSourceInterface>> _offCurveSource                                                = new ExternalOffset<TScriptInterface<UCurveSourceInterface>>(0x0030, false); // 0x0030(0x0010) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPoseLink                                           SourcePose                                                     => _offSourcePose.GetValue();
	public FName                                               SourceBinding                                                  => _offSourceBinding.GetValue();
	public float                                               Alpha                                                          => _offAlpha.GetValue();
	public TScriptInterface<UCurveSourceInterface>             CurveSource                                                    => _offCurveSource.GetValue();
	#endregion

	public FAnimNode_CurveSource(FPoseLink c_SourcePose, FName c_SourceBinding, float c_Alpha, TScriptInterface<UCurveSourceInterface> c_CurveSource) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSourcePose.SetValue(c_SourcePose);
		_offSourceBinding.SetValue(c_SourceBinding);
		_offAlpha.SetValue(c_Alpha);
		_offCurveSource.SetValue(c_CurveSource);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// 0x00D0 (0x01B0 - 0x00E0)
public class FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer
{
	#region Offsets
	private ExternalOffset<FPoseLink>                          _offBasePose                                                   = new ExternalOffset<FPoseLink>(0x0140, false);                // 0x0140(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offLODThreshold                                               = new ExternalOffset<int>(0x0150);                             // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offSourceSocketName                                           = new ExternalOffset<FName>(0x0154, false);                    // 0x0154(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offPivotSocketName                                            = new ExternalOffset<FName>(0x015C, false);                    // 0x015C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offLookAtLocation                                             = new ExternalOffset<FVector>(0x0164, false);                  // 0x0164(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offSocketAxis                                                 = new ExternalOffset<FVector>(0x0170, false);                  // 0x0170(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offAlpha                                                      = new ExternalOffset<float>(0x017C);                           // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPoseLink                                           BasePose                                                       => _offBasePose.GetValue();
	public int                                                 LODThreshold                                                   => _offLODThreshold.GetValue();
	public FName                                               SourceSocketName                                               => _offSourceSocketName.GetValue();
	public FName                                               PivotSocketName                                                => _offPivotSocketName.GetValue();
	public FVector                                             LookAtLocation                                                 => _offLookAtLocation.GetValue();
	public FVector                                             SocketAxis                                                     => _offSocketAxis.GetValue();
	public float                                               Alpha                                                          => _offAlpha.GetValue();
	#endregion

	public FAnimNode_AimOffsetLookAt(FPoseLink c_BasePose, int c_LODThreshold, FName c_SourceSocketName, FName c_PivotSocketName, FVector c_LookAtLocation, FVector c_SocketAxis, float c_Alpha) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBasePose.SetValue(c_BasePose);
		_offLODThreshold.SetValue(c_LODThreshold);
		_offSourceSocketName.SetValue(c_SourceSocketName);
		_offPivotSocketName.SetValue(c_PivotSocketName);
		_offLookAtLocation.SetValue(c_LookAtLocation);
		_offSocketAxis.SetValue(c_SocketAxis);
		_offAlpha.SetValue(c_Alpha);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// 0x00C8 (0x0190 - 0x00C8)
public class FAnimNode_Fabrik : FAnimNode_SkeletalControlBase
{
	#region Offsets
	private ExternalOffset<FTransform>                         _offEffectorTransform                                          = new ExternalOffset<FTransform>(0x00D0, false);               // 0x00D0(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneSocketTarget>                  _offEffectorTarget                                             = new ExternalOffset<FBoneSocketTarget>(0x0100, false);        // 0x0100(0x0060) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneReference>                     _offTipBone                                                    = new ExternalOffset<FBoneReference>(0x0160, false);           // 0x0160(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneReference>                     _offRootBone                                                   = new ExternalOffset<FBoneReference>(0x0170, false);           // 0x0170(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPrecision                                                  = new ExternalOffset<float>(0x0180);                           // 0x0180(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMaxIterations                                              = new ExternalOffset<int>(0x0184);                             // 0x0184(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EBoneControlSpace>>     _offEffectorTransformSpace                                     = new ExternalOffset<TEnumAsByte<EBoneControlSpace>>(0x0188, false); // 0x0188(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EBoneRotationSource>>   _offEffectorRotationSource                                     = new ExternalOffset<TEnumAsByte<EBoneRotationSource>>(0x0189, false); // 0x0189(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FTransform                                          EffectorTransform                                              => _offEffectorTransform.GetValue();
	public FBoneSocketTarget                                   EffectorTarget                                                 => _offEffectorTarget.GetValue();
	public FBoneReference                                      TipBone                                                        => _offTipBone.GetValue();
	public FBoneReference                                      RootBone                                                       => _offRootBone.GetValue();
	public float                                               Precision                                                      => _offPrecision.GetValue();
	public int                                                 MaxIterations                                                  => _offMaxIterations.GetValue();
	public TEnumAsByte<EBoneControlSpace>                      EffectorTransformSpace                                         => _offEffectorTransformSpace.GetValue();
	public TEnumAsByte<EBoneRotationSource>                    EffectorRotationSource                                         => _offEffectorRotationSource.GetValue();
	#endregion

	public FAnimNode_Fabrik(FTransform c_EffectorTransform, FBoneSocketTarget c_EffectorTarget, FBoneReference c_TipBone, FBoneReference c_RootBone, float c_Precision, int c_MaxIterations, TEnumAsByte<EBoneControlSpace> c_EffectorTransformSpace, TEnumAsByte<EBoneRotationSource> c_EffectorRotationSource) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offEffectorTransform.SetValue(c_EffectorTransform);
		_offEffectorTarget.SetValue(c_EffectorTarget);
		_offTipBone.SetValue(c_TipBone);
		_offRootBone.SetValue(c_RootBone);
		_offPrecision.SetValue(c_Precision);
		_offMaxIterations.SetValue(c_MaxIterations);
		_offEffectorTransformSpace.SetValue(c_EffectorTransformSpace);
		_offEffectorRotationSource.SetValue(c_EffectorRotationSource);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody_Chaos
// 0x0428 (0x04F0 - 0x00C8)
public class FAnimNode_RigidBody_Chaos : FAnimNode_SkeletalControlBase
{
	#region Offsets
	private ExternalOffset<UPhysicsAsset>                      _offOverridePhysicsAsset                                       = new ExternalOffset<UPhysicsAsset>(0x00C8, true);             // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UChaosPhysicalMaterial>             _offPhysicalMaterial                                           = new ExternalOffset<UChaosPhysicalMaterial>(0x00D0, true);    // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbSimulating                                                = new ExternalOffset<byte/*(bool)*/>(0x00D8);                  // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offNumIterations                                              = new ExternalOffset<int>(0x00DC);                             // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbNotifyCollisions                                          = new ExternalOffset<byte/*(bool)*/>(0x00E0);                  // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EObjectStateTypeEnum>               _offObjectType                                                 = new ExternalOffset<EObjectStateTypeEnum>(0x00E1, false);     // 0x00E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDensity                                                    = new ExternalOffset<float>(0x00E4);                           // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinMass                                                    = new ExternalOffset<float>(0x00E8);                           // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMaxMass                                                    = new ExternalOffset<float>(0x00EC);                           // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ECollisionTypeEnum>                 _offCollisionType                                              = new ExternalOffset<ECollisionTypeEnum>(0x00F0, false);       // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offImplicitShapeParticlesPerUnitArea                          = new ExternalOffset<float>(0x00F4);                           // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offImplicitShapeMinNumParticles                               = new ExternalOffset<int>(0x00F8);                             // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offImplicitShapeMaxNumParticles                               = new ExternalOffset<int>(0x00FC);                             // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMinLevelSetResolution                                      = new ExternalOffset<int>(0x0100);                             // 0x0100(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMaxLevelSetResolution                                      = new ExternalOffset<int>(0x0104);                             // 0x0104(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offCollisionGroup                                             = new ExternalOffset<int>(0x0108);                             // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EInitialVelocityTypeEnum>           _offInitialVelocityType                                        = new ExternalOffset<EInitialVelocityTypeEnum>(0x010C, false); // 0x010C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offInitialLinearVelocity                                      = new ExternalOffset<FVector>(0x0110, false);                  // 0x0110(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offInitialAngularVelocity                                     = new ExternalOffset<FVector>(0x011C, false);                  // 0x011C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offOverrideWorldGravity                                       = new ExternalOffset<FVector>(0x01C0, false);                  // 0x01C0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offExternalForce                                              = new ExternalOffset<FVector>(0x01CC, false);                  // 0x01CC(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offComponentLinearAccScale                                    = new ExternalOffset<FVector>(0x01D8, false);                  // 0x01D8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offComponentLinearVelScale                                    = new ExternalOffset<FVector>(0x01E4, false);                  // 0x01E4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offComponentAppliedLinearAccClamp                             = new ExternalOffset<FVector>(0x01F0, false);                  // 0x01F0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCachedBoundsScale                                          = new ExternalOffset<float>(0x01FC);                           // 0x01FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneReference>                     _offBaseBoneRef                                                = new ExternalOffset<FBoneReference>(0x0200, false);           // 0x0200(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ECollisionChannel>>     _offOverlapChannel                                             = new ExternalOffset<TEnumAsByte<ECollisionChannel>>(0x0210, false); // 0x0210(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESimulationSpace>                   _offSimulationSpace                                            = new ExternalOffset<ESimulationSpace>(0x0211, false);         // 0x0211(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbForceDisableCollisionBetweenConstraintBodies              = new ExternalOffset<byte/*(bool)*/>(0x0212);                  // 0x0212(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbEnableWorldGeometry                                       = new ExternalOffset<char>(0x0214, false);                     // 0x0214(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverrideWorldGravity                                      = new ExternalOffset<char>(0x0214, false);                     // 0x0214(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbTransferBoneVelocities                                    = new ExternalOffset<char>(0x0214, false);                     // 0x0214(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbFreezeIncomingPoseOnStart                                 = new ExternalOffset<char>(0x0214, false);                     // 0x0214(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbClampLinearTranslationLimitToRefPose                      = new ExternalOffset<char>(0x0214, false);                     // 0x0214(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UPhysicsAsset                                       OverridePhysicsAsset                                           => _offOverridePhysicsAsset.GetValue();
	public UChaosPhysicalMaterial                              PhysicalMaterial                                               => _offPhysicalMaterial.GetValue();
	public byte/*(bool)*/                                      bSimulating                                                    => _offbSimulating.GetValue();
	public int                                                 NumIterations                                                  => _offNumIterations.GetValue();
	public byte/*(bool)*/                                      bNotifyCollisions                                              => _offbNotifyCollisions.GetValue();
	public EObjectStateTypeEnum                                ObjectType                                                     => _offObjectType.GetValue();
	public float                                               Density                                                        => _offDensity.GetValue();
	public float                                               MinMass                                                        => _offMinMass.GetValue();
	public float                                               MaxMass                                                        => _offMaxMass.GetValue();
	public ECollisionTypeEnum                                  CollisionType                                                  => _offCollisionType.GetValue();
	public float                                               ImplicitShapeParticlesPerUnitArea                              => _offImplicitShapeParticlesPerUnitArea.GetValue();
	public int                                                 ImplicitShapeMinNumParticles                                   => _offImplicitShapeMinNumParticles.GetValue();
	public int                                                 ImplicitShapeMaxNumParticles                                   => _offImplicitShapeMaxNumParticles.GetValue();
	public int                                                 MinLevelSetResolution                                          => _offMinLevelSetResolution.GetValue();
	public int                                                 MaxLevelSetResolution                                          => _offMaxLevelSetResolution.GetValue();
	public int                                                 CollisionGroup                                                 => _offCollisionGroup.GetValue();
	public EInitialVelocityTypeEnum                            InitialVelocityType                                            => _offInitialVelocityType.GetValue();
	public FVector                                             InitialLinearVelocity                                          => _offInitialLinearVelocity.GetValue();
	public FVector                                             InitialAngularVelocity                                         => _offInitialAngularVelocity.GetValue();
	public FVector                                             OverrideWorldGravity                                           => _offOverrideWorldGravity.GetValue();
	public FVector                                             ExternalForce                                                  => _offExternalForce.GetValue();
	public FVector                                             ComponentLinearAccScale                                        => _offComponentLinearAccScale.GetValue();
	public FVector                                             ComponentLinearVelScale                                        => _offComponentLinearVelScale.GetValue();
	public FVector                                             ComponentAppliedLinearAccClamp                                 => _offComponentAppliedLinearAccClamp.GetValue();
	public float                                               CachedBoundsScale                                              => _offCachedBoundsScale.GetValue();
	public FBoneReference                                      BaseBoneRef                                                    => _offBaseBoneRef.GetValue();
	public TEnumAsByte<ECollisionChannel>                      OverlapChannel                                                 => _offOverlapChannel.GetValue();
	public ESimulationSpace                                    SimulationSpace                                                => _offSimulationSpace.GetValue();
	public byte/*(bool)*/                                      bForceDisableCollisionBetweenConstraintBodies                  => _offbForceDisableCollisionBetweenConstraintBodies.GetValue();
	#endregion

	public FAnimNode_RigidBody_Chaos(UPhysicsAsset c_OverridePhysicsAsset, UChaosPhysicalMaterial c_PhysicalMaterial, byte/*(bool)*/ c_bSimulating, int c_NumIterations, byte/*(bool)*/ c_bNotifyCollisions, EObjectStateTypeEnum c_ObjectType, float c_Density, float c_MinMass, float c_MaxMass, ECollisionTypeEnum c_CollisionType, float c_ImplicitShapeParticlesPerUnitArea, int c_ImplicitShapeMinNumParticles, int c_ImplicitShapeMaxNumParticles, int c_MinLevelSetResolution, int c_MaxLevelSetResolution, int c_CollisionGroup, EInitialVelocityTypeEnum c_InitialVelocityType, FVector c_InitialLinearVelocity, FVector c_InitialAngularVelocity, FVector c_OverrideWorldGravity, FVector c_ExternalForce, FVector c_ComponentLinearAccScale, FVector c_ComponentLinearVelScale, FVector c_ComponentAppliedLinearAccClamp, float c_CachedBoundsScale, FBoneReference c_BaseBoneRef, TEnumAsByte<ECollisionChannel> c_OverlapChannel, ESimulationSpace c_SimulationSpace, byte/*(bool)*/ c_bForceDisableCollisionBetweenConstraintBodies) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offOverridePhysicsAsset.SetValue(c_OverridePhysicsAsset);
		_offPhysicalMaterial.SetValue(c_PhysicalMaterial);
		_offbSimulating.SetValue(c_bSimulating);
		_offNumIterations.SetValue(c_NumIterations);
		_offbNotifyCollisions.SetValue(c_bNotifyCollisions);
		_offObjectType.SetValue(c_ObjectType);
		_offDensity.SetValue(c_Density);
		_offMinMass.SetValue(c_MinMass);
		_offMaxMass.SetValue(c_MaxMass);
		_offCollisionType.SetValue(c_CollisionType);
		_offImplicitShapeParticlesPerUnitArea.SetValue(c_ImplicitShapeParticlesPerUnitArea);
		_offImplicitShapeMinNumParticles.SetValue(c_ImplicitShapeMinNumParticles);
		_offImplicitShapeMaxNumParticles.SetValue(c_ImplicitShapeMaxNumParticles);
		_offMinLevelSetResolution.SetValue(c_MinLevelSetResolution);
		_offMaxLevelSetResolution.SetValue(c_MaxLevelSetResolution);
		_offCollisionGroup.SetValue(c_CollisionGroup);
		_offInitialVelocityType.SetValue(c_InitialVelocityType);
		_offInitialLinearVelocity.SetValue(c_InitialLinearVelocity);
		_offInitialAngularVelocity.SetValue(c_InitialAngularVelocity);
		_offOverrideWorldGravity.SetValue(c_OverrideWorldGravity);
		_offExternalForce.SetValue(c_ExternalForce);
		_offComponentLinearAccScale.SetValue(c_ComponentLinearAccScale);
		_offComponentLinearVelScale.SetValue(c_ComponentLinearVelScale);
		_offComponentAppliedLinearAccClamp.SetValue(c_ComponentAppliedLinearAccClamp);
		_offCachedBoundsScale.SetValue(c_CachedBoundsScale);
		_offBaseBoneRef.SetValue(c_BaseBoneRef);
		_offOverlapChannel.SetValue(c_OverlapChannel);
		_offSimulationSpace.SetValue(c_SimulationSpace);
		_offbForceDisableCollisionBetweenConstraintBodies.SetValue(c_bForceDisableCollisionBetweenConstraintBodies);
	}
}
// ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
// 0x0130
public class FRotationRetargetingInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbEnabled                                                   = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FTransform>                         _offSource                                                     = new ExternalOffset<FTransform>(0x0010, false);               // 0x0010(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FTransform>                         _offTarget                                                     = new ExternalOffset<FTransform>(0x0040, false);               // 0x0040(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<ERotationComponent>                 _offRotationComponent                                          = new ExternalOffset<ERotationComponent>(0x0070, false);       // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offTwistAxis                                                  = new ExternalOffset<FVector>(0x0074, false);                  // 0x0074(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbUseAbsoluteAngle                                          = new ExternalOffset<byte/*(bool)*/>(0x0080);                  // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offSourceMinimum                                              = new ExternalOffset<float>(0x0084);                           // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offSourceMaximum                                              = new ExternalOffset<float>(0x0088);                           // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTargetMinimum                                              = new ExternalOffset<float>(0x008C);                           // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTargetMaximum                                              = new ExternalOffset<float>(0x0090);                           // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EEasingFuncType>                    _offEasingType                                                 = new ExternalOffset<EEasingFuncType>(0x0094, false);          // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FRuntimeFloatCurve>                 _offCustomCurve                                                = new ExternalOffset<FRuntimeFloatCurve>(0x0098, false);       // 0x0098(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbFlipEasing                                                = new ExternalOffset<byte/*(bool)*/>(0x0120);                  // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offEasingWeight                                               = new ExternalOffset<float>(0x0124);                           // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbClamp                                                     = new ExternalOffset<byte/*(bool)*/>(0x0128);                  // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bEnabled                                                       => _offbEnabled.GetValue();
	public FTransform                                          Source                                                         => _offSource.GetValue();
	public FTransform                                          Target                                                         => _offTarget.GetValue();
	public ERotationComponent                                  RotationComponent                                              => _offRotationComponent.GetValue();
	public FVector                                             TwistAxis                                                      => _offTwistAxis.GetValue();
	public byte/*(bool)*/                                      bUseAbsoluteAngle                                              => _offbUseAbsoluteAngle.GetValue();
	public float                                               SourceMinimum                                                  => _offSourceMinimum.GetValue();
	public float                                               SourceMaximum                                                  => _offSourceMaximum.GetValue();
	public float                                               TargetMinimum                                                  => _offTargetMinimum.GetValue();
	public float                                               TargetMaximum                                                  => _offTargetMaximum.GetValue();
	public EEasingFuncType                                     EasingType                                                     => _offEasingType.GetValue();
	public FRuntimeFloatCurve                                  CustomCurve                                                    => _offCustomCurve.GetValue();
	public byte/*(bool)*/                                      bFlipEasing                                                    => _offbFlipEasing.GetValue();
	public float                                               EasingWeight                                                   => _offEasingWeight.GetValue();
	public byte/*(bool)*/                                      bClamp                                                         => _offbClamp.GetValue();
	#endregion

	public FRotationRetargetingInfo(byte/*(bool)*/ c_bEnabled, FTransform c_Source, FTransform c_Target, ERotationComponent c_RotationComponent, FVector c_TwistAxis, byte/*(bool)*/ c_bUseAbsoluteAngle, float c_SourceMinimum, float c_SourceMaximum, float c_TargetMinimum, float c_TargetMaximum, EEasingFuncType c_EasingType, FRuntimeFloatCurve c_CustomCurve, byte/*(bool)*/ c_bFlipEasing, float c_EasingWeight, byte/*(bool)*/ c_bClamp) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbEnabled.SetValue(c_bEnabled);
		_offSource.SetValue(c_Source);
		_offTarget.SetValue(c_Target);
		_offRotationComponent.SetValue(c_RotationComponent);
		_offTwistAxis.SetValue(c_TwistAxis);
		_offbUseAbsoluteAngle.SetValue(c_bUseAbsoluteAngle);
		_offSourceMinimum.SetValue(c_SourceMinimum);
		_offSourceMaximum.SetValue(c_SourceMaximum);
		_offTargetMinimum.SetValue(c_TargetMinimum);
		_offTargetMaximum.SetValue(c_TargetMaximum);
		_offEasingType.SetValue(c_EasingType);
		_offCustomCurve.SetValue(c_CustomCurve);
		_offbFlipEasing.SetValue(c_bFlipEasing);
		_offEasingWeight.SetValue(c_EasingWeight);
		_offbClamp.SetValue(c_bClamp);
	}
}
// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// 0x0378 (0x0440 - 0x00C8)
public class FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase
{
	#region Offsets
	private ExternalOffset<float>                              _offLinearDampingOverride                                      = new ExternalOffset<float>(0x00C8);                           // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offAngularDampingOverride                                     = new ExternalOffset<float>(0x00CC);                           // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneReference>                     _offRelativeSpaceBone                                          = new ExternalOffset<FBoneReference>(0x0130, false);           // 0x0130(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneReference>                     _offBoundBone                                                  = new ExternalOffset<FBoneReference>(0x0140, false);           // 0x0140(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoneReference>                     _offChainEnd                                                   = new ExternalOffset<FBoneReference>(0x0150, false);           // 0x0150(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offBoxExtents                                                 = new ExternalOffset<FVector>(0x0160, false);                  // 0x0160(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offLocalJointOffset                                           = new ExternalOffset<FVector>(0x016C, false);                  // 0x016C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offGravityScale                                               = new ExternalOffset<float>(0x0178);                           // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offGravityOverride                                            = new ExternalOffset<FVector>(0x017C, false);                  // 0x017C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLinearSpringConstant                                       = new ExternalOffset<float>(0x0188);                           // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offAngularSpringConstant                                      = new ExternalOffset<float>(0x018C);                           // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offWindScale                                                  = new ExternalOffset<float>(0x0190);                           // 0x0190(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offComponentLinearAccScale                                    = new ExternalOffset<FVector>(0x0194, false);                  // 0x0194(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offComponentLinearVelScale                                    = new ExternalOffset<FVector>(0x01A0, false);                  // 0x01A0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offComponentAppliedLinearAccClamp                             = new ExternalOffset<FVector>(0x01AC, false);                  // 0x01AC(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offAngularBiasOverride                                        = new ExternalOffset<float>(0x01B8);                           // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offNumSolverIterationsPreUpdate                               = new ExternalOffset<int>(0x01BC);                             // 0x01BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offNumSolverIterationsPostUpdate                              = new ExternalOffset<int>(0x01C0);                             // 0x01C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FAnimPhysConstraintSetup>           _offConstraintSetup                                            = new ExternalOffset<FAnimPhysConstraintSetup>(0x01C4, false); // 0x01C4(0x0048) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FAnimPhysSphericalLimit>>    _offSphericalLimits                                            = new ExternalOffset<TArray<FAnimPhysSphericalLimit>>(0x0210, false); // 0x0210(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offSphereCollisionRadius                                      = new ExternalOffset<float>(0x0220);                           // 0x0220(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offExternalForce                                              = new ExternalOffset<FVector>(0x0224, false);                  // 0x0224(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FAnimPhysPlanarLimit>>       _offPlanarLimits                                               = new ExternalOffset<TArray<FAnimPhysPlanarLimit>>(0x0230, false); // 0x0230(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<EAnimPhysCollisionType>             _offCollisionType                                              = new ExternalOffset<EAnimPhysCollisionType>(0x0240, false);   // 0x0240(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EAnimPhysSimSpaceType>              _offSimulationSpace                                            = new ExternalOffset<EAnimPhysSimSpaceType>(0x0241, false);    // 0x0241(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbUseSphericalLimits                                        = new ExternalOffset<char>(0x0244, false);                     // 0x0244(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbUsePlanarLimit                                            = new ExternalOffset<char>(0x0244, false);                     // 0x0244(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbDoUpdate                                                  = new ExternalOffset<char>(0x0244, false);                     // 0x0244(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbDoEval                                                    = new ExternalOffset<char>(0x0244, false);                     // 0x0244(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverrideLinearDamping                                     = new ExternalOffset<char>(0x0244, false);                     // 0x0244(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverrideAngularBias                                       = new ExternalOffset<char>(0x0244, false);                     // 0x0244(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverrideAngularDamping                                    = new ExternalOffset<char>(0x0244, false);                     // 0x0244(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbEnableWind                                                = new ExternalOffset<char>(0x0244, false);                     // 0x0244(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbUseGravityOverride                                        = new ExternalOffset<char>(0x0245, false);                     // 0x0245(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbLinearSpring                                              = new ExternalOffset<char>(0x0245, false);                     // 0x0245(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbAngularSpring                                             = new ExternalOffset<char>(0x0245, false);                     // 0x0245(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbChain                                                     = new ExternalOffset<char>(0x0245, false);                     // 0x0245(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FRotationRetargetingInfo>           _offRetargetingSettings                                        = new ExternalOffset<FRotationRetargetingInfo>(0x0250, false); // 0x0250(0x0130) (Edit, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               LinearDampingOverride                                          => _offLinearDampingOverride.GetValue();
	public float                                               AngularDampingOverride                                         => _offAngularDampingOverride.GetValue();
	public FBoneReference                                      RelativeSpaceBone                                              => _offRelativeSpaceBone.GetValue();
	public FBoneReference                                      BoundBone                                                      => _offBoundBone.GetValue();
	public FBoneReference                                      ChainEnd                                                       => _offChainEnd.GetValue();
	public FVector                                             BoxExtents                                                     => _offBoxExtents.GetValue();
	public FVector                                             LocalJointOffset                                               => _offLocalJointOffset.GetValue();
	public float                                               GravityScale                                                   => _offGravityScale.GetValue();
	public FVector                                             GravityOverride                                                => _offGravityOverride.GetValue();
	public float                                               LinearSpringConstant                                           => _offLinearSpringConstant.GetValue();
	public float                                               AngularSpringConstant                                          => _offAngularSpringConstant.GetValue();
	public float                                               WindScale                                                      => _offWindScale.GetValue();
	public FVector                                             ComponentLinearAccScale                                        => _offComponentLinearAccScale.GetValue();
	public FVector                                             ComponentLinearVelScale                                        => _offComponentLinearVelScale.GetValue();
	public FVector                                             ComponentAppliedLinearAccClamp                                 => _offComponentAppliedLinearAccClamp.GetValue();
	public float                                               AngularBiasOverride                                            => _offAngularBiasOverride.GetValue();
	public int                                                 NumSolverIterationsPreUpdate                                   => _offNumSolverIterationsPreUpdate.GetValue();
	public int                                                 NumSolverIterationsPostUpdate                                  => _offNumSolverIterationsPostUpdate.GetValue();
	public FAnimPhysConstraintSetup                            ConstraintSetup                                                => _offConstraintSetup.GetValue();
	public TArray<FAnimPhysSphericalLimit>                     SphericalLimits                                                => _offSphericalLimits.GetValue();
	public float                                               SphereCollisionRadius                                          => _offSphereCollisionRadius.GetValue();
	public FVector                                             ExternalForce                                                  => _offExternalForce.GetValue();
	public TArray<FAnimPhysPlanarLimit>                        PlanarLimits                                                   => _offPlanarLimits.GetValue();
	public EAnimPhysCollisionType                              CollisionType                                                  => _offCollisionType.GetValue();
	public EAnimPhysSimSpaceType                               SimulationSpace                                                => _offSimulationSpace.GetValue();
	public FRotationRetargetingInfo                            RetargetingSettings                                            => _offRetargetingSettings.GetValue();
	#endregion

	public FAnimNode_AnimDynamics(float c_LinearDampingOverride, float c_AngularDampingOverride, FBoneReference c_RelativeSpaceBone, FBoneReference c_BoundBone, FBoneReference c_ChainEnd, FVector c_BoxExtents, FVector c_LocalJointOffset, float c_GravityScale, FVector c_GravityOverride, float c_LinearSpringConstant, float c_AngularSpringConstant, float c_WindScale, FVector c_ComponentLinearAccScale, FVector c_ComponentLinearVelScale, FVector c_ComponentAppliedLinearAccClamp, float c_AngularBiasOverride, int c_NumSolverIterationsPreUpdate, int c_NumSolverIterationsPostUpdate, FAnimPhysConstraintSetup c_ConstraintSetup, TArray<FAnimPhysSphericalLimit> c_SphericalLimits, float c_SphereCollisionRadius, FVector c_ExternalForce, TArray<FAnimPhysPlanarLimit> c_PlanarLimits, EAnimPhysCollisionType c_CollisionType, EAnimPhysSimSpaceType c_SimulationSpace, FRotationRetargetingInfo c_RetargetingSettings) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLinearDampingOverride.SetValue(c_LinearDampingOverride);
		_offAngularDampingOverride.SetValue(c_AngularDampingOverride);
		_offRelativeSpaceBone.SetValue(c_RelativeSpaceBone);
		_offBoundBone.SetValue(c_BoundBone);
		_offChainEnd.SetValue(c_ChainEnd);
		_offBoxExtents.SetValue(c_BoxExtents);
		_offLocalJointOffset.SetValue(c_LocalJointOffset);
		_offGravityScale.SetValue(c_GravityScale);
		_offGravityOverride.SetValue(c_GravityOverride);
		_offLinearSpringConstant.SetValue(c_LinearSpringConstant);
		_offAngularSpringConstant.SetValue(c_AngularSpringConstant);
		_offWindScale.SetValue(c_WindScale);
		_offComponentLinearAccScale.SetValue(c_ComponentLinearAccScale);
		_offComponentLinearVelScale.SetValue(c_ComponentLinearVelScale);
		_offComponentAppliedLinearAccClamp.SetValue(c_ComponentAppliedLinearAccClamp);
		_offAngularBiasOverride.SetValue(c_AngularBiasOverride);
		_offNumSolverIterationsPreUpdate.SetValue(c_NumSolverIterationsPreUpdate);
		_offNumSolverIterationsPostUpdate.SetValue(c_NumSolverIterationsPostUpdate);
		_offConstraintSetup.SetValue(c_ConstraintSetup);
		_offSphericalLimits.SetValue(c_SphericalLimits);
		_offSphereCollisionRadius.SetValue(c_SphereCollisionRadius);
		_offExternalForce.SetValue(c_ExternalForce);
		_offPlanarLimits.SetValue(c_PlanarLimits);
		_offCollisionType.SetValue(c_CollisionType);
		_offSimulationSpace.SetValue(c_SimulationSpace);
		_offRetargetingSettings.SetValue(c_RetargetingSettings);
	}
}

}