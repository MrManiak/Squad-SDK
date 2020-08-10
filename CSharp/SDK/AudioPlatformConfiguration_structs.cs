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

// Enum AudioPlatformConfiguration.ESoundwaveSampleRateSettings
public enum ESoundwaveSampleRateSettings : byte
{
	ESoundwaveSampleRateSettings__Max = 0,
	ESoundwaveSampleRateSettings__High = 1,
	ESoundwaveSampleRateSettings__Medium = 2,
	ESoundwaveSampleRateSettings__Low = 3,
	ESoundwaveSampleRateSettings__Min = 4,
	ESoundwaveSampleRateSettings__MatchDevice = 5
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides
// 0x0010
public class FPlatformRuntimeAudioCompressionOverrides : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbOverrideCompressionTimes                                  = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDurationThreshold                                          = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMaxNumRandomBranches                                       = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offSoundCueQualityIndex                                       = new ExternalOffset<int>(0x000C);                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bOverrideCompressionTimes                                      => _offbOverrideCompressionTimes.GetValue();
	public float                                               DurationThreshold                                              => _offDurationThreshold.GetValue();
	public int                                                 MaxNumRandomBranches                                           => _offMaxNumRandomBranches.GetValue();
	public int                                                 SoundCueQualityIndex                                           => _offSoundCueQualityIndex.GetValue();
	#endregion

	public FPlatformRuntimeAudioCompressionOverrides(byte/*(bool)*/ c_bOverrideCompressionTimes, float c_DurationThreshold, int c_MaxNumRandomBranches, int c_SoundCueQualityIndex) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbOverrideCompressionTimes.SetValue(c_bOverrideCompressionTimes);
		_offDurationThreshold.SetValue(c_DurationThreshold);
		_offMaxNumRandomBranches.SetValue(c_MaxNumRandomBranches);
		_offSoundCueQualityIndex.SetValue(c_SoundCueQualityIndex);
	}
}

}