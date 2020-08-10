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

// Class AudioMixer.SynthComponent
// 0x0440 (0x05C0 - 0x0180)
public class USynthComponent : USceneComponent
{
	#region Offsets
	private ExternalOffset<USoundAttenuation>                 _offAttenuationSettings                                        = new ExternalOffset<USoundAttenuation>(0x0220, true);         // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSoundAttenuationSettings>         _offAttenuationOverrides                                       = new ExternalOffset<FSoundAttenuationSettings>(0x0228, false); // 0x0228(0x02E8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundConcurrency>                 _offConcurrencySettings                                        = new ExternalOffset<USoundConcurrency>(0x0510, true);         // 0x0510(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundClass>                       _offSoundClass                                                 = new ExternalOffset<USoundClass>(0x0568, true);               // 0x0568(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundEffectSourcePresetChain>     _offSourceEffectChain                                          = new ExternalOffset<USoundEffectSourcePresetChain>(0x0570, true); // 0x0570(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USoundSubmix>                      _offSoundSubmix                                                = new ExternalOffset<USoundSubmix>(0x0578, true);              // 0x0578(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FSoundSubmixSendInfo>>      _offSoundSubmixSends                                           = new ExternalOffset<TArray<FSoundSubmixSendInfo>>(0x0580, false); // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FSoundSourceBusSendInfo>>   _offBusSends                                                   = new ExternalOffset<TArray<FSoundSourceBusSendInfo>>(0x0590, false); // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSoundModulation>                  _offModulation                                                 = new ExternalOffset<FSoundModulation>(0x05A0, false);         // 0x05A0(0x0010) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FSoundSourceBusSendInfo>>   _offPreEffectBusSends                                          = new ExternalOffset<TArray<FSoundSourceBusSendInfo>>(0x05B0, false); // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbIsUISound                                                 = new ExternalOffset<char>(0x05C0, false);                     // 0x05C0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbIsPreviewSound                                            = new ExternalOffset<char>(0x05C0, false);                     // 0x05C0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offEnvelopeFollowerAttackTime                                 = new ExternalOffset<int>(0x05C4);                             // 0x05C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offEnvelopeFollowerReleaseTime                                = new ExternalOffset<int>(0x05C8);                             // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnAudioEnvelopeValue                                       = new ExternalOffset<FScriptMulticastDelegate>(0x05D0, false); // 0x05D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<USynthSound>                       _offSynth                                                      = new ExternalOffset<USynthSound>(0x0600, true);               // 0x0600(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UAudioComponent>                   _offAudioComponent                                             = new ExternalOffset<UAudioComponent>(0x0608, true);           // 0x0608(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public USoundAttenuation                                  AttenuationSettings                                            => _offAttenuationSettings.GetValue();
	public FSoundAttenuationSettings                          AttenuationOverrides                                           => _offAttenuationOverrides.GetValue();
	public USoundConcurrency                                  ConcurrencySettings                                            => _offConcurrencySettings.GetValue();
	public USoundClass                                        SoundClass                                                     => _offSoundClass.GetValue();
	public USoundEffectSourcePresetChain                      SourceEffectChain                                              => _offSourceEffectChain.GetValue();
	public USoundSubmix                                       SoundSubmix                                                    => _offSoundSubmix.GetValue();
	public TArray<FSoundSubmixSendInfo>                       SoundSubmixSends                                               => _offSoundSubmixSends.GetValue();
	public TArray<FSoundSourceBusSendInfo>                    BusSends                                                       => _offBusSends.GetValue();
	public FSoundModulation                                   Modulation                                                     => _offModulation.GetValue();
	public TArray<FSoundSourceBusSendInfo>                    PreEffectBusSends                                              => _offPreEffectBusSends.GetValue();
	public int                                                EnvelopeFollowerAttackTime                                     => _offEnvelopeFollowerAttackTime.GetValue();
	public int                                                EnvelopeFollowerReleaseTime                                    => _offEnvelopeFollowerReleaseTime.GetValue();
	public FScriptMulticastDelegate                           OnAudioEnvelopeValue                                           => _offOnAudioEnvelopeValue.GetValue();
	public USynthSound                                        Synth                                                          => _offSynth.GetValue();
	public UAudioComponent                                    AudioComponent                                                 => _offAudioComponent.GetValue();
	#endregion


}

// Class AudioMixer.AudioGenerator
// 0x0000 (0x0028 - 0x0028)
public class UAudioGenerator : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AudioMixer.AudioMixerBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
public class UAudioMixerBlueprintLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// 0x0078 (0x00B8 - 0x0040)
public class USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset
{
	#region Offsets
	private ExternalOffset<FSubmixEffectDynamicsProcessorSettings> _offSettings                                                   = new ExternalOffset<FSubmixEffectDynamicsProcessorSettings>(0x0090, false); // 0x0090(0x0028) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSubmixEffectDynamicsProcessorSettings             Settings                                                       => _offSettings.GetValue();
	#endregion


}

// Class AudioMixer.SubmixEffectSubmixEQPreset
// 0x0048 (0x0088 - 0x0040)
public class USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset
{
	#region Offsets
	private ExternalOffset<FSubmixEffectSubmixEQSettings>     _offSettings                                                   = new ExternalOffset<FSubmixEffectSubmixEQSettings>(0x0078, false); // 0x0078(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSubmixEffectSubmixEQSettings                      Settings                                                       => _offSettings.GetValue();
	#endregion


}

// Class AudioMixer.SubmixEffectReverbPreset
// 0x0090 (0x00D0 - 0x0040)
public class USubmixEffectReverbPreset : USoundEffectSubmixPreset
{
	#region Offsets
	private ExternalOffset<FSubmixEffectReverbSettings>       _offSettings                                                   = new ExternalOffset<FSubmixEffectReverbSettings>(0x009C, false); // 0x009C(0x0034) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSubmixEffectReverbSettings                        Settings                                                       => _offSettings.GetValue();
	#endregion


}

// Class AudioMixer.SubmixEffectReverbFastPreset
// 0x0090 (0x00D0 - 0x0040)
public class USubmixEffectReverbFastPreset : USoundEffectSubmixPreset
{
	#region Offsets
	private ExternalOffset<FSubmixEffectReverbFastSettings>   _offSettings                                                   = new ExternalOffset<FSubmixEffectReverbFastSettings>(0x009C, false); // 0x009C(0x0034) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSubmixEffectReverbFastSettings                    Settings                                                       => _offSettings.GetValue();
	#endregion


}

// Class AudioMixer.SynthSound
// 0x0058 (0x0318 - 0x02C0)
public class USynthSound : USoundWaveProcedural
{
	#region Offsets
	private ExternalOffset<USynthComponent>                   _offOwningSynthComponent                                       = new ExternalOffset<USynthComponent>(0x0310, true);           // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public USynthComponent                                    OwningSynthComponent                                           => _offOwningSynthComponent.GetValue();
	#endregion


}


}