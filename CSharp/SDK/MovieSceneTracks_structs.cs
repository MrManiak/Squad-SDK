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

// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
public enum EMovieScene3DPathSection_Axis : byte
{
	MovieScene3DPathSection_Axis__X = 0,
	MovieScene3DPathSection_Axis__Y = 1,
	MovieScene3DPathSection_Axis__Z = 2,
	MovieScene3DPathSection_Axis__NEG_X = 3,
	MovieScene3DPathSection_Axis__NEG_Y = 4,
	MovieScene3DPathSection_Axis__NEG_Z = 5,
	MovieScene3DPathSection_Axis__MovieScene3DPathSection_MAX = 6
}

// Enum MovieSceneTracks.EFireEventsAtPosition
public enum EFireEventsAtPosition : byte
{
	EFireEventsAtPosition__AtStartOfEvaluation = 0,
	EFireEventsAtPosition__AtEndOfEvaluation = 1,
	EFireEventsAtPosition__AfterSpawn = 2,
	EFireEventsAtPosition__EFireEventsAtPosition_MAX = 3
}

// Enum MovieSceneTracks.ELevelVisibility
public enum ELevelVisibility : byte
{
	ELevelVisibility__Visible      = 0,
	ELevelVisibility__Hidden       = 1,
	ELevelVisibility__ELevelVisibility_MAX = 2
}

// Enum MovieSceneTracks.EParticleKey
public enum EParticleKey : byte
{
	EParticleKey__Activate         = 0,
	EParticleKey__Deactivate       = 1,
	EParticleKey__Trigger          = 2,
	EParticleKey__EParticleKey_MAX = 3
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// 0x00A8
public class FScalarParameterNameAndCurve : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offParameterName                                              = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneFloatChannel>            _offParameterCurve                                             = new ExternalOffset<FMovieSceneFloatChannel>(0x0008, false);  // 0x0008(0x00A0) (NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               ParameterName                                                  => _offParameterName.GetValue();
	public FMovieSceneFloatChannel                             ParameterCurve                                                 => _offParameterCurve.GetValue();
	#endregion

	public FScalarParameterNameAndCurve(FName c_ParameterName, FMovieSceneFloatChannel c_ParameterCurve) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offParameterName.SetValue(c_ParameterName);
		_offParameterCurve.SetValue(c_ParameterCurve);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneCameraCutSectionTemplate
// 0x0060 (0x0080 - 0x0020)
public class FMovieSceneCameraCutSectionTemplate : FMovieSceneEvalTemplate
{
	#region Offsets
	private ExternalOffset<FMovieSceneObjectBindingID>         _offCameraBindingID                                            = new ExternalOffset<FMovieSceneObjectBindingID>(0x0020, false); // 0x0020(0x0018) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FTransform>                         _offCutTransform                                               = new ExternalOffset<FTransform>(0x0040, false);               // 0x0040(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbHasCutTransform                                           = new ExternalOffset<byte/*(bool)*/>(0x0070);                  // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneObjectBindingID                          CameraBindingID                                                => _offCameraBindingID.GetValue();
	public FTransform                                          CutTransform                                                   => _offCutTransform.GetValue();
	public byte/*(bool)*/                                      bHasCutTransform                                               => _offbHasCutTransform.GetValue();
	#endregion

	public FMovieSceneCameraCutSectionTemplate(FMovieSceneObjectBindingID c_CameraBindingID, FTransform c_CutTransform, byte/*(bool)*/ c_bHasCutTransform) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCameraBindingID.SetValue(c_CameraBindingID);
		_offCutTransform.SetValue(c_CutTransform);
		_offbHasCutTransform.SetValue(c_bHasCutTransform);
	}
}
// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// 0x01E8
public class FVectorParameterNameAndCurves : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offParameterName                                              = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneFloatChannel>            _offXCurve                                                     = new ExternalOffset<FMovieSceneFloatChannel>(0x0008, false);  // 0x0008(0x00A0) (NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneFloatChannel>            _offYCurve                                                     = new ExternalOffset<FMovieSceneFloatChannel>(0x00A8, false);  // 0x00A8(0x00A0) (NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneFloatChannel>            _offZCurve                                                     = new ExternalOffset<FMovieSceneFloatChannel>(0x0148, false);  // 0x0148(0x00A0) (NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               ParameterName                                                  => _offParameterName.GetValue();
	public FMovieSceneFloatChannel                             XCurve                                                         => _offXCurve.GetValue();
	public FMovieSceneFloatChannel                             YCurve                                                         => _offYCurve.GetValue();
	public FMovieSceneFloatChannel                             ZCurve                                                         => _offZCurve.GetValue();
	#endregion

	public FVectorParameterNameAndCurves(FName c_ParameterName, FMovieSceneFloatChannel c_XCurve, FMovieSceneFloatChannel c_YCurve, FMovieSceneFloatChannel c_ZCurve) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offParameterName.SetValue(c_ParameterName);
		_offXCurve.SetValue(c_XCurve);
		_offYCurve.SetValue(c_YCurve);
		_offZCurve.SetValue(c_ZCurve);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// 0x0030 (0x0038 - 0x0008)
public class FMovieSceneColorKeyStruct : FMovieSceneKeyStruct
{
	#region Offsets
	private ExternalOffset<FLinearColor>                       _offColor                                                      = new ExternalOffset<FLinearColor>(0x0008, false);             // 0x0008(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFrameNumber>                       _offTime                                                       = new ExternalOffset<FFrameNumber>(0x0018, false);             // 0x0018(0x0004) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FLinearColor                                        Color                                                          => _offColor.GetValue();
	public FFrameNumber                                        Time                                                           => _offTime.GetValue();
	#endregion

	public FMovieSceneColorKeyStruct(FLinearColor c_Color, FFrameNumber c_Time) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offColor.SetValue(c_Color);
		_offTime.SetValue(c_Time);
	}
}
// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// 0x00C0 (0x00E0 - 0x0020)
public class FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate
{
	#region Offsets
	private ExternalOffset<FMovieSceneObjectBindingID>         _offPathBindingID                                              = new ExternalOffset<FMovieSceneObjectBindingID>(0x0020, false); // 0x0020(0x0018) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneFloatChannel>            _offTimingCurve                                                = new ExternalOffset<FMovieSceneFloatChannel>(0x0038, false);  // 0x0038(0x00A0) (NativeAccessSpecifierPublic)
	private ExternalOffset<EMovieScene3DPathSection_Axis>      _offFrontAxisEnum                                              = new ExternalOffset<EMovieScene3DPathSection_Axis>(0x00D8, false); // 0x00D8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EMovieScene3DPathSection_Axis>      _offUpAxisEnum                                                 = new ExternalOffset<EMovieScene3DPathSection_Axis>(0x00D9, false); // 0x00D9(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbFollow                                                    = new ExternalOffset<char>(0x00DC, false);                     // 0x00DC(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbReverse                                                   = new ExternalOffset<char>(0x00DC, false);                     // 0x00DC(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbForceUpright                                              = new ExternalOffset<char>(0x00DC, false);                     // 0x00DC(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneObjectBindingID                          PathBindingID                                                  => _offPathBindingID.GetValue();
	public FMovieSceneFloatChannel                             TimingCurve                                                    => _offTimingCurve.GetValue();
	public EMovieScene3DPathSection_Axis                       FrontAxisEnum                                                  => _offFrontAxisEnum.GetValue();
	public EMovieScene3DPathSection_Axis                       UpAxisEnum                                                     => _offUpAxisEnum.GetValue();
	#endregion

