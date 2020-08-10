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

// Class MovieScene.MovieSceneSignedObject
// 0x0010 (0x0038 - 0x0028)
public class UMovieSceneSignedObject : UObject
{
	#region Offsets
	private ExternalOffset<FGuid>                             _offSignature                                                  = new ExternalOffset<FGuid>(0x0028, false);                    // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FGuid                                              Signature                                                      => _offSignature.GetValue();
	#endregion


}

// Class MovieScene.MovieSceneSection
// 0x0093 (0x00CB - 0x0038)
public class UMovieSceneSection : UMovieSceneSignedObject
{
	#region Offsets
	private ExternalOffset<FMovieSceneSectionEvalOptions>     _offEvalOptions                                                = new ExternalOffset<FMovieSceneSectionEvalOptions>(0x0050, false); // 0x0050(0x0002) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneEasingSettings>         _offEasing                                                     = new ExternalOffset<FMovieSceneEasingSettings>(0x0058, false); // 0x0058(0x0038) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FMovieSceneFrameRange>             _offSectionRange                                               = new ExternalOffset<FMovieSceneFrameRange>(0x0090, false);    // 0x0090(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FFrameNumber>                      _offPreRollFrames                                              = new ExternalOffset<FFrameNumber>(0x00A0, false);             // 0x00A0(0x0004) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FFrameNumber>                      _offPostRollFrames                                             = new ExternalOffset<FFrameNumber>(0x00A4, false);             // 0x00A4(0x0004) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<int>                               _offRowIndex                                                   = new ExternalOffset<int>(0x00A8);                             // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<int>                               _offOverlapPriority                                            = new ExternalOffset<int>(0x00AC);                             // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
//	private ExternalOffset<char>                              _offbIsActive                                                  = new ExternalOffset<char>(0x00B0, false);                     // 0x00B0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
//	private ExternalOffset<char>                              _offbIsLocked                                                  = new ExternalOffset<char>(0x00B0, false);                     // 0x00B0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<float>                             _offStartTime                                                  = new ExternalOffset<float>(0x00B4);                           // 0x00B4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offEndTime                                                    = new ExternalOffset<float>(0x00B8);                           // 0x00B8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offPrerollTime                                                = new ExternalOffset<float>(0x00BC);                           // 0x00BC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offPostrollTime                                               = new ExternalOffset<float>(0x00C0);                           // 0x00C0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbIsInfinite                                                = new ExternalOffset<char>(0x00C4, false);                     // 0x00C4(0x0001) BIT_FIELD (Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbSupportsInfiniteRange                                     = new ExternalOffset<byte/*(bool)*/>(0x00C8);                  // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FOptionalMovieSceneBlendType>      _offBlendType                                                  = new ExternalOffset<FOptionalMovieSceneBlendType>(0x00C9, false); // 0x00C9(0x0002) (NoDestructor, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FMovieSceneSectionEvalOptions                      EvalOptions                                                    => _offEvalOptions.GetValue();
	public FMovieSceneEasingSettings                          Easing                                                         => _offEasing.GetValue();
	public FMovieSceneFrameRange                              SectionRange                                                   => _offSectionRange.GetValue();
	public FFrameNumber                                       PreRollFrames                                                  => _offPreRollFrames.GetValue();
	public FFrameNumber                                       PostRollFrames                                                 => _offPostRollFrames.GetValue();
	public int                                                RowIndex                                                       => _offRowIndex.GetValue();
	public int                                                OverlapPriority                                                => _offOverlapPriority.GetValue();
	public float                                              StartTime                                                      => _offStartTime.GetValue();
	public float                                              EndTime                                                        => _offEndTime.GetValue();
	public float                                              PrerollTime                                                    => _offPrerollTime.GetValue();
	public float                                              PostrollTime                                                   => _offPostrollTime.GetValue();
	public byte/*(bool)*/                                     bSupportsInfiniteRange                                         => _offbSupportsInfiniteRange.GetValue();
	public FOptionalMovieSceneBlendType                       BlendType                                                      => _offBlendType.GetValue();
	#endregion


}

