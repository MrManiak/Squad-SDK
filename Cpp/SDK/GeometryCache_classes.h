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

// Class GeometryCache.GeometryCache
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_03FA - 0x0000 // Minimum to subtract -> (0008)
class UGeometryCache : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_03FA, TArray<class UMaterialInterface*>,                                     Materials);                                                // 0x0030(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_03FA, TArray<class UGeometryCacheTrack*>,                                    Tracks);                                                   // 0x0040(0x0010)  (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_03FA, int,                                                                   StartFrame);                                               // 0x0060(0x0004)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x003C PADDING_03FA, int,                                                                   EndFrame);                                                 // 0x0064(0x0004)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCache");
		return ptr;
	}


};

// Class GeometryCache.GeometryCacheActor
// 0x0018 (FullSize[0x0250] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_03FB - 0x0000 // Minimum to subtract -> (0010)
class AGeometryCacheActor : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_03FB, class UGeometryCacheComponent*,                                        GeometryCacheComponent);                                   // 0x0248(0x0008)  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheActor");
		return ptr;
	}


	class UGeometryCacheComponent* GetGeometryCacheComponent();
};

// Class GeometryCache.GeometryCacheCodecBase
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_03FF - 0x0000 // Minimum to subtract -> (0000)
class UGeometryCacheCodecBase : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_03FF, TArray<int>,                                                           TopologyRanges);                                           // 0x0028(0x0010)  (Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheCodecBase");
		return ptr;
	}


};

// Class GeometryCache.GeometryCacheCodecRaw
// 0x0004 (FullSize[0x003C] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_0400 - 0x0000 // Minimum to subtract -> (0000)
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0400, int,                                                                   DummyProperty);                                            // 0x0038(0x0004)  (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheCodecRaw");
		return ptr;
	}


};

// Class GeometryCache.GeometryCacheCodecV1
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheCodecV1");
		return ptr;
	}


};

// Class GeometryCache.GeometryCacheComponent
// 0x0058 (FullSize[0x0481] - InheritedSize[0x0429])
// LastOffsetWithSize(0x0429)
#define PADDING_0402 - 0x0000 // Minimum to subtract -> (0007)
class UGeometryCacheComponent : public UMeshComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0402, class UGeometryCache*,                                                 GeometryCache);                                            // 0x0430(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000F PADDING_0402, bool,                                                                  bRunning);                                                 // 0x0438(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0402, bool,                                                                  bLooping);                                                 // 0x0439(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0013 PADDING_0402, float,                                                                 StartTimeOffset);                                          // 0x043C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0017 PADDING_0402, float,                                                                 PlaybackSpeed);                                            // 0x0440(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x001B PADDING_0402, int,                                                                   NumTracks);                                                // 0x0444(0x0004)  (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x001F PADDING_0402, float,                                                                 ElapsedTime);                                              // 0x0448(0x0004)  (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0053 PADDING_0402, float,                                                                 Duration);                                                 // 0x047C(0x0004)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0057 PADDING_0402, bool,                                                                  bManualTick);                                              // 0x0480(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheComponent");
		return ptr;
	}


	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
	void Stop();
	void SetStartTimeOffset(float NewStartTimeOffset);
	void SetPlaybackSpeed(float NewPlaybackSpeed);
	void SetLooping(bool bNewLooping);
	bool SetGeometryCache(class UGeometryCache* NewGeomCache);
	void PlayReversedFromEnd();
	void PlayReversed();
	void PlayFromStart();
	void Play();
	void Pause();
	bool IsPlayingReversed();
	bool IsPlaying();
	bool IsLooping();
	float GetStartTimeOffset();
	float GetPlaybackSpeed();
	float GetPlaybackDirection();
	int GetNumberOfFrames();
	float GetDuration();
	float GetAnimationTime();
};

// Class GeometryCache.GeometryCacheTrack
// 0x0004 (FullSize[0x002C] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0404 - 0x0000 // Minimum to subtract -> (0000)
class UGeometryCacheTrack : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0404, float,                                                                 Duration);                                                 // 0x0028(0x0004)  (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrack");
		return ptr;
	}


};

// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// 0x0030 (FullSize[0x005C] - InheritedSize[0x002C])
// LastOffsetWithSize(0x002C)
#define PADDING_0405 - 0x0000 // Minimum to subtract -> (002C)
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x002C PADDING_0405, uint32_t,                                                              NumMeshSamples);                                           // 0x0058(0x0004)  (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_FlipbookAnimation");
		return ptr;
	}


	void AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime);
};

// Class GeometryCache.GeometryCacheTrackStreamable
// 0x0160 (FullSize[0x018C] - InheritedSize[0x002C])
// LastOffsetWithSize(0x002C)
#define PADDING_0407 - 0x0000 // Minimum to subtract -> (002C)
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x002C PADDING_0407, class UGeometryCacheCodecBase*,                                        Codec);                                                    // 0x0058(0x0008)  (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x015C PADDING_0407, float,                                                                 StartSampleTime);                                          // 0x0188(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrackStreamable");
		return ptr;
	}


};

// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// 0x002C (FullSize[0x0058] - InheritedSize[0x002C])
// LastOffsetWithSize(0x002C)
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_TransformAnimation");
		return ptr;
	}


	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
};

// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// 0x002C (FullSize[0x0058] - InheritedSize[0x002C])
// LastOffsetWithSize(0x002C)
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation");
		return ptr;
	}


	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