	public FMovieScene3DPathSectionTemplate(FMovieSceneObjectBindingID c_PathBindingID, FMovieSceneFloatChannel c_TimingCurve, EMovieScene3DPathSection_Axis c_FrontAxisEnum, EMovieScene3DPathSection_Axis c_UpAxisEnum) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPathBindingID.SetValue(c_PathBindingID);
		_offTimingCurve.SetValue(c_TimingCurve);
		_offFrontAxisEnum.SetValue(c_FrontAxisEnum);
		_offUpAxisEnum.SetValue(c_UpAxisEnum);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneTransformMask
// 0x0004
public class FMovieSceneTransformMask : ExternalClass
{
	#region Offsets
	private ExternalOffset<uint>                               _offmask                                                       = new ExternalOffset<uint>(0x0000);                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public uint                                                mask                                                           => _offmask.GetValue();
	#endregion

	public FMovieSceneTransformMask(uint c_mask) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offmask.SetValue(c_mask);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
// 0x0288 (0x02D0 - 0x0048)
public class FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate
{
	#region Offsets
//	private ExternalOffset<FMovieSceneFloatChannel>            _offCurves[0x4]                                                = new ExternalOffset<FMovieSceneFloatChannel>(0x0048, false);  // 0x0048(0x00A0) (NativeAccessSpecifierPublic)
	private ExternalOffset<EMovieSceneBlendType>               _offBlendType                                                  = new ExternalOffset<EMovieSceneBlendType>(0x02C8, false);     // 0x02C8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public EMovieSceneBlendType                                BlendType                                                      => _offBlendType.GetValue();
	#endregion

	public FMovieSceneColorSectionTemplate(EMovieSceneBlendType c_BlendType) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBlendType.SetValue(c_BlendType);
	}
}
// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// 0x0288
public class FColorParameterNameAndCurves : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offParameterName                                              = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneFloatChannel>            _offRedCurve                                                   = new ExternalOffset<FMovieSceneFloatChannel>(0x0008, false);  // 0x0008(0x00A0) (NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneFloatChannel>            _offGreenCurve                                                 = new ExternalOffset<FMovieSceneFloatChannel>(0x00A8, false);  // 0x00A8(0x00A0) (NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneFloatChannel>            _offBlueCurve                                                  = new ExternalOffset<FMovieSceneFloatChannel>(0x0148, false);  // 0x0148(0x00A0) (NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneFloatChannel>            _offAlphaCurve                                                 = new ExternalOffset<FMovieSceneFloatChannel>(0x01E8, false);  // 0x01E8(0x00A0) (NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               ParameterName                                                  => _offParameterName.GetValue();
	public FMovieSceneFloatChannel                             RedCurve                                                       => _offRedCurve.GetValue();
	public FMovieSceneFloatChannel                             GreenCurve                                                     => _offGreenCurve.GetValue();
	public FMovieSceneFloatChannel                             BlueCurve                                                      => _offBlueCurve.GetValue();
	public FMovieSceneFloatChannel                             AlphaCurve                                                     => _offAlphaCurve.GetValue();
	#endregion

	public FColorParameterNameAndCurves(FName c_ParameterName, FMovieSceneFloatChannel c_RedCurve, FMovieSceneFloatChannel c_GreenCurve, FMovieSceneFloatChannel c_BlueCurve, FMovieSceneFloatChannel c_AlphaCurve) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offParameterName.SetValue(c_ParameterName);
		_offRedCurve.SetValue(c_RedCurve);
		_offGreenCurve.SetValue(c_GreenCurve);
		_offBlueCurve.SetValue(c_BlueCurve);
		_offAlphaCurve.SetValue(c_AlphaCurve);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneEvent
// 0x0008
public class FMovieSceneEvent : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offFunctionName                                               = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               FunctionName                                                   => _offFunctionName.GetValue();
	#endregion

	public FMovieSceneEvent(FName c_FunctionName) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFunctionName.SetValue(c_FunctionName);
	}
}
// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// 0x0040 (0x0048 - 0x0008)
public class FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct
{
	#region Offsets
	private ExternalOffset<FVector>                            _offLocation                                                   = new ExternalOffset<FVector>(0x0008, false);                  // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FRotator>                           _offRotation                                                   = new ExternalOffset<FRotator>(0x0014, false);                 // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offScale                                                      = new ExternalOffset<FVector>(0x0020, false);                  // 0x0020(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFrameNumber>                       _offTime                                                       = new ExternalOffset<FFrameNumber>(0x002C, false);             // 0x002C(0x0004) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             Location                                                       => _offLocation.GetValue();
	public FRotator                                            Rotation                                                       => _offRotation.GetValue();
	public FVector                                             Scale                                                          => _offScale.GetValue();
	public FFrameNumber                                        Time                                                           => _offTime.GetValue();
	#endregion

	public FMovieScene3DTransformKeyStruct(FVector c_Location, FRotator c_Rotation, FVector c_Scale, FFrameNumber c_Time) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLocation.SetValue(c_Location);
		_offRotation.SetValue(c_Rotation);
		_offScale.SetValue(c_Scale);
		_offTime.SetValue(c_Time);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// 0x0030 (0x0050 - 0x0020)
public class FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate
{
	#region Offsets
	private ExternalOffset<TArray<FScalarParameterNameAndCurve>> _offScalars                                                    = new ExternalOffset<TArray<FScalarParameterNameAndCurve>>(0x0020, false); // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FVectorParameterNameAndCurves>> _offVectors                                                    = new ExternalOffset<TArray<FVectorParameterNameAndCurves>>(0x0030, false); // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FColorParameterNameAndCurves>> _offColors                                                     = new ExternalOffset<TArray<FColorParameterNameAndCurves>>(0x0040, false); // 0x0040(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FScalarParameterNameAndCurve>                Scalars                                                        => _offScalars.GetValue();
	public TArray<FVectorParameterNameAndCurves>               Vectors                                                        => _offVectors.GetValue();
	public TArray<FColorParameterNameAndCurves>                Colors                                                         => _offColors.GetValue();
	#endregion

	public FMovieSceneParameterSectionTemplate(TArray<FScalarParameterNameAndCurve> c_Scalars, TArray<FVectorParameterNameAndCurves> c_Vectors, TArray<FColorParameterNameAndCurves> c_Colors) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offScalars.SetValue(c_Scalars);
		_offVectors.SetValue(c_Vectors);
		_offColors.SetValue(c_Colors);
	}
}
// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// 0x0028 (0x0030 - 0x0008)
public class FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct
{
	#region Offsets
	private ExternalOffset<FVector>                            _offScale                                                      = new ExternalOffset<FVector>(0x0008, false);                  // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFrameNumber>                       _offTime                                                       = new ExternalOffset<FFrameNumber>(0x0014, false);             // 0x0014(0x0004) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             Scale                                                          => _offScale.GetValue();
	public FFrameNumber                                        Time                                                           => _offTime.GetValue();
	#endregion

