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

// Class MediaCompositing.MovieSceneMediaSection
// 0x0045 (0x0110 - 0x00CB)
public class UMovieSceneMediaSection : UMovieSceneSection
{
	#region Offsets
	private ExternalOffset<UMediaSource>                      _offMediaSource                                                = new ExternalOffset<UMediaSource>(0x00E0, true);              // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbLooping                                                   = new ExternalOffset<byte/*(bool)*/>(0x00E8);                  // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFrameNumber>                      _offStartFrameOffset                                           = new ExternalOffset<FFrameNumber>(0x00EC, false);             // 0x00EC(0x0004) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMediaTexture>                     _offMediaTexture                                               = new ExternalOffset<UMediaTexture>(0x00F0, true);             // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMediaSoundComponent>              _offMediaSoundComponent                                        = new ExternalOffset<UMediaSoundComponent>(0x00F8, true);      // 0x00F8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbUseExternalMediaPlayer                                    = new ExternalOffset<byte/*(bool)*/>(0x0100);                  // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMediaPlayer>                      _offExternalMediaPlayer                                        = new ExternalOffset<UMediaPlayer>(0x0108, true);              // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UMediaSource                                       MediaSource                                                    => _offMediaSource.GetValue();
	public byte/*(bool)*/                                     bLooping                                                       => _offbLooping.GetValue();
	public FFrameNumber                                       StartFrameOffset                                               => _offStartFrameOffset.GetValue();
	public UMediaTexture                                      MediaTexture                                                   => _offMediaTexture.GetValue();
	public UMediaSoundComponent                               MediaSoundComponent                                            => _offMediaSoundComponent.GetValue();
	public byte/*(bool)*/                                     bUseExternalMediaPlayer                                        => _offbUseExternalMediaPlayer.GetValue();
	public UMediaPlayer                                       ExternalMediaPlayer                                            => _offExternalMediaPlayer.GetValue();
	#endregion


}

// Class MediaCompositing.MovieSceneMediaTrack
// 0x0010 (0x0068 - 0x0058)
public class UMovieSceneMediaTrack : UMovieSceneNameableTrack
{
	#region Offsets
	private ExternalOffset<TArray<UMovieSceneSection>>        _offMediaSections                                              = new ExternalOffset<TArray<UMovieSceneSection>>(0x0058, false); // 0x0058(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<UMovieSceneSection>                         MediaSections                                                  => _offMediaSections.GetValue();
	#endregion


}


}