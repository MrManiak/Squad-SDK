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

// Enum AudioMixer.EFFTWindowType
public enum EFFTWindowType : byte
{
	EFFTWindowType__None           = 0,
	EFFTWindowType__Hamming        = 1,
	EFFTWindowType__Hann           = 2,
	EFFTWindowType__Blackman       = 3,
	EFFTWindowType__EFFTWindowType_MAX = 4
}

// Enum AudioMixer.EFFTPeakInterpolationMethod
public enum EFFTPeakInterpolationMethod : byte
{
	EFFTPeakInterpolationMethod__NearestNeighbor = 0,
	EFFTPeakInterpolationMethod__Linear = 1,
	EFFTPeakInterpolationMethod__Quadratic = 2,
	EFFTPeakInterpolationMethod__EFFTPeakInterpolationMethod_MAX = 3
}

// Enum AudioMixer.EFFTSize
public enum EFFTSize : byte
{
	EFFTSize__DefaultSize          = 0,
	EFFTSize__Min                  = 1,
	EFFTSize__Small                = 2,
	EFFTSize__Medium               = 3,
	EFFTSize__Large                = 4,
	EFFTSize__Max                  = 5
}

// Enum AudioMixer.ESubmixEffectDynamicsPeakMode
public enum ESubmixEffectDynamicsPeakMode : byte
{
	ESubmixEffectDynamicsPeakMode__MeanSquared = 0,
	ESubmixEffectDynamicsPeakMode__RootMeanSquared = 1,
	ESubmixEffectDynamicsPeakMode__Peak = 2,
	ESubmixEffectDynamicsPeakMode__Count = 3,
	ESubmixEffectDynamicsPeakMode__ESubmixEffectDynamicsPeakMode_MAX = 4
}

// Enum AudioMixer.ESubmixEffectDynamicsProcessorType
public enum ESubmixEffectDynamicsProcessorType : byte
{
	ESubmixEffectDynamicsProcessorType__Compressor = 0,
	ESubmixEffectDynamicsProcessorType__Limiter = 1,
	ESubmixEffectDynamicsProcessorType__Expander = 2,
	ESubmixEffectDynamicsProcessorType__Gate = 3,
	ESubmixEffectDynamicsProcessorType__Count = 4,
	ESubmixEffectDynamicsProcessorType__ESubmixEffectDynamicsProcessorType_MAX = 5
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AudioMixer.SubmixEffectEQBand
// 0x0010
public class FSubmixEffectEQBand : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offFrequency                                                  = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offBandwidth                                                  = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offGainDb                                                     = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbEnabled                                                   = new ExternalOffset<char>(0x000C, false);                     // 0x000C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               Frequency                                                      => _offFrequency.GetValue();
	public float                                               Bandwidth                                                      => _offBandwidth.GetValue();
	public float                                               GainDb                                                         => _offGainDb.GetValue();
	#endregion

