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

// Class MovieScene.MovieSceneSignedObject
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_08D8 - 0x0000 // Minimum to subtract -> (0000)
class UMovieSceneSignedObject : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_08D8, struct FGuid,                                                          Signature);                                                // 0x0028(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSignedObject");
		return ptr;
	}


};

// Class MovieScene.MovieSceneSection
// 0x0093 (FullSize[0x00CB] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_08D9 - 0x0000 // Minimum to subtract -> (0018)
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0018 PADDING_08D9, struct FMovieSceneSectionEvalOptions,                                  EvalOptions);                                              // 0x0050(0x0002)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_08D9, struct FMovieSceneEasingSettings,                                      Easing);                                                   // 0x0058(0x0038)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_08D9, struct FMovieSceneFrameRange,                                          SectionRange);                                             // 0x0090(0x0010)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0068 PADDING_08D9, struct FFrameNumber,                                                   PreRollFrames);                                            // 0x00A0(0x0004)  (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x006C PADDING_08D9, struct FFrameNumber,                                                   PostRollFrames);                                           // 0x00A4(0x0004)  (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0070 PADDING_08D9, int,                                                                   RowIndex);                                                 // 0x00A8(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0074 PADDING_08D9, int,                                                                   OverlapPriority);                                          // 0x00AC(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0078 PADDING_08D9, unsigned char,                                                         bIsActive);                                                // 0x00B0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0078 PADDING_08D9, unsigned char,                                                         bIsLocked);                                                // 0x00B0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x007C PADDING_08D9, float,                                                                 StartTime);                                                // 0x00B4(0x0004)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0080 PADDING_08D9, float,                                                                 EndTime);                                                  // 0x00B8(0x0004)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0084 PADDING_08D9, float,                                                                 PrerollTime);                                              // 0x00BC(0x0004)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0088 PADDING_08D9, float,                                                                 PostrollTime);                                             // 0x00C0(0x0004)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x008C PADDING_08D9, unsigned char,                                                         bIsInfinite);                                              // 0x00C4(0x0001) BIT_FIELD (Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0090 PADDING_08D9, bool,                                                                  bSupportsInfiniteRange);                                   // 0x00C8(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0091 PADDING_08D9, struct FOptionalMovieSceneBlendType,                                   BlendType);                                                // 0x00C9(0x0002)  (NoDestructor, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSection");
		return ptr;
	}


	void SetRowIndex(int NewRowIndex);
	void SetPreRollFrames(int InPreRollFrames);
	void SetPostRollFrames(int InPostRollFrames);
	void SetOverlapPriority(int NewPriority);
	void SetIsLocked(bool bInIsLocked);
	void SetIsActive(bool bInIsActive);
	bool IsLocked();
	bool IsActive();
	int GetRowIndex();
	int GetPreRollFrames();
	int GetPostRollFrames();
	int GetOverlapPriority();
};

// Class MovieScene.MovieSceneTrack
// 0x001C (FullSize[0x0054] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_08DA - 0x0000 // Minimum to subtract -> (0018)
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0018 PADDING_08DA, struct FMovieSceneTrackEvalOptions,                                    EvalOptions);                                              // 0x0050(0x0004)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneTrack");
		return ptr;
	}


};

// Class MovieScene.MovieSceneNameableTrack
// 0x0004 (FullSize[0x0058] - InheritedSize[0x0054])
// LastOffsetWithSize(0x0054)
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneNameableTrack");
		return ptr;
	}


};

// Class MovieScene.MovieSceneSequence
// 0x030A (FullSize[0x0342] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_08DC - 0x0000 // Minimum to subtract -> (0018)
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0018 PADDING_08DC, struct FMovieSceneEvaluationTemplate,                                  PrecompiledEvaluationTemplate);                            // 0x0050(0x02F0)  (ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0308 PADDING_08DC, EMovieSceneCompletionMode,                                             DefaultCompletionMode);                                    // 0x0340(0x0001)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0309 PADDING_08DC, bool,                                                                  bParentContextsAreSignificant);                            // 0x0341(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSequence");
		return ptr;
	}


};

