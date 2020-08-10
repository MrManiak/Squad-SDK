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

// Class LevelSequence.DefaultLevelSequenceInstanceData
// 0x0048 (0x0070 - 0x0028)
public class UDefaultLevelSequenceInstanceData : UObject
{
	#region Offsets
	private ExternalOffset<AActor>                            _offTransformOriginActor                                       = new ExternalOffset<AActor>(0x0030, true);                    // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FTransform>                        _offTransformOrigin                                            = new ExternalOffset<FTransform>(0x0040, false);               // 0x0040(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public AActor                                             TransformOriginActor                                           => _offTransformOriginActor.GetValue();
	public FTransform                                         TransformOrigin                                                => _offTransformOrigin.GetValue();
	#endregion


}

// Class LevelSequence.LevelSequenceMetaData
// 0x0000 (0x0028 - 0x0028)
public class ULevelSequenceMetaData : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class LevelSequence.LevelSequence
// 0x0156 (0x0498 - 0x0342)
public class ULevelSequence : UMovieSceneSequence
{
	#region Offsets
	private ExternalOffset<UMovieScene>                       _offMovieScene                                                 = new ExternalOffset<UMovieScene>(0x0348, true);               // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLevelSequenceObjectReferenceMap>  _offObjectReferences                                           = new ExternalOffset<FLevelSequenceObjectReferenceMap>(0x0350, false); // 0x0350(0x0050) (Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FLevelSequenceBindingReferences>   _offBindingReferences                                          = new ExternalOffset<FLevelSequenceBindingReferences>(0x03A0, false); // 0x03A0(0x00A0) (Protected, NativeAccessSpecifierProtected)
//	private TMap<struct FString, struct FLevelSequenceObject> _offPossessedObjects                                           = new ExternalOffset<TMap<FLevelSequenceObject>>(0x0440, false); // 0x0440(0x0050) (ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<UClass>                            _offDirectorClass                                              = new ExternalOffset<UClass>(0x0490, true);                    // 0x0490(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UMovieScene                                        MovieScene                                                     => _offMovieScene.GetValue();
	public FLevelSequenceObjectReferenceMap                   ObjectReferences                                               => _offObjectReferences.GetValue();
	public FLevelSequenceBindingReferences                    BindingReferences                                              => _offBindingReferences.GetValue();
	public UClass                                             DirectorClass                                                  => _offDirectorClass.GetValue();
	#endregion


}

// Class LevelSequence.LevelSequenceBurnInInitSettings
// 0x0000 (0x0028 - 0x0028)
public class ULevelSequenceBurnInInitSettings : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class LevelSequence.LevelSequenceBurnInOptions
// 0x0028 (0x0050 - 0x0028)
public class ULevelSequenceBurnInOptions : UObject
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offbUseBurnIn                                                 = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSoftClassPath>                    _offBurnInClass                                                = new ExternalOffset<FSoftClassPath>(0x0030, false);           // 0x0030(0x0018) (Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ULevelSequenceBurnInInitSettings>  _offSettings                                                   = new ExternalOffset<ULevelSequenceBurnInInitSettings>(0x0048, true); // 0x0048(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bUseBurnIn                                                     => _offbUseBurnIn.GetValue();
	public FSoftClassPath                                     BurnInClass                                                    => _offBurnInClass.GetValue();
	public ULevelSequenceBurnInInitSettings                   Settings                                                       => _offSettings.GetValue();
	#endregion


}

