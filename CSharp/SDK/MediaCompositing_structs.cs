// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
// 0x0030
public class FMovieSceneMediaSectionParams : ExternalClass
{
	#region Offsets
	private ExternalOffset<UMediaSoundComponent>               _offMediaSoundComponent                                        = new ExternalOffset<UMediaSoundComponent>(0x0000, true);      // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMediaSource>                       _offMediaSource                                                = new ExternalOffset<UMediaSource>(0x0008, true);              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMediaTexture>                      _offMediaTexture                                               = new ExternalOffset<UMediaTexture>(0x0010, true);             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMediaPlayer>                       _offMediaPlayer                                                = new ExternalOffset<UMediaPlayer>(0x0018, true);              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFrameNumber>                       _offSectionStartFrame                                          = new ExternalOffset<FFrameNumber>(0x0020, false);             // 0x0020(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFrameNumber>                       _offSectionEndFrame                                            = new ExternalOffset<FFrameNumber>(0x0024, false);             // 0x0024(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbLooping                                                   = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFrameNumber>                       _offStartFrameOffset                                           = new ExternalOffset<FFrameNumber>(0x002C, false);             // 0x002C(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UMediaSoundComponent                                MediaSoundComponent                                            => _offMediaSoundComponent.GetValue();
	public UMediaSource                                        MediaSource                                                    => _offMediaSource.GetValue();
	public UMediaTexture                                       MediaTexture                                                   => _offMediaTexture.GetValue();
	public UMediaPlayer                                        MediaPlayer                                                    => _offMediaPlayer.GetValue();
	public FFrameNumber                                        SectionStartFrame                                              => _offSectionStartFrame.GetValue();
	public FFrameNumber                                        SectionEndFrame                                                => _offSectionEndFrame.GetValue();
	public byte/*(bool)*/                                      bLooping                                                       => _offbLooping.GetValue();
	public FFrameNumber                                        StartFrameOffset                                               => _offStartFrameOffset.GetValue();
	#endregion

	public FMovieSceneMediaSectionParams(UMediaSoundComponent c_MediaSoundComponent, UMediaSource c_MediaSource, UMediaTexture c_MediaTexture, UMediaPlayer c_MediaPlayer, FFrameNumber c_SectionStartFrame, FFrameNumber c_SectionEndFrame, byte/*(bool)*/ c_bLooping, FFrameNumber c_StartFrameOffset) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMediaSoundComponent.SetValue(c_MediaSoundComponent);
		_offMediaSource.SetValue(c_MediaSource);
		_offMediaTexture.SetValue(c_MediaTexture);
		_offMediaPlayer.SetValue(c_MediaPlayer);
		_offSectionStartFrame.SetValue(c_SectionStartFrame);
		_offSectionEndFrame.SetValue(c_SectionEndFrame);
		_offbLooping.SetValue(c_bLooping);
		_offStartFrameOffset.SetValue(c_StartFrameOffset);
	}
}
// ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
// 0x0030 (0x0050 - 0x0020)
public class FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate
{
	#region Offsets
	private ExternalOffset<FMovieSceneMediaSectionParams>      _offParams                                                     = new ExternalOffset<FMovieSceneMediaSectionParams>(0x0020, false); // 0x0020(0x0030) (NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FMovieSceneMediaSectionParams                       Params                                                         => _offParams.GetValue();
	#endregion

	public FMovieSceneMediaSectionTemplate(FMovieSceneMediaSectionParams c_Params) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offParams.SetValue(c_Params);
	}
}

}