	public FMovieScene3DScaleKeyStruct(FVector c_Scale, FFrameNumber c_Time) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offScale.SetValue(c_Scale);
		_offTime.SetValue(c_Time);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
// 0x0008 (0x0058 - 0x0050)
public class FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate
{
	#region Offsets
	private ExternalOffset<int>                                _offMaterialIndex                                              = new ExternalOffset<int>(0x0050);                             // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public int                                                 MaterialIndex                                                  => _offMaterialIndex.GetValue();
	#endregion

	public FMovieSceneComponentMaterialSectionTemplate(int c_MaterialIndex) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMaterialIndex.SetValue(c_MaterialIndex);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneEventChannel
// 0x0080 (0x0088 - 0x0008)
public class FMovieSceneEventChannel : FMovieSceneChannel
{
	#region Offsets
	private ExternalOffset<TArray<FFrameNumber>>               _offKeyTimes                                                   = new ExternalOffset<TArray<FFrameNumber>>(0x0008, false);     // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FMovieSceneEvent>>           _offKeyValues                                                  = new ExternalOffset<TArray<FMovieSceneEvent>>(0x0018, false); // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FFrameNumber>                                KeyTimes                                                       => _offKeyTimes.GetValue();
	public TArray<FMovieSceneEvent>                            KeyValues                                                      => _offKeyValues.GetValue();
	#endregion

	public FMovieSceneEventChannel(TArray<FFrameNumber> c_KeyTimes, TArray<FMovieSceneEvent> c_KeyValues) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offKeyTimes.SetValue(c_KeyTimes);
		_offKeyValues.SetValue(c_KeyValues);
	}
}
// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// 0x0028 (0x0030 - 0x0008)
public class FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct
{
	#region Offsets
	private ExternalOffset<FRotator>                           _offRotation                                                   = new ExternalOffset<FRotator>(0x0008, false);                 // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FFrameNumber>                       _offTime                                                       = new ExternalOffset<FFrameNumber>(0x0014, false);             // 0x0014(0x0004) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FRotator                                            Rotation                                                       => _offRotation.GetValue();
	public FFrameNumber                                        Time                                                           => _offTime.GetValue();
	#endregion

	public FMovieScene3DRotationKeyStruct(FRotator c_Rotation, FFrameNumber c_Time) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRotation.SetValue(c_Rotation);
		_offTime.SetValue(c_Time);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// 0x0000 (0x0050 - 0x0050)
public class FMovieSceneParticleParameterSectionTemplate : FMovieSceneParameterSectionTemplate
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FMovieSceneParticleParameterSectionTemplate() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// 0x0028 (0x0030 - 0x0008)
public class FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct
{
	#region Offsets
	private ExternalOffset<FVector>                            _offLocation                                                   = new ExternalOffset<FVector>(0x0008, false);                  // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFrameNumber>                       _offTime                                                       = new ExternalOffset<FFrameNumber>(0x0014, false);             // 0x0014(0x0004) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             Location                                                       => _offLocation.GetValue();
	public FFrameNumber                                        Time                                                           => _offTime.GetValue();
	#endregion

	public FMovieScene3DLocationKeyStruct(FVector c_Location, FFrameNumber c_Time) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLocation.SetValue(c_Location);
		_offTime.SetValue(c_Time);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// 0x0028
public class FMovieSceneEventParameters : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FMovieSceneEventParameters() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
// 0x0000 (0x0098 - 0x0098)
public class FMovieSceneParticleChannel : FMovieSceneByteChannel
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FMovieSceneParticleChannel() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieSceneTracks.EventPayload
// 0x0030
public class FEventPayload : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offEventName                                                  = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneEventParameters>         _offParameters                                                 = new ExternalOffset<FMovieSceneEventParameters>(0x0008, false); // 0x0008(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               EventName                                                      => _offEventName.GetValue();
	public FMovieSceneEventParameters                          Parameters                                                     => _offParameters.GetValue();
	#endregion

	public FEventPayload(FName c_EventName, FMovieSceneEventParameters c_Parameters) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offEventName.SetValue(c_EventName);
		_offParameters.SetValue(c_Parameters);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
// 0x0098 (0x00B8 - 0x0020)
public class FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate
{
	#region Offsets
	private ExternalOffset<FMovieSceneParticleChannel>         _offParticleKeys                                               = new ExternalOffset<FMovieSceneParticleChannel>(0x0020, false); // 0x0020(0x0098) (NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneParticleChannel                          ParticleKeys                                                   => _offParticleKeys.GetValue();
	#endregion

	public FMovieSceneParticleSectionTemplate(FMovieSceneParticleChannel c_ParticleKeys) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offParticleKeys.SetValue(c_ParticleKeys);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// 0x0080 (0x0088 - 0x0008)
public class FMovieSceneEventSectionData : FMovieSceneChannel
{
	#region Offsets
	private ExternalOffset<TArray<FFrameNumber>>               _offTimes                                                      = new ExternalOffset<TArray<FFrameNumber>>(0x0008, false);     // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FEventPayload>>              _offKeyValues                                                  = new ExternalOffset<TArray<FEventPayload>>(0x0018, false);    // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FFrameNumber>                                Times                                                          => _offTimes.GetValue();
	public TArray<FEventPayload>                               KeyValues                                                      => _offKeyValues.GetValue();
	#endregion

	public FMovieSceneEventSectionData(TArray<FFrameNumber> c_Times, TArray<FEventPayload> c_KeyValues) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTimes.SetValue(c_Times);
		_offKeyValues.SetValue(c_KeyValues);
	}
}
// ScriptStruct MovieSceneTracks.MovieScenePrimitiveMaterialTemplate
// 0x00C8 (0x00E8 - 0x0020)
public class FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate
{
	#region Offsets
	private ExternalOffset<int>                                _offMaterialIndex                                              = new ExternalOffset<int>(0x0020);                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FMovieSceneObjectPathChannel>       _offMaterialChannel                                            = new ExternalOffset<FMovieSceneObjectPathChannel>(0x0028, false); // 0x0028(0x00C0) (NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public int                                                 MaterialIndex                                                  => _offMaterialIndex.GetValue();
	public FMovieSceneObjectPathChannel                        MaterialChannel                                                => _offMaterialChannel.GetValue();
	#endregion

	public FMovieScenePrimitiveMaterialTemplate(int c_MaterialIndex, FMovieSceneObjectPathChannel c_MaterialChannel) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMaterialIndex.SetValue(c_MaterialIndex);
		_offMaterialChannel.SetValue(c_MaterialChannel);
	}
}
// ScriptStruct MovieSceneTracks.MovieScene3DTransformTemplateData
// 0x0650
public class FMovieScene3DTransformTemplateData : ExternalClass
{
	#region Offsets
//	private ExternalOffset<FMovieSceneFloatChannel>            _offTranslationCurve[0x3]                                      = new ExternalOffset<FMovieSceneFloatChannel>(0x0000, false);  // 0x0000(0x00A0) (NativeAccessSpecifierPublic)
//	private ExternalOffset<FMovieSceneFloatChannel>            _offRotationCurve[0x3]                                         = new ExternalOffset<FMovieSceneFloatChannel>(0x01E0, false);  // 0x01E0(0x00A0) (NativeAccessSpecifierPublic)
//	private ExternalOffset<FMovieSceneFloatChannel>            _offScaleCurve[0x3]                                            = new ExternalOffset<FMovieSceneFloatChannel>(0x03C0, false);  // 0x03C0(0x00A0) (NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneFloatChannel>            _offManualWeight                                               = new ExternalOffset<FMovieSceneFloatChannel>(0x05A0, false);  // 0x05A0(0x00A0) (NativeAccessSpecifierPublic)
	private ExternalOffset<EMovieSceneBlendType>               _offBlendType                                                  = new ExternalOffset<EMovieSceneBlendType>(0x0640, false);     // 0x0640(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneTransformMask>           _offmask                                                       = new ExternalOffset<FMovieSceneTransformMask>(0x0644, false); // 0x0644(0x0004) (NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbUseQuaternionInterpolation                                = new ExternalOffset<byte/*(bool)*/>(0x0648);                  // 0x0648(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneFloatChannel                             ManualWeight                                                   => _offManualWeight.GetValue();
	public EMovieSceneBlendType                                BlendType                                                      => _offBlendType.GetValue();
	public FMovieSceneTransformMask                            mask                                                           => _offmask.GetValue();
	public byte/*(bool)*/                                      bUseQuaternionInterpolation                                    => _offbUseQuaternionInterpolation.GetValue();
	#endregion

