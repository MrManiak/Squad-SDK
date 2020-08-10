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

// Class SquadVoice.SquadVoiceTalkerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class USquadVoiceTalkerInterface : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SquadVoice.SquadVoiceTalkerInterface");
		return ptr;
	}


};

// Class SquadVoice.SquadVoiceOutput
// 0x0118 (FullSize[0x02C0] - InheritedSize[0x01A8])
// LastOffsetWithSize(0x01A8)
class USquadVoiceOutput : public USoundWave
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SquadVoice.SquadVoiceOutput");
		return ptr;
	}


};

// Class SquadVoice.SquadVoiceChannel
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
// LastOffsetWithSize(0x0030)
class USquadVoiceChannel : public UVoiceChannel
{
public:
	//union
	//{
	//};

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
