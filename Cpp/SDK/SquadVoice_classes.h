#pragma once

// Name: S, Version: b


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

// Class SquadVoice.SquadVoiceTalkerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USquadVoiceTalkerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SquadVoice.SquadVoiceTalkerInterface");
		return ptr;
	}



};

// Class SquadVoice.SquadVoiceOutput
// 0x0188 (FullSize[0x0448] - InheritedSize[0x02C0])
class USquadVoiceOutput : public USoundWave
{
public:
	unsigned char                                      UnknownData_7DEK[0x188];                                   // 0x02C0(0x0188) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SquadVoice.SquadVoiceOutput");
		return ptr;
	}



};

// Class SquadVoice.SquadVoiceChannel
// 0x0088 (FullSize[0x0108] - InheritedSize[0x0080])
class USquadVoiceChannel : public UVoiceChannel
{
public:
	unsigned char                                      UnknownData_LW99[0x88];                                    // 0x0080(0x0088) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SquadVoice.SquadVoiceChannel");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