	public FMovieScene3DTransformTemplateData(FMovieSceneFloatChannel c_ManualWeight, EMovieSceneBlendType c_BlendType, FMovieSceneTransformMask c_mask, byte/*(bool)*/ c_bUseQuaternionInterpolation) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offManualWeight.SetValue(c_ManualWeight);
		_offBlendType.SetValue(c_BlendType);
		_offmask.SetValue(c_mask);
		_offbUseQuaternionInterpolation.SetValue(c_bUseQuaternionInterpolation);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneEventTemplateBase
// 0x0018 (0x0038 - 0x0020)
public class FMovieSceneEventTemplateBase : FMovieSceneEvalTemplate
{
	#region Offsets
	private ExternalOffset<TArray<FMovieSceneObjectBindingID>> _offEventReceivers                                             = new ExternalOffset<TArray<FMovieSceneObjectBindingID>>(0x0020, false); // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbFireEventsWhenForwards                                    = new ExternalOffset<char>(0x0030, false);                     // 0x0030(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbFireEventsWhenBackwards                                   = new ExternalOffset<char>(0x0030, false);                     // 0x0030(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FMovieSceneObjectBindingID>                  EventReceivers                                                 => _offEventReceivers.GetValue();
	#endregion

	public FMovieSceneEventTemplateBase(TArray<FMovieSceneObjectBindingID> c_EventReceivers) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offEventReceivers.SetValue(c_EventReceivers);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneEulerTransformPropertySectionTemplate
// 0x0650 (0x0698 - 0x0048)
public class FMovieSceneEulerTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	#region Offsets
	private ExternalOffset<FMovieScene3DTransformTemplateData> _offTemplateData                                               = new ExternalOffset<FMovieScene3DTransformTemplateData>(0x0048, false); // 0x0048(0x0650) (Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FMovieScene3DTransformTemplateData                  TemplateData                                                   => _offTemplateData.GetValue();
	#endregion

	public FMovieSceneEulerTransformPropertySectionTemplate(FMovieScene3DTransformTemplateData c_TemplateData) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTemplateData.SetValue(c_TemplateData);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneComponentTransformSectionTemplate
// 0x0650 (0x0670 - 0x0020)
public class FMovieSceneComponentTransformSectionTemplate : FMovieSceneEvalTemplate
{
	#region Offsets
	private ExternalOffset<FMovieScene3DTransformTemplateData> _offTemplateData                                               = new ExternalOffset<FMovieScene3DTransformTemplateData>(0x0020, false); // 0x0020(0x0650) (NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieScene3DTransformTemplateData                  TemplateData                                                   => _offTemplateData.GetValue();
	#endregion

	public FMovieSceneComponentTransformSectionTemplate(FMovieScene3DTransformTemplateData c_TemplateData) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTemplateData.SetValue(c_TemplateData);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneEventRepeaterTemplate
// 0x0008 (0x0040 - 0x0038)
public class FMovieSceneEventRepeaterTemplate : FMovieSceneEventTemplateBase
{
	#region Offsets
	private ExternalOffset<FName>                              _offEventToTrigger                                             = new ExternalOffset<FName>(0x0038, false);                    // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               EventToTrigger                                                 => _offEventToTrigger.GetValue();
	#endregion

	public FMovieSceneEventRepeaterTemplate(FName c_EventToTrigger) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offEventToTrigger.SetValue(c_EventToTrigger);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneTransformPropertySectionTemplate
// 0x0650 (0x0698 - 0x0048)
public class FMovieSceneTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	#region Offsets
	private ExternalOffset<FMovieScene3DTransformTemplateData> _offTemplateData                                               = new ExternalOffset<FMovieScene3DTransformTemplateData>(0x0048, false); // 0x0048(0x0650) (Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FMovieScene3DTransformTemplateData                  TemplateData                                                   => _offTemplateData.GetValue();
	#endregion

	public FMovieSceneTransformPropertySectionTemplate(FMovieScene3DTransformTemplateData c_TemplateData) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTemplateData.SetValue(c_TemplateData);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
// 0x0018
public class FMovieSceneActorReferenceKey : ExternalClass
{
	#region Offsets
	private ExternalOffset<FMovieSceneObjectBindingID>         _offObject                                                     = new ExternalOffset<FMovieSceneObjectBindingID>(0x0000, false); // 0x0000(0x0018) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneObjectBindingID                          Object                                                         => _offObject.GetValue();
	#endregion

	public FMovieSceneActorReferenceKey(FMovieSceneObjectBindingID c_Object) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offObject.SetValue(c_Object);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneEventTriggerTemplate
// 0x0020 (0x0058 - 0x0038)
public class FMovieSceneEventTriggerTemplate : FMovieSceneEventTemplateBase
{
	#region Offsets
	private ExternalOffset<TArray<FFrameNumber>>               _offEventTimes                                                 = new ExternalOffset<TArray<FFrameNumber>>(0x0038, false);     // 0x0038(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FName>>                      _offEventFunctions                                             = new ExternalOffset<TArray<FName>>(0x0048, false);            // 0x0048(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FFrameNumber>                                EventTimes                                                     => _offEventTimes.GetValue();
	public TArray<FName>                                       EventFunctions                                                 => _offEventFunctions.GetValue();
	#endregion

	public FMovieSceneEventTriggerTemplate(TArray<FFrameNumber> c_EventTimes, TArray<FName> c_EventFunctions) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offEventTimes.SetValue(c_EventTimes);
		_offEventFunctions.SetValue(c_EventFunctions);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
// 0x0098 (0x00A0 - 0x0008)
public class FMovieSceneActorReferenceData : FMovieSceneChannel
{
	#region Offsets
	private ExternalOffset<TArray<FFrameNumber>>               _offKeyTimes                                                   = new ExternalOffset<TArray<FFrameNumber>>(0x0008, false);     // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FMovieSceneActorReferenceKey>> _offKeyValues                                                  = new ExternalOffset<TArray<FMovieSceneActorReferenceKey>>(0x0030, false); // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FFrameNumber>                                KeyTimes                                                       => _offKeyTimes.GetValue();
	public TArray<FMovieSceneActorReferenceKey>                KeyValues                                                      => _offKeyValues.GetValue();
	#endregion