// Class MovieScene.MovieSceneTrack
// 0x001C (0x0054 - 0x0038)
public class UMovieSceneTrack : UMovieSceneSignedObject
{
	#region Offsets
	private ExternalOffset<FMovieSceneTrackEvalOptions>       _offEvalOptions                                                = new ExternalOffset<FMovieSceneTrackEvalOptions>(0x0050, false); // 0x0050(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneTrackEvalOptions                        EvalOptions                                                    => _offEvalOptions.GetValue();
	#endregion


}

// Class MovieScene.MovieSceneNameableTrack
// 0x0004 (0x0058 - 0x0054)
public class UMovieSceneNameableTrack : UMovieSceneTrack
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieScene.MovieSceneSequence
// 0x030A (0x0342 - 0x0038)
public class UMovieSceneSequence : UMovieSceneSignedObject
{
	#region Offsets
	private ExternalOffset<FMovieSceneEvaluationTemplate>     _offPrecompiledEvaluationTemplate                              = new ExternalOffset<FMovieSceneEvaluationTemplate>(0x0050, false); // 0x0050(0x02F0) (ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<EMovieSceneCompletionMode>         _offDefaultCompletionMode                                      = new ExternalOffset<EMovieSceneCompletionMode>(0x0340, false); // 0x0340(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbParentContextsAreSignificant                              = new ExternalOffset<byte/*(bool)*/>(0x0341);                  // 0x0341(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FMovieSceneEvaluationTemplate                      PrecompiledEvaluationTemplate                                  => _offPrecompiledEvaluationTemplate.GetValue();
	public EMovieSceneCompletionMode                          DefaultCompletionMode                                          => _offDefaultCompletionMode.GetValue();
	public byte/*(bool)*/                                     bParentContextsAreSignificant                                  => _offbParentContextsAreSignificant.GetValue();
	#endregion


}

// Class MovieScene.MovieSceneSequencePlayer
// 0x07B0 (0x07D8 - 0x0028)
public class UMovieSceneSequencePlayer : UObject
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnPlay                                                     = new ExternalOffset<FScriptMulticastDelegate>(0x03B8, false); // 0x03B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnPlayReverse                                              = new ExternalOffset<FScriptMulticastDelegate>(0x03C8, false); // 0x03C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnStop                                                     = new ExternalOffset<FScriptMulticastDelegate>(0x03D8, false); // 0x03D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnPause                                                    = new ExternalOffset<FScriptMulticastDelegate>(0x03E8, false); // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFinished                                                 = new ExternalOffset<FScriptMulticastDelegate>(0x03F8, false); // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EMovieScenePlayerStatus>> _offStatus                                                     = new ExternalOffset<TEnumAsByte<EMovieScenePlayerStatus>>(0x0408, false); // 0x0408(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbReversePlayback                                           = new ExternalOffset<char>(0x040C, false);                     // 0x040C(0x0001) BIT_FIELD (Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UMovieSceneSequence>               _offSequence                                                   = new ExternalOffset<UMovieSceneSequence>(0x0410, true);       // 0x0410(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FFrameNumber>                      _offStartTime                                                  = new ExternalOffset<FFrameNumber>(0x0418, false);             // 0x0418(0x0004) (Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                               _offDurationFrames                                             = new ExternalOffset<int>(0x041C);                             // 0x041C(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                               _offCurrentNumLoops                                            = new ExternalOffset<int>(0x0420);                             // 0x0420(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FMovieSceneSequencePlaybackSettings> _offPlaybackSettings                                           = new ExternalOffset<FMovieSceneSequencePlaybackSettings>(0x0438, false); // 0x0438(0x0014) (Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FMovieSceneRootEvaluationTemplateInstance> _offRootTemplateInstance                                       = new ExternalOffset<FMovieSceneRootEvaluationTemplateInstance>(0x0450, false); // 0x0450(0x0300) (Transient, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FMovieSceneSequenceReplProperties> _offNetSyncProps                                               = new ExternalOffset<FMovieSceneSequenceReplProperties>(0x07B8, false); // 0x07B8(0x0010) (Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TScriptInterface<UMovieScenePlaybackClient>> _offPlaybackClient                                             = new ExternalOffset<TScriptInterface<UMovieScenePlaybackClient>>(0x07C8, false); // 0x07C8(0x0010) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnPlay                                                         => _offOnPlay.GetValue();
	public FScriptMulticastDelegate                           OnPlayReverse                                                  => _offOnPlayReverse.GetValue();
	public FScriptMulticastDelegate                           OnStop                                                         => _offOnStop.GetValue();
	public FScriptMulticastDelegate                           OnPause                                                        => _offOnPause.GetValue();
	public FScriptMulticastDelegate                           OnFinished                                                     => _offOnFinished.GetValue();
	public TEnumAsByte<EMovieScenePlayerStatus>               Status                                                         => _offStatus.GetValue();
	public UMovieSceneSequence                                Sequence                                                       => _offSequence.GetValue();
	public FFrameNumber                                       StartTime                                                      => _offStartTime.GetValue();
	public int                                                DurationFrames                                                 => _offDurationFrames.GetValue();
	public int                                                CurrentNumLoops                                                => _offCurrentNumLoops.GetValue();
	public FMovieSceneSequencePlaybackSettings                PlaybackSettings                                               => _offPlaybackSettings.GetValue();
	public FMovieSceneRootEvaluationTemplateInstance          RootTemplateInstance                                           => _offRootTemplateInstance.GetValue();
	public FMovieSceneSequenceReplProperties                  NetSyncProps                                                   => _offNetSyncProps.GetValue();
	public TScriptInterface<UMovieScenePlaybackClient>        PlaybackClient                                                 => _offPlaybackClient.GetValue();
	#endregion


}

