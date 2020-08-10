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

// Class MovieSceneTracks.MovieSceneTransformOrigin
// 0x0000 (0x0028 - 0x0028)
public class UMovieSceneTransformOrigin : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneTracks.MovieScene3DConstraintSection
// 0x003D (0x0108 - 0x00CB)
public class UMovieScene3DConstraintSection : UMovieSceneSection
{
	#region Offsets
	private ExternalOffset<FGuid>                             _offConstraintId                                               = new ExternalOffset<FGuid>(0x00E0, false);                    // 0x00E0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FMovieSceneObjectBindingID>        _offConstraintBindingID                                        = new ExternalOffset<FMovieSceneObjectBindingID>(0x00F0, false); // 0x00F0(0x0018) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FGuid                                              ConstraintId                                                   => _offConstraintId.GetValue();
	public FMovieSceneObjectBindingID                         ConstraintBindingID                                            => _offConstraintBindingID.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieScene3DAttachSection
// 0x0016 (0x011E - 0x0108)
public class UMovieScene3DAttachSection : UMovieScene3DConstraintSection
{
	#region Offsets
	private ExternalOffset<FName>                             _offAttachSocketName                                           = new ExternalOffset<FName>(0x0108, false);                    // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                             _offAttachComponentName                                        = new ExternalOffset<FName>(0x0110, false);                    // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EAttachmentRule>                   _offAttachmentLocationRule                                     = new ExternalOffset<EAttachmentRule>(0x0118, false);          // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EAttachmentRule>                   _offAttachmentRotationRule                                     = new ExternalOffset<EAttachmentRule>(0x0119, false);          // 0x0119(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EAttachmentRule>                   _offAttachmentScaleRule                                        = new ExternalOffset<EAttachmentRule>(0x011A, false);          // 0x011A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EDetachmentRule>                   _offDetachmentLocationRule                                     = new ExternalOffset<EDetachmentRule>(0x011B, false);          // 0x011B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EDetachmentRule>                   _offDetachmentRotationRule                                     = new ExternalOffset<EDetachmentRule>(0x011C, false);          // 0x011C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EDetachmentRule>                   _offDetachmentScaleRule                                        = new ExternalOffset<EDetachmentRule>(0x011D, false);          // 0x011D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                              AttachSocketName                                               => _offAttachSocketName.GetValue();
	public FName                                              AttachComponentName                                            => _offAttachComponentName.GetValue();
	public EAttachmentRule                                    AttachmentLocationRule                                         => _offAttachmentLocationRule.GetValue();
	public EAttachmentRule                                    AttachmentRotationRule                                         => _offAttachmentRotationRule.GetValue();
	public EAttachmentRule                                    AttachmentScaleRule                                            => _offAttachmentScaleRule.GetValue();
	public EDetachmentRule                                    DetachmentLocationRule                                         => _offDetachmentLocationRule.GetValue();
	public EDetachmentRule                                    DetachmentRotationRule                                         => _offDetachmentRotationRule.GetValue();
	public EDetachmentRule                                    DetachmentScaleRule                                            => _offDetachmentScaleRule.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieScene3DConstraintTrack
// 0x0014 (0x0068 - 0x0054)
public class UMovieScene3DConstraintTrack : UMovieSceneTrack
{
	#region Offsets
	private ExternalOffset<TArray<UMovieSceneSection>>        _offConstraintSections                                         = new ExternalOffset<TArray<UMovieSceneSection>>(0x0058, false); // 0x0058(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TArray<UMovieSceneSection>                         ConstraintSections                                             => _offConstraintSections.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieScene3DAttachTrack
// 0x0000 (0x0068 - 0x0068)
public class UMovieScene3DAttachTrack : UMovieScene3DConstraintTrack
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneTracks.MovieScene3DPathSection
// 0x00A5 (0x01AD - 0x0108)
public class UMovieScene3DPathSection : UMovieScene3DConstraintSection
{
	#region Offsets
	private ExternalOffset<FMovieSceneFloatChannel>           _offTimingCurve                                                = new ExternalOffset<FMovieSceneFloatChannel>(0x0108, false);  // 0x0108(0x00A0) (NativeAccessSpecifierPublic)
	private ExternalOffset<EMovieScene3DPathSection_Axis>     _offFrontAxisEnum                                              = new ExternalOffset<EMovieScene3DPathSection_Axis>(0x01A8, false); // 0x01A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EMovieScene3DPathSection_Axis>     _offUpAxisEnum                                                 = new ExternalOffset<EMovieScene3DPathSection_Axis>(0x01A9, false); // 0x01A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbFollow                                                    = new ExternalOffset<char>(0x01AC, false);                     // 0x01AC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbReverse                                                   = new ExternalOffset<char>(0x01AC, false);                     // 0x01AC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbForceUpright                                              = new ExternalOffset<char>(0x01AC, false);                     // 0x01AC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneFloatChannel                            TimingCurve                                                    => _offTimingCurve.GetValue();
	public EMovieScene3DPathSection_Axis                      FrontAxisEnum                                                  => _offFrontAxisEnum.GetValue();
	public EMovieScene3DPathSection_Axis                      UpAxisEnum                                                     => _offUpAxisEnum.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieScene3DPathTrack
// 0x0000 (0x0068 - 0x0068)
public class UMovieScene3DPathTrack : UMovieScene3DConstraintTrack
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneTracks.MovieScene3DTransformSection
// 0x0662 (0x072D - 0x00CB)
public class UMovieScene3DTransformSection : UMovieSceneSection
{
	#region Offsets
	private ExternalOffset<FMovieSceneTransformMask>          _offTransformMask                                              = new ExternalOffset<FMovieSceneTransformMask>(0x00E0, false); // 0x00E0(0x0004) (NoDestructor, NativeAccessSpecifierPrivate)
//	private ExternalOffset<FMovieSceneFloatChannel>           _offTranslation[0x3]                                           = new ExternalOffset<FMovieSceneFloatChannel>(0x00E8, false);  // 0x00E8(0x00A0) (NativeAccessSpecifierPrivate)
//	private ExternalOffset<FMovieSceneFloatChannel>           _offRotation[0x3]                                              = new ExternalOffset<FMovieSceneFloatChannel>(0x02C8, false);  // 0x02C8(0x00A0) (NativeAccessSpecifierPrivate)
//	private ExternalOffset<FMovieSceneFloatChannel>           _offScale[0x3]                                                 = new ExternalOffset<FMovieSceneFloatChannel>(0x04A8, false);  // 0x04A8(0x00A0) (NativeAccessSpecifierPrivate)
	private ExternalOffset<FMovieSceneFloatChannel>           _offManualWeight                                               = new ExternalOffset<FMovieSceneFloatChannel>(0x0688, false);  // 0x0688(0x00A0) (NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                    _offbUseQuaternionInterpolation                                = new ExternalOffset<byte/*(bool)*/>(0x072C);                  // 0x072C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FMovieSceneTransformMask                           TransformMask                                                  => _offTransformMask.GetValue();
	public FMovieSceneFloatChannel                            ManualWeight                                                   => _offManualWeight.GetValue();
	public byte/*(bool)*/                                     bUseQuaternionInterpolation                                    => _offbUseQuaternionInterpolation.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieScenePropertyTrack
// 0x0030 (0x0088 - 0x0058)
public class UMovieScenePropertyTrack : UMovieSceneNameableTrack
{
	#region Offsets
	private ExternalOffset<UMovieSceneSection>                _offSectionToKey                                               = new ExternalOffset<UMovieSceneSection>(0x0058, true);        // 0x0058(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FName>                             _offPropertyName                                               = new ExternalOffset<FName>(0x0060, false);                    // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FString>                           _offPropertyPath                                               = new ExternalOffset<FString>(0x0068, false);                  // 0x0068(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<UMovieSceneSection>>        _offSections                                                   = new ExternalOffset<TArray<UMovieSceneSection>>(0x0078, false); // 0x0078(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UMovieSceneSection                                 SectionToKey                                                   => _offSectionToKey.GetValue();
	public FName                                              PropertyName                                                   => _offPropertyName.GetValue();
	public FString                                            PropertyPath                                                   => _offPropertyPath.GetValue();
	public TArray<UMovieSceneSection>                         Sections                                                       => _offSections.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieScene3DTransformTrack
// 0x0000 (0x0088 - 0x0088)
public class UMovieScene3DTransformTrack : UMovieScenePropertyTrack
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneTracks.MovieSceneActorReferenceSection
// 0x0145 (0x0210 - 0x00CB)
public class UMovieSceneActorReferenceSection : UMovieSceneSection
{
	#region Offsets
	private ExternalOffset<FMovieSceneActorReferenceData>     _offActorReferenceData                                         = new ExternalOffset<FMovieSceneActorReferenceData>(0x00E0, false); // 0x00E0(0x00A0) (NativeAccessSpecifierPrivate)
	private ExternalOffset<FIntegralCurve>                    _offActorGuidIndexCurve                                        = new ExternalOffset<FIntegralCurve>(0x0180, false);           // 0x0180(0x0080) (Deprecated, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FString>>                   _offActorGuidStrings                                           = new ExternalOffset<TArray<FString>>(0x0200, false);          // 0x0200(0x0010) (ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FMovieSceneActorReferenceData                      ActorReferenceData                                             => _offActorReferenceData.GetValue();
	public FIntegralCurve                                     ActorGuidIndexCurve                                            => _offActorGuidIndexCurve.GetValue();
	public TArray<FString>                                    ActorGuidStrings                                               => _offActorGuidStrings.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// 0x0000 (0x0088 - 0x0088)
public class UMovieSceneActorReferenceTrack : UMovieScenePropertyTrack
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneTracks.MovieSceneAudioSection
// 0x01B5 (0x0280 - 0x00CB)
public class UMovieSceneAudioSection : UMovieSceneSection
{
	#region Offsets
	private ExternalOffset<USoundBase>                        _offSound                                                      = new ExternalOffset<USoundBase>(0x00E0, true);                // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FFrameNumber>                      _offStartFrameOffset                                           = new ExternalOffset<FFrameNumber>(0x00E8, false);             // 0x00E8(0x0004) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<float>                             _offStartOffset                                                = new ExternalOffset<float>(0x00EC);                           // 0x00EC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<float>                             _offAudioStartTime                                             = new ExternalOffset<float>(0x00F0);                           // 0x00F0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<float>                             _offAudioDilationFactor                                        = new ExternalOffset<float>(0x00F4);                           // 0x00F4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<float>                             _offAudioVolume                                                = new ExternalOffset<float>(0x00F8);                           // 0x00F8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FMovieSceneFloatChannel>           _offSoundVolume                                                = new ExternalOffset<FMovieSceneFloatChannel>(0x0100, false);  // 0x0100(0x00A0) (NativeAccessSpecifierPrivate)
	private ExternalOffset<FMovieSceneFloatChannel>           _offPitchMultiplier                                            = new ExternalOffset<FMovieSceneFloatChannel>(0x01A0, false);  // 0x01A0(0x00A0) (NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                    _offbSuppressSubtitles                                         = new ExternalOffset<byte/*(bool)*/>(0x0240);                  // 0x0240(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                    _offbOverrideAttenuation                                       = new ExternalOffset<byte/*(bool)*/>(0x0241);                  // 0x0241(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<USoundAttenuation>                 _offAttenuationSettings                                        = new ExternalOffset<USoundAttenuation>(0x0248, true);         // 0x0248(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FScriptDelegate>                   _offOnQueueSubtitles                                           = new ExternalOffset<FScriptDelegate>(0x0250, false);          // 0x0250(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnAudioFinished                                            = new ExternalOffset<FScriptMulticastDelegate>(0x0260, false); // 0x0260(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnAudioPlaybackPercent                                     = new ExternalOffset<FScriptMulticastDelegate>(0x0270, false); // 0x0270(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public USoundBase                                         Sound                                                          => _offSound.GetValue();
	public FFrameNumber                                       StartFrameOffset                                               => _offStartFrameOffset.GetValue();
	public float                                              StartOffset                                                    => _offStartOffset.GetValue();
	public float                                              AudioStartTime                                                 => _offAudioStartTime.GetValue();
	public float                                              AudioDilationFactor                                            => _offAudioDilationFactor.GetValue();
	public float                                              AudioVolume                                                    => _offAudioVolume.GetValue();
	public FMovieSceneFloatChannel                            SoundVolume                                                    => _offSoundVolume.GetValue();
	public FMovieSceneFloatChannel                            PitchMultiplier                                                => _offPitchMultiplier.GetValue();
	public byte/*(bool)*/                                     bSuppressSubtitles                                             => _offbSuppressSubtitles.GetValue();
	public byte/*(bool)*/                                     bOverrideAttenuation                                           => _offbOverrideAttenuation.GetValue();
	public USoundAttenuation                                  AttenuationSettings                                            => _offAttenuationSettings.GetValue();
	public FScriptDelegate                                    OnQueueSubtitles                                               => _offOnQueueSubtitles.GetValue();
	public FScriptMulticastDelegate                           OnAudioFinished                                                => _offOnAudioFinished.GetValue();
	public FScriptMulticastDelegate                           OnAudioPlaybackPercent                                         => _offOnAudioPlaybackPercent.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneAudioTrack
// 0x0010 (0x0068 - 0x0058)
public class UMovieSceneAudioTrack : UMovieSceneNameableTrack
{
	#region Offsets
	private ExternalOffset<TArray<UMovieSceneSection>>        _offAudioSections                                              = new ExternalOffset<TArray<UMovieSceneSection>>(0x0058, false); // 0x0058(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<UMovieSceneSection>                         AudioSections                                                  => _offAudioSections.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneBoolSection
// 0x00AD (0x0178 - 0x00CB)
public class UMovieSceneBoolSection : UMovieSceneSection
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offDefaultValue                                               = new ExternalOffset<byte/*(bool)*/>(0x00E0);                  // 0x00E0(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneBoolChannel>            _offBoolCurve                                                  = new ExternalOffset<FMovieSceneBoolChannel>(0x00E8, false);   // 0x00E8(0x0090) (Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public byte/*(bool)*/                                     DefaultValue                                                   => _offDefaultValue.GetValue();
	public FMovieSceneBoolChannel                             BoolCurve                                                      => _offBoolCurve.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneBoolTrack
// 0x0000 (0x0088 - 0x0088)
public class UMovieSceneBoolTrack : UMovieScenePropertyTrack
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneTracks.MovieSceneByteSection
// 0x00AD (0x0178 - 0x00CB)
public class UMovieSceneByteSection : UMovieSceneSection
{
	#region Offsets
	private ExternalOffset<FMovieSceneByteChannel>            _offByteCurve                                                  = new ExternalOffset<FMovieSceneByteChannel>(0x00E0, false);   // 0x00E0(0x0098) (NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneByteChannel                             ByteCurve                                                      => _offByteCurve.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneByteTrack
// 0x0008 (0x0090 - 0x0088)
public class UMovieSceneByteTrack : UMovieScenePropertyTrack
{
	#region Offsets
	private ExternalOffset<UEnum>                             _offEnum                                                       = new ExternalOffset<UEnum>(0x0088, true);                     // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UEnum                                              Enum                                                           => _offEnum.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneCameraAnimSection
// 0x004E (0x0119 - 0x00CB)
public class UMovieSceneCameraAnimSection : UMovieSceneSection
{
	#region Offsets
	private ExternalOffset<FMovieSceneCameraAnimSectionData>  _offAnimData                                                   = new ExternalOffset<FMovieSceneCameraAnimSectionData>(0x00E0, false); // 0x00E0(0x0020) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<UCameraAnim>                       _offCameraAnim                                                 = new ExternalOffset<UCameraAnim>(0x0100, true);               // 0x0100(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<float>                             _offPlayRate                                                   = new ExternalOffset<float>(0x0108);                           // 0x0108(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<float>                             _offPlayScale                                                  = new ExternalOffset<float>(0x010C);                           // 0x010C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<float>                             _offBlendInTime                                                = new ExternalOffset<float>(0x0110);                           // 0x0110(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<float>                             _offblendOutTime                                               = new ExternalOffset<float>(0x0114);                           // 0x0114(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                    _offbLooping                                                   = new ExternalOffset<byte/*(bool)*/>(0x0118);                  // 0x0118(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FMovieSceneCameraAnimSectionData                   AnimData                                                       => _offAnimData.GetValue();
	public UCameraAnim                                        CameraAnim                                                     => _offCameraAnim.GetValue();
	public float                                              PlayRate                                                       => _offPlayRate.GetValue();
	public float                                              PlayScale                                                      => _offPlayScale.GetValue();
	public float                                              BlendInTime                                                    => _offBlendInTime.GetValue();
	public float                                              blendOutTime                                                   => _offblendOutTime.GetValue();
	public byte/*(bool)*/                                     bLooping                                                       => _offbLooping.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// 0x0010 (0x0068 - 0x0058)
public class UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack
{
	#region Offsets
	private ExternalOffset<TArray<UMovieSceneSection>>        _offCameraAnimSections                                         = new ExternalOffset<TArray<UMovieSceneSection>>(0x0058, false); // 0x0058(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<UMovieSceneSection>                         CameraAnimSections                                             => _offCameraAnimSections.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneCameraCutSection
// 0x003D (0x0108 - 0x00CB)
public class UMovieSceneCameraCutSection : UMovieSceneSection
{
	#region Offsets
	private ExternalOffset<FGuid>                             _offCameraGuid                                                 = new ExternalOffset<FGuid>(0x00E0, false);                    // 0x00E0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FMovieSceneObjectBindingID>        _offCameraBindingID                                            = new ExternalOffset<FMovieSceneObjectBindingID>(0x00F0, false); // 0x00F0(0x0018) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FGuid                                              CameraGuid                                                     => _offCameraGuid.GetValue();
	public FMovieSceneObjectBindingID                         CameraBindingID                                                => _offCameraBindingID.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneCameraCutTrack
// 0x0010 (0x0068 - 0x0058)
public class UMovieSceneCameraCutTrack : UMovieSceneNameableTrack
{
	#region Offsets
	private ExternalOffset<TArray<UMovieSceneSection>>        _offSections                                                   = new ExternalOffset<TArray<UMovieSceneSection>>(0x0058, false); // 0x0058(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<UMovieSceneSection>                         Sections                                                       => _offSections.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneCameraShakeSection
// 0x0051 (0x011C - 0x00CB)
public class UMovieSceneCameraShakeSection : UMovieSceneSection
{
	#region Offsets
	private ExternalOffset<FMovieSceneCameraShakeSectionData> _offShakeData                                                  = new ExternalOffset<FMovieSceneCameraShakeSectionData>(0x00E0, false); // 0x00E0(0x0020) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offShakeClass                                                 = new ExternalOffset<UClass>(0x0100, true);                    // 0x0100(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPlayScale                                                  = new ExternalOffset<float>(0x0108);                           // 0x0108(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ECameraAnimPlaySpace>> _offPlaySpace                                                  = new ExternalOffset<TEnumAsByte<ECameraAnimPlaySpace>>(0x010C, false); // 0x010C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FRotator>                          _offUserDefinedPlaySpace                                       = new ExternalOffset<FRotator>(0x0110, false);                 // 0x0110(0x000C) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneCameraShakeSectionData                  ShakeData                                                      => _offShakeData.GetValue();
	public UClass                                             ShakeClass                                                     => _offShakeClass.GetValue();
	public float                                              PlayScale                                                      => _offPlayScale.GetValue();
	public TEnumAsByte<ECameraAnimPlaySpace>                  PlaySpace                                                      => _offPlaySpace.GetValue();
	public FRotator                                           UserDefinedPlaySpace                                           => _offUserDefinedPlaySpace.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// 0x0010 (0x0068 - 0x0058)
public class UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack
{
	#region Offsets
	private ExternalOffset<TArray<UMovieSceneSection>>        _offCameraShakeSections                                        = new ExternalOffset<TArray<UMovieSceneSection>>(0x0058, false); // 0x0058(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<UMovieSceneSection>                         CameraShakeSections                                            => _offCameraShakeSections.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneCinematicShotSection
// 0x0028 (0x0178 - 0x0150)
public class UMovieSceneCinematicShotSection : UMovieSceneSubSection
{
	#region Offsets
	private ExternalOffset<FString>                           _offShotDisplayName                                            = new ExternalOffset<FString>(0x0150, false);                  // 0x0150(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FText>                             _offDisplayName                                                = new ExternalOffset<FText>(0x0160, false);                    // 0x0160(0x0018) (Deprecated, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FString                                            ShotDisplayName                                                => _offShotDisplayName.GetValue();
	public FText                                              DisplayName                                                    => _offDisplayName.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// 0x0000 (0x0068 - 0x0068)
public class UMovieSceneCinematicShotTrack : UMovieSceneSubTrack
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneTracks.MovieSceneColorSection
// 0x0295 (0x0360 - 0x00CB)
public class UMovieSceneColorSection : UMovieSceneSection
{
	#region Offsets
	private ExternalOffset<FMovieSceneFloatChannel>           _offRedCurve                                                   = new ExternalOffset<FMovieSceneFloatChannel>(0x00E0, false);  // 0x00E0(0x00A0) (NativeAccessSpecifierPrivate)
	private ExternalOffset<FMovieSceneFloatChannel>           _offGreenCurve                                                 = new ExternalOffset<FMovieSceneFloatChannel>(0x0180, false);  // 0x0180(0x00A0) (NativeAccessSpecifierPrivate)
	private ExternalOffset<FMovieSceneFloatChannel>           _offBlueCurve                                                  = new ExternalOffset<FMovieSceneFloatChannel>(0x0220, false);  // 0x0220(0x00A0) (NativeAccessSpecifierPrivate)
	private ExternalOffset<FMovieSceneFloatChannel>           _offAlphaCurve                                                 = new ExternalOffset<FMovieSceneFloatChannel>(0x02C0, false);  // 0x02C0(0x00A0) (NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FMovieSceneFloatChannel                            RedCurve                                                       => _offRedCurve.GetValue();
	public FMovieSceneFloatChannel                            GreenCurve                                                     => _offGreenCurve.GetValue();
	public FMovieSceneFloatChannel                            BlueCurve                                                      => _offBlueCurve.GetValue();
	public FMovieSceneFloatChannel                            AlphaCurve                                                     => _offAlphaCurve.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneColorTrack
// 0x0001 (0x0089 - 0x0088)
public class UMovieSceneColorTrack : UMovieScenePropertyTrack
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offbIsSlateColor                                              = new ExternalOffset<byte/*(bool)*/>(0x0088);                  // 0x0088(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bIsSlateColor                                                  => _offbIsSlateColor.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneEnumSection
// 0x00AD (0x0178 - 0x00CB)
public class UMovieSceneEnumSection : UMovieSceneSection
{
	#region Offsets
	private ExternalOffset<FMovieSceneByteChannel>            _offEnumCurve                                                  = new ExternalOffset<FMovieSceneByteChannel>(0x00E0, false);   // 0x00E0(0x0098) (NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneByteChannel                             EnumCurve                                                      => _offEnumCurve.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneEnumTrack
// 0x0008 (0x0090 - 0x0088)
public class UMovieSceneEnumTrack : UMovieScenePropertyTrack
{
	#region Offsets
	private ExternalOffset<UEnum>                             _offEnum                                                       = new ExternalOffset<UEnum>(0x0088, true);                     // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UEnum                                              Enum                                                           => _offEnum.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneEulerTransformTrack
// 0x0000 (0x0088 - 0x0088)
public class UMovieSceneEulerTransformTrack : UMovieScenePropertyTrack
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneTracks.MovieSceneEventSectionBase
// 0x0015 (0x00E0 - 0x00CB)
public class UMovieSceneEventSectionBase : UMovieSceneSection
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneTracks.MovieSceneEventRepeaterSection
// 0x0008 (0x00E8 - 0x00E0)
public class UMovieSceneEventRepeaterSection : UMovieSceneEventSectionBase
{
	#region Offsets
	private ExternalOffset<FMovieSceneEvent>                  _offEvent                                                      = new ExternalOffset<FMovieSceneEvent>(0x00E0, false);         // 0x00E0(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneEvent                                   Event                                                          => _offEvent.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneEventSection
// 0x0115 (0x01E0 - 0x00CB)
public class UMovieSceneEventSection : UMovieSceneSection
{
	#region Offsets
	private ExternalOffset<FNameCurve>                        _offEvents                                                     = new ExternalOffset<FNameCurve>(0x00E0, false);               // 0x00E0(0x0078) (Deprecated, NativeAccessSpecifierPrivate)
	private ExternalOffset<FMovieSceneEventSectionData>       _offEventData                                                  = new ExternalOffset<FMovieSceneEventSectionData>(0x0158, false); // 0x0158(0x0088) (NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FNameCurve                                         Events                                                         => _offEvents.GetValue();
	public FMovieSceneEventSectionData                        EventData                                                      => _offEventData.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneEventTrack
// 0x0028 (0x0080 - 0x0058)
public class UMovieSceneEventTrack : UMovieSceneNameableTrack
{
	#region Offsets
//	private ExternalOffset<char>                              _offbFireEventsWhenForwards                                    = new ExternalOffset<char>(0x0058, false);                     // 0x0058(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbFireEventsWhenBackwards                                   = new ExternalOffset<char>(0x0058, false);                     // 0x0058(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EFireEventsAtPosition>             _offEventPosition                                              = new ExternalOffset<EFireEventsAtPosition>(0x005C, false);    // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FMovieSceneObjectBindingID>> _offEventReceivers                                             = new ExternalOffset<TArray<FMovieSceneObjectBindingID>>(0x0060, false); // 0x0060(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UMovieSceneSection>>        _offSections                                                   = new ExternalOffset<TArray<UMovieSceneSection>>(0x0070, false); // 0x0070(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public EFireEventsAtPosition                              EventPosition                                                  => _offEventPosition.GetValue();
	public TArray<FMovieSceneObjectBindingID>                 EventReceivers                                                 => _offEventReceivers.GetValue();
	public TArray<UMovieSceneSection>                         Sections                                                       => _offSections.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneEventTriggerSection
// 0x0088 (0x0168 - 0x00E0)
public class UMovieSceneEventTriggerSection : UMovieSceneEventSectionBase
{
	#region Offsets
	private ExternalOffset<FMovieSceneEventChannel>           _offEventChannel                                               = new ExternalOffset<FMovieSceneEventChannel>(0x00E0, false);  // 0x00E0(0x0088) (NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneEventChannel                            EventChannel                                                   => _offEventChannel.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneFloatSection
// 0x00B5 (0x0180 - 0x00CB)
public class UMovieSceneFloatSection : UMovieSceneSection
{
	#region Offsets
	private ExternalOffset<FMovieSceneFloatChannel>           _offFloatCurve                                                 = new ExternalOffset<FMovieSceneFloatChannel>(0x00E0, false);  // 0x00E0(0x00A0) (Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FMovieSceneFloatChannel                            FloatCurve                                                     => _offFloatCurve.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneFadeSection
// 0x0011 (0x0191 - 0x0180)
public class UMovieSceneFadeSection : UMovieSceneFloatSection
{
	#region Offsets
	private ExternalOffset<FLinearColor>                      _offFadeColor                                                  = new ExternalOffset<FLinearColor>(0x0180, false);             // 0x0180(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbFadeAudio                                                 = new ExternalOffset<char>(0x0190, false);                     // 0x0190(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FLinearColor                                       FadeColor                                                      => _offFadeColor.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneFloatTrack
// 0x0000 (0x0088 - 0x0088)
public class UMovieSceneFloatTrack : UMovieScenePropertyTrack
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneTracks.MovieSceneFadeTrack
// 0x0000 (0x0088 - 0x0088)
public class UMovieSceneFadeTrack : UMovieSceneFloatTrack
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneTracks.MovieSceneIntegerSection
// 0x00A5 (0x0170 - 0x00CB)
public class UMovieSceneIntegerSection : UMovieSceneSection
{
	#region Offsets
	private ExternalOffset<FMovieSceneIntegerChannel>         _offIntegerCurve                                               = new ExternalOffset<FMovieSceneIntegerChannel>(0x00E0, false); // 0x00E0(0x0090) (NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FMovieSceneIntegerChannel                          IntegerCurve                                                   => _offIntegerCurve.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneIntegerTrack
// 0x0000 (0x0088 - 0x0088)
public class UMovieSceneIntegerTrack : UMovieScenePropertyTrack
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// 0x002D (0x00F8 - 0x00CB)
public class UMovieSceneLevelVisibilitySection : UMovieSceneSection
{
	#region Offsets
	private ExternalOffset<ELevelVisibility>                  _offVisibility                                                 = new ExternalOffset<ELevelVisibility>(0x00E0, false);         // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FName>>                     _offLevelNames                                                 = new ExternalOffset<TArray<FName>>(0x00E8, false);            // 0x00E8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public ELevelVisibility                                   Visibility                                                     => _offVisibility.GetValue();
	public TArray<FName>                                      LevelNames                                                     => _offLevelNames.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// 0x0010 (0x0068 - 0x0058)
public class UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack
{
	#region Offsets
	private ExternalOffset<TArray<UMovieSceneSection>>        _offSections                                                   = new ExternalOffset<TArray<UMovieSceneSection>>(0x0058, false); // 0x0058(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<UMovieSceneSection>                         Sections                                                       => _offSections.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneMaterialTrack
// 0x0010 (0x0068 - 0x0058)
public class UMovieSceneMaterialTrack : UMovieSceneNameableTrack
{
	#region Offsets
	private ExternalOffset<TArray<UMovieSceneSection>>        _offSections                                                   = new ExternalOffset<TArray<UMovieSceneSection>>(0x0058, false); // 0x0058(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<UMovieSceneSection>                         Sections                                                       => _offSections.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// 0x0008 (0x0070 - 0x0068)
public class UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack
{
	#region Offsets
	private ExternalOffset<UMaterialParameterCollection>      _offMPC                                                        = new ExternalOffset<UMaterialParameterCollection>(0x0068, true); // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UMaterialParameterCollection                       MPC                                                            => _offMPC.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// 0x0004 (0x006C - 0x0068)
public class UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack
{
	#region Offsets
	private ExternalOffset<int>                               _offMaterialIndex                                              = new ExternalOffset<int>(0x0068);                             // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public int                                                MaterialIndex                                                  => _offMaterialIndex.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneObjectPropertySection
// 0x00D5 (0x01A0 - 0x00CB)
public class UMovieSceneObjectPropertySection : UMovieSceneSection
{
	#region Offsets
	private ExternalOffset<FMovieSceneObjectPathChannel>      _offObjectChannel                                              = new ExternalOffset<FMovieSceneObjectPathChannel>(0x00E0, false); // 0x00E0(0x00C0) (NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneObjectPathChannel                       ObjectChannel                                                  => _offObjectChannel.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
// 0x0008 (0x0090 - 0x0088)
public class UMovieSceneObjectPropertyTrack : UMovieScenePropertyTrack
{
	#region Offsets
	private ExternalOffset<UClass>                            _offPropertyClass                                              = new ExternalOffset<UClass>(0x0088, true);                    // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                             PropertyClass                                                  => _offPropertyClass.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneParameterSection
// 0x0045 (0x0110 - 0x00CB)
public class UMovieSceneParameterSection : UMovieSceneSection
{
	#region Offsets
	private ExternalOffset<TArray<FScalarParameterNameAndCurve>> _offScalarParameterNamesAndCurves                              = new ExternalOffset<TArray<FScalarParameterNameAndCurve>>(0x00E0, false); // 0x00E0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FVectorParameterNameAndCurves>> _offVectorParameterNamesAndCurves                              = new ExternalOffset<TArray<FVectorParameterNameAndCurves>>(0x00F0, false); // 0x00F0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FColorParameterNameAndCurves>> _offColorParameterNamesAndCurves                               = new ExternalOffset<TArray<FColorParameterNameAndCurves>>(0x0100, false); // 0x0100(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FScalarParameterNameAndCurve>               ScalarParameterNamesAndCurves                                  => _offScalarParameterNamesAndCurves.GetValue();
	public TArray<FVectorParameterNameAndCurves>              VectorParameterNamesAndCurves                                  => _offVectorParameterNamesAndCurves.GetValue();
	public TArray<FColorParameterNameAndCurves>               ColorParameterNamesAndCurves                                   => _offColorParameterNamesAndCurves.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// 0x0010 (0x0068 - 0x0058)
public class UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack
{
	#region Offsets
	private ExternalOffset<TArray<UMovieSceneSection>>        _offSections                                                   = new ExternalOffset<TArray<UMovieSceneSection>>(0x0058, false); // 0x0058(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<UMovieSceneSection>                         Sections                                                       => _offSections.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneParticleSection
// 0x00AD (0x0178 - 0x00CB)
public class UMovieSceneParticleSection : UMovieSceneSection
{
	#region Offsets
	private ExternalOffset<FMovieSceneParticleChannel>        _offParticleKeys                                               = new ExternalOffset<FMovieSceneParticleChannel>(0x00E0, false); // 0x00E0(0x0098) (NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneParticleChannel                         ParticleKeys                                                   => _offParticleKeys.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneParticleTrack
// 0x0010 (0x0068 - 0x0058)
public class UMovieSceneParticleTrack : UMovieSceneNameableTrack
{
	#region Offsets
	private ExternalOffset<TArray<UMovieSceneSection>>        _offParticleSections                                           = new ExternalOffset<TArray<UMovieSceneSection>>(0x0058, false); // 0x0058(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<UMovieSceneSection>                         ParticleSections                                               => _offParticleSections.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
// 0x00D5 (0x01A0 - 0x00CB)
public class UMovieScenePrimitiveMaterialSection : UMovieSceneSection
{
	#region Offsets
	private ExternalOffset<FMovieSceneObjectPathChannel>      _offMaterialChannel                                            = new ExternalOffset<FMovieSceneObjectPathChannel>(0x00E0, false); // 0x00E0(0x00C0) (NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneObjectPathChannel                       MaterialChannel                                                => _offMaterialChannel.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// 0x0004 (0x008C - 0x0088)
public class UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack
{
	#region Offsets
	private ExternalOffset<int>                               _offMaterialIndex                                              = new ExternalOffset<int>(0x0088);                             // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                MaterialIndex                                                  => _offMaterialIndex.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// 0x010D (0x01D8 - 0x00CB)
public class UMovieSceneSkeletalAnimationSection : UMovieSceneSection
{
	#region Offsets
	private ExternalOffset<FMovieSceneSkeletalAnimationParams> _offParams                                                     = new ExternalOffset<FMovieSceneSkeletalAnimationParams>(0x00E0, false); // 0x00E0(0x00D0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<UAnimSequence>                     _offAnimSequence                                               = new ExternalOffset<UAnimSequence>(0x01B0, true);             // 0x01B0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UAnimSequenceBase>                 _offAnimation                                                  = new ExternalOffset<UAnimSequenceBase>(0x01B8, true);         // 0x01B8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<float>                             _offStartOffset                                                = new ExternalOffset<float>(0x01C0);                           // 0x01C0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<float>                             _offEndOffset                                                  = new ExternalOffset<float>(0x01C4);                           // 0x01C4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<float>                             _offPlayRate                                                   = new ExternalOffset<float>(0x01C8);                           // 0x01C8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
//	private ExternalOffset<char>                              _offbReverse                                                   = new ExternalOffset<char>(0x01CC, false);                     // 0x01CC(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FName>                             _offSlotName                                                   = new ExternalOffset<FName>(0x01D0, false);                    // 0x01D0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FMovieSceneSkeletalAnimationParams                 Params                                                         => _offParams.GetValue();
	public UAnimSequence                                      AnimSequence                                                   => _offAnimSequence.GetValue();
	public UAnimSequenceBase                                  Animation                                                      => _offAnimation.GetValue();
	public float                                              StartOffset                                                    => _offStartOffset.GetValue();
	public float                                              EndOffset                                                      => _offEndOffset.GetValue();
	public float                                              PlayRate                                                       => _offPlayRate.GetValue();
	public FName                                              SlotName                                                       => _offSlotName.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// 0x0011 (0x0069 - 0x0058)
public class UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack
{
	#region Offsets
	private ExternalOffset<TArray<UMovieSceneSection>>        _offAnimationSections                                          = new ExternalOffset<TArray<UMovieSceneSection>>(0x0058, false); // 0x0058(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                    _offbUseLegacySectionIndexBlend                                = new ExternalOffset<byte/*(bool)*/>(0x0068);                  // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<UMovieSceneSection>                         AnimationSections                                              => _offAnimationSections.GetValue();
	public byte/*(bool)*/                                     bUseLegacySectionIndexBlend                                    => _offbUseLegacySectionIndexBlend.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneSlomoSection
// 0x0000 (0x0180 - 0x0180)
public class UMovieSceneSlomoSection : UMovieSceneFloatSection
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneTracks.MovieSceneSlomoTrack
// 0x0000 (0x0088 - 0x0088)
public class UMovieSceneSlomoTrack : UMovieSceneFloatTrack
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneTracks.MovieSceneSpawnSection
// 0x0000 (0x0178 - 0x0178)
public class UMovieSceneSpawnSection : UMovieSceneBoolSection
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneTracks.MovieSceneSpawnTrack
// 0x0024 (0x0078 - 0x0054)
public class UMovieSceneSpawnTrack : UMovieSceneTrack
{
	#region Offsets
	private ExternalOffset<TArray<UMovieSceneSection>>        _offSections                                                   = new ExternalOffset<TArray<UMovieSceneSection>>(0x0058, false); // 0x0058(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FGuid>                             _offObjectGuid                                                 = new ExternalOffset<FGuid>(0x0068, false);                    // 0x0068(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TArray<UMovieSceneSection>                         Sections                                                       => _offSections.GetValue();
	public FGuid                                              ObjectGuid                                                     => _offObjectGuid.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneStringSection
// 0x00B5 (0x0180 - 0x00CB)
public class UMovieSceneStringSection : UMovieSceneSection
{
	#region Offsets
	private ExternalOffset<FMovieSceneStringChannel>          _offStringCurve                                                = new ExternalOffset<FMovieSceneStringChannel>(0x00E0, false); // 0x00E0(0x00A0) (NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FMovieSceneStringChannel                           StringCurve                                                    => _offStringCurve.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneStringTrack
// 0x0000 (0x0088 - 0x0088)
public class UMovieSceneStringTrack : UMovieScenePropertyTrack
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneTracks.MovieSceneTransformTrack
// 0x0000 (0x0088 - 0x0088)
public class UMovieSceneTransformTrack : UMovieScenePropertyTrack
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieSceneTracks.MovieSceneVectorSection
// 0x0299 (0x0364 - 0x00CB)
public class UMovieSceneVectorSection : UMovieSceneSection
{
	#region Offsets
//	private ExternalOffset<FMovieSceneFloatChannel>           _offCurves[0x4]                                                = new ExternalOffset<FMovieSceneFloatChannel>(0x00E0, false);  // 0x00E0(0x00A0) (NativeAccessSpecifierPrivate)
	private ExternalOffset<int>                               _offChannelsUsed                                               = new ExternalOffset<int>(0x0360);                             // 0x0360(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public int                                                ChannelsUsed                                                   => _offChannelsUsed.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneVectorTrack
// 0x0004 (0x008C - 0x0088)
public class UMovieSceneVectorTrack : UMovieScenePropertyTrack
{
	#region Offsets
	private ExternalOffset<int>                               _offNumChannelsUsed                                            = new ExternalOffset<int>(0x0088);                             // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public int                                                NumChannelsUsed                                                => _offNumChannelsUsed.GetValue();
	#endregion


}

// Class MovieSceneTracks.MovieSceneVisibilityTrack
// 0x0000 (0x0088 - 0x0088)
public class UMovieSceneVisibilityTrack : UMovieSceneBoolTrack
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}


}