	public FMovieSceneActorReferenceData(TArray<FFrameNumber> c_KeyTimes, TArray<FMovieSceneActorReferenceKey> c_KeyValues) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offKeyTimes.SetValue(c_KeyTimes);
		_offKeyValues.SetValue(c_KeyValues);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// 0x0088 (0x00C0 - 0x0038)
public class FMovieSceneEventSectionTemplate : FMovieSceneEventTemplateBase
{
	#region Offsets
	private ExternalOffset<FMovieSceneEventSectionData>        _offEventData                                                  = new ExternalOffset<FMovieSceneEventSectionData>(0x0038, false); // 0x0038(0x0088) (NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneEventSectionData                         EventData                                                      => _offEventData.GetValue();
	#endregion

	public FMovieSceneEventSectionTemplate(FMovieSceneEventSectionData c_EventData) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offEventData.SetValue(c_EventData);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
// 0x0288 (0x02D0 - 0x0048)
public class FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	#region Offsets
//	private ExternalOffset<FMovieSceneFloatChannel>            _offComponentCurves[0x4]                                       = new ExternalOffset<FMovieSceneFloatChannel>(0x0048, false);  // 0x0048(0x00A0) (Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                                _offNumChannelsUsed                                            = new ExternalOffset<int>(0x02C8);                             // 0x02C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<EMovieSceneBlendType>               _offBlendType                                                  = new ExternalOffset<EMovieSceneBlendType>(0x02CC, false);     // 0x02CC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public int                                                 NumChannelsUsed                                                => _offNumChannelsUsed.GetValue();
	public EMovieSceneBlendType                                BlendType                                                      => _offBlendType.GetValue();
	#endregion

	public FMovieSceneVectorPropertySectionTemplate(int c_NumChannelsUsed, EMovieSceneBlendType c_BlendType) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offNumChannelsUsed.SetValue(c_NumChannelsUsed);
		_offBlendType.SetValue(c_BlendType);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// 0x00C8 (0x00E8 - 0x0020)
public class FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate
{
	#region Offsets
	private ExternalOffset<FMovieScenePropertySectionData>     _offPropertyData                                               = new ExternalOffset<FMovieScenePropertySectionData>(0x0020, false); // 0x0020(0x0028) (NativeAccessSpecifierPrivate)
	private ExternalOffset<FMovieSceneActorReferenceData>      _offActorReferenceData                                         = new ExternalOffset<FMovieSceneActorReferenceData>(0x0048, false); // 0x0048(0x00A0) (NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FMovieScenePropertySectionData                      PropertyData                                                   => _offPropertyData.GetValue();
	public FMovieSceneActorReferenceData                       ActorReferenceData                                             => _offActorReferenceData.GetValue();
	#endregion

	public FMovieSceneActorReferenceSectionTemplate(FMovieScenePropertySectionData c_PropertyData, FMovieSceneActorReferenceData c_ActorReferenceData) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPropertyData.SetValue(c_PropertyData);
		_offActorReferenceData.SetValue(c_ActorReferenceData);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
// 0x00B8 (0x00D8 - 0x0020)
public class FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate
{
	#region Offsets
	private ExternalOffset<FMovieSceneFloatChannel>            _offFadeCurve                                                  = new ExternalOffset<FMovieSceneFloatChannel>(0x0020, false);  // 0x0020(0x00A0) (NativeAccessSpecifierPrivate)
	private ExternalOffset<FLinearColor>                       _offFadeColor                                                  = new ExternalOffset<FLinearColor>(0x00C0, false);             // 0x00C0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
//	private ExternalOffset<char>                               _offbFadeAudio                                                 = new ExternalOffset<char>(0x00D0, false);                     // 0x00D0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FMovieSceneFloatChannel                             FadeCurve                                                      => _offFadeCurve.GetValue();
	public FLinearColor                                        FadeColor                                                      => _offFadeColor.GetValue();
	#endregion

	public FMovieSceneFadeSectionTemplate(FMovieSceneFloatChannel c_FadeCurve, FLinearColor c_FadeColor) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFadeCurve.SetValue(c_FadeCurve);
		_offFadeColor.SetValue(c_FadeColor);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
// 0x0008 (0x0028 - 0x0020)
public class FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate
{
	#region Offsets
	private ExternalOffset<UMovieSceneAudioSection>            _offAudioSection                                               = new ExternalOffset<UMovieSceneAudioSection>(0x0020, true);   // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UMovieSceneAudioSection                             AudioSection                                                   => _offAudioSection.GetValue();
	#endregion

	public FMovieSceneAudioSectionTemplate(UMovieSceneAudioSection c_AudioSection) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAudioSection.SetValue(c_AudioSection);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneStringChannel
// 0x0098 (0x00A0 - 0x0008)
public class FMovieSceneStringChannel : FMovieSceneChannel
{
	#region Offsets
	private ExternalOffset<TArray<FFrameNumber>>               _offTimes                                                      = new ExternalOffset<TArray<FFrameNumber>>(0x0008, false);     // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FString>>                    _offValues                                                     = new ExternalOffset<TArray<FString>>(0x0018, false);          // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<FString>                            _offDefaultValue                                               = new ExternalOffset<FString>(0x0028, false);                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                     _offbHasDefaultValue                                           = new ExternalOffset<byte/*(bool)*/>(0x0038);                  // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FFrameNumber>                                Times                                                          => _offTimes.GetValue();
	public TArray<FString>                                     Values                                                         => _offValues.GetValue();
	public FString                                             DefaultValue                                                   => _offDefaultValue.GetValue();
	public byte/*(bool)*/                                      bHasDefaultValue                                               => _offbHasDefaultValue.GetValue();
	#endregion

	public FMovieSceneStringChannel(TArray<FFrameNumber> c_Times, TArray<FString> c_Values, FString c_DefaultValue, byte/*(bool)*/ c_bHasDefaultValue) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTimes.SetValue(c_Times);
		_offValues.SetValue(c_Values);
		_offDefaultValue.SetValue(c_DefaultValue);
		_offbHasDefaultValue.SetValue(c_bHasDefaultValue);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
// 0x0018 (0x0038 - 0x0020)
public class FMovieSceneLevelVisibilitySectionTemplate : FMovieSceneEvalTemplate
{
	#region Offsets
	private ExternalOffset<ELevelVisibility>                   _offVisibility                                                 = new ExternalOffset<ELevelVisibility>(0x0020, false);         // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FName>>                      _offLevelNames                                                 = new ExternalOffset<TArray<FName>>(0x0028, false);            // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public ELevelVisibility                                    Visibility                                                     => _offVisibility.GetValue();
	public TArray<FName>                                       LevelNames                                                     => _offLevelNames.GetValue();
	#endregion

	public FMovieSceneLevelVisibilitySectionTemplate(ELevelVisibility c_Visibility, TArray<FName> c_LevelNames) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offVisibility.SetValue(c_Visibility);
		_offLevelNames.SetValue(c_LevelNames);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// 0x00A0 (0x00E8 - 0x0048)
public class FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	#region Offsets
	private ExternalOffset<FMovieSceneStringChannel>           _offStringCurve                                                = new ExternalOffset<FMovieSceneStringChannel>(0x0048, false); // 0x0048(0x00A0) (Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FMovieSceneStringChannel                            StringCurve                                                    => _offStringCurve.GetValue();
	#endregion

