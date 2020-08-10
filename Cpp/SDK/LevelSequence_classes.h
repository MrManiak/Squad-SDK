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

// Class LevelSequence.DefaultLevelSequenceInstanceData
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_015B - 0x0000 // Minimum to subtract -> (0008)
class UDefaultLevelSequenceInstanceData : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_015B, class AActor*,                                                         TransformOriginActor);                                     // 0x0030(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_015B, struct FTransform,                                                     TransformOrigin);                                          // 0x0040(0x0030)  (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.DefaultLevelSequenceInstanceData");
		return ptr;
	}


};

// Class LevelSequence.LevelSequenceMetaData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class ULevelSequenceMetaData : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceMetaData");
		return ptr;
	}


};

// Class LevelSequence.LevelSequence
// 0x0156 (FullSize[0x0498] - InheritedSize[0x0342])
// LastOffsetWithSize(0x0342)
#define PADDING_0163 - 0x0000 // Minimum to subtract -> (0006)
class ULevelSequence : public UMovieSceneSequence
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0006 PADDING_0163, class UMovieScene*,                                                    MovieScene);                                               // 0x0348(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000E PADDING_0163, struct FLevelSequenceObjectReferenceMap,                               ObjectReferences);                                         // 0x0350(0x0050)  (Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x005E PADDING_0163, struct FLevelSequenceBindingReferences,                                BindingReferences);                                        // 0x03A0(0x00A0)  (Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00FE PADDING_0163, TMap<struct FString COMMA struct FLevelSequenceObject>,                PossessedObjects);                                         // 0x0440(0x0050)  (ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x014E PADDING_0163, class UClass*,                                                         DirectorClass);                                            // 0x0490(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequence");
		return ptr;
	}


	void RemoveMetaDataByClass(class UClass* InClass);
	class UObject* FindOrAddMetaDataByClass(class UClass* InClass);
	class UObject* FindMetaDataByClass(class UClass* InClass);
	class UObject* CopyMetaData(class UObject* InMetaData);
};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class ULevelSequenceBurnInInitSettings : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInInitSettings");
		return ptr;
	}


};

// Class LevelSequence.LevelSequenceBurnInOptions
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0167 - 0x0000 // Minimum to subtract -> (0000)
class ULevelSequenceBurnInOptions : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0167, bool,                                                                  bUseBurnIn);                                               // 0x0028(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0167, struct FSoftClassPath,                                                 BurnInClass);                                              // 0x0030(0x0018)  (Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0167, class ULevelSequenceBurnInInitSettings*,                               Settings);                                                 // 0x0048(0x0008)  (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInOptions");
		return ptr;
	}


	void SetBurnIn(const struct FSoftClassPath& InBurnInClass);
};

// Class LevelSequence.LevelSequenceActor
// 0x0091 (FullSize[0x02C9] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_016B - 0x0000 // Minimum to subtract -> (0020)
class ALevelSequenceActor : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0020 PADDING_016B, struct FMovieSceneSequencePlaybackSettings,                            PlaybackSettings);                                         // 0x0258(0x0014)  (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_016B, class ULevelSequencePlayer*,                                           SequencePlayer);                                           // 0x0270(0x0008)  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_016B, struct FSoftObjectPath,                                                LevelSequence);                                            // 0x0278(0x0018)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_016B, TArray<class AActor*>,                                                 AdditionalEventReceivers);                                 // 0x0290(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0068 PADDING_016B, class ULevelSequenceBurnInOptions*,                                    BurnInOptions);                                            // 0x02A0(0x0008)  (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0070 PADDING_016B, class UMovieSceneBindingOverrides*,                                    BindingOverrides);                                         // 0x02A8(0x0008)  (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0078 PADDING_016B, unsigned char,                                                         bAutoPlay);                                                // 0x02B0(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0078 PADDING_016B, unsigned char,                                                         bOverrideInstanceData);                                    // 0x02B0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0078 PADDING_016B, unsigned char,                                                         bReplicatePlayback);                                       // 0x02B0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0080 PADDING_016B, class UObject*,                                                        DefaultInstanceData);                                      // 0x02B8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0088 PADDING_016B, class ULevelSequenceBurnIn*,                                           BurnInInstance);                                           // 0x02C0(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0090 PADDING_016B, bool,                                                                  bShowBurnin);                                              // 0x02C8(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceActor");
		return ptr;
	}


	void ShowBurnin();
	void SetSequence(class ULevelSequence* InSequence);
	void SetReplicatePlayback(bool ReplicatePlayback);
	void SetEventReceivers(TArray<class AActor*> AdditionalReceivers);
	void SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset);
	void ResetBindings();
	void ResetBinding(const struct FMovieSceneObjectBindingID& Binding);
	void RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor);
	void OnLevelSequenceLoaded__DelegateSignature();
	class ULevelSequence* LoadSequence();
	void HideBurnin();
	class ULevelSequencePlayer* GetSequencePlayer();
	class ULevelSequence* GetSequence();
	void AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
};

// Class LevelSequence.LevelSequenceBurnIn
// 0x0110 (FullSize[0x02F0] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_016D - 0x0000 // Minimum to subtract -> (0050)
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_016D, struct FLevelSequencePlayerSnapshot,                                   FrameInformation);                                         // 0x0230(0x00B8)  (BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0108 PADDING_016D, class ALevelSequenceActor*,                                            LevelSequenceActor);                                       // 0x02E8(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnIn");
		return ptr;
	}


	void SetSettings(class UObject* InSettings);
	class UClass* GetSettingsClass();
};

// Class LevelSequence.LevelSequenceDirector
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0170 - 0x0000 // Minimum to subtract -> (0000)
class ULevelSequenceDirector : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0170, class ULevelSequencePlayer*,                                           Player);                                                   // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceDirector");
		return ptr;
	}


	void OnCreated();
};

// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// 0x0007 (FullSize[0x00D8] - InheritedSize[0x00D1])
// LastOffsetWithSize(0x00D1)
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LegacyLevelSequenceDirectorBlueprint");
		return ptr;
	}


};

// Class LevelSequence.LevelSequencePlayer
// 0x0050 (FullSize[0x0828] - InheritedSize[0x07D8])
// LastOffsetWithSize(0x07D8)
#define PADDING_0175 - 0x0000 // Minimum to subtract -> (0040)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0040 PADDING_0175, struct FScriptMulticastDelegate,                                       OnCameraCut);                                              // 0x0818(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequencePlayer");
		return ptr;
	}


	class UCameraComponent* GetActiveCameraComponent();
	static class ULevelSequencePlayer* STATIC_CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