// Class MovieScene.MovieSceneSequencePlayer
// 0x07B0 (FullSize[0x07D8] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_08DD - 0x0000 // Minimum to subtract -> (0390)
class UMovieSceneSequencePlayer : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0390 PADDING_08DD, struct FScriptMulticastDelegate,                                       OnPlay);                                                   // 0x03B8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x03A0 PADDING_08DD, struct FScriptMulticastDelegate,                                       OnPlayReverse);                                            // 0x03C8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x03B0 PADDING_08DD, struct FScriptMulticastDelegate,                                       OnStop);                                                   // 0x03D8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x03C0 PADDING_08DD, struct FScriptMulticastDelegate,                                       OnPause);                                                  // 0x03E8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x03D0 PADDING_08DD, struct FScriptMulticastDelegate,                                       OnFinished);                                               // 0x03F8(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x03E0 PADDING_08DD, TEnumAsByte<EMovieScenePlayerStatus>,                                  Status);                                                   // 0x0408(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x03E4 PADDING_08DD, unsigned char,                                                         bReversePlayback);                                         // 0x040C(0x0001) BIT_FIELD (Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x03E8 PADDING_08DD, class UMovieSceneSequence*,                                            Sequence);                                                 // 0x0410(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x03F0 PADDING_08DD, struct FFrameNumber,                                                   StartTime);                                                // 0x0418(0x0004)  (Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x03F4 PADDING_08DD, int,                                                                   DurationFrames);                                           // 0x041C(0x0004)  (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x03F8 PADDING_08DD, int,                                                                   CurrentNumLoops);                                          // 0x0420(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0410 PADDING_08DD, struct FMovieSceneSequencePlaybackSettings,                            PlaybackSettings);                                         // 0x0438(0x0014)  (Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0428 PADDING_08DD, struct FMovieSceneRootEvaluationTemplateInstance,                      RootTemplateInstance);                                     // 0x0450(0x0300)  (Transient, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0790 PADDING_08DD, struct FMovieSceneSequenceReplProperties,                              NetSyncProps);                                             // 0x07B8(0x0010)  (Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x07A0 PADDING_08DD, TScriptInterface<class UMovieScenePlaybackClient>,                     PlaybackClient);                                           // 0x07C8(0x0010)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSequencePlayer");
		return ptr;
	}


	void StopAtCurrentTime();
	void Stop();
	void SetTimeRange(float StartTime, float Duration);
	void SetPlayRate(float PlayRate);
	void SetPlaybackRange(float NewStartTime, float NewEndTime);
	void SetPlaybackPosition(float NewPlaybackPosition);
	void SetFrameRate(const struct FFrameRate& FrameRate);
	void SetFrameRange(int StartFrame, int Duration);
	void SetDisableCameraCuts(bool bInDisableCameraCuts);
	void ScrubToSeconds(float TimeInSeconds);
	bool ScrubToMarkedFrame(const struct FString& InLabel);
	void ScrubToFrame(const struct FFrameTime& NewPosition);
	void Scrub();
	void RPC_OnStopEvent(const struct FFrameTime& StoppedTime);
	void RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, const struct FFrameTime& RelevantTime);
	void PlayToSeconds(float TimeInSeconds);
	bool PlayToMarkedFrame(const struct FString& InLabel);
	void PlayToFrame(const struct FFrameTime& NewPosition);
	void PlayReverse();
	void PlayLooping(int NumLoops);
	void Play();
	void Pause();
	void JumpToSeconds(float TimeInSeconds);
	void JumpToPosition(float NewPlaybackPosition);
	bool JumpToMarkedFrame(const struct FString& InLabel);
	void JumpToFrame(const struct FFrameTime& NewPosition);
	bool IsReversed();
	bool IsPlaying();
	bool IsPaused();
	void GoToEndAndStop();
	struct FQualifiedFrameTime GetStartTime();
	float GetPlayRate();
	float GetPlaybackStart();
	float GetPlaybackPosition();
	float GetPlaybackEnd();
	TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(class UObject* InObject);
	float GetLength();
	struct FFrameRate GetFrameRate();
	int GetFrameDuration();
	struct FQualifiedFrameTime GetEndTime();
	struct FQualifiedFrameTime GetDuration();
	bool GetDisableCameraCuts();
	struct FQualifiedFrameTime GetCurrentTime();
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	void ChangePlaybackDirection();
};

