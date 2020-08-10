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

// Class GeometryCacheTracks.MovieSceneGeometryCacheSection
// 0x004D (FullSize[0x0118] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_0090 - 0x0000 // Minimum to subtract -> (0015)
class UMovieSceneGeometryCacheSection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_0090, struct FMovieSceneGeometryCacheParams,                                 Params);                                                   // 0x00E0(0x0038)  (Edit, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCacheTracks.MovieSceneGeometryCacheSection");
		return ptr;
	}


};

// Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
// LastOffsetWithSize(0x0054)
#define PADDING_0091 - 0x0000 // Minimum to subtract -> (0004)
class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_0091, TArray<class UMovieSceneSection*>,                                     AnimationSections);                                        // 0x0058(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCacheTracks.MovieSceneGeometryCacheTrack");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
