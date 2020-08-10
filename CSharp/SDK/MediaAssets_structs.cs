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

// Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
public enum EMediaWebcamCaptureDeviceFilter : byte
{
	EMediaWebcamCaptureDeviceFilter__DepthSensor = 0,
	EMediaWebcamCaptureDeviceFilter__Front = 1,
	EMediaWebcamCaptureDeviceFilter__Rear = 2,
	EMediaWebcamCaptureDeviceFilter__Unknown = 3,
	EMediaWebcamCaptureDeviceFilter__EMediaWebcamCaptureDeviceFilter_MAX = 4
}

// Enum MediaAssets.EMediaVideoCaptureDeviceFilter
public enum EMediaVideoCaptureDeviceFilter : byte
{
	EMediaVideoCaptureDeviceFilter__Card = 0,
	EMediaVideoCaptureDeviceFilter__Software = 1,
	EMediaVideoCaptureDeviceFilter__Unknown = 2,
	EMediaVideoCaptureDeviceFilter__Webcam = 3,
	EMediaVideoCaptureDeviceFilter__EMediaVideoCaptureDeviceFilter_MAX = 4
}

// Enum MediaAssets.EMediaAudioCaptureDeviceFilter
public enum EMediaAudioCaptureDeviceFilter : byte
{
	EMediaAudioCaptureDeviceFilter__Card = 0,
	EMediaAudioCaptureDeviceFilter__Microphone = 1,
	EMediaAudioCaptureDeviceFilter__Software = 2,
	EMediaAudioCaptureDeviceFilter__Unknown = 3,
	EMediaAudioCaptureDeviceFilter__EMediaAudioCaptureDeviceFilter_MAX = 4
}

// Enum MediaAssets.EMediaPlayerTrack
public enum EMediaPlayerTrack : byte
{
	EMediaPlayerTrack__Audio       = 0,
	EMediaPlayerTrack__Caption     = 1,
	EMediaPlayerTrack__Metadata    = 2,
	EMediaPlayerTrack__Script      = 3,
	EMediaPlayerTrack__Subtitle    = 4,
	EMediaPlayerTrack__Text        = 5,
	EMediaPlayerTrack__Video       = 6,
	EMediaPlayerTrack__EMediaPlayerTrack_MAX = 7
}

// Enum MediaAssets.EMediaSoundComponentFFTSize
public enum EMediaSoundComponentFFTSize : byte
{
	EMediaSoundComponentFFTSize__Min = 0,
	EMediaSoundComponentFFTSize__Small = 1,
	EMediaSoundComponentFFTSize__Medium = 2,
	EMediaSoundComponentFFTSize__Large = 3,
	EMediaSoundComponentFFTSize__EMediaSoundComponentFFTSize_MAX = 4
}

// Enum MediaAssets.EMediaSoundChannels
public enum EMediaSoundChannels : byte
{
	EMediaSoundChannels__Mono      = 0,
	EMediaSoundChannels__Stereo    = 1,
	EMediaSoundChannels__Surround  = 2,
	EMediaSoundChannels__EMediaSoundChannels_MAX = 3
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MediaAssets.MediaCaptureDevice
// 0x0028
public class FMediaCaptureDevice : ExternalClass
{
	#region Offsets
	private ExternalOffset<FText>                              _offDisplayName                                                = new ExternalOffset<FText>(0x0000, false);                    // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offURL                                                        = new ExternalOffset<FString>(0x0018, false);                  // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FText                                               DisplayName                                                    => _offDisplayName.GetValue();
	public FString                                             URL                                                            => _offURL.GetValue();
	#endregion

	public FMediaCaptureDevice(FText c_DisplayName, FString c_URL) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDisplayName.SetValue(c_DisplayName);
		_offURL.SetValue(c_URL);
	}
}
// ScriptStruct MediaAssets.MediaSoundComponentSpectralData
// 0x0008
public class FMediaSoundComponentSpectralData : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offFrequencyHz                                                = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMagnitude                                                  = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               FrequencyHz                                                    => _offFrequencyHz.GetValue();
	public float                                               Magnitude                                                      => _offMagnitude.GetValue();
	#endregion

	public FMediaSoundComponentSpectralData(float c_FrequencyHz, float c_Magnitude) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFrequencyHz.SetValue(c_FrequencyHz);
		_offMagnitude.SetValue(c_Magnitude);
	}
}

}