// Class MovieScene.MovieScenePlaybackClient
// 0x0000 (0x0028 - 0x0028)
public class UMovieScenePlaybackClient : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieScene.MovieScene
// 0x00A8 (0x00E0 - 0x0038)
public class UMovieScene : UMovieSceneSignedObject
{
	#region Offsets
	private ExternalOffset<TArray<FMovieSceneSpawnable>>      _offSpawnables                                                 = new ExternalOffset<TArray<FMovieSceneSpawnable>>(0x0050, false); // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FMovieScenePossessable>>    _offPossessables                                               = new ExternalOffset<TArray<FMovieScenePossessable>>(0x0060, false); // 0x0060(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FMovieSceneBinding>>        _offObjectBindings                                             = new ExternalOffset<TArray<FMovieSceneBinding>>(0x0070, false); // 0x0070(0x0010) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<UMovieSceneTrack>>          _offMasterTracks                                               = new ExternalOffset<TArray<UMovieSceneTrack>>(0x0080, false); // 0x0080(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	private ExternalOffset<UMovieSceneTrack>                  _offCameraCutTrack                                             = new ExternalOffset<UMovieSceneTrack>(0x0090, true);          // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FMovieSceneFrameRange>             _offSelectionRange                                             = new ExternalOffset<FMovieSceneFrameRange>(0x0098, false);    // 0x0098(0x0010) (NoDestructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<FMovieSceneFrameRange>             _offPlaybackRange                                              = new ExternalOffset<FMovieSceneFrameRange>(0x00A8, false);    // 0x00A8(0x0010) (NoDestructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<FFrameRate>                        _offTickResolution                                             = new ExternalOffset<FFrameRate>(0x00B8, false);               // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FFrameRate>                        _offDisplayRate                                                = new ExternalOffset<FFrameRate>(0x00C0, false);               // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<EMovieSceneEvaluationType>         _offEvaluationType                                             = new ExternalOffset<EMovieSceneEvaluationType>(0x00C8, false); // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<EUpdateClockSource>                _offClockSource                                                = new ExternalOffset<EUpdateClockSource>(0x00C9, false);       // 0x00C9(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FMovieSceneMarkedFrame>>    _offMarkedFrames                                               = new ExternalOffset<TArray<FMovieSceneMarkedFrame>>(0x00D0, false); // 0x00D0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FMovieSceneSpawnable>                       Spawnables                                                     => _offSpawnables.GetValue();
	public TArray<FMovieScenePossessable>                     Possessables                                                   => _offPossessables.GetValue();
	public TArray<FMovieSceneBinding>                         ObjectBindings                                                 => _offObjectBindings.GetValue();
	public TArray<UMovieSceneTrack>                           MasterTracks                                                   => _offMasterTracks.GetValue();
	public UMovieSceneTrack                                   CameraCutTrack                                                 => _offCameraCutTrack.GetValue();
	public FMovieSceneFrameRange                              SelectionRange                                                 => _offSelectionRange.GetValue();
	public FMovieSceneFrameRange                              PlaybackRange                                                  => _offPlaybackRange.GetValue();
	public FFrameRate                                         TickResolution                                                 => _offTickResolution.GetValue();
	public FFrameRate                                         DisplayRate                                                    => _offDisplayRate.GetValue();
	public EMovieSceneEvaluationType                          EvaluationType                                                 => _offEvaluationType.GetValue();
	public EUpdateClockSource                                 ClockSource                                                    => _offClockSource.GetValue();
	public TArray<FMovieSceneMarkedFrame>                     MarkedFrames                                                   => _offMarkedFrames.GetValue();
	#endregion


}

