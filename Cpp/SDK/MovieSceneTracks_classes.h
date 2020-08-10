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

// Class MovieSceneTracks.MovieSceneTransformOrigin
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UMovieSceneTransformOrigin : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneTransformOrigin");
		return ptr;
	}


	struct FTransform BP_GetTransformOrigin();
};

// Class MovieSceneTracks.MovieScene3DConstraintSection
// 0x003D (FullSize[0x0108] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_0905 - 0x0000 // Minimum to subtract -> (0015)
class UMovieScene3DConstraintSection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_0905, struct FGuid,                                                          ConstraintId);                                             // 0x00E0(0x0010)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0025 PADDING_0905, struct FMovieSceneObjectBindingID,                                     ConstraintBindingID);                                      // 0x00F0(0x0018)  (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintSection");
		return ptr;
	}


	void SetConstraintBindingID(const struct FMovieSceneObjectBindingID& InConstraintBindingID);
	struct FMovieSceneObjectBindingID GetConstraintBindingID();
};

// Class MovieSceneTracks.MovieScene3DAttachSection
// 0x0016 (FullSize[0x011E] - InheritedSize[0x0108])
// LastOffsetWithSize(0x0108)
#define PADDING_0906 - 0x0000 // Minimum to subtract -> (0000)
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0906, struct FName,                                                          AttachSocketName);                                         // 0x0108(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0906, struct FName,                                                          AttachComponentName);                                      // 0x0110(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0906, EAttachmentRule,                                                       AttachmentLocationRule);                                   // 0x0118(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0011 PADDING_0906, EAttachmentRule,                                                       AttachmentRotationRule);                                   // 0x0119(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0012 PADDING_0906, EAttachmentRule,                                                       AttachmentScaleRule);                                      // 0x011A(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0013 PADDING_0906, EDetachmentRule,                                                       DetachmentLocationRule);                                   // 0x011B(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0906, EDetachmentRule,                                                       DetachmentRotationRule);                                   // 0x011C(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0015 PADDING_0906, EDetachmentRule,                                                       DetachmentScaleRule);                                      // 0x011D(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachSection");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
// 0x0014 (FullSize[0x0068] - InheritedSize[0x0054])
// LastOffsetWithSize(0x0054)
#define PADDING_0907 - 0x0000 // Minimum to subtract -> (0004)
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_0907, TArray<class UMovieSceneSection*>,                                     ConstraintSections);                                       // 0x0058(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieScene3DAttachTrack
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
// LastOffsetWithSize(0x0068)
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieScene3DPathSection
// 0x00A5 (FullSize[0x01AD] - InheritedSize[0x0108])
// LastOffsetWithSize(0x0108)
#define PADDING_0909 - 0x0000 // Minimum to subtract -> (0000)
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0909, struct FMovieSceneFloatChannel,                                        TimingCurve);                                              // 0x0108(0x00A0)  (NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0909, EMovieScene3DPathSection_Axis,                                         FrontAxisEnum);                                            // 0x01A8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A1 PADDING_0909, EMovieScene3DPathSection_Axis,                                         UpAxisEnum);                                               // 0x01A9(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A4 PADDING_0909, unsigned char,                                                         bFollow);                                                  // 0x01AC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A4 PADDING_0909, unsigned char,                                                         bReverse);                                                 // 0x01AC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A4 PADDING_0909, unsigned char,                                                         bForceUpright);                                            // 0x01AC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathSection");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieScene3DPathTrack
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
// LastOffsetWithSize(0x0068)
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieScene3DTransformSection
// 0x0662 (FullSize[0x072D] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_090B - 0x0000 // Minimum to subtract -> (0015)
class UMovieScene3DTransformSection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_090B, struct FMovieSceneTransformMask,                                       TransformMask);                                            // 0x00E0(0x0004)  (NoDestructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x001D PADDING_090B, struct FMovieSceneFloatChannel,                                        Translation[0x3]);                                         // 0x00E8(0x00A0)  (NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x01FD PADDING_090B, struct FMovieSceneFloatChannel,                                        Rotation[0x3]);                                            // 0x02C8(0x00A0)  (NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x03DD PADDING_090B, struct FMovieSceneFloatChannel,                                        Scale[0x3]);                                               // 0x04A8(0x00A0)  (NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x05BD PADDING_090B, struct FMovieSceneFloatChannel,                                        ManualWeight);                                             // 0x0688(0x00A0)  (NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0661 PADDING_090B, bool,                                                                  bUseQuaternionInterpolation);                              // 0x072C(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformSection");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieScenePropertyTrack
// 0x0030 (FullSize[0x0088] - InheritedSize[0x0058])
// LastOffsetWithSize(0x0054)
#define PADDING_090C - 0x0000 // Minimum to subtract -> (0004)
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_090C, class UMovieSceneSection*,                                             SectionToKey);                                             // 0x0058(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x000C PADDING_090C, struct FName,                                                          PropertyName);                                             // 0x0060(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0014 PADDING_090C, struct FString,                                                        PropertyPath);                                             // 0x0068(0x0010)  (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0024 PADDING_090C, TArray<class UMovieSceneSection*>,                                     Sections);                                                 // 0x0078(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePropertyTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieScene3DTransformTrack
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
// LastOffsetWithSize(0x0088)
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneActorReferenceSection
// 0x0145 (FullSize[0x0210] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_090E - 0x0000 // Minimum to subtract -> (0015)
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_090E, struct FMovieSceneActorReferenceData,                                  ActorReferenceData);                                       // 0x00E0(0x00A0)  (NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x00B5 PADDING_090E, struct FIntegralCurve,                                                 ActorGuidIndexCurve);                                      // 0x0180(0x0080)  (Deprecated, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0135 PADDING_090E, TArray<struct FString>,                                                ActorGuidStrings);                                         // 0x0200(0x0010)  (ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneActorReferenceSection");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
// LastOffsetWithSize(0x0088)
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneActorReferenceTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneAudioSection
// 0x01B5 (FullSize[0x0280] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_0910 - 0x0000 // Minimum to subtract -> (0015)
class UMovieSceneAudioSection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_0910, class USoundBase*,                                                     Sound);                                                    // 0x00E0(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x001D PADDING_0910, struct FFrameNumber,                                                   StartFrameOffset);                                         // 0x00E8(0x0004)  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0021 PADDING_0910, float,                                                                 StartOffset);                                              // 0x00EC(0x0004)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0025 PADDING_0910, float,                                                                 AudioStartTime);                                           // 0x00F0(0x0004)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0029 PADDING_0910, float,                                                                 AudioDilationFactor);                                      // 0x00F4(0x0004)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x002D PADDING_0910, float,                                                                 AudioVolume);                                              // 0x00F8(0x0004)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0035 PADDING_0910, struct FMovieSceneFloatChannel,                                        SoundVolume);                                              // 0x0100(0x00A0)  (NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x00D5 PADDING_0910, struct FMovieSceneFloatChannel,                                        PitchMultiplier);                                          // 0x01A0(0x00A0)  (NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0175 PADDING_0910, bool,                                                                  bSuppressSubtitles);                                       // 0x0240(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0176 PADDING_0910, bool,                                                                  bOverrideAttenuation);                                     // 0x0241(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x017D PADDING_0910, class USoundAttenuation*,                                              AttenuationSettings);                                      // 0x0248(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0185 PADDING_0910, struct FScriptDelegate,                                                OnQueueSubtitles);                                         // 0x0250(0x0010)  (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0195 PADDING_0910, struct FScriptMulticastDelegate,                                       OnAudioFinished);                                          // 0x0260(0x0010)  (ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x01A5 PADDING_0910, struct FScriptMulticastDelegate,                                       OnAudioPlaybackPercent);                                   // 0x0270(0x0010)  (ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioSection");
		return ptr;
	}


	void SetStartOffset(const struct FFrameNumber& InStartOffset);
	void SetSound(class USoundBase* InSound);
	struct FFrameNumber GetStartOffset();
	class USoundBase* GetSound();
};

