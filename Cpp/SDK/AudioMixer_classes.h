#pragma once

// Name: Sq, Version: b21


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class AudioMixer.SynthComponent
// 0x0440 (FullSize[0x05C0] - InheritedSize[0x0180])
// LastOffsetWithSize(0x018F)
#define PADDING_08EC - 0x0000 // Minimum to subtract -> (0091)
class USynthComponent : public USceneComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0091 PADDING_08EC, class USoundAttenuation*,                                              AttenuationSettings);                                      // 0x0220(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0099 PADDING_08EC, struct FSoundAttenuationSettings,                                      AttenuationOverrides);                                     // 0x0228(0x02E8)  (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0381 PADDING_08EC, class USoundConcurrency*,                                              ConcurrencySettings);                                      // 0x0510(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x03D9 PADDING_08EC, class USoundClass*,                                                    SoundClass);                                               // 0x0568(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x03E1 PADDING_08EC, class USoundEffectSourcePresetChain*,                                  SourceEffectChain);                                        // 0x0570(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x03E9 PADDING_08EC, class USoundSubmix*,                                                   SoundSubmix);                                              // 0x0578(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x03F1 PADDING_08EC, TArray<struct FSoundSubmixSendInfo>,                                   SoundSubmixSends);                                         // 0x0580(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0401 PADDING_08EC, TArray<struct FSoundSourceBusSendInfo>,                                BusSends);                                                 // 0x0590(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0411 PADDING_08EC, struct FSoundModulation,                                               Modulation);                                               // 0x05A0(0x0010)  (Edit, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0421 PADDING_08EC, TArray<struct FSoundSourceBusSendInfo>,                                PreEffectBusSends);                                        // 0x05B0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0431 PADDING_08EC, unsigned char,                                                         bIsUISound);                                               // 0x05C0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0431 PADDING_08EC, unsigned char,                                                         bIsPreviewSound);                                          // 0x05C0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0435 PADDING_08EC, int,                                                                   EnvelopeFollowerAttackTime);                               // 0x05C4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0439 PADDING_08EC, int,                                                                   EnvelopeFollowerReleaseTime);                              // 0x05C8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0441 PADDING_08EC, struct FScriptMulticastDelegate,                                       OnAudioEnvelopeValue);                                     // 0x05D0(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0471 PADDING_08EC, class USynthSound*,                                                    Synth);                                                    // 0x0600(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0479 PADDING_08EC, class UAudioComponent*,                                                AudioComponent);                                           // 0x0608(0x0008)  (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SynthComponent");
		return ptr;
	}


	void Stop();
	void Start();
	void SetVolumeMultiplier(float VolumeMultiplier);
	void SetSubmixSend(class USoundSubmix* Submix, float SendLevel);
	bool IsPlaying();
};

// Class AudioMixer.AudioGenerator
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UAudioGenerator : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.AudioGenerator");
		return ptr;
	}


};

// Class AudioMixer.AudioMixerBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.AudioMixerBlueprintLibrary");
		return ptr;
	}


	static class USoundWave* STATIC_StopRecordingOutput(class UObject* WorldContextObject, EAudioRecordingExportType ExportType, const struct FString& Name, const struct FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);
	static void STATIC_StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);
	static void STATIC_StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
	static void STATIC_StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize);
	static void STATIC_SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex, bool bBypassed);
	static void STATIC_ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	static void STATIC_RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex);
	static void STATIC_RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void STATIC_PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	static void STATIC_GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, TArray<float>* Phases, class USoundSubmix* SubmixToAnalyze);
	static int STATIC_GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
	static void STATIC_GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, TArray<float>* Magnitudes, class USoundSubmix* SubmixToAnalyze);
	static void STATIC_ClearMasterSubmixEffects(class UObject* WorldContextObject);
	static void STATIC_AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry);
	static void STATIC_AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
};

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// 0x0078 (FullSize[0x00B8] - InheritedSize[0x0040])
// LastOffsetWithSize(0x0028)
#define PADDING_08EF - 0x0000 // Minimum to subtract -> (0068)
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0068 PADDING_08EF, struct FSubmixEffectDynamicsProcessorSettings,                         Settings);                                                 // 0x0090(0x0028)  (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectDynamicsProcessorPreset");
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& InSettings);
};

// Class AudioMixer.SubmixEffectSubmixEQPreset
// 0x0048 (FullSize[0x0088] - InheritedSize[0x0040])
// LastOffsetWithSize(0x0028)
#define PADDING_08F0 - 0x0000 // Minimum to subtract -> (0050)
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_08F0, struct FSubmixEffectSubmixEQSettings,                                  Settings);                                                 // 0x0078(0x0010)  (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectSubmixEQPreset");
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings);
};

// Class AudioMixer.SubmixEffectReverbPreset
// 0x0090 (FullSize[0x00D0] - InheritedSize[0x0040])
// LastOffsetWithSize(0x0028)
#define PADDING_08F1 - 0x0000 // Minimum to subtract -> (0074)
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0074 PADDING_08F1, struct FSubmixEffectReverbSettings,                                    Settings);                                                 // 0x009C(0x0034)  (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectReverbPreset");
		return ptr;
	}


	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
	void SetSettings(const struct FSubmixEffectReverbSettings& InSettings);
};

// Class AudioMixer.SubmixEffectReverbFastPreset
// 0x0090 (FullSize[0x00D0] - InheritedSize[0x0040])
// LastOffsetWithSize(0x0028)
#define PADDING_08F2 - 0x0000 // Minimum to subtract -> (0074)
class USubmixEffectReverbFastPreset : public USoundEffectSubmixPreset
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0074 PADDING_08F2, struct FSubmixEffectReverbFastSettings,                                Settings);                                                 // 0x009C(0x0034)  (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectReverbFastPreset");
		return ptr;
	}


	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
	void SetSettings(const struct FSubmixEffectReverbFastSettings& InSettings);
};

// Class AudioMixer.SynthSound
// 0x0058 (FullSize[0x0318] - InheritedSize[0x02C0])
// LastOffsetWithSize(0x01A8)
#define PADDING_08F3 - 0x0000 // Minimum to subtract -> (0168)
class USynthSound : public USoundWaveProcedural
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0168 PADDING_08F3, class USynthComponent*,                                                OwningSynthComponent);                                     // 0x0310(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SynthSound");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