// Class LevelSequence.LevelSequenceActor
// 0x0091 (0x02C9 - 0x0238)
public class ALevelSequenceActor : AActor
{
	#region Offsets
	private ExternalOffset<FMovieSceneSequencePlaybackSettings> _offPlaybackSettings                                           = new ExternalOffset<FMovieSceneSequencePlaybackSettings>(0x0258, false); // 0x0258(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<ULevelSequencePlayer>              _offSequencePlayer                                             = new ExternalOffset<ULevelSequencePlayer>(0x0270, true);      // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSoftObjectPath>                   _offLevelSequence                                              = new ExternalOffset<FSoftObjectPath>(0x0278, false);          // 0x0278(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<AActor>>                    _offAdditionalEventReceivers                                   = new ExternalOffset<TArray<AActor>>(0x0290, false);           // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<ULevelSequenceBurnInOptions>       _offBurnInOptions                                              = new ExternalOffset<ULevelSequenceBurnInOptions>(0x02A0, true); // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMovieSceneBindingOverrides>       _offBindingOverrides                                           = new ExternalOffset<UMovieSceneBindingOverrides>(0x02A8, true); // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbAutoPlay                                                  = new ExternalOffset<char>(0x02B0, false);                     // 0x02B0(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbOverrideInstanceData                                      = new ExternalOffset<char>(0x02B0, false);                     // 0x02B0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbReplicatePlayback                                         = new ExternalOffset<char>(0x02B0, false);                     // 0x02B0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UObject>                           _offDefaultInstanceData                                        = new ExternalOffset<UObject>(0x02B8, true);                   // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ULevelSequenceBurnIn>              _offBurnInInstance                                             = new ExternalOffset<ULevelSequenceBurnIn>(0x02C0, true);      // 0x02C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowBurnin                                                = new ExternalOffset<byte/*(bool)*/>(0x02C8);                  // 0x02C8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FMovieSceneSequencePlaybackSettings                PlaybackSettings                                               => _offPlaybackSettings.GetValue();
	public ULevelSequencePlayer                               SequencePlayer                                                 => _offSequencePlayer.GetValue();
	public FSoftObjectPath                                    LevelSequence                                                  => _offLevelSequence.GetValue();
	public TArray<AActor>                                     AdditionalEventReceivers                                       => _offAdditionalEventReceivers.GetValue();
	public ULevelSequenceBurnInOptions                        BurnInOptions                                                  => _offBurnInOptions.GetValue();
	public UMovieSceneBindingOverrides                        BindingOverrides                                               => _offBindingOverrides.GetValue();
	public UObject                                            DefaultInstanceData                                            => _offDefaultInstanceData.GetValue();
	public ULevelSequenceBurnIn                               BurnInInstance                                                 => _offBurnInInstance.GetValue();
	public byte/*(bool)*/                                     bShowBurnin                                                    => _offbShowBurnin.GetValue();
	#endregion


}

// Class LevelSequence.LevelSequenceBurnIn
// 0x0110 (0x02F0 - 0x01E0)
public class ULevelSequenceBurnIn : UUserWidget
{
	#region Offsets
	private ExternalOffset<FLevelSequencePlayerSnapshot>      _offFrameInformation                                           = new ExternalOffset<FLevelSequencePlayerSnapshot>(0x0230, false); // 0x0230(0x00B8) (BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<ALevelSequenceActor>               _offLevelSequenceActor                                         = new ExternalOffset<ALevelSequenceActor>(0x02E8, true);       // 0x02E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FLevelSequencePlayerSnapshot                       FrameInformation                                               => _offFrameInformation.GetValue();
	public ALevelSequenceActor                                LevelSequenceActor                                             => _offLevelSequenceActor.GetValue();
	#endregion


}

// Class LevelSequence.LevelSequenceDirector
// 0x0008 (0x0030 - 0x0028)
public class ULevelSequenceDirector : UObject
{
	#region Offsets
	private ExternalOffset<ULevelSequencePlayer>              _offPlayer                                                     = new ExternalOffset<ULevelSequencePlayer>(0x0028, true);      // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ULevelSequencePlayer                               Player                                                         => _offPlayer.GetValue();
	#endregion


}

// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// 0x0007 (0x00D8 - 0x00D1)
public class ULegacyLevelSequenceDirectorBlueprint : UBlueprint
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class LevelSequence.LevelSequencePlayer
// 0x0050 (0x0828 - 0x07D8)
public class ULevelSequencePlayer : UMovieSceneSequencePlayer
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnCameraCut                                                = new ExternalOffset<FScriptMulticastDelegate>(0x0818, false); // 0x0818(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnCameraCut                                                    => _offOnCameraCut.GetValue();
	#endregion


}


}