// Class MovieSceneTracks.MovieSceneAudioTrack
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
// LastOffsetWithSize(0x0054)
#define PADDING_0911 - 0x0000 // Minimum to subtract -> (0004)
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_0911, TArray<class UMovieSceneSection*>,                                     AudioSections);                                            // 0x0058(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneBoolSection
// 0x00AD (FullSize[0x0178] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_0912 - 0x0000 // Minimum to subtract -> (0015)
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_0912, bool,                                                                  DefaultValue);                                             // 0x00E0(0x0001)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001D PADDING_0912, struct FMovieSceneBoolChannel,                                         BoolCurve);                                                // 0x00E8(0x0090)  (Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneBoolSection");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneBoolTrack
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
// LastOffsetWithSize(0x0088)
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneBoolTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneByteSection
// 0x00AD (FullSize[0x0178] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_0914 - 0x0000 // Minimum to subtract -> (0015)
class UMovieSceneByteSection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_0914, struct FMovieSceneByteChannel,                                         ByteCurve);                                                // 0x00E0(0x0098)  (NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneByteSection");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneByteTrack
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
// LastOffsetWithSize(0x0088)
#define PADDING_0915 - 0x0000 // Minimum to subtract -> (0000)
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0915, class UEnum*,                                                          Enum);                                                     // 0x0088(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneByteTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneCameraAnimSection
// 0x004E (FullSize[0x0119] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_0916 - 0x0000 // Minimum to subtract -> (0015)
class UMovieSceneCameraAnimSection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_0916, struct FMovieSceneCameraAnimSectionData,                               AnimData);                                                 // 0x00E0(0x0020)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0035 PADDING_0916, class UCameraAnim*,                                                    CameraAnim);                                               // 0x0100(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x003D PADDING_0916, float,                                                                 PlayRate);                                                 // 0x0108(0x0004)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0041 PADDING_0916, float,                                                                 PlayScale);                                                // 0x010C(0x0004)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0045 PADDING_0916, float,                                                                 BlendInTime);                                              // 0x0110(0x0004)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0049 PADDING_0916, float,                                                                 blendOutTime);                                             // 0x0114(0x0004)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x004D PADDING_0916, bool,                                                                  bLooping);                                                 // 0x0118(0x0001)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraAnimSection");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
// LastOffsetWithSize(0x0054)
#define PADDING_0917 - 0x0000 // Minimum to subtract -> (0004)
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_0917, TArray<class UMovieSceneSection*>,                                     CameraAnimSections);                                       // 0x0058(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraAnimTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneCameraCutSection
// 0x003D (FullSize[0x0108] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_0918 - 0x0000 // Minimum to subtract -> (0015)
class UMovieSceneCameraCutSection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_0918, struct FGuid,                                                          CameraGuid);                                               // 0x00E0(0x0010)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0025 PADDING_0918, struct FMovieSceneObjectBindingID,                                     CameraBindingID);                                          // 0x00F0(0x0018)  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraCutSection");
		return ptr;
	}


	void SetCameraBindingID(const struct FMovieSceneObjectBindingID& InCameraBindingID);
	struct FMovieSceneObjectBindingID GetCameraBindingID();
};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
// LastOffsetWithSize(0x0054)
#define PADDING_0919 - 0x0000 // Minimum to subtract -> (0004)
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_0919, TArray<class UMovieSceneSection*>,                                     Sections);                                                 // 0x0058(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraCutTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneCameraShakeSection
// 0x0051 (FullSize[0x011C] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_091A - 0x0000 // Minimum to subtract -> (0015)
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_091A, struct FMovieSceneCameraShakeSectionData,                              ShakeData);                                                // 0x00E0(0x0020)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0035 PADDING_091A, class UClass*,                                                         ShakeClass);                                               // 0x0100(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003D PADDING_091A, float,                                                                 PlayScale);                                                // 0x0108(0x0004)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0041 PADDING_091A, TEnumAsByte<ECameraAnimPlaySpace>,                                     PlaySpace);                                                // 0x010C(0x0001)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0045 PADDING_091A, struct FRotator,                                                       UserDefinedPlaySpace);                                     // 0x0110(0x000C)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeSection");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
// LastOffsetWithSize(0x0054)
#define PADDING_091B - 0x0000 // Minimum to subtract -> (0004)
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_091B, TArray<class UMovieSceneSection*>,                                     CameraShakeSections);                                      // 0x0058(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneCinematicShotSection
// 0x0028 (FullSize[0x0178] - InheritedSize[0x0150])
// LastOffsetWithSize(0x0150)
#define PADDING_091C - 0x0000 // Minimum to subtract -> (0000)
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_091C, struct FString,                                                        ShotDisplayName);                                          // 0x0150(0x0010)  (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0010 PADDING_091C, struct FText,                                                          DisplayName);                                              // 0x0160(0x0018)  (Deprecated, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCinematicShotSection");
		return ptr;
	}


	void SetShotDisplayName(const struct FString& InShotDisplayName);
	struct FString GetShotDisplayName();
};

// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
// LastOffsetWithSize(0x0068)
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCinematicShotTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneColorSection
// 0x0295 (FullSize[0x0360] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_091E - 0x0000 // Minimum to subtract -> (0015)
class UMovieSceneColorSection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_091E, struct FMovieSceneFloatChannel,                                        RedCurve);                                                 // 0x00E0(0x00A0)  (NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x00B5 PADDING_091E, struct FMovieSceneFloatChannel,                                        GreenCurve);                                               // 0x0180(0x00A0)  (NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0155 PADDING_091E, struct FMovieSceneFloatChannel,                                        BlueCurve);                                                // 0x0220(0x00A0)  (NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x01F5 PADDING_091E, struct FMovieSceneFloatChannel,                                        AlphaCurve);                                               // 0x02C0(0x00A0)  (NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneColorSection");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneColorTrack
// 0x0001 (FullSize[0x0089] - InheritedSize[0x0088])
// LastOffsetWithSize(0x0088)
#define PADDING_091F - 0x0000 // Minimum to subtract -> (0000)
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_091F, bool,                                                                  bIsSlateColor);                                            // 0x0088(0x0001)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneColorTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneEnumSection
// 0x00AD (FullSize[0x0178] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_0920 - 0x0000 // Minimum to subtract -> (0015)
class UMovieSceneEnumSection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_0920, struct FMovieSceneByteChannel,                                         EnumCurve);                                                // 0x00E0(0x0098)  (NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEnumSection");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneEnumTrack
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
// LastOffsetWithSize(0x0088)
#define PADDING_0921 - 0x0000 // Minimum to subtract -> (0000)
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0921, class UEnum*,                                                          Enum);                                                     // 0x0088(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEnumTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneEulerTransformTrack
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
// LastOffsetWithSize(0x0088)
class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEulerTransformTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneEventSectionBase
// 0x0015 (FullSize[0x00E0] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
class UMovieSceneEventSectionBase : public UMovieSceneSection
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventSectionBase");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneEventRepeaterSection
// 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
// LastOffsetWithSize(0x00CB)
#define PADDING_0924 - 0x0000 // Minimum to subtract -> (0015)
class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_0924, struct FMovieSceneEvent,                                               Event);                                                    // 0x00E0(0x0008)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventRepeaterSection");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneEventSection
// 0x0115 (FullSize[0x01E0] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_0925 - 0x0000 // Minimum to subtract -> (0015)
class UMovieSceneEventSection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_0925, struct FNameCurve,                                                     Events);                                                   // 0x00E0(0x0078)  (Deprecated, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x008D PADDING_0925, struct FMovieSceneEventSectionData,                                    EventData);                                                // 0x0158(0x0088)  (NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventSection");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneEventTrack
// 0x0028 (FullSize[0x0080] - InheritedSize[0x0058])
// LastOffsetWithSize(0x0054)
#define PADDING_0926 - 0x0000 // Minimum to subtract -> (0004)
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_0926, unsigned char,                                                         bFireEventsWhenForwards);                                  // 0x0058(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0004 PADDING_0926, unsigned char,                                                         bFireEventsWhenBackwards);                                 // 0x0058(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0926, EFireEventsAtPosition,                                                 EventPosition);                                            // 0x005C(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_0926, TArray<struct FMovieSceneObjectBindingID>,                             EventReceivers);                                           // 0x0060(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_0926, TArray<class UMovieSceneSection*>,                                     Sections);                                                 // 0x0070(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneEventTriggerSection
// 0x0088 (FullSize[0x0168] - InheritedSize[0x00E0])
// LastOffsetWithSize(0x00CB)
#define PADDING_0927 - 0x0000 // Minimum to subtract -> (0015)
class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_0927, struct FMovieSceneEventChannel,                                        EventChannel);                                             // 0x00E0(0x0088)  (NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventTriggerSection");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneFloatSection
// 0x00B5 (FullSize[0x0180] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_0928 - 0x0000 // Minimum to subtract -> (0015)
class UMovieSceneFloatSection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_0928, struct FMovieSceneFloatChannel,                                        FloatCurve);                                               // 0x00E0(0x00A0)  (Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatSection");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneFadeSection
// 0x0011 (FullSize[0x0191] - InheritedSize[0x0180])
// LastOffsetWithSize(0x0180)
#define PADDING_0929 - 0x0000 // Minimum to subtract -> (0000)
class UMovieSceneFadeSection : public UMovieSceneFloatSection
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0929, struct FLinearColor,                                                   FadeColor);                                                // 0x0180(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0929, unsigned char,                                                         bFadeAudio);                                               // 0x0190(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeSection");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneFloatTrack
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
// LastOffsetWithSize(0x0088)
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneFadeTrack
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
// LastOffsetWithSize(0x0088)
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneIntegerSection
// 0x00A5 (FullSize[0x0170] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_092C - 0x0000 // Minimum to subtract -> (0015)
class UMovieSceneIntegerSection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_092C, struct FMovieSceneIntegerChannel,                                      IntegerCurve);                                             // 0x00E0(0x0090)  (NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneIntegerSection");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneIntegerTrack
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
// LastOffsetWithSize(0x0088)
class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneIntegerTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// 0x002D (FullSize[0x00F8] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_092E - 0x0000 // Minimum to subtract -> (0015)
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_092E, ELevelVisibility,                                                      Visibility);                                               // 0x00E0(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x001D PADDING_092E, TArray<struct FName>,                                                  LevelNames);                                               // 0x00E8(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneLevelVisibilitySection");
		return ptr;
	}


	void SetVisibility(ELevelVisibility InVisibility);
	void SetLevelNames(TArray<struct FName> InLevelNames);
	ELevelVisibility GetVisibility();
	TArray<struct FName> GetLevelNames();
};

// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
// LastOffsetWithSize(0x0054)
#define PADDING_092F - 0x0000 // Minimum to subtract -> (0004)
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_092F, TArray<class UMovieSceneSection*>,                                     Sections);                                                 // 0x0058(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneLevelVisibilityTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneMaterialTrack
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
// LastOffsetWithSize(0x0054)
#define PADDING_0930 - 0x0000 // Minimum to subtract -> (0004)
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_0930, TArray<class UMovieSceneSection*>,                                     Sections);                                                 // 0x0058(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneMaterialTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
// LastOffsetWithSize(0x0068)
#define PADDING_0931 - 0x0000 // Minimum to subtract -> (0000)
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0931, class UMaterialParameterCollection*,                                   MPC);                                                      // 0x0068(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// 0x0004 (FullSize[0x006C] - InheritedSize[0x0068])
// LastOffsetWithSize(0x0068)
#define PADDING_0932 - 0x0000 // Minimum to subtract -> (0000)
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0932, int,                                                                   MaterialIndex);                                            // 0x0068(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneComponentMaterialTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneObjectPropertySection
// 0x00D5 (FullSize[0x01A0] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_0933 - 0x0000 // Minimum to subtract -> (0015)
class UMovieSceneObjectPropertySection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_0933, struct FMovieSceneObjectPathChannel,                                   ObjectChannel);                                            // 0x00E0(0x00C0)  (NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneObjectPropertySection");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
// LastOffsetWithSize(0x0088)
#define PADDING_0934 - 0x0000 // Minimum to subtract -> (0000)
class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0934, class UClass*,                                                         PropertyClass);                                            // 0x0088(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneObjectPropertyTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneParameterSection
// 0x0045 (FullSize[0x0110] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_0935 - 0x0000 // Minimum to subtract -> (0015)
class UMovieSceneParameterSection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_0935, TArray<struct FScalarParameterNameAndCurve>,                           ScalarParameterNamesAndCurves);                            // 0x00E0(0x0010)  (ZeroConstructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0025 PADDING_0935, TArray<struct FVectorParameterNameAndCurves>,                          VectorParameterNamesAndCurves);                            // 0x00F0(0x0010)  (ZeroConstructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0035 PADDING_0935, TArray<struct FColorParameterNameAndCurves>,                           ColorParameterNamesAndCurves);                             // 0x0100(0x0010)  (ZeroConstructor, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParameterSection");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
// LastOffsetWithSize(0x0054)
#define PADDING_0936 - 0x0000 // Minimum to subtract -> (0004)
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_0936, TArray<class UMovieSceneSection*>,                                     Sections);                                                 // 0x0058(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleParameterTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneParticleSection
// 0x00AD (FullSize[0x0178] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_0937 - 0x0000 // Minimum to subtract -> (0015)
class UMovieSceneParticleSection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_0937, struct FMovieSceneParticleChannel,                                     ParticleKeys);                                             // 0x00E0(0x0098)  (NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleSection");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneParticleTrack
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
// LastOffsetWithSize(0x0054)
#define PADDING_0938 - 0x0000 // Minimum to subtract -> (0004)
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_0938, TArray<class UMovieSceneSection*>,                                     ParticleSections);                                         // 0x0058(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
// 0x00D5 (FullSize[0x01A0] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_0939 - 0x0000 // Minimum to subtract -> (0015)
class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_0939, struct FMovieSceneObjectPathChannel,                                   MaterialChannel);                                          // 0x00E0(0x00C0)  (NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePrimitiveMaterialSection");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// 0x0004 (FullSize[0x008C] - InheritedSize[0x0088])
// LastOffsetWithSize(0x0088)
#define PADDING_093A - 0x0000 // Minimum to subtract -> (0000)
class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_093A, int,                                                                   MaterialIndex);                                            // 0x0088(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// 0x010D (FullSize[0x01D8] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_093B - 0x0000 // Minimum to subtract -> (0015)
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_093B, struct FMovieSceneSkeletalAnimationParams,                             Params);                                                   // 0x00E0(0x00D0)  (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00E5 PADDING_093B, class UAnimSequence*,                                                  AnimSequence);                                             // 0x01B0(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x00ED PADDING_093B, class UAnimSequenceBase*,                                              Animation);                                                // 0x01B8(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x00F5 PADDING_093B, float,                                                                 StartOffset);                                              // 0x01C0(0x0004)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x00F9 PADDING_093B, float,                                                                 EndOffset);                                                // 0x01C4(0x0004)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x00FD PADDING_093B, float,                                                                 PlayRate);                                                 // 0x01C8(0x0004)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0101 PADDING_093B, unsigned char,                                                         bReverse);                                                 // 0x01CC(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0105 PADDING_093B, struct FName,                                                          SlotName);                                                 // 0x01D0(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationSection");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// 0x0011 (FullSize[0x0069] - InheritedSize[0x0058])
// LastOffsetWithSize(0x0054)
#define PADDING_093C - 0x0000 // Minimum to subtract -> (0004)
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_093C, TArray<class UMovieSceneSection*>,                                     AnimationSections);                                        // 0x0058(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0014 PADDING_093C, bool,                                                                  bUseLegacySectionIndexBlend);                              // 0x0068(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneSlomoSection
// 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
// LastOffsetWithSize(0x0180)
class UMovieSceneSlomoSection : public UMovieSceneFloatSection
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoSection");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneSlomoTrack
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
// LastOffsetWithSize(0x0088)
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneSpawnSection
// 0x0000 (FullSize[0x0178] - InheritedSize[0x0178])
// LastOffsetWithSize(0x0178)
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSpawnSection");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneSpawnTrack
// 0x0024 (FullSize[0x0078] - InheritedSize[0x0054])
// LastOffsetWithSize(0x0054)
#define PADDING_0940 - 0x0000 // Minimum to subtract -> (0004)
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_0940, TArray<class UMovieSceneSection*>,                                     Sections);                                                 // 0x0058(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0940, struct FGuid,                                                          ObjectGuid);                                               // 0x0068(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSpawnTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneStringSection
// 0x00B5 (FullSize[0x0180] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_0941 - 0x0000 // Minimum to subtract -> (0015)
class UMovieSceneStringSection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_0941, struct FMovieSceneStringChannel,                                       StringCurve);                                              // 0x00E0(0x00A0)  (NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneStringSection");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneStringTrack
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
// LastOffsetWithSize(0x0088)
class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneStringTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneTransformTrack
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
// LastOffsetWithSize(0x0088)
class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneTransformTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneVectorSection
// 0x0299 (FullSize[0x0364] - InheritedSize[0x00CB])
// LastOffsetWithSize(0x00CB)
#define PADDING_0944 - 0x0000 // Minimum to subtract -> (0015)
class UMovieSceneVectorSection : public UMovieSceneSection
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0015 PADDING_0944, struct FMovieSceneFloatChannel,                                        Curves[0x4]);                                              // 0x00E0(0x00A0)  (NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0295 PADDING_0944, int,                                                                   ChannelsUsed);                                             // 0x0360(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorSection");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneVectorTrack
// 0x0004 (FullSize[0x008C] - InheritedSize[0x0088])
// LastOffsetWithSize(0x0088)
#define PADDING_0945 - 0x0000 // Minimum to subtract -> (0000)
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0945, int,                                                                   NumChannelsUsed);                                          // 0x0088(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorTrack");
		return ptr;
	}


};

// Class MovieSceneTracks.MovieSceneVisibilityTrack
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
// LastOffsetWithSize(0x0088)
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVisibilityTrack");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