	public FMovieSceneStringPropertySectionTemplate(FMovieSceneStringChannel c_StringCurve) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offStringCurve.SetValue(c_StringCurve);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
// 0x0020
public class FMovieSceneCameraAnimSectionData : ExternalClass
{
	#region Offsets
	private ExternalOffset<UCameraAnim>                        _offCameraAnim                                                 = new ExternalOffset<UCameraAnim>(0x0000, true);               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPlayRate                                                   = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPlayScale                                                  = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offBlendInTime                                                = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offblendOutTime                                               = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbLooping                                                   = new ExternalOffset<byte/*(bool)*/>(0x0018);                  // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UCameraAnim                                         CameraAnim                                                     => _offCameraAnim.GetValue();
	public float                                               PlayRate                                                       => _offPlayRate.GetValue();
	public float                                               PlayScale                                                      => _offPlayScale.GetValue();
	public float                                               BlendInTime                                                    => _offBlendInTime.GetValue();
	public float                                               blendOutTime                                                   => _offblendOutTime.GetValue();
	public byte/*(bool)*/                                      bLooping                                                       => _offbLooping.GetValue();
	#endregion

	public FMovieSceneCameraAnimSectionData(UCameraAnim c_CameraAnim, float c_PlayRate, float c_PlayScale, float c_BlendInTime, float c_blendOutTime, byte/*(bool)*/ c_bLooping) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCameraAnim.SetValue(c_CameraAnim);
		_offPlayRate.SetValue(c_PlayRate);
		_offPlayScale.SetValue(c_PlayScale);
		_offBlendInTime.SetValue(c_BlendInTime);
		_offblendOutTime.SetValue(c_blendOutTime);
		_offbLooping.SetValue(c_bLooping);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
// 0x0008 (0x0058 - 0x0050)
public class FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate
{
	#region Offsets
	private ExternalOffset<UMaterialParameterCollection>       _offMPC                                                        = new ExternalOffset<UMaterialParameterCollection>(0x0050, true); // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UMaterialParameterCollection                        MPC                                                            => _offMPC.GetValue();
	#endregion

	public FMovieSceneMaterialParameterCollectionTemplate(UMaterialParameterCollection c_MPC) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMPC.SetValue(c_MPC);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
// 0x0000 (0x0020 - 0x0020)
public class FMovieSceneAdditiveCameraAnimationTemplate : FMovieSceneEvalTemplate
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FMovieSceneAdditiveCameraAnimationTemplate() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
// 0x00C0 (0x0108 - 0x0048)
public class FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate
{
	#region Offsets
	private ExternalOffset<FMovieSceneObjectPathChannel>       _offObjectChannel                                              = new ExternalOffset<FMovieSceneObjectPathChannel>(0x0048, false); // 0x0048(0x00C0) (NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FMovieSceneObjectPathChannel                        ObjectChannel                                                  => _offObjectChannel.GetValue();
	#endregion

	public FMovieSceneObjectPropertyTemplate(FMovieSceneObjectPathChannel c_ObjectChannel) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offObjectChannel.SetValue(c_ObjectChannel);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
// 0x0098 (0x00E0 - 0x0048)
public class FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	#region Offsets
	private ExternalOffset<FMovieSceneIntegerChannel>          _offIntegerCurve                                               = new ExternalOffset<FMovieSceneIntegerChannel>(0x0048, false); // 0x0048(0x0090) (Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<EMovieSceneBlendType>               _offBlendType                                                  = new ExternalOffset<EMovieSceneBlendType>(0x00D8, false);     // 0x00D8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FMovieSceneIntegerChannel                           IntegerCurve                                                   => _offIntegerCurve.GetValue();
	public EMovieSceneBlendType                                BlendType                                                      => _offBlendType.GetValue();
	#endregion

	public FMovieSceneIntegerPropertySectionTemplate(FMovieSceneIntegerChannel c_IntegerCurve, EMovieSceneBlendType c_BlendType) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offIntegerCurve.SetValue(c_IntegerCurve);
		_offBlendType.SetValue(c_BlendType);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
// 0x0098 (0x00E0 - 0x0048)
public class FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	#region Offsets
	private ExternalOffset<FMovieSceneByteChannel>             _offEnumCurve                                                  = new ExternalOffset<FMovieSceneByteChannel>(0x0048, false);   // 0x0048(0x0098) (Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FMovieSceneByteChannel                              EnumCurve                                                      => _offEnumCurve.GetValue();
	#endregion

	public FMovieSceneEnumPropertySectionTemplate(FMovieSceneByteChannel c_EnumCurve) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offEnumCurve.SetValue(c_EnumCurve);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
// 0x0020
public class FMovieSceneCameraShakeSectionData : ExternalClass
{
	#region Offsets
	private ExternalOffset<UClass>                             _offShakeClass                                                 = new ExternalOffset<UClass>(0x0000, true);                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPlayScale                                                  = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ECameraAnimPlaySpace>>  _offPlaySpace                                                  = new ExternalOffset<TEnumAsByte<ECameraAnimPlaySpace>>(0x000C, false); // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FRotator>                           _offUserDefinedPlaySpace                                       = new ExternalOffset<FRotator>(0x0010, false);                 // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                              ShakeClass                                                     => _offShakeClass.GetValue();
	public float                                               PlayScale                                                      => _offPlayScale.GetValue();
	public TEnumAsByte<ECameraAnimPlaySpace>                   PlaySpace                                                      => _offPlaySpace.GetValue();
	public FRotator                                            UserDefinedPlaySpace                                           => _offUserDefinedPlaySpace.GetValue();
	#endregion

	public FMovieSceneCameraShakeSectionData(UClass c_ShakeClass, float c_PlayScale, TEnumAsByte<ECameraAnimPlaySpace> c_PlaySpace, FRotator c_UserDefinedPlaySpace) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offShakeClass.SetValue(c_ShakeClass);
		_offPlayScale.SetValue(c_PlayScale);
		_offPlaySpace.SetValue(c_PlaySpace);
		_offUserDefinedPlaySpace.SetValue(c_UserDefinedPlaySpace);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
// 0x0098 (0x00E0 - 0x0048)
public class FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	#region Offsets
	private ExternalOffset<FMovieSceneByteChannel>             _offByteCurve                                                  = new ExternalOffset<FMovieSceneByteChannel>(0x0048, false);   // 0x0048(0x0098) (Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FMovieSceneByteChannel                              ByteCurve                                                      => _offByteCurve.GetValue();
	#endregion

	public FMovieSceneBytePropertySectionTemplate(FMovieSceneByteChannel c_ByteCurve) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offByteCurve.SetValue(c_ByteCurve);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// 0x0028 (0x0048 - 0x0020)
public class FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate
{
	#region Offsets
	private ExternalOffset<FMovieSceneCameraShakeSectionData>  _offSourceData                                                 = new ExternalOffset<FMovieSceneCameraShakeSectionData>(0x0020, false); // 0x0020(0x0020) (NoDestructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<FFrameNumber>                       _offSectionStartTime                                           = new ExternalOffset<FFrameNumber>(0x0040, false);             // 0x0040(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FMovieSceneCameraShakeSectionData                   SourceData                                                     => _offSourceData.GetValue();
	public FFrameNumber                                        SectionStartTime                                               => _offSectionStartTime.GetValue();
	#endregion