	public FSubmixEffectEQBand(float c_Frequency, float c_Bandwidth, float c_GainDb) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFrequency.SetValue(c_Frequency);
		_offBandwidth.SetValue(c_Bandwidth);
		_offGainDb.SetValue(c_GainDb);
	}
}
// ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
// 0x0010
public class FSubmixEffectSubmixEQSettings : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FSubmixEffectEQBand>>        _offEQBands                                                    = new ExternalOffset<TArray<FSubmixEffectEQBand>>(0x0000, false); // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FSubmixEffectEQBand>                         EQBands                                                        => _offEQBands.GetValue();
	#endregion

	public FSubmixEffectSubmixEQSettings(TArray<FSubmixEffectEQBand> c_EQBands) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offEQBands.SetValue(c_EQBands);
	}
}
// ScriptStruct AudioMixer.SubmixEffectReverbFastSettings
// 0x0034
public class FSubmixEffectReverbFastSettings : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offDensity                                                    = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDiffusion                                                  = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offGain                                                       = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offGainHF                                                     = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDecayTime                                                  = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDecayHFRatio                                               = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offReflectionsGain                                            = new ExternalOffset<float>(0x0018);                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offReflectionsDelay                                           = new ExternalOffset<float>(0x001C);                           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLateGain                                                   = new ExternalOffset<float>(0x0020);                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLateDelay                                                  = new ExternalOffset<float>(0x0024);                           // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offAirAbsorptionGainHF                                        = new ExternalOffset<float>(0x0028);                           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offWetLevel                                                   = new ExternalOffset<float>(0x002C);                           // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDryLevel                                                   = new ExternalOffset<float>(0x0030);                           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               Density                                                        => _offDensity.GetValue();
	public float                                               Diffusion                                                      => _offDiffusion.GetValue();
	public float                                               Gain                                                           => _offGain.GetValue();
	public float                                               GainHF                                                         => _offGainHF.GetValue();
	public float                                               DecayTime                                                      => _offDecayTime.GetValue();
	public float                                               DecayHFRatio                                                   => _offDecayHFRatio.GetValue();
	public float                                               ReflectionsGain                                                => _offReflectionsGain.GetValue();
	public float                                               ReflectionsDelay                                               => _offReflectionsDelay.GetValue();
	public float                                               LateGain                                                       => _offLateGain.GetValue();
	public float                                               LateDelay                                                      => _offLateDelay.GetValue();
	public float                                               AirAbsorptionGainHF                                            => _offAirAbsorptionGainHF.GetValue();
	public float                                               WetLevel                                                       => _offWetLevel.GetValue();
	public float                                               DryLevel                                                       => _offDryLevel.GetValue();
	#endregion

	public FSubmixEffectReverbFastSettings(float c_Density, float c_Diffusion, float c_Gain, float c_GainHF, float c_DecayTime, float c_DecayHFRatio, float c_ReflectionsGain, float c_ReflectionsDelay, float c_LateGain, float c_LateDelay, float c_AirAbsorptionGainHF, float c_WetLevel, float c_DryLevel) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDensity.SetValue(c_Density);
		_offDiffusion.SetValue(c_Diffusion);
		_offGain.SetValue(c_Gain);
		_offGainHF.SetValue(c_GainHF);
		_offDecayTime.SetValue(c_DecayTime);
		_offDecayHFRatio.SetValue(c_DecayHFRatio);
		_offReflectionsGain.SetValue(c_ReflectionsGain);
		_offReflectionsDelay.SetValue(c_ReflectionsDelay);
		_offLateGain.SetValue(c_LateGain);
		_offLateDelay.SetValue(c_LateDelay);
		_offAirAbsorptionGainHF.SetValue(c_AirAbsorptionGainHF);
		_offWetLevel.SetValue(c_WetLevel);
		_offDryLevel.SetValue(c_DryLevel);
	}
}
// ScriptStruct AudioMixer.SubmixEffectReverbSettings
// 0x0034
public class FSubmixEffectReverbSettings : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offDensity                                                    = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDiffusion                                                  = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offGain                                                       = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offGainHF                                                     = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDecayTime                                                  = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDecayHFRatio                                               = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offReflectionsGain                                            = new ExternalOffset<float>(0x0018);                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offReflectionsDelay                                           = new ExternalOffset<float>(0x001C);                           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLateGain                                                   = new ExternalOffset<float>(0x0020);                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLateDelay                                                  = new ExternalOffset<float>(0x0024);                           // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offAirAbsorptionGainHF                                        = new ExternalOffset<float>(0x0028);                           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offWetLevel                                                   = new ExternalOffset<float>(0x002C);                           // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDryLevel                                                   = new ExternalOffset<float>(0x0030);                           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               Density                                                        => _offDensity.GetValue();
	public float                                               Diffusion                                                      => _offDiffusion.GetValue();
	public float                                               Gain                                                           => _offGain.GetValue();
	public float                                               GainHF                                                         => _offGainHF.GetValue();
	public float                                               DecayTime                                                      => _offDecayTime.GetValue();
	public float                                               DecayHFRatio                                                   => _offDecayHFRatio.GetValue();
	public float                                               ReflectionsGain                                                => _offReflectionsGain.GetValue();
	public float                                               ReflectionsDelay                                               => _offReflectionsDelay.GetValue();
	public float                                               LateGain                                                       => _offLateGain.GetValue();
	public float                                               LateDelay                                                      => _offLateDelay.GetValue();
	public float                                               AirAbsorptionGainHF                                            => _offAirAbsorptionGainHF.GetValue();
	public float                                               WetLevel                                                       => _offWetLevel.GetValue();
	public float                                               DryLevel                                                       => _offDryLevel.GetValue();
	#endregion

	public FSubmixEffectReverbSettings(float c_Density, float c_Diffusion, float c_Gain, float c_GainHF, float c_DecayTime, float c_DecayHFRatio, float c_ReflectionsGain, float c_ReflectionsDelay, float c_LateGain, float c_LateDelay, float c_AirAbsorptionGainHF, float c_WetLevel, float c_DryLevel) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDensity.SetValue(c_Density);
		_offDiffusion.SetValue(c_Diffusion);
		_offGain.SetValue(c_Gain);
		_offGainHF.SetValue(c_GainHF);
		_offDecayTime.SetValue(c_DecayTime);
		_offDecayHFRatio.SetValue(c_DecayHFRatio);
		_offReflectionsGain.SetValue(c_ReflectionsGain);
		_offReflectionsDelay.SetValue(c_ReflectionsDelay);
		_offLateGain.SetValue(c_LateGain);
		_offLateDelay.SetValue(c_LateDelay);
		_offAirAbsorptionGainHF.SetValue(c_AirAbsorptionGainHF);
		_offWetLevel.SetValue(c_WetLevel);
		_offDryLevel.SetValue(c_DryLevel);
	}
}
// ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
// 0x0028
public class FSubmixEffectDynamicsProcessorSettings : ExternalClass
{
	#region Offsets
	private ExternalOffset<ESubmixEffectDynamicsProcessorType> _offDynamicsProcessorType                                      = new ExternalOffset<ESubmixEffectDynamicsProcessorType>(0x0000, false); // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESubmixEffectDynamicsPeakMode>      _offPeakMode                                                   = new ExternalOffset<ESubmixEffectDynamicsPeakMode>(0x0001, false); // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLookAheadMsec                                              = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offAttackTimeMsec                                             = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offReleaseTimeMsec                                            = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offThresholdDb                                                = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRatio                                                      = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offKneeBandwidthDb                                            = new ExternalOffset<float>(0x0018);                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offInputGainDb                                                = new ExternalOffset<float>(0x001C);                           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offOutputGainDb                                               = new ExternalOffset<float>(0x0020);                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbChannelLinked                                             = new ExternalOffset<char>(0x0024, false);                     // 0x0024(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbAnalogMode                                                = new ExternalOffset<char>(0x0024, false);                     // 0x0024(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ESubmixEffectDynamicsProcessorType                  DynamicsProcessorType                                          => _offDynamicsProcessorType.GetValue();
	public ESubmixEffectDynamicsPeakMode                       PeakMode                                                       => _offPeakMode.GetValue();
	public float                                               LookAheadMsec                                                  => _offLookAheadMsec.GetValue();
	public float                                               AttackTimeMsec                                                 => _offAttackTimeMsec.GetValue();
	public float                                               ReleaseTimeMsec                                                => _offReleaseTimeMsec.GetValue();
	public float                                               ThresholdDb                                                    => _offThresholdDb.GetValue();
	public float                                               Ratio                                                          => _offRatio.GetValue();
	public float                                               KneeBandwidthDb                                                => _offKneeBandwidthDb.GetValue();
	public float                                               InputGainDb                                                    => _offInputGainDb.GetValue();
	public float                                               OutputGainDb                                                   => _offOutputGainDb.GetValue();
	#endregion

	public FSubmixEffectDynamicsProcessorSettings(ESubmixEffectDynamicsProcessorType c_DynamicsProcessorType, ESubmixEffectDynamicsPeakMode c_PeakMode, float c_LookAheadMsec, float c_AttackTimeMsec, float c_ReleaseTimeMsec, float c_ThresholdDb, float c_Ratio, float c_KneeBandwidthDb, float c_InputGainDb, float c_OutputGainDb) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDynamicsProcessorType.SetValue(c_DynamicsProcessorType);
		_offPeakMode.SetValue(c_PeakMode);
		_offLookAheadMsec.SetValue(c_LookAheadMsec);
		_offAttackTimeMsec.SetValue(c_AttackTimeMsec);
		_offReleaseTimeMsec.SetValue(c_ReleaseTimeMsec);
		_offThresholdDb.SetValue(c_ThresholdDb);
		_offRatio.SetValue(c_Ratio);
		_offKneeBandwidthDb.SetValue(c_KneeBandwidthDb);
		_offInputGainDb.SetValue(c_InputGainDb);
		_offOutputGainDb.SetValue(c_OutputGainDb);
	}
}

}