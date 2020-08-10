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

// Class MediaCompositing.MovieSceneMediaSection
// 0x0045 (FullSize[0x0110] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_013F - 0x0000 // Minimum to subtract -> (0015)
class UMovieSceneMediaSection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_013F, class UMediaSource*,                                                   MediaSource);                                              // 0x00E0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001D PADDING_013F, bool,                                                                  bLooping);                                                 // 0x00E8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0021 PADDING_013F, struct FFrameNumber,                                                   StartFrameOffset);                                         // 0x00EC(0x0004)  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0025 PADDING_013F, class UMediaTexture*,                                                  MediaTexture);                                             // 0x00F0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x002D PADDING_013F, class UMediaSoundComponent*,                                           MediaSoundComponent);                                      // 0x00F8(0x0008)  (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0035 PADDING_013F, bool,                                                                  bUseExternalMediaPlayer);                                  // 0x0100(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003D PADDING_013F, class UMediaPlayer*,                                                   ExternalMediaPlayer);                                      // 0x0108(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaCompositing.MovieSceneMediaSection");
		return ptr;
	}


};

// Class MediaCompositing.MovieSceneMediaTrack
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
// LastOffsetWithSize(0x0054)
#define PADDING_0140 - 0x0000 // Minimum to subtract -> (0004)
class UMovieSceneMediaTrack : public UMovieSceneNameableTrack
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_0140, TArray<class UMovieSceneSection*>,                                     MediaSections);                                            // 0x0058(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaCompositing.MovieSceneMediaTrack");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