// Class MovieScene.MovieScenePlaybackClient
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UMovieScenePlaybackClient : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieScenePlaybackClient");
		return ptr;
	}


};

// Class MovieScene.MovieScene
// 0x00A8 (FullSize[0x00E0] - InheritedSize[0x0038])
// LastOffsetWithSize(0x0038)
#define PADDING_08DF - 0x0000 // Minimum to subtract -> (0018)
class UMovieScene : public UMovieSceneSignedObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0018 PADDING_08DF, TArray<struct FMovieSceneSpawnable>,                                   Spawnables);                                               // 0x0050(0x0010)  (ZeroConstructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0028 PADDING_08DF, TArray<struct FMovieScenePossessable>,                                 Possessables);                                             // 0x0060(0x0010)  (ZeroConstructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0038 PADDING_08DF, TArray<struct FMovieSceneBinding>,                                     ObjectBindings);                                           // 0x0070(0x0010)  (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0048 PADDING_08DF, TArray<class UMovieSceneTrack*>,                                       MasterTracks);                                             // 0x0080(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0058 PADDING_08DF, class UMovieSceneTrack*,                                               CameraCutTrack);                                           // 0x0090(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0060 PADDING_08DF, struct FMovieSceneFrameRange,                                          SelectionRange);                                           // 0x0098(0x0010)  (NoDestructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0070 PADDING_08DF, struct FMovieSceneFrameRange,                                          PlaybackRange);                                            // 0x00A8(0x0010)  (NoDestructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0080 PADDING_08DF, struct FFrameRate,                                                     TickResolution);                                           // 0x00B8(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0088 PADDING_08DF, struct FFrameRate,                                                     DisplayRate);                                              // 0x00C0(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0090 PADDING_08DF, EMovieSceneEvaluationType,                                             EvaluationType);                                           // 0x00C8(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0091 PADDING_08DF, EUpdateClockSource,                                                    ClockSource);                                              // 0x00C9(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0098 PADDING_08DF, TArray<struct FMovieSceneMarkedFrame>,                                 MarkedFrames);                                             // 0x00D0(0x0010)  (ZeroConstructor, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieScene");
		return ptr;
	}


};

// Class MovieScene.MovieSceneBindingOverrides
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_08E0 - 0x0000 // Minimum to subtract -> (0000)
class UMovieSceneBindingOverrides : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_08E0, TArray<struct FMovieSceneBindingOverrideData>,                         BindingData);                                              // 0x0028(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOverrides");
		return ptr;
	}


};

// Class MovieScene.MovieSceneBindingOwnerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UMovieSceneBindingOwnerInterface : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOwnerInterface");
		return ptr;
	}


};

// Class MovieScene.MovieSceneBuiltInEasingFunction
// 0x0009 (FullSize[0x0031] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_08E2 - 0x0000 // Minimum to subtract -> (0008)
class UMovieSceneBuiltInEasingFunction : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_08E2, EMovieSceneBuiltInEasing,                                              Type);                                                     // 0x0030(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBuiltInEasingFunction");
		return ptr;
	}


};

// Class MovieScene.MovieSceneEasingExternalCurve
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_08E3 - 0x0000 // Minimum to subtract -> (0008)
class UMovieSceneEasingExternalCurve : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_08E3, class UCurveFloat*,                                                    Curve);                                                    // 0x0030(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneEasingExternalCurve");
		return ptr;
	}


};

