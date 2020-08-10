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

// Class ActorSequence.ActorSequence
// 0x002E (0x0370 - 0x0342)
public class UActorSequence : UMovieSceneSequence
{
	#region Offsets
	private ExternalOffset<UMovieScene>                       _offMovieScene                                                 = new ExternalOffset<UMovieScene>(0x0348, true);               // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FActorSequenceObjectReferenceMap>  _offObjectReferences                                           = new ExternalOffset<FActorSequenceObjectReferenceMap>(0x0350, false); // 0x0350(0x0020) (NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UMovieScene                                        MovieScene                                                     => _offMovieScene.GetValue();
	public FActorSequenceObjectReferenceMap                   ObjectReferences                                               => _offObjectReferences.GetValue();
	#endregion


}

// Class ActorSequence.ActorSequenceComponent
// 0x0038 (0x0100 - 0x00C8)
public class UActorSequenceComponent : UActorComponent
{
	#region Offsets
	private ExternalOffset<FMovieSceneSequencePlaybackSettings> _offPlaybackSettings                                           = new ExternalOffset<FMovieSceneSequencePlaybackSettings>(0x00D8, false); // 0x00D8(0x0014) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<UActorSequence>                    _offSequence                                                   = new ExternalOffset<UActorSequence>(0x00F0, true);            // 0x00F0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UActorSequencePlayer>              _offSequencePlayer                                             = new ExternalOffset<UActorSequencePlayer>(0x00F8, true);      // 0x00F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FMovieSceneSequencePlaybackSettings                PlaybackSettings                                               => _offPlaybackSettings.GetValue();
	public UActorSequence                                     Sequence                                                       => _offSequence.GetValue();
	public UActorSequencePlayer                               SequencePlayer                                                 => _offSequencePlayer.GetValue();
	#endregion


}

// Class ActorSequence.ActorSequencePlayer
// 0x0040 (0x0818 - 0x07D8)
public class UActorSequencePlayer : UMovieSceneSequencePlayer
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}


}