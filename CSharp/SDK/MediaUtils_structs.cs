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

// Enum MediaUtils.EMediaPlayerOptionBooleanOverride
public enum EMediaPlayerOptionBooleanOverride : byte
{
	EMediaPlayerOptionBooleanOverride__UseMediaPlayerSetting = 0,
	EMediaPlayerOptionBooleanOverride__Enabled = 1,
	EMediaPlayerOptionBooleanOverride__Disabled = 2,
	EMediaPlayerOptionBooleanOverride__EMediaPlayerOptionBooleanOverride_MAX = 3
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MediaUtils.MediaPlayerTrackOptions
// 0x001C
public class FMediaPlayerTrackOptions : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offAudio                                                      = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offCaption                                                    = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMetaData                                                   = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offScript                                                     = new ExternalOffset<int>(0x000C);                             // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offSubtitle                                                   = new ExternalOffset<int>(0x0010);                             // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offText                                                       = new ExternalOffset<int>(0x0014);                             // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offVideo                                                      = new ExternalOffset<int>(0x0018);                             // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 Audio                                                          => _offAudio.GetValue();
	public int                                                 Caption                                                        => _offCaption.GetValue();
	public int                                                 MetaData                                                       => _offMetaData.GetValue();
	public int                                                 Script                                                         => _offScript.GetValue();
	public int                                                 Subtitle                                                       => _offSubtitle.GetValue();
	public int                                                 Text                                                           => _offText.GetValue();
	public int                                                 Video                                                          => _offVideo.GetValue();
	#endregion

	public FMediaPlayerTrackOptions(int c_Audio, int c_Caption, int c_MetaData, int c_Script, int c_Subtitle, int c_Text, int c_Video) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAudio.SetValue(c_Audio);
		_offCaption.SetValue(c_Caption);
		_offMetaData.SetValue(c_MetaData);
		_offScript.SetValue(c_Script);
		_offSubtitle.SetValue(c_Subtitle);
		_offText.SetValue(c_Text);
		_offVideo.SetValue(c_Video);
	}
}
// ScriptStruct MediaUtils.MediaPlayerOptions
// 0x0030
public class FMediaPlayerOptions : ExternalClass
{
	#region Offsets
	private ExternalOffset<FMediaPlayerTrackOptions>           _offTracks                                                     = new ExternalOffset<FMediaPlayerTrackOptions>(0x0000, false); // 0x0000(0x001C) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FTimespan>                          _offSeekTime                                                   = new ExternalOffset<FTimespan>(0x0020, false);                // 0x0020(0x0008) (BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EMediaPlayerOptionBooleanOverride>  _offPlayOnOpen                                                 = new ExternalOffset<EMediaPlayerOptionBooleanOverride>(0x0028, false); // 0x0028(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EMediaPlayerOptionBooleanOverride>  _offLoop                                                       = new ExternalOffset<EMediaPlayerOptionBooleanOverride>(0x0029, false); // 0x0029(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMediaPlayerTrackOptions                            Tracks                                                         => _offTracks.GetValue();
	public FTimespan                                           SeekTime                                                       => _offSeekTime.GetValue();
	public EMediaPlayerOptionBooleanOverride                   PlayOnOpen                                                     => _offPlayOnOpen.GetValue();
	public EMediaPlayerOptionBooleanOverride                   Loop                                                           => _offLoop.GetValue();
	#endregion

	public FMediaPlayerOptions(FMediaPlayerTrackOptions c_Tracks, FTimespan c_SeekTime, EMediaPlayerOptionBooleanOverride c_PlayOnOpen, EMediaPlayerOptionBooleanOverride c_Loop) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTracks.SetValue(c_Tracks);
		_offSeekTime.SetValue(c_SeekTime);
		_offPlayOnOpen.SetValue(c_PlayOnOpen);
		_offLoop.SetValue(c_Loop);
	}
}

}