// Class MovieScene.MovieSceneBindingOverrides
// 0x0010 (0x0038 - 0x0028)
public class UMovieSceneBindingOverrides : UObject
{
	#region Offsets
	private ExternalOffset<TArray<FMovieSceneBindingOverrideData>> _offBindingData                                                = new ExternalOffset<TArray<FMovieSceneBindingOverrideData>>(0x0028, false); // 0x0028(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FMovieSceneBindingOverrideData>             BindingData                                                    => _offBindingData.GetValue();
	#endregion


}

// Class MovieScene.MovieSceneBindingOwnerInterface
// 0x0000 (0x0028 - 0x0028)
public class UMovieSceneBindingOwnerInterface : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieScene.MovieSceneBuiltInEasingFunction
// 0x0009 (0x0031 - 0x0028)
public class UMovieSceneBuiltInEasingFunction : UObject
{
	#region Offsets
	private ExternalOffset<EMovieSceneBuiltInEasing>          _offType                                                       = new ExternalOffset<EMovieSceneBuiltInEasing>(0x0030, false); // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public EMovieSceneBuiltInEasing                           Type                                                           => _offType.GetValue();
	#endregion


}

// Class MovieScene.MovieSceneEasingExternalCurve
// 0x0010 (0x0038 - 0x0028)
public class UMovieSceneEasingExternalCurve : UObject
{
	#region Offsets
	private ExternalOffset<UCurveFloat>                       _offCurve                                                      = new ExternalOffset<UCurveFloat>(0x0030, true);               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UCurveFloat                                        Curve                                                          => _offCurve.GetValue();
	#endregion


}

// Class MovieScene.MovieSceneEasingFunction
// 0x0000 (0x0028 - 0x0028)
public class UMovieSceneEasingFunction : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieScene.MovieSceneFolder
// 0x0038 (0x0060 - 0x0028)
public class UMovieSceneFolder : UObject
{
	#region Offsets
	private ExternalOffset<FName>                             _offFolderName                                                 = new ExternalOffset<FName>(0x0028, false);                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<UMovieSceneFolder>>         _offChildFolders                                               = new ExternalOffset<TArray<UMovieSceneFolder>>(0x0030, false); // 0x0030(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<UMovieSceneTrack>>          _offChildMasterTracks                                          = new ExternalOffset<TArray<UMovieSceneTrack>>(0x0040, false); // 0x0040(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FString>>                   _offChildObjectBindingStrings                                  = new ExternalOffset<TArray<FString>>(0x0050, false);          // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FName                                              FolderName                                                     => _offFolderName.GetValue();
	public TArray<UMovieSceneFolder>                          ChildFolders                                                   => _offChildFolders.GetValue();
	public TArray<UMovieSceneTrack>                           ChildMasterTracks                                              => _offChildMasterTracks.GetValue();
	public TArray<FString>                                    ChildObjectBindingStrings                                      => _offChildObjectBindingStrings.GetValue();
	#endregion


}