	public FMovieSceneCameraShakeSectionTemplate(FMovieSceneCameraShakeSectionData c_SourceData, FFrameNumber c_SectionStartTime) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSourceData.SetValue(c_SourceData);
		_offSectionStartTime.SetValue(c_SectionStartTime);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
// 0x00A8 (0x00F0 - 0x0048)
public class FMovieSceneFloatPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	#region Offsets
	private ExternalOffset<FMovieSceneFloatChannel>            _offFloatFunction                                              = new ExternalOffset<FMovieSceneFloatChannel>(0x0048, false);  // 0x0048(0x00A0) (Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<EMovieSceneBlendType>               _offBlendType                                                  = new ExternalOffset<EMovieSceneBlendType>(0x00E8, false);     // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FMovieSceneFloatChannel                             FloatFunction                                                  => _offFloatFunction.GetValue();
	public EMovieSceneBlendType                                BlendType                                                      => _offBlendType.GetValue();
	#endregion

	public FMovieSceneFloatPropertySectionTemplate(FMovieSceneFloatChannel c_FloatFunction, EMovieSceneBlendType c_BlendType) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFloatFunction.SetValue(c_FloatFunction);
		_offBlendType.SetValue(c_BlendType);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
// 0x0028 (0x0048 - 0x0020)
public class FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate
{
	#region Offsets
	private ExternalOffset<FMovieSceneCameraAnimSectionData>   _offSourceData                                                 = new ExternalOffset<FMovieSceneCameraAnimSectionData>(0x0020, false); // 0x0020(0x0020) (NoDestructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<FFrameNumber>                       _offSectionStartTime                                           = new ExternalOffset<FFrameNumber>(0x0040, false);             // 0x0040(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FMovieSceneCameraAnimSectionData                    SourceData                                                     => _offSourceData.GetValue();
	public FFrameNumber                                        SectionStartTime                                               => _offSectionStartTime.GetValue();
	#endregion

	public FMovieSceneCameraAnimSectionTemplate(FMovieSceneCameraAnimSectionData c_SourceData, FFrameNumber c_SectionStartTime) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSourceData.SetValue(c_SourceData);
		_offSectionStartTime.SetValue(c_SectionStartTime);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// 0x0090 (0x00D8 - 0x0048)
public class FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	#region Offsets
	private ExternalOffset<FMovieSceneBoolChannel>             _offBoolCurve                                                  = new ExternalOffset<FMovieSceneBoolChannel>(0x0048, false);   // 0x0048(0x0090) (Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FMovieSceneBoolChannel                              BoolCurve                                                      => _offBoolCurve.GetValue();
	#endregion

	public FMovieSceneBoolPropertySectionTemplate(FMovieSceneBoolChannel c_BoolCurve) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBoolCurve.SetValue(c_BoolCurve);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
// 0x00D0
public class FMovieSceneSkeletalAnimationParams : ExternalClass
{
	#region Offsets
	private ExternalOffset<UAnimSequenceBase>                  _offAnimation                                                  = new ExternalOffset<UAnimSequenceBase>(0x0000, true);         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFrameNumber>                       _offStartFrameOffset                                           = new ExternalOffset<FFrameNumber>(0x0008, false);             // 0x0008(0x0004) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFrameNumber>                       _offEndFrameOffset                                             = new ExternalOffset<FFrameNumber>(0x000C, false);             // 0x000C(0x0004) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPlayRate                                                   = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbReverse                                                   = new ExternalOffset<char>(0x0014, false);                     // 0x0014(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offSlotName                                                   = new ExternalOffset<FName>(0x0018, false);                    // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneFloatChannel>            _offWeight                                                     = new ExternalOffset<FMovieSceneFloatChannel>(0x0020, false);  // 0x0020(0x00A0) (NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbSkipAnimNotifiers                                         = new ExternalOffset<byte/*(bool)*/>(0x00C0);                  // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbForceCustomMode                                           = new ExternalOffset<byte/*(bool)*/>(0x00C1);                  // 0x00C1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offStartOffset                                                = new ExternalOffset<float>(0x00C4);                           // 0x00C4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offEndOffset                                                  = new ExternalOffset<float>(0x00C8);                           // 0x00C8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UAnimSequenceBase                                   Animation                                                      => _offAnimation.GetValue();
	public FFrameNumber                                        StartFrameOffset                                               => _offStartFrameOffset.GetValue();
	public FFrameNumber                                        EndFrameOffset                                                 => _offEndFrameOffset.GetValue();
	public float                                               PlayRate                                                       => _offPlayRate.GetValue();
	public FName                                               SlotName                                                       => _offSlotName.GetValue();
	public FMovieSceneFloatChannel                             Weight                                                         => _offWeight.GetValue();
	public byte/*(bool)*/                                      bSkipAnimNotifiers                                             => _offbSkipAnimNotifiers.GetValue();
	public byte/*(bool)*/                                      bForceCustomMode                                               => _offbForceCustomMode.GetValue();
	public float                                               StartOffset                                                    => _offStartOffset.GetValue();
	public float                                               EndOffset                                                      => _offEndOffset.GetValue();
	#endregion

	public FMovieSceneSkeletalAnimationParams(UAnimSequenceBase c_Animation, FFrameNumber c_StartFrameOffset, FFrameNumber c_EndFrameOffset, float c_PlayRate, FName c_SlotName, FMovieSceneFloatChannel c_Weight, byte/*(bool)*/ c_bSkipAnimNotifiers, byte/*(bool)*/ c_bForceCustomMode, float c_StartOffset, float c_EndOffset) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAnimation.SetValue(c_Animation);
		_offStartFrameOffset.SetValue(c_StartFrameOffset);
		_offEndFrameOffset.SetValue(c_EndFrameOffset);
		_offPlayRate.SetValue(c_PlayRate);
		_offSlotName.SetValue(c_SlotName);
		_offWeight.SetValue(c_Weight);
		_offbSkipAnimNotifiers.SetValue(c_bSkipAnimNotifiers);
		_offbForceCustomMode.SetValue(c_bForceCustomMode);
		_offStartOffset.SetValue(c_StartOffset);
		_offEndOffset.SetValue(c_EndOffset);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
// 0x0008 (0x00D8 - 0x00D0)
public class FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams
{
	#region Offsets
	private ExternalOffset<FFrameNumber>                       _offSectionStartTime                                           = new ExternalOffset<FFrameNumber>(0x00D0, false);             // 0x00D0(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFrameNumber>                       _offSectionEndTime                                             = new ExternalOffset<FFrameNumber>(0x00D4, false);             // 0x00D4(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FFrameNumber                                        SectionStartTime                                               => _offSectionStartTime.GetValue();
	public FFrameNumber                                        SectionEndTime                                                 => _offSectionEndTime.GetValue();
	#endregion

	public FMovieSceneSkeletalAnimationSectionTemplateParameters(FFrameNumber c_SectionStartTime, FFrameNumber c_SectionEndTime) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSectionStartTime.SetValue(c_SectionStartTime);
		_offSectionEndTime.SetValue(c_SectionEndTime);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
// 0x00D8 (0x00F8 - 0x0020)
public class FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate
{
	#region Offsets
	private ExternalOffset<FMovieSceneSkeletalAnimationSectionTemplateParameters> _offParams                                                     = new ExternalOffset<FMovieSceneSkeletalAnimationSectionTemplateParameters>(0x0020, false); // 0x0020(0x00D8) (NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneSkeletalAnimationSectionTemplateParameters Params                                                         => _offParams.GetValue();
	#endregion

