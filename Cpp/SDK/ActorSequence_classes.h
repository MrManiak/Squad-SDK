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

// Class ActorSequence.ActorSequence
// 0x002E (FullSize[0x0370] - InheritedSize[0x0342])
// LastOffsetWithSize(0x0342)
#define PADDING_0269 - 0x0000 // Minimum to subtract -> (0006)
class UActorSequence : public UMovieSceneSequence
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0006 PADDING_0269, class UMovieScene*,                                                    MovieScene);                                               // 0x0348(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x000E PADDING_0269, struct FActorSequenceObjectReferenceMap,                               ObjectReferences);                                         // 0x0350(0x0020)  (NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActorSequence.ActorSequence");
		return ptr;
	}


};

// Class ActorSequence.ActorSequenceComponent
// 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
#define PADDING_026A - 0x0000 // Minimum to subtract -> (0010)
class UActorSequenceComponent : public UActorComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_026A, struct FMovieSceneSequencePlaybackSettings,                            PlaybackSettings);                                         // 0x00D8(0x0014)  (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0028 PADDING_026A, class UActorSequence*,                                                 Sequence);                                                 // 0x00F0(0x0008)  (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0030 PADDING_026A, class UActorSequencePlayer*,                                           SequencePlayer);                                           // 0x00F8(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActorSequence.ActorSequenceComponent");
		return ptr;
	}


};

// Class ActorSequence.ActorSequencePlayer
// 0x0040 (FullSize[0x0818] - InheritedSize[0x07D8])
// LastOffsetWithSize(0x07D8)
class UActorSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActorSequence.ActorSequencePlayer");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