// Class MovieScene.MovieSceneKeyProxy
// 0x0000 (0x0028 - 0x0028)
public class UMovieSceneKeyProxy : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieScene.MovieSceneSubSection
// 0x0085 (0x0150 - 0x00CB)
public class UMovieSceneSubSection : UMovieSceneSection
{
	#region Offsets
	private ExternalOffset<FMovieSceneSectionParameters>      _offParameters                                                 = new ExternalOffset<FMovieSceneSectionParameters>(0x00E0, false); // 0x00E0(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offStartOffset                                                = new ExternalOffset<float>(0x00F8);                           // 0x00F8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<float>                             _offTimeScale                                                  = new ExternalOffset<float>(0x00FC);                           // 0x00FC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<float>                             _offPrerollTime                                                = new ExternalOffset<float>(0x0100);                           // 0x0100(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UMovieSceneSequence>               _offSubSequence                                                = new ExternalOffset<UMovieSceneSequence>(0x0108, true);       // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TLazyObjectPtr<AActor>>            _offActorToRecord                                              = new ExternalOffset<TLazyObjectPtr<AActor>>(0x0110, false);   // 0x0110(0x001C) (Edit, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FString>                           _offTargetSequenceName                                         = new ExternalOffset<FString>(0x0130, false);                  // 0x0130(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FDirectoryPath>                    _offTargetPathToRecordTo                                       = new ExternalOffset<FDirectoryPath>(0x0140, false);           // 0x0140(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FMovieSceneSectionParameters                       Parameters                                                     => _offParameters.GetValue();
	public float                                              StartOffset                                                    => _offStartOffset.GetValue();
	public float                                              TimeScale                                                      => _offTimeScale.GetValue();
	public float                                              PrerollTime                                                    => _offPrerollTime.GetValue();
	public UMovieSceneSequence                                SubSequence                                                    => _offSubSequence.GetValue();
	public TLazyObjectPtr<AActor>                             ActorToRecord                                                  => _offActorToRecord.GetValue();
	public FString                                            TargetSequenceName                                             => _offTargetSequenceName.GetValue();
	public FDirectoryPath                                     TargetPathToRecordTo                                           => _offTargetPathToRecordTo.GetValue();
	#endregion


}

// Class MovieScene.MovieSceneSubTrack
// 0x0010 (0x0068 - 0x0058)
public class UMovieSceneSubTrack : UMovieSceneNameableTrack
{
	#region Offsets
	private ExternalOffset<TArray<UMovieSceneSection>>        _offSections                                                   = new ExternalOffset<TArray<UMovieSceneSection>>(0x0058, false); // 0x0058(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TArray<UMovieSceneSection>                         Sections                                                       => _offSections.GetValue();
	#endregion


}

// Class MovieScene.TestMovieSceneTrack
// 0x001C (0x0070 - 0x0054)
public class UTestMovieSceneTrack : UMovieSceneTrack
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offbHighPassFilter                                            = new ExternalOffset<byte/*(bool)*/>(0x0058);                  // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UMovieSceneSection>>        _offSectionArray                                               = new ExternalOffset<TArray<UMovieSceneSection>>(0x0060, false); // 0x0060(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bHighPassFilter                                                => _offbHighPassFilter.GetValue();
	public TArray<UMovieSceneSection>                         SectionArray                                                   => _offSectionArray.GetValue();
	#endregion


}

// Class MovieScene.TestMovieSceneSection
// 0x0015 (0x00E0 - 0x00CB)
public class UTestMovieSceneSection : UMovieSceneSection
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MovieScene.TestMovieSceneSequence
// 0x000E (0x0350 - 0x0342)
public class UTestMovieSceneSequence : UMovieSceneSequence
{
	#region Offsets
	private ExternalOffset<UMovieScene>                       _offMovieScene                                                 = new ExternalOffset<UMovieScene>(0x0348, true);               // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UMovieScene                                        MovieScene                                                     => _offMovieScene.GetValue();
	#endregion


}


}