	public FMovieSceneSkeletalAnimationSectionTemplate(FMovieSceneSkeletalAnimationSectionTemplateParameters c_Params) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offParams.SetValue(c_Params);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// 0x00A0 (0x00C0 - 0x0020)
public class FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate
{
	#region Offsets
	private ExternalOffset<FMovieSceneFloatChannel>            _offSlomoCurve                                                 = new ExternalOffset<FMovieSceneFloatChannel>(0x0020, false);  // 0x0020(0x00A0) (NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FMovieSceneFloatChannel                             SlomoCurve                                                     => _offSlomoCurve.GetValue();
	#endregion

	public FMovieSceneSlomoSectionTemplate(FMovieSceneFloatChannel c_SlomoCurve) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSlomoCurve.SetValue(c_SlomoCurve);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneSpawnSectionTemplate
// 0x0090 (0x00B0 - 0x0020)
public class FMovieSceneSpawnSectionTemplate : FMovieSceneEvalTemplate
{
	#region Offsets
	private ExternalOffset<FMovieSceneBoolChannel>             _offCurve                                                      = new ExternalOffset<FMovieSceneBoolChannel>(0x0020, false);   // 0x0020(0x0090) (Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FMovieSceneBoolChannel                              Curve                                                          => _offCurve.GetValue();
	#endregion

	public FMovieSceneSpawnSectionTemplate(FMovieSceneBoolChannel c_Curve) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCurve.SetValue(c_Curve);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// 0x0020 (0x0028 - 0x0008)
public class FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct
{
	#region Offsets
	private ExternalOffset<FFrameNumber>                       _offTime                                                       = new ExternalOffset<FFrameNumber>(0x0008, false);             // 0x0008(0x0004) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FFrameNumber                                        Time                                                           => _offTime.GetValue();
	#endregion

	public FMovieSceneVectorKeyStructBase(FFrameNumber c_Time) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTime.SetValue(c_Time);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
// 0x0018 (0x0040 - 0x0028)
public class FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase
{
	#region Offsets
	private ExternalOffset<FVector4>                           _offVector                                                     = new ExternalOffset<FVector4>(0x0030, false);                 // 0x0030(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector4                                            Vector                                                         => _offVector.GetValue();
	#endregion

	public FMovieSceneVector4KeyStruct(FVector4 c_Vector) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offVector.SetValue(c_Vector);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
// 0x0010 (0x0038 - 0x0028)
public class FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase
{
	#region Offsets
	private ExternalOffset<FVector>                            _offVector                                                     = new ExternalOffset<FVector>(0x0028, false);                  // 0x0028(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             Vector                                                         => _offVector.GetValue();
	#endregion

	public FMovieSceneVectorKeyStruct(FVector c_Vector) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offVector.SetValue(c_Vector);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// 0x0008 (0x0030 - 0x0028)
public class FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase
{
	#region Offsets
	private ExternalOffset<FVector2D>                          _offVector                                                     = new ExternalOffset<FVector2D>(0x0028, false);                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector2D                                           Vector                                                         => _offVector.GetValue();
	#endregion

	public FMovieSceneVector2DKeyStruct(FVector2D c_Vector) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offVector.SetValue(c_Vector);
	}
}
// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
// 0x0000 (0x00D8 - 0x00D8)
public class FMovieSceneVisibilitySectionTemplate : FMovieSceneBoolPropertySectionTemplate
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FMovieSceneVisibilitySectionTemplate() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct MovieSceneTracks.MovieScene3DAttachSectionTemplate
// 0x0030 (0x0050 - 0x0020)
public class FMovieScene3DAttachSectionTemplate : FMovieSceneEvalTemplate
{
	#region Offsets
	private ExternalOffset<FMovieSceneObjectBindingID>         _offAttachBindingID                                            = new ExternalOffset<FMovieSceneObjectBindingID>(0x0020, false); // 0x0020(0x0018) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offAttachSocketName                                           = new ExternalOffset<FName>(0x0038, false);                    // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offAttachComponentName                                        = new ExternalOffset<FName>(0x0040, false);                    // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EAttachmentRule>                    _offAttachmentLocationRule                                     = new ExternalOffset<EAttachmentRule>(0x0048, false);          // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EAttachmentRule>                    _offAttachmentRotationRule                                     = new ExternalOffset<EAttachmentRule>(0x0049, false);          // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EAttachmentRule>                    _offAttachmentScaleRule                                        = new ExternalOffset<EAttachmentRule>(0x004A, false);          // 0x004A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EDetachmentRule>                    _offDetachmentLocationRule                                     = new ExternalOffset<EDetachmentRule>(0x004B, false);          // 0x004B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EDetachmentRule>                    _offDetachmentRotationRule                                     = new ExternalOffset<EDetachmentRule>(0x004C, false);          // 0x004C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EDetachmentRule>                    _offDetachmentScaleRule                                        = new ExternalOffset<EDetachmentRule>(0x004D, false);          // 0x004D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneObjectBindingID                          AttachBindingID                                                => _offAttachBindingID.GetValue();
	public FName                                               AttachSocketName                                               => _offAttachSocketName.GetValue();
	public FName                                               AttachComponentName                                            => _offAttachComponentName.GetValue();
	public EAttachmentRule                                     AttachmentLocationRule                                         => _offAttachmentLocationRule.GetValue();
	public EAttachmentRule                                     AttachmentRotationRule                                         => _offAttachmentRotationRule.GetValue();
	public EAttachmentRule                                     AttachmentScaleRule                                            => _offAttachmentScaleRule.GetValue();
	public EDetachmentRule                                     DetachmentLocationRule                                         => _offDetachmentLocationRule.GetValue();
	public EDetachmentRule                                     DetachmentRotationRule                                         => _offDetachmentRotationRule.GetValue();
	public EDetachmentRule                                     DetachmentScaleRule                                            => _offDetachmentScaleRule.GetValue();
	#endregion

	public FMovieScene3DAttachSectionTemplate(FMovieSceneObjectBindingID c_AttachBindingID, FName c_AttachSocketName, FName c_AttachComponentName, EAttachmentRule c_AttachmentLocationRule, EAttachmentRule c_AttachmentRotationRule, EAttachmentRule c_AttachmentScaleRule, EDetachmentRule c_DetachmentLocationRule, EDetachmentRule c_DetachmentRotationRule, EDetachmentRule c_DetachmentScaleRule) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAttachBindingID.SetValue(c_AttachBindingID);
		_offAttachSocketName.SetValue(c_AttachSocketName);
		_offAttachComponentName.SetValue(c_AttachComponentName);
		_offAttachmentLocationRule.SetValue(c_AttachmentLocationRule);
		_offAttachmentRotationRule.SetValue(c_AttachmentRotationRule);
		_offAttachmentScaleRule.SetValue(c_AttachmentScaleRule);
		_offDetachmentLocationRule.SetValue(c_DetachmentLocationRule);
		_offDetachmentRotationRule.SetValue(c_DetachmentRotationRule);
		_offDetachmentScaleRule.SetValue(c_DetachmentScaleRule);
	}
}

}