// Class MovieScene.MovieSceneEasingFunction
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UMovieSceneEasingFunction : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneEasingFunction");
		return ptr;
	}


	float OnEvaluate(float Interp);
};

// Class MovieScene.MovieSceneFolder
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_08E5 - 0x0000 // Minimum to subtract -> (0000)
class UMovieSceneFolder : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_08E5, struct FName,                                                          FolderName);                                               // 0x0028(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0008 PADDING_08E5, TArray<class UMovieSceneFolder*>,                                      ChildFolders);                                             // 0x0030(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0018 PADDING_08E5, TArray<class UMovieSceneTrack*>,                                       ChildMasterTracks);                                        // 0x0040(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0028 PADDING_08E5, TArray<struct FString>,                                                ChildObjectBindingStrings);                                // 0x0050(0x0010)  (ZeroConstructor, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneFolder");
		return ptr;
	}


};

// Class MovieScene.MovieSceneKeyProxy
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UMovieSceneKeyProxy : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneKeyProxy");
		return ptr;
	}


};

// Class MovieScene.MovieSceneSubSection
// 0x0085 (FullSize[0x0150] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_08E7 - 0x0000 // Minimum to subtract -> (0015)
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_08E7, struct FMovieSceneSectionParameters,                                   Parameters);                                               // 0x00E0(0x0018)  (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x002D PADDING_08E7, float,                                                                 StartOffset);                                              // 0x00F8(0x0004)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0031 PADDING_08E7, float,                                                                 TimeScale);                                                // 0x00FC(0x0004)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0035 PADDING_08E7, float,                                                                 PrerollTime);                                              // 0x0100(0x0004)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x003D PADDING_08E7, class UMovieSceneSequence*,                                            SubSequence);                                              // 0x0108(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0045 PADDING_08E7, TLazyObjectPtr<class AActor>,                                          ActorToRecord);                                            // 0x0110(0x001C)  (Edit, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0065 PADDING_08E7, struct FString,                                                        TargetSequenceName);                                       // 0x0130(0x0010)  (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0075 PADDING_08E7, struct FDirectoryPath,                                                 TargetPathToRecordTo);                                     // 0x0140(0x0010)  (Edit, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSubSection");
		return ptr;
	}


	void SetSequence(class UMovieSceneSequence* Sequence);
	class UMovieSceneSequence* GetSequence();
};

// Class MovieScene.MovieSceneSubTrack
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
// LastOffsetWithSize(0x0054)
#define PADDING_08E8 - 0x0000 // Minimum to subtract -> (0004)
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_08E8, TArray<class UMovieSceneSection*>,                                     Sections);                                                 // 0x0058(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSubTrack");
		return ptr;
	}


};

// Class MovieScene.TestMovieSceneTrack
// 0x001C (FullSize[0x0070] - InheritedSize[0x0054])
// LastOffsetWithSize(0x0054)
#define PADDING_08E9 - 0x0000 // Minimum to subtract -> (0004)
class UTestMovieSceneTrack : public UMovieSceneTrack
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_08E9, bool,                                                                  bHighPassFilter);                                          // 0x0058(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_08E9, TArray<class UMovieSceneSection*>,                                     SectionArray);                                             // 0x0060(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.TestMovieSceneTrack");
		return ptr;
	}


};

// Class MovieScene.TestMovieSceneSection
// 0x0015 (FullSize[0x00E0] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
class UTestMovieSceneSection : public UMovieSceneSection
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSection");
		return ptr;
	}


};

// Class MovieScene.TestMovieSceneSequence
// 0x000E (FullSize[0x0350] - InheritedSize[0x0342])
// LastOffsetWithSize(0x0342)
#define PADDING_08EB - 0x0000 // Minimum to subtract -> (0006)
class UTestMovieSceneSequence : public UMovieSceneSequence
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0006 PADDING_08EB, class UMovieScene*,                                                    MovieScene);                                               // 0x0348(